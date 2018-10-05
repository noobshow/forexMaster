/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Parser.h"
#include "Session.h"
#include "Values.h"
#include <algorithm>
#include <iostream>

namespace FIX
{
Session::Sessions Session::s_sessions;
Session::SessionIDs Session::s_sessionIDs;
Session::Sessions Session::s_registered;
Mutex Session::s_mutex;

#define LOGEX( method ) try { method; } catch( std::exception& e ) \
  { m_state.onEvent( e.what() ); }

COLDSECTION Session::Session( Application& application,
                  MessageStoreFactory& messageStoreFactory,
                  const SessionID& sessionID,
                  const DataDictionaryProvider& dataDictionaryProvider,
                  const TimeRange& sessionTime,
                  int heartBtInt, LogFactory* pLogFactory )
: m_application( application ),
  m_sessionID( sessionID ),
  m_sessionTime( sessionTime ),
  m_logonTime( sessionTime ),
  m_senderDefaultApplVerID(ApplVerID_FIX50),
  m_targetDefaultApplVerID(ApplVerID_FIX50),
  m_sendRedundantResendRequests( false ),
  m_checkCompId( true ),
  m_checkLatency( true ), 
  m_maxLatency( 120 ),
  m_resetOnLogon( false ),
  m_resetOnLogout( false ), 
  m_resetOnDisconnect( false ),
  m_refreshOnLogon( false ),
  m_timestampPrecision( 3 ),
  m_persistMessages( true ),
  m_validateLengthAndChecksum( true ),
  m_fractionAllowed( ( sessionID.getBeginString() == BeginString_FIXT11 )
                     || ( sessionID.getBeginString() >= BeginString_FIX42 ) ),
  m_pollSpin( 0 ),
  m_dataDictionaryProvider( dataDictionaryProvider ),
  m_sessionDD(dataDictionaryProvider.getSessionDataDictionary(sessionID.getBeginString())),
  m_defaultApplicationDD( NULL ),
  m_messageStoreFactory( messageStoreFactory ),
  m_pLogFactory( pLogFactory ),
  m_pResponder( 0 ),
  m_rcvAllocator( Message::create_allocator( ItemAllocatorTraits::DefaultCapacity << 3 ) )
{
  m_state.heartBtInt( heartBtInt );
  m_state.initiate( heartBtInt != 0 );
  m_state.store( m_messageStoreFactory.create( m_sessionID ) );
  if ( m_pLogFactory )
    m_state.log( m_pLogFactory->create( m_sessionID ) );

  if( !checkSessionTime(UtcTimeStamp()) )
    reset();

  addSession( *this );
  m_application.onCreate( m_sessionID );
  m_state.onEvent( "Created session" );
}

Session::~Session()
{
  removeSession( *this );
  m_messageStoreFactory.destroy( m_state.store() );
  if ( m_pLogFactory && m_state.log() )
    m_pLogFactory->destroy( m_state.log() );
}

void Session::fill( Header& header, UtcTimeStamp now )
{
  m_state.lastSentTime( now );
  Message::Sequence::set_in_ordered(header, m_sessionID.getBeginString() );
  Message::Sequence::set_in_ordered(header, m_sessionID.getSenderCompID() );
  Message::Sequence::set_in_ordered(header, m_sessionID.getTargetCompID() );
  Message::Sequence::set_in_ordered(header, MsgSeqNum::Pack( getExpectedSenderNum() ) );
  insertSendingTime( header, now );
}

DataDictionary::MsgInfo::Admin::Trait HEAVYUSE HOTSECTION Session::fill( Header& header, int num, UtcTimeStamp now )
{
  DataDictionary::MsgInfo::Admin::Trait trait = DataDictionary::MsgInfo::Admin::trait_none;
  FieldMap::iterator it = header.begin();

  m_state.lastSentTime( now );
  if( it->first == FIX::FIELD::BeginString )
    (FieldBase&)it->second = m_sessionID.getBeginString();
  else
    it = Message::Sequence::push_front_to_ordered( header, m_sessionID.getBeginString() );
  ++it;

  if ( it->first == FIX::FIELD::BodyLength )
    ++it;
  if ( it->first == FIX::FIELD::MsgType )
    trait = DataDictionary::MsgInfo::msgAdminTrait( it->second );

  Message::Sequence::set_in_ordered(header, m_sessionID.getSenderCompID() );
  Message::Sequence::set_in_ordered(header, m_sessionID.getTargetCompID() );
  Message::Sequence::set_in_ordered(header, MsgSeqNum::Pack( num ? num : getExpectedSenderNum() ) );
  insertSendingTime( header, now );

  return trait;
}

void HEAVYUSE HOTSECTION Session::next( const UtcTimeStamp& timeStamp )
{
  try
  {
    if ( checkSessionTime(timeStamp) )
    {
      if( !isEnabled() || !isLogonTime(timeStamp) )
      {
        if( isLoggedOn() )
        {
          if( !m_state.sentLogout() )
          {
            m_state.onEvent( "Initiated logout request" );
            generateLogout( m_state.logoutReason() );
          }
        }
        else
          return;
      }
  
      if ( !m_state.receivedLogon() )
      {
        if ( m_state.shouldSendLogon() && isLogonTime(timeStamp) )
        {
          generateLogon();
          m_state.onEvent( "Initiated logon request" );
        }
        else if ( m_state.alreadySentLogon() && m_state.logonTimedOut() )
        {
          m_state.onEvent( "Timed out waiting for logon response" );
          disconnect();
        }
        return ;
      }
  
      if ( m_state.heartBtIntValue() == 0 ) return ;
  
      if ( m_state.logoutTimedOut(timeStamp) )
      {
        m_state.onEvent( "Timed out waiting for logout response" );
        disconnect();
      }
  
      if ( m_state.withinHeartBeat(timeStamp) ) return ;
  
      if ( m_state.timedOut(timeStamp) )
      {
        m_state.onEvent( "Timed out waiting for heartbeat" );
        disconnect();
      }
      else
      {
        if ( m_state.needTestRequest() )
        {
          generateTestRequest( "TEST" );
          m_state.testRequest( m_state.testRequest() + 1 );
          m_state.onEvent( "Sent test request TEST" );
        }
        else if ( m_state.needHeartbeat() )
        {
          generateHeartbeat();
        }
      }
    }
    else
    { reset(); return; }
  }
  catch ( FIX::IOException& e )
  {
    m_state.onEvent( e.what() );
    disconnect();
  }
}

void Session::nextLogon( const Message& logon, const UtcTimeStamp& timeStamp )
{
  SenderCompID senderCompID;
  TargetCompID targetCompID;
  logon.getHeader().getField( senderCompID );
  logon.getHeader().getField( targetCompID );

  if( m_refreshOnLogon )
    refresh();

  if( !isEnabled() )
  {
    m_state.onEvent( "Session is not enabled for logon" );
    disconnect();
    return;
  }

  if( !isLogonTime(timeStamp) )
  {
    m_state.onEvent( "Received logon outside of valid logon time" );
    disconnect();
    return;
  }

  ResetSeqNumFlag resetSeqNumFlag(false);
  logon.getFieldIfSet(resetSeqNumFlag);
  m_state.receivedReset( resetSeqNumFlag );

  if( m_state.receivedReset() )
  {
    m_state.onEvent( "Logon contains ResetSeqNumFlag=Y, reseting sequence numbers to 1" );
    if( !m_state.sentReset() ) m_state.reset();
  }

  if( m_state.shouldSendLogon() && !m_state.receivedReset() )
  {
    m_state.onEvent( "Received logon response before sending request" );
    disconnect();
    return;
  }

  if( !m_state.initiate() && m_resetOnLogon )
    m_state.reset();

  if( !verify( logon, DataDictionary::MsgInfo::Admin::Logon, false, true ) )
    return;
  m_state.receivedLogon( true );

  if ( !m_state.initiate() 
       || (m_state.receivedReset() && !m_state.sentReset()) )
  {
    logon.getFieldIfSet(m_state.heartBtInt());
    m_state.onEvent( "Received logon request" );
    generateLogon( logon );
    m_state.onEvent( "Responding to logon request" );
  }
  else
    m_state.onEvent( "Received logon response" );

  m_state.sentReset( false );
  m_state.receivedReset( false );

  MsgSeqNum msgSeqNum;
  logon.getHeader().getField( msgSeqNum );
  if ( isTargetTooHigh( msgSeqNum ) && !resetSeqNumFlag )
  {
    doTargetTooHigh( logon );
  }
  else
  {
    m_state.incrNextTargetMsgSeqNum();
    nextQueued( timeStamp );
  }

  if ( isLoggedOn() )
    m_application.onLogon( m_sessionID );
}

void Session::nextHeartbeat( const Message& heartbeat, const UtcTimeStamp& timeStamp )
{
  if ( !verify( heartbeat, DataDictionary::MsgInfo::Admin::Heartbeat ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );

}

void Session::nextTestRequest( const Message& testRequest, const UtcTimeStamp& timeStamp )
{
  if ( !verify( testRequest, DataDictionary::MsgInfo::Admin::TestRequest ) ) return ;
  generateHeartbeat( testRequest );
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );
}

void Session::nextLogout( const Message& logout, const UtcTimeStamp& timeStamp )
{
  if ( !verify( logout, DataDictionary::MsgInfo::Admin::Logout, false, false ) ) return ;
  if ( !m_state.sentLogout() )
  {
    m_state.onEvent( "Received logout request" );
    generateLogout();
    m_state.onEvent( "Sending logout response" );
  }
  else
    m_state.onEvent( "Received logout response" );

  m_state.incrNextTargetMsgSeqNum();
  if ( m_resetOnLogout ) m_state.reset();
  disconnect();
}

void Session::nextReject( const Message& reject, const UtcTimeStamp& timeStamp )
{
  if ( !verify( reject, DataDictionary::MsgInfo::Admin::Reject, false, true ) ) return ;
  m_state.incrNextTargetMsgSeqNum();
  nextQueued( timeStamp );
}

void Session::nextSequenceReset( const Message& sequenceReset, const UtcTimeStamp& timeStamp )
{
  bool isGapFill = false;
  GapFillFlag gapFillFlag;
  if ( sequenceReset.getFieldIfSet( gapFillFlag ) )
  {
    isGapFill = gapFillFlag;
  }

  if ( !verify( sequenceReset, DataDictionary::MsgInfo::Admin::SequenceReset, isGapFill, isGapFill ) ) return ;

  NewSeqNo newSeqNo;
  if ( sequenceReset.getFieldIfSet( newSeqNo ) )
  {
    m_state.onEvent( "Received SequenceReset FROM: "
                     + IntConvertor::convert( getExpectedTargetNum() ) +
                     " TO: " + IntConvertor::convert( newSeqNo ) );

    if ( newSeqNo > getExpectedTargetNum() )
      m_state.setNextTargetMsgSeqNum( MsgSeqNum( newSeqNo ) );
    else if ( newSeqNo < getExpectedTargetNum() )
      generateReject( sequenceReset, SessionRejectReason_VALUE_IS_INCORRECT );
  }
}

void Session::nextResendRequest( const Message& resendRequest, const UtcTimeStamp& timeStamp )
{
  if ( !verify( resendRequest, DataDictionary::MsgInfo::Admin::ResendRequest, false, false ) ) return ;

  Locker l( m_mutex );

  BeginSeqNo beginSeqNo;
  EndSeqNo endSeqNo;
  resendRequest.getField( beginSeqNo );
  resendRequest.getField( endSeqNo );

  m_state.onEvent( "Received ResendRequest FROM: "
       + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

  const BeginString& beginString = m_sessionID.getBeginString();
  if ( (beginString >= FIX::BeginString_FIX42 && endSeqNo == 0) ||
       (beginString <= FIX::BeginString_FIX42 && endSeqNo == 999999) ||
       (endSeqNo >= getExpectedSenderNum()) )
  { endSeqNo = getExpectedSenderNum() - 1; }

  if ( !m_persistMessages )
  {
    endSeqNo = EndSeqNo(endSeqNo + 1);
    int next = m_state.getNextSenderMsgSeqNum();
    if( endSeqNo > next )
      endSeqNo = EndSeqNo(next);
    generateSequenceReset( beginSeqNo, endSeqNo );
    return;
  }

  std::vector < std::string > messages;
  m_state.get( beginSeqNo, endSeqNo, messages );

  std::vector < std::string > ::iterator i;
  MsgSeqNum msgSeqNum(0);
  MsgType msgType;
  int begin = 0;
  int current = beginSeqNo;
  FieldMap::allocator_type msgAllocator( Message::create_allocator( ItemAllocatorTraits::DefaultCapacity << 3 ) );

  for ( i = messages.begin(); i != messages.end(); ++i )
  {
    DataDictionary::MsgInfo msgInfo( m_defaultApplicationDD );
    Message msg( *i, msgInfo, m_sessionDD,
                 m_sessionID.isFIXT() ? &m_dataDictionaryProvider : NULL,
                 msgAllocator, m_validateLengthAndChecksum );

    msg.getHeader().getField( msgSeqNum );
    msg.getHeader().getField( msgType );

    if( (current != msgSeqNum) && !begin )
      begin = current;

    if ( Message::isAdminMsgType( msgType ) )
    {
      if ( !begin ) begin = msgSeqNum;
    }
    else
    {
      if ( resend( msg ) )
      {
        if ( begin ) generateSequenceReset( begin, msgSeqNum );
        if ( m_pResponder) tx( msg.toString(m_sendStringBuffer) );
        m_state.onEvent( "Resending Message: "
                         + IntConvertor::convert( msgSeqNum ) );
        begin = 0;
      }
      else
      { if ( !begin ) begin = msgSeqNum; }
    }
    current = msgSeqNum + 1;
  }
  if ( begin )
  {
    generateSequenceReset( begin, msgSeqNum + 1 );
  }

  if ( endSeqNo > msgSeqNum )
  {
    endSeqNo = EndSeqNo(endSeqNo + 1);
    int next = m_state.getNextSenderMsgSeqNum();
    if( endSeqNo > next )
      endSeqNo = EndSeqNo(next);
    generateSequenceReset( beginSeqNo, endSeqNo );
  }

  resendRequest.getHeader().getField( msgSeqNum );
  if( !isTargetTooHigh(msgSeqNum) && !isTargetTooLow(msgSeqNum) )
    m_state.incrNextTargetMsgSeqNum();
}

bool HEAVYUSE HOTSECTION Session::send( Message& message )
{
  DTRACE_AUTO(probe, quickfix, session__send__start, session__send__end);
  int f[2] = { FIELD::PossDupFlag, FIELD::OrigSendingTime };
  message.getHeader().removeFields( f, f + sizeof(f)/sizeof(int));

  return sendRaw( message );
}

bool HEAVYUSE HOTSECTION Session::sendRaw( Message& message, int num )
{
  Locker l( m_mutex );

  try
  {
    Header& header = message.getHeader();

    DataDictionary::MsgInfo::Admin::Trait trait = fill( header, num );

    if ( trait & ( DataDictionary::MsgInfo::Admin::trait_logon |
                   DataDictionary::MsgInfo::Admin::trait_status |
                   DataDictionary::MsgInfo::Admin::trait_session ) )
    {
      DTRACE_PROBE( quickfix, to__admin__start );
      m_application.toAdmin( message, m_sessionID );
      DTRACE_PROBE( quickfix, to__admin__end );

      if( trait == DataDictionary::MsgInfo::Admin::trait_logon &&
         !m_state.receivedReset() )
      {
        ResetSeqNumFlag resetSeqNumFlag;
        if( message.getFieldIfSet(resetSeqNumFlag) && resetSeqNumFlag )
        {
          m_state.reset();
          header.setField( MsgSeqNum::Pack(getExpectedSenderNum()) );
          m_state.sentReset( true );
        } 
        else
          m_state.sentReset( false );
      }

      if( m_pResponder )
      {
        DTRACE_PROBE( quickfix, sg__serialize__start );
        const SgBufferFactory::SgBuffer& s =
                       message.toBuffer( sg_buffer_factory );
        DTRACE_PROBE( quickfix, sg__serialize__end );

        if( !num )
        {
          DTRACE_AUTO( probe, quickfix, persist__start, persist__end );
          persist( message, s.iovec(), s.elements() );
        }
        if ( isLoggedOn() ||
           ( trait & ( DataDictionary::MsgInfo::Admin::trait_logon |
                       DataDictionary::MsgInfo::Admin::trait_status ) ) )
        {
          tx( s.iovec(), s.elements() );
        }  
      }
      else
      {
        DTRACE_PROBE( quickfix, string__serialize__start );
        const std::string& s = message.toBuffer( s_buffer_factory );
        DTRACE_PROBE( quickfix, string__serialize__end );

        if( !num )
        {
          DTRACE_AUTO( probe, quickfix, persist__start, persist__end );
          persist( message, s );
        }
      }
    }
    else
    {
      // do not send application messages if they will just be cleared
      if( !isLoggedOn() && shouldSendReset() )
        return false;

      try
      {
	DTRACE_PROBE( quickfix, to__app__start );
        m_application.toApp( message, m_sessionID );
	DTRACE_PROBE( quickfix, to__app__end );

	if( m_pResponder )
        {
          DTRACE_PROBE( quickfix, sg__serialize__start );
          const SgBufferFactory::SgBuffer& s =
                         message.toBuffer( sg_buffer_factory );
          DTRACE_PROBE( quickfix, sg__serialize__end );

	  if( !num )
          {
            DTRACE_AUTO( probe, quickfix, persist__start, persist__end );
	    persist( message, s.iovec(), s.elements() );
          }

	  if ( isLoggedOn() )
	    tx ( s.iovec(), s.elements() );
        }
        else
        {
          DTRACE_PROBE( quickfix, string__serialize__start );
          const std::string& s = message.toBuffer( s_buffer_factory );
          DTRACE_PROBE( quickfix, string__serialize__end );

          if( !num )
          {
            DTRACE_AUTO( probe, quickfix, persist__start, persist__end );
            persist( message, s );
          }
        }
      }
      catch ( DoNotSend& ) { return false; }
    }

    return true;
  }
  catch ( IOException& e )
  {
    m_state.onEvent( e.what() );
    return false;
  }
}

bool Session::tx( const std::string& string )
{
  m_state.SessionState::onOutgoing( string );
  return m_pResponder->send( string );
}

void Session::disconnect()
{
  Locker l(m_mutex);

  if ( m_pResponder )
  {
    m_state.onEvent( "Disconnecting" );

    m_pResponder->disconnect();
    m_pResponder = 0;
  }

  if ( m_state.receivedLogon() || m_state.sentLogon() )
  {
    m_state.receivedLogon( false );
    m_state.sentLogon( false );
    m_application.onLogout( m_sessionID );
  }

  m_state.sentLogout( false );
  m_state.receivedReset( false );
  m_state.sentReset( false );
  m_state.clearQueue();
  m_state.logoutReason();
  if ( m_resetOnDisconnect )
    m_state.reset();

  m_state.resendRange( 0, 0 );
}

bool Session::resend( Message& message )
{
  SendingTime sendingTime;
  MsgSeqNum msgSeqNum;
  Header& header = message.getHeader();
  header.getField( sendingTime );
  header.getField( msgSeqNum );
  insertOrigSendingTime( header, sendingTime );
  header.setField( PossDupFlag::Pack( true ) );
  insertSendingTime( header );

  try
  {
    m_application.toApp( message, m_sessionID );
    return true;
  }
  catch ( DoNotSend& )
  { return false; }
}

void Session::persist( const Message& message,  const std::string& messageString ) 
THROW_DECL( IOException )
{
  if( m_persistMessages )
  {
    MsgSeqNum msgSeqNum;
    message.getHeader().getField( msgSeqNum );
    m_state.set( msgSeqNum, messageString );
  }
  m_state.incrNextSenderMsgSeqNum();
}

void Session::generateLogon()
{
  DTRACE_PROBE(quickfix, generate__logon);
  Message logon( MsgType::Pack( "A", 1 ), m_sessionDD, m_sendAllocator );
  logon.setField( EncryptMethod::Pack( 0 ) );
  logon.setField( m_state.heartBtInt() );
  if( m_sessionID.isFIXT() )
    logon.setField( DefaultApplVerID(m_senderDefaultApplVerID) );  
  if( m_refreshOnLogon )
    refresh();
  if( m_resetOnLogon )
    m_state.reset();
  if( shouldSendReset() )
    logon.setField( ResetSeqNumFlag::Pack(true) );

  UtcTimeStamp now;
  fill( logon.getHeader(), now );
  m_state.lastReceivedTime( now );
  m_state.testRequest( 0 );
  m_state.sentLogon( true );
  sendRaw( logon );
}

void Session::generateLogon( const Message& aLogon )
{
  DTRACE_PROBE(quickfix, generate__logon);
  Message logon( MsgType::Pack( "A", 1 ), m_sessionDD, m_sendAllocator );
  EncryptMethod encryptMethod;
  HeartBtInt heartBtInt;
  logon.setField( EncryptMethod::Pack( 0 ) );
  if( m_sessionID.isFIXT() )
    logon.setField( DefaultApplVerID::Pack(m_senderDefaultApplVerID) );  
  if( m_state.receivedReset() )
    logon.setField( ResetSeqNumFlag::Pack(true) );
  aLogon.getField( heartBtInt );
  logon.setField( heartBtInt );
  sendRaw( logon );
  m_state.sentLogon( true );
}

void Session::generateResendRequest( const BeginString& beginString, const MsgSeqNum& msgSeqNum )
{
  DTRACE_PROBE(quickfix, generate__resend__request);
  Message resendRequest( MsgType::Pack( "2", 1 ), m_sessionDD, m_sendAllocator );
  BeginSeqNo beginSeqNo( ( int ) getExpectedTargetNum() );
  EndSeqNo endSeqNo( msgSeqNum - 1 );
  if ( beginString >= FIX::BeginString_FIX42 )
    endSeqNo = 0;
  else if( beginString <= FIX::BeginString_FIX41 )
    endSeqNo = 999999;
  resendRequest.setField( beginSeqNo );
  resendRequest.setField( endSeqNo );
  sendRaw( resendRequest );

  m_state.onEvent( "Sent ResendRequest FROM: "
                   + IntConvertor::convert( beginSeqNo ) +
                   " TO: " + IntConvertor::convert( endSeqNo ) );

  m_state.resendRange( beginSeqNo, msgSeqNum - 1 );
}

void Session::generateSequenceReset
( int beginSeqNo, int endSeqNo )
{
  DTRACE_PROBE(quickfix, generate__sequence__reset);
  Message sequenceReset( MsgType::Pack( "4", 1 ), m_sessionDD, m_sendAllocator );
  NewSeqNo newSeqNo( endSeqNo );
  sequenceReset.getHeader().setField( PossDupFlag( true ) );
  sequenceReset.setField( newSeqNo );
  fill( sequenceReset.getHeader() );

  SendingTime sendingTime;
  sequenceReset.getHeader().getField( sendingTime );
  insertOrigSendingTime( sequenceReset.getHeader(), sendingTime );
  sequenceReset.getHeader().setField( MsgSeqNum( beginSeqNo ) );
  sequenceReset.setField( GapFillFlag( true ) );
  sendRaw( sequenceReset, beginSeqNo );
  m_state.onEvent( "Sent SequenceReset TO: "
                   + IntConvertor::convert( newSeqNo ) );
}

void Session::generateHeartbeat()
{
  DTRACE_PROBE(quickfix, generate__heartbeat);
  Message heartbeat( MsgType::Pack( "0", 1 ), m_sessionDD, m_sendAllocator );
  sendRaw( heartbeat );
}

void Session::generateHeartbeat( const Message& testRequest )
{
  DTRACE_PROBE(quickfix, generate__heartbeat);
  Message heartbeat( MsgType::Pack( "0", 1 ), m_sessionDD, m_sendAllocator );
  try
  {
    TestReqID testReqID;
    testRequest.getField( testReqID );
    heartbeat.setField( testReqID );
  }
  catch ( FieldNotFound& ) {}

  sendRaw( heartbeat );
}

void Session::generateTestRequest( const std::string& id )
{
  Message testRequest( MsgType::Pack( "1", 1 ), m_sessionDD, m_sendAllocator );

  TestReqID testReqID( id );
  testRequest.setField( testReqID );

  sendRaw( testRequest );
}

void Session::generateReject( const Message& message, int err, int field )
{
  DTRACE_PROBE(quickfix, generate__reject);
  const BeginString& beginString = m_sessionID.getBeginString();

  Message reject( MsgType::Pack( "3", 1 ), m_sessionDD, m_sendAllocator );
  reject.reverseRoute( message.getHeader() );
  fill( reject.getHeader() );

  MsgSeqNum msgSeqNum;
  MsgType msgType;

  message.getHeader().getField( msgType );
  if( message.getHeader().getFieldIfSet( msgSeqNum ) )
  {
    if( msgSeqNum.forString( String::Size() ) )
      reject.setField( RefSeqNum( msgSeqNum ) );
  }

  if ( beginString >= FIX::BeginString_FIX42 )
  {
    if( msgType.forString( String::Size() ) )
      reject.setField( RefMsgType( msgType ) );
    if ( (beginString == FIX::BeginString_FIX42
          && err <= SessionRejectReason_INVALID_MSGTYPE)
          || beginString > FIX::BeginString_FIX42 )
    {
      reject.setField( SessionRejectReason::Pack( err ) );
    }
  }
  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset
       && msgSeqNum == getExpectedTargetNum() )
  { m_state.incrNextTargetMsgSeqNum(); }

  const char* reason = 0;
  switch ( err )
  {
    case SessionRejectReason_INVALID_TAG_NUMBER:
    reason = SessionRejectReason_INVALID_TAG_NUMBER_TEXT;
    break;
    case SessionRejectReason_REQUIRED_TAG_MISSING:
    reason = SessionRejectReason_REQUIRED_TAG_MISSING_TEXT;
    break;
    case SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE:
    reason = SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE:
    reason = SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE_TEXT;
    break;
    case SessionRejectReason_VALUE_IS_INCORRECT:
    reason = SessionRejectReason_VALUE_IS_INCORRECT_TEXT;
    break;
    case SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE:
    reason = SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE_TEXT;
    break;
    case SessionRejectReason_COMPID_PROBLEM:
    reason = SessionRejectReason_COMPID_PROBLEM_TEXT;
    break;
    case SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM:
    reason = SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM_TEXT;
    break;
    case SessionRejectReason_INVALID_MSGTYPE:
    reason = SessionRejectReason_INVALID_MSGTYPE_TEXT;
    break;
    case SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE:
    reason = SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE_TEXT;
    break;
    case SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER:
    reason = SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER_TEXT;
    break;
    case SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP:
    reason = SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP_TEXT;
  };

  if ( reason && ( field || err == SessionRejectReason_INVALID_TAG_NUMBER ) )
  {
    populateRejectReason( reject, field, reason );
    m_state.onEvent( "Message " + msgSeqNum.dupString() + " Rejected: "
                     + reason + ":" + IntConvertor::convert( field ) );
  }
  else if ( reason )
  {
    populateRejectReason( reject, reason );
    m_state.onEvent( "Message " + msgSeqNum.dupString()
         + " Rejected: " + reason );
  }
  else
    m_state.onEvent( "Message " + msgSeqNum.dupString() + " Rejected" );

  if ( !m_state.receivedLogon() )
    throw std::runtime_error( "Tried to send a reject while not logged on" );

  sendRaw( reject );
}

void Session::generateReject( const Message& message, const std::string& str )
{
  DTRACE_PROBE(quickfix, generate__reject);
  const BeginString& beginString = m_sessionID.getBeginString();

  Message reject( MsgType::Pack( "3", 1 ), m_sessionDD, m_sendAllocator );
  reject.reverseRoute( message.getHeader() );
  fill( reject.getHeader() );

  MsgType msgType;
  MsgSeqNum msgSeqNum;

  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  if ( beginString >= FIX::BeginString_FIX42 )
    reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );

  if ( msgType != MsgType_Logon && msgType != MsgType_SequenceReset )
    m_state.incrNextTargetMsgSeqNum();

  reject.setField( Text::Pack( str ) );
  sendRaw( reject );
  m_state.onEvent( "Message " + msgSeqNum.dupString()
                   + " Rejected: " + str );
}

void Session::generateBusinessReject( const Message& message, int err, int field )
{
  DTRACE_PROBE(quickfix, generate__business__reject);
  Message reject( MsgType::Pack( MsgType_BusinessMessageReject ),
                  m_sessionDD, m_sessionID.isFIXT() ? m_defaultApplicationDD : m_sessionDD, m_sendAllocator );
  if( m_sessionID.isFIXT() )
    reject.setField( DefaultApplVerID::Pack( m_senderDefaultApplVerID ) );
  fill( reject.getHeader() );
  MsgType msgType;
  MsgSeqNum msgSeqNum;
  message.getHeader().getField( msgType );
  message.getHeader().getField( msgSeqNum );
  reject.setField( RefMsgType( msgType ) );
  reject.setField( RefSeqNum( msgSeqNum ) );
  reject.setField( BusinessRejectReason::Pack( err ) );
  m_state.incrNextTargetMsgSeqNum();

  const char* reason = 0;
  switch ( err )
  {
    case BusinessRejectReason_OTHER:
    reason = BusinessRejectReason_OTHER_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_ID:
    reason = BusinessRejectReason_UNKNOWN_ID_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_SECURITY:
    reason = BusinessRejectReason_UNKNOWN_SECURITY_TEXT;
    break;
    case BusinessRejectReason_UNKNOWN_MESSAGE_TYPE:
    reason = BusinessRejectReason_UNSUPPORTED_MESSAGE_TYPE_TEXT;
    break;
    case BusinessRejectReason_APPLICATION_NOT_AVAILABLE:
    reason = BusinessRejectReason_APPLICATION_NOT_AVAILABLE_TEXT;
    break;
    case BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING:
    reason = BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING_TEXT;
    break;
    case BusinessRejectReason_NOT_AUTHORIZED:
    reason = BusinessRejectReason_NOT_AUTHORIZED_TEXT;
    break;
    case BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME:
    reason = BusinessRejectReason_DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME_TEXT;
    break;
  };

  if ( reason && field )
  {
    populateRejectReason( reject, field, reason );
    m_state.onEvent( "Message " + msgSeqNum.dupString() + " Rejected: "
                     + reason + ":" + IntConvertor::convert( field ) );
  }
  else if ( reason )
  {
    populateRejectReason( reject, reason );
    m_state.onEvent( "Message " + msgSeqNum.dupString()
         + " Rejected: " + reason );
  }
  else
    m_state.onEvent( "Message " + msgSeqNum.dupString() + " Rejected" );

  sendRaw( reject );
}

void Session::generateLogout( const std::string& text )
{
  DTRACE_PROBE(quickfix, generate__logout);
  Message logout( MsgType::Pack( MsgType_Logout ), m_sessionDD, m_sendAllocator );
  if ( text.length() )
    logout.setField( Text::Pack( text ) );
  sendRaw( logout );
  m_state.sentLogout( true );
}

void Session::populateRejectReason( Message& reject, int field,
                                    const std::string& text )
{
  MsgType msgType;
   reject.getHeader().getField( msgType );

  if ( msgType == MsgType_Reject 
       && m_sessionID.getBeginString() >= FIX::BeginString_FIX42 )
  {
    reject.setField( RefTagID::Pack( field ) );
    reject.setField( Text::Pack( text ) );
  }
  else
  {
    std::stringstream stream;
    stream << text << " (" << field << ")";
    reject.setField( Text::Pack( stream.str() ) );
  }
}

void Session::populateRejectReason( Message& reject, const std::string& text )
{
  reject.setField( Text::Pack( text ) );
}

bool HEAVYUSE HOTSECTION Session::verify( const Message& msg, DataDictionary::MsgInfo::Admin::Type adminType,
                                          const UtcTimeStamp& now,
                                          const Header& header,
                                          bool checkTooHigh, bool checkTooLow )
{
  const MsgSeqNum* pMsgSeqNum = 0;

  try
  {
    const SenderCompID& senderCompID = FIELD_GET_REF( header, SenderCompID );
    const TargetCompID& targetCompID = FIELD_GET_REF( header, TargetCompID );
    const SendingTime& sendingTime = FIELD_GET_REF( header, SendingTime );

    if ( checkTooHigh || checkTooLow )
      pMsgSeqNum = FIELD_GET_PTR( header, MsgSeqNum );

    if ( validLogonState( adminType ) )
    {
      if ( isGoodTime( sendingTime, now ) )
      {
        if ( isCorrectCompID( senderCompID, targetCompID ) )
        {
          if ( !checkTooHigh || !isTargetTooHigh( *pMsgSeqNum ) )
          {
             if ( !checkTooLow || !isTargetTooLow( *pMsgSeqNum ) )
             {
               if ( (checkTooHigh || checkTooLow) && m_state.resendRequested() )
               {
                 SessionState::ResendRange range = m_state.resendRange();
 
                 if ( *pMsgSeqNum >= range.second )
                 {
                   m_state.onEvent ("ResendRequest for messages FROM: " +
                         IntConvertor::convert (range.first) + " TO: " +
                         IntConvertor::convert (range.second) +
                         " has been satisfied.");
                   m_state.resendRange (0, 0);
                 }
               }
             }
             else
             {
               doTargetTooLow( msg );
               return false;
             }
          }
          else
          {
            doTargetTooHigh( msg );
            return false;
          }
        }
        else
        {
          doBadCompID( msg );
          return false;
        }
      }
      else
      {
        doBadTime( msg );
        return false;
      }
    }
    else
      throw std::logic_error( "Logon state is not valid for message" );
  }
  catch ( std::exception& e )
  {
    m_state.onEvent( e.what() );
    disconnect();
    return false;
  }

  m_state.lastReceivedTime( now );
  m_state.testRequest( 0 );

  fromCallback( adminType, msg, m_sessionID );
  return true;
}

bool Session::shouldSendReset()
{
  return m_sessionID.getBeginString() >= FIX::BeginString_FIX41
    && ( m_resetOnLogon || 
         m_resetOnLogout || 
         m_resetOnDisconnect )
    && ( getExpectedSenderNum() == 1 )
    && ( getExpectedTargetNum() == 1 );
}

bool Session::validLogonState( const MsgType& msgType )
{
  return validLogonState( DataDictionary::MsgInfo::msgAdminType( msgType ) );
}

bool Session::validLogonState( DataDictionary::MsgInfo::Admin::Type adminType )
{
  if ( LIKELY(adminType == DataDictionary::MsgInfo::Admin::None) )
    return m_state.receivedLogon() ||
           m_state.receivedReset() ||
           m_state.sentLogout();

  if ( LIKELY(adminType != DataDictionary::MsgInfo::Admin::Logon) )
  { 
    if ( LIKELY(m_state.receivedLogon()) )
      return true;
  }
  else
  {
    if ( !m_state.receivedLogon() || m_state.sentReset() )
      return true;
  }

  if ( LIKELY(adminType != DataDictionary::MsgInfo::Admin::Logout) ) 
  {
    if ( m_state.sentLogout() )
      return true;
  }
  else
  {
    if ( m_state.sentLogon() )
      return true;
  }

  if ( adminType == DataDictionary::MsgInfo::Admin::SequenceReset ||
       adminType == DataDictionary::MsgInfo::Admin::Reject )
    return true;

  return m_state.receivedReset();
}

void Session::fromCallback( DataDictionary::MsgInfo::Admin::Type adminType, const Message& msg,
                            const SessionID& sessionID )
{
  if ( LIKELY(adminType == DataDictionary::MsgInfo::Admin::None) )
  {
    DTRACE_PROBE( quickfix, from__app__start );
    m_application.fromApp( msg, m_sessionID );
    DTRACE_PROBE( quickfix, from__app__end );
  }
  else
  {
    DTRACE_PROBE( quickfix, from__admin__start );
    m_application.fromAdmin( msg, m_sessionID );
    DTRACE_PROBE( quickfix, from__admin__end );
  }
}

void Session::doBadTime( const Message& msg )
{
  generateReject( msg, SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM );
  generateLogout();
}

void Session::doBadCompID( const Message& msg )
{
  generateReject( msg, SessionRejectReason_COMPID_PROBLEM );
  generateLogout();
}

bool Session::doPossDup( const Message& msg )
{
  const Header & header = msg.getHeader();
  OrigSendingTime origSendingTime;
  SendingTime sendingTime;
  MsgType msgType;

  header.getField( msgType );
  header.getField( sendingTime );

  if ( msgType != MsgType_SequenceReset )
  {
    if ( !header.getFieldIfSet( origSendingTime ) )
    {
      generateReject( msg, SessionRejectReason_REQUIRED_TAG_MISSING, origSendingTime.getTag() );
      return false;
    }

    if ( origSendingTime > sendingTime )
    {
      generateReject( msg, SessionRejectReason_SENDINGTIME_ACCURACY_PROBLEM );
      generateLogout();
      return false;
    }
  }
  return true;
}

bool Session::doTargetTooLow( const Message& msg )
{
  const Header & header = msg.getHeader();
  PossDupFlag possDupFlag;
  if ( !header.getFieldIfSet(possDupFlag) || !possDupFlag )
  {
    MsgSeqNum msgSeqNum;
    header.getField( msgSeqNum );
    std::stringstream stream;
    stream << "MsgSeqNum too low, expecting " << getExpectedTargetNum()
           << " but received " << msgSeqNum;
    generateLogout( stream.str() );
    throw std::logic_error( stream.str() );
  }

  return doPossDup( msg );
}

void Session::doTargetTooHigh( const Message& msg )
{
  const Header & header = msg.getHeader();
  BeginString beginString;
  MsgSeqNum msgSeqNum;
  header.getField( beginString );
  header.getField( msgSeqNum );

  m_state.onEvent( "MsgSeqNum too high, expecting "
                   + IntConvertor::convert( getExpectedTargetNum() )
                   + " but received "
                   + IntConvertor::convert( msgSeqNum ) );

  m_state.queue( msgSeqNum, msg );

  if( m_state.resendRequested() )
  {
    SessionState::ResendRange range = m_state.resendRange();

    if( !m_sendRedundantResendRequests && msgSeqNum >= range.first )
    {
          m_state.onEvent ("Already sent ResendRequest FROM: " +
                           IntConvertor::convert (range.first) + " TO: " +
                           IntConvertor::convert (range.second) +
                           ".  Not sending another.");
          return;
    }
  }

  generateResendRequest( beginString, msgSeqNum );
}

void Session::nextQueued( const UtcTimeStamp& timeStamp )
{
  OnNextQueued f(*this, timeStamp);
  while ( m_state.dequeue( f ) ) {}
}

bool Session::OnNextQueued::operator() ( int num, Message& msg)
{
  MsgType msgType;
  session.m_state.onEvent( "Processing QUEUED message: "
                     + IntConvertor::convert( num ) );
  msg.getHeader().getField( msgType );
  DataDictionary::MsgInfo::Admin::Type adminType = DataDictionary::MsgInfo::msgAdminType( msgType );
  if( adminType == DataDictionary::MsgInfo::Admin::Logon
      || adminType == DataDictionary::MsgInfo::Admin::ResendRequest )
  {
    session.m_state.incrNextTargetMsgSeqNum();
  }
  else if ( LIKELY(!session.m_sessionID.isFIXT() || adminType != DataDictionary::MsgInfo::Admin::None) )
  {
    DataDictionary::MsgInfo msgInfo( session.m_sessionDD, session.m_sessionDD, &msgType, NULL, adminType );
    session.next( msg, msgInfo, session.m_sessionDD, tstamp, true );
  }
  else
  {
    const FieldBase* applVerID = msg.getHeader().getFieldPtrIfSet( FIELD::ApplVerID );
    DataDictionary::MsgInfo msgInfo( session.m_defaultApplicationDD, applVerID
      ? session.m_dataDictionaryProvider.getApplicationDataDictionary( applVerID->forString( String::Rval() ) )
      : session.m_defaultApplicationDD,
      &msgType, NULL, adminType );
    session.next( msg, msgInfo, session.m_sessionDD, tstamp, true );
  }
  return true;
}

bool Session::nextQueued( int num, const UtcTimeStamp& timeStamp )
{
  Message msg;
  OnNextQueued f(*this, timeStamp);
  if ( m_state.retrieve( num, msg ) )
    return f( num, msg );
  return false;
}

void HEAVYUSE HOTSECTION Session::next( Sg::sg_buf_t buf, const UtcTimeStamp& timeStamp, bool queued )
{
  const char* msg = Sg::data<const char*>(buf);
  try
  {
    DTRACE_PROBE( quickfix, session__dispatch__start );
    m_state.onIncoming( &buf, 1 );
    Message::reset_allocator( m_rcvAllocator );

    if( LIKELY(!m_sessionID.isFIXT()) )
    {
      DataDictionary::MsgInfo msgInfo( m_sessionDD, m_sessionDD );
      next( Message( msg, Sg::size(buf),
                     msgInfo,
                     m_sessionDD,
                     m_rcvAllocator,
                     m_validateLengthAndChecksum ),
                     msgInfo, m_sessionDD, timeStamp, queued );
    }
    else
    {
      DataDictionary::MsgInfo msgInfo( m_defaultApplicationDD );
      Message message( msg, Sg::size(buf),
                     msgInfo,
                     m_sessionDD,
                     m_dataDictionaryProvider,
                     m_rcvAllocator,
                     m_validateLengthAndChecksum );
      if ( !msgInfo.applicationDictionary() ) msgInfo.applicationDictionary( m_defaultApplicationDD );
      next( message, msgInfo, m_sessionDD, timeStamp, queued );
    }

    DTRACE_PROBE1( quickfix, session__dispatch__end, true );
  }
  catch( InvalidMessage& e )
  {
    DTRACE_PROBE1( quickfix, session__dispatch__end, false );
    m_state.onEvent( e.what() );

    try
    {
      if( Message::identifyType( msg, Sg::size(buf) ).compare<1>(MsgType_Logon) )
      {
        m_state.onEvent( "Logon message is not valid" );
        disconnect();
      }
    } catch( MessageParseError& ) {}
    throw e;
  }
}

void HEAVYUSE HOTSECTION Session::next( const Message& message, DataDictionary::MsgInfo& msgInfo,
                             const DataDictionary* sessionDD, const UtcTimeStamp& timeStamp, bool queued )
{
  {
    DTRACE_AUTO_BOOL(probe, false, quickfix, session__validate__start, session__validate__end);
    const Header& header = message.getHeader();
  
    try
    {
      if( LIKELY(checkSessionTime(timeStamp)) )
      {
        // make sure these fields are present
        if (!message.getStatusBit(Message::has_sender_comp_id))
          FIELD_THROW_IF_NOT_FOUND( header, SenderCompID );
        if (!message.getStatusBit(Message::has_target_comp_id))
          FIELD_THROW_IF_NOT_FOUND( header, TargetCompID );
  
        const BeginString& beginString = FIELD_GET_REF( header, BeginString );
        if( beginString == m_sessionID.getBeginString() )
        {
          DataDictionary::MsgInfo::Admin::Type adminType = msgInfo.messageType( header );
          if( LIKELY(adminType == DataDictionary::MsgInfo::Admin::None) )
          {
            DataDictionary::validate( message, beginString, msgInfo, sessionDD );
            if ( !verify( message, adminType, timeStamp, 
                                   header, true, true ) ) return ;
            m_state.incrNextTargetMsgSeqNum();
          } 
          else
          {
            if( adminType == DataDictionary::MsgInfo::Admin::Logon )
            {
              if( m_sessionID.isFIXT() )
              {
                const DefaultApplVerID& applVerID = FIELD_GET_REF( message, DefaultApplVerID );
                setTargetDefaultApplVerID(applVerID);
              }
              else
              {
                setTargetDefaultApplVerID(Message::toApplVerID(beginString));
              }
              DataDictionary::validate( message, beginString, msgInfo, sessionDD );
              nextLogon( message, timeStamp );
            }
            else
            {
              DataDictionary::validate( message, beginString, msgInfo, sessionDD );
              switch( adminType )
              {
                case DataDictionary::MsgInfo::Admin::Heartbeat:
                  nextHeartbeat( message, timeStamp );
                  break;
                case DataDictionary::MsgInfo::Admin::TestRequest:
                  nextTestRequest( message, timeStamp );
                  break;
                case DataDictionary::MsgInfo::Admin::SequenceReset:
                  nextSequenceReset( message, timeStamp );
                  break;
                case DataDictionary::MsgInfo::Admin::Logout:
                  nextLogout( message, timeStamp );
                  break;
                case DataDictionary::MsgInfo::Admin::ResendRequest:
                  nextResendRequest( message,timeStamp );
                  break;
                case DataDictionary::MsgInfo::Admin::Reject:
                  nextReject( message, timeStamp );
                  break;
                default:
                  if ( !verify( message, adminType, timeStamp, 
                                       header, true, true ) ) return ;
                  m_state.incrNextTargetMsgSeqNum();
              }
            }
          }
        }
        else
          throw UnsupportedVersion();
      }
      else
      {
        reset();
        return;
      }
    }
    catch ( MessageParseError& e )
    { m_state.onEvent( e.what() ); }
    catch ( RequiredTagMissing & e )
    { LOGEX( generateReject( message, SessionRejectReason_REQUIRED_TAG_MISSING, e.field ) ); }
    catch ( FieldNotFound & e )
    {
      if( header.getField(FIELD::BeginString) >= FIX::BeginString_FIX42 && message.isApp() )
      {
        LOGEX( generateBusinessReject( message, BusinessRejectReason_CONDITIONALLY_REQUIRED_FIELD_MISSING, e.field ) );
      }
      else
      {
        LOGEX( generateReject( message, SessionRejectReason_REQUIRED_TAG_MISSING, e.field ) );
        if ( header.getField(FIELD::MsgType) == MsgType_Logon )
        {
          m_state.onEvent( "Required field missing from logon" );
          disconnect();
        }
      }
    }
    catch ( InvalidTagNumber & e )
    { LOGEX( generateReject( message, SessionRejectReason_INVALID_TAG_NUMBER, e.field ) ); }
    catch ( NoTagValue & e )
    { LOGEX( generateReject( message, SessionRejectReason_TAG_SPECIFIED_WITHOUT_A_VALUE, e.field ) ); }
    catch ( TagNotDefinedForMessage & e )
    { LOGEX( generateReject( message, SessionRejectReason_TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE, e.field ) ); }
    catch ( InvalidMessageType& )
    { LOGEX( generateReject( message, SessionRejectReason_INVALID_MSGTYPE ) ); }
    catch ( UnsupportedMessageType& )
    {
      if ( header.getField(FIELD::BeginString) >= FIX::BeginString_FIX42 )
        { LOGEX( generateBusinessReject( message, BusinessRejectReason_UNKNOWN_MESSAGE_TYPE ) ); }
      else
        { LOGEX( generateReject( message, "Unsupported message type" ) ); }
    }
    catch ( TagOutOfOrder & e )
    { LOGEX( generateReject( message, SessionRejectReason_TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER, e.field ) ); }
    catch ( IncorrectDataFormat & e )
    { LOGEX( generateReject( message, SessionRejectReason_INCORRECT_DATA_FORMAT_FOR_VALUE, e.field ) ); }
    catch ( IncorrectTagValue & e )
    { LOGEX( generateReject( message, SessionRejectReason_VALUE_IS_INCORRECT, e.field ) ); }
    catch ( RepeatedTag & e )
    { LOGEX( generateReject( message, SessionRejectReason_TAG_APPEARS_MORE_THAN_ONCE, e.field ) ); }
    catch ( RepeatingGroupCountMismatch & e )
    { LOGEX( generateReject( message, SessionRejectReason_INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP, e.field ) ); }
    catch ( InvalidMessage& e )
    { m_state.onEvent( e.what() ); }
    catch ( RejectLogon& e )
    {
      m_state.onEvent( e.what() );
      generateLogout( e.what() );
      disconnect();
    }
    catch ( UnsupportedVersion& )
    {
      if ( header.getField(FIELD::MsgType) == MsgType_Logout )
        nextLogout( message, timeStamp );
      else
      {
        generateLogout( "Incorrect BeginString" );
        m_state.incrNextTargetMsgSeqNum();
      }
    }
    catch ( IOException& e )
    {
      m_state.onEvent( e.what() );
      disconnect();
    }

    DTRACE_AUTO_SET(probe, true);
  }

  if( !queued )
    nextQueued( timeStamp );

  if( isLoggedOn() )
    next( timeStamp );
}

bool Session::sendToTarget( Message& message, const std::string& qualifier )
THROW_DECL( SessionNotFound )
{
  try
  {
    SessionID sessionID = message.getSessionID( qualifier );
    return sendToTarget( message, sessionID );
  }
  catch ( FieldNotFound& ) { throw SessionNotFound(); }
}

bool Session::sendToTarget( Message& message, const SessionID& sessionID )
THROW_DECL( SessionNotFound )
{
  message.setSessionID( sessionID );
  Session* pSession = lookupSession( sessionID );
  if ( LIKELY(NULL != pSession) )
    return pSession->send( message );
  throw SessionNotFound();
}

bool Session::sendToTarget
( Message& message,
  const SenderCompID& senderCompID,
  const TargetCompID& targetCompID,
  const std::string& qualifier )
THROW_DECL( SessionNotFound )
{
  Message::Sequence::set_in_ordered( message.getHeader(), senderCompID );
  Message::Sequence::set_in_ordered( message.getHeader(), targetCompID );
  return sendToTarget( message, qualifier );
}

bool Session::sendToTarget
( Message& message, const std::string& sender, const std::string& target,
  const std::string& qualifier )
THROW_DECL( SessionNotFound )
{
  return sendToTarget( message, SenderCompID( sender ),
                       TargetCompID( target ), qualifier );
}

std::set<SessionID> Session::getSessions()
{
  return s_sessionIDs;
}

bool Session::doesSessionExist( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  return s_sessions.end() != s_sessions.find( sessionID );
}

Session* Session::lookupSession( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  Sessions::iterator it = s_sessions.find( sessionID );
  return ( it != s_sessions.end() ) ? it->second : NULL;
}

Session* Session::lookupSession( const std::string& string, bool reverse )
{
  Message message;
  if ( !message.setStringHeader( string ) )
    return 0;

  try
  {
    const Header& header = message.getHeader();
    const BeginString& beginString = FIELD_GET_REF( header, BeginString );
    const SenderCompID& senderCompID = FIELD_GET_REF( header, SenderCompID );
    const TargetCompID& targetCompID = FIELD_GET_REF( header, TargetCompID );

    if ( reverse )
    {
      return lookupSession( SessionID( beginString, SenderCompID( targetCompID ),
                                     TargetCompID( senderCompID ) ) );
    }

    return lookupSession( SessionID( beginString, senderCompID,
                          targetCompID ) );
  }
  catch ( FieldNotFound& ) { return 0; }
}

Session* Session::lookupSession( Sg::sg_buf_t buf, bool reverse )
{
  Sg::sg_buf_t begin = Parser::findBeginString( buf );
  if( LIKELY(NULL != Sg::data<const char*>(begin)) )
  {
    Sg::split( buf, begin );
    Sg::sg_buf_t sender = Parser::findSenderCompID( buf );
    if( LIKELY(NULL != Sg::data<const char*>(sender)) )
    {
      Sg::sg_buf_t target = Parser::findTargetCompID( buf );
      if( LIKELY(NULL != Sg::data<const char*>(target)) )
      {
        if ( reverse )
          return lookupSession( SessionID( begin, target, sender ) );
        else
          return lookupSession( SessionID( begin, sender, target ) );
      }
    }
  }
  return NULL;
}

bool Session::isSessionRegistered( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  return s_registered.end() != s_registered.find( sessionID );
}

Session* Session::registerSession( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  Session* pSession = lookupSession( sessionID );
  if ( pSession == 0 ) return 0;
  if ( isSessionRegistered( sessionID ) ) return 0;
  s_registered[ sessionID ] = pSession;
  return pSession;
}

void Session::unregisterSession( const SessionID& sessionID )
{
  Locker locker( s_mutex );
  s_registered.erase( sessionID );
}

size_t Session::numSessions()
{
  Locker locker( s_mutex );
  return s_sessions.size();
}

bool Session::addSession( Session& s )
{
  Locker locker( s_mutex );
  Sessions::iterator it = s_sessions.find( s.m_sessionID );
  if ( it == s_sessions.end() )
  {
    s_sessions[ s.m_sessionID ] = &s;
    s_sessionIDs.insert( s.m_sessionID );
    return true;
  }
  return false;
}

void Session::removeSession( Session& s )
{
  Locker locker( s_mutex );
  s_sessions.erase( s.m_sessionID );
  s_sessionIDs.erase( s.m_sessionID );
  s_registered.erase( s.m_sessionID );
}
}
