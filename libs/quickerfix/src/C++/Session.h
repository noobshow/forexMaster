/* -*- C++ -*- */

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

#ifndef FIX_SESSION_H
#define FIX_SESSION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "SessionState.h"
#include "TimeRange.h"
#include "SessionID.h"
#include "Responder.h"
#include "Fields.h"
#include "DataDictionaryProvider.h"
#include "Application.h"
#include "Mutex.h"
#include "Log.h"
#include <utility>
#include <map>
#include <queue>

namespace FIX
{
/// Maintains the state and implements the logic of a %FIX %session.
class Session
{
public:
  Session( Application&, MessageStoreFactory&,
           const SessionID&,
           const DataDictionaryProvider&,
           const TimeRange&,
           int heartBtInt, LogFactory* pLogFactory );
  virtual ~Session();

  void logon() 
  { m_state.enabled( true ); m_state.logoutReason( "" ); }
  void logout( const std::string& reason = "" ) 
  { m_state.enabled( false ); m_state.logoutReason( reason ); }
  bool isEnabled() 
  { return m_state.enabled(); }

  bool sentLogon() { return m_state.sentLogon(); }
  bool sentLogout() { return m_state.sentLogout(); }
  bool receivedLogon() { return m_state.receivedLogon(); }
  bool isLoggedOn() { return receivedLogon() && sentLogon(); }
  void reset() THROW_DECL( IOException )
  { generateLogout(); disconnect(); m_state.reset(); }
  void refresh() THROW_DECL( IOException )
  { m_state.refresh(); }
  void setNextSenderMsgSeqNum( int num ) THROW_DECL( IOException )
  { m_state.setNextSenderMsgSeqNum( num ); }
  void setNextTargetMsgSeqNum( int num ) THROW_DECL( IOException )
  { m_state.setNextTargetMsgSeqNum( num ); }

  const SessionID& getSessionID() const
  { return m_sessionID; }
  void setDataDictionaryProvider( const DataDictionaryProvider& dataDictionaryProvider )
  {
    m_dataDictionaryProvider = dataDictionaryProvider;
    m_sessionDD = dataDictionaryProvider.getSessionDataDictionary(m_sessionID.getBeginString());
  }
  const DataDictionaryProvider& getDataDictionaryProvider() const
  { return m_dataDictionaryProvider; }

  static bool sendToTarget( Message& message,
                            const std::string& qualifier = "" )
  THROW_DECL( SessionNotFound );
  static bool sendToTarget( Message& message, const SessionID& sessionID )
  THROW_DECL( SessionNotFound );
  static bool sendToTarget( Message&,
                            const SenderCompID& senderCompID,
                            const TargetCompID& targetCompID,
                            const std::string& qualifier = "" )
  THROW_DECL( SessionNotFound );
  static bool sendToTarget( Message& message,
                            const std::string& senderCompID,
                            const std::string& targetCompID,
                            const std::string& qualifier = "" )
  THROW_DECL( SessionNotFound );
  static std::set<SessionID> getSessions();
  static bool doesSessionExist( const SessionID& );
  static Session* lookupSession( const SessionID& );
  static Session* lookupSession( Sg::sg_buf_t, bool reverse = false );
  static Session* lookupSession( const std::string&, bool reverse = false );
  
  static bool isSessionRegistered( const SessionID& );
  static Session* registerSession( const SessionID& );
  static void unregisterSession( const SessionID& );

  static size_t numSessions();

  bool isSessionTime(const UtcTimeStamp& time)
    { return m_sessionTime.isInRange(time); }
  bool isLogonTime(const UtcTimeStamp& time)
    { return m_logonTime.isInRange(time); }
  bool isInitiator()
    { return m_state.initiate(); }
  bool isAcceptor()
    { return !m_state.initiate(); }

  const TimeRange& getLogonTime()
    { return m_logonTime; }
  void setLogonTime( const TimeRange& value )
    { m_logonTime = value; }

  const std::string& getSenderDefaultApplVerID()
    { return m_senderDefaultApplVerID; }
  void setSenderDefaultApplVerID( const std::string& senderDefaultApplVerID )
  {
    DataDictionaryProvider::key_type key( senderDefaultApplVerID.data(), senderDefaultApplVerID.size() );
    m_senderDefaultApplVerID = senderDefaultApplVerID;
    m_defaultApplicationDD = m_dataDictionaryProvider.getApplicationDataDictionary( key );
  }

  const std::string& getTargetDefaultApplVerID()
    { return m_targetDefaultApplVerID; }
  void setTargetDefaultApplVerID( const std::string& targetDefaultApplVerID )
  {
    DataDictionaryProvider::key_type key( targetDefaultApplVerID.data(), targetDefaultApplVerID.size() );
    m_targetDefaultApplVerID = targetDefaultApplVerID;
    m_defaultApplicationDD = m_dataDictionaryProvider.getApplicationDataDictionary( key );
  }

  bool getSendRedundantResendRequests()
    { return m_sendRedundantResendRequests; }
  void setSendRedundantResendRequests ( bool value )
    { m_sendRedundantResendRequests = value; } 

  bool getCheckCompId() 
    { return m_checkCompId; }
  void setCheckCompId ( bool value )
    { m_checkCompId = value; }

  bool getCheckLatency() 
    { return m_checkLatency; }
  void setCheckLatency ( bool value )
    { m_checkLatency = value; }

  int getMaxLatency() 
    { return m_maxLatency; }
  void setMaxLatency ( int value )
    { m_maxLatency = value; }

  int getPollSpin() 
    { return m_pollSpin; }
  void setPollSpin( int value )
    { m_pollSpin = value; }

  int getLogonTimeout()
    { return m_state.logonTimeout(); }
  void setLogonTimeout ( int value )
    { m_state.logonTimeout( value ); }

  int getLogoutTimeout()
    { return m_state.logoutTimeout(); }
  void setLogoutTimeout ( int value )
    { m_state.logoutTimeout( value ); }

  bool getResetOnLogon()
    { return m_resetOnLogon; }
  void setResetOnLogon ( bool value )
    { m_resetOnLogon = value; }

  bool getResetOnLogout()
    { return m_resetOnLogout; }
  void setResetOnLogout ( bool value )
    { m_resetOnLogout = value; }

  bool getResetOnDisconnect()
    { return m_resetOnDisconnect; }
  void setResetOnDisconnect( bool value )
    { m_resetOnDisconnect = value; }

  bool getRefreshOnLogon()
    { return m_refreshOnLogon; }
  void setRefreshOnLogon( bool value )
    { m_refreshOnLogon = value; } 

  bool getMillisecondsInTimeStamp()
    { return (m_timestampPrecision == 3); }
  void setMillisecondsInTimeStamp ( bool value )
    { m_timestampPrecision = 3 * value; }

  int getTimestampPrecision()
    { return m_timestampPrecision; }
  void setTimestampPrecision(int precision)
    { m_timestampPrecision = ( precision >= 0 && precision <= 9 )
                             ? precision : m_timestampPrecision; }
  bool getPersistMessages()
    { return m_persistMessages; }
  void setPersistMessages ( bool value )
    { m_persistMessages = value; }

  bool getValidateLengthAndChecksum()
    { return m_validateLengthAndChecksum; }
  void setValidateLengthAndChecksum ( bool value )
    { m_validateLengthAndChecksum = value; }

  void setResponder( Responder* pR )
  {
    if( !checkSessionTime(UtcTimeStamp()) )
      reset();
    m_pResponder = pR;
  }

  bool send( Message& );
  template <typename B> bool HEAVYUSE tx( B b, int n )
  {
    m_state.SessionState::onOutgoing( b, n );
    return m_pResponder->send( b, n );
  }

  void next( const Message&, DataDictionary::MsgInfo&, const DataDictionary* sessionDD, const UtcTimeStamp& timeStamp, bool queued );
  void next( const Message& msg, const UtcTimeStamp& timeStamp, bool queued = false )
  {
    DataDictionary::MsgInfo msgInfo( m_defaultApplicationDD, m_sessionDD );
    next( msg, msgInfo, m_sessionDD, timeStamp, queued );
  }
  void next( Sg::sg_buf_t buf, const UtcTimeStamp& timeStamp, bool queued = false );
  void next( const std::string& message, const UtcTimeStamp& timeStamp, bool queued = false )
  {
    Sg::sg_buf_t buf = IOV_BUF_INITIALIZER( String::data(message),
                                            String::size(message) ); 
    next( buf, timeStamp, queued );
  }

  void next( const UtcTimeStamp& timeStamp );
  void next()
  { next( UtcTimeStamp() ); }

  void disconnect();

  int getExpectedSenderNum() { return m_state.getNextSenderMsgSeqNum(); }
  int getExpectedTargetNum() { return m_state.getNextTargetMsgSeqNum(); }

  Log* getLog() { return &m_state; }
  const MessageStore* getStore() { return m_state.store(); }
  Mutex* getMutex() { return &m_mutex; }

private:

  typedef std::map < SessionID, Session* > Sessions;
  typedef std::set < SessionID > SessionIDs;

  static bool addSession( Session& );
  static void removeSession( Session& );

  bool tx( const std::string& );
  bool sendRaw( Message&, int msgSeqNum = 0 );
  bool resend( Message& message );
  void persist( const Message&, const std::string& ) THROW_DECL( IOException );
  template <typename B> void persist( const Message& message, B buf, int n) {
    if( m_persistMessages )
    {
      MsgSeqNum msgSeqNum;
      message.getHeader().getField( msgSeqNum );
      m_state.set( msgSeqNum, buf, n );
    }
    m_state.incrNextSenderMsgSeqNum();
  }

  void insertSendingTime( Header& header,
                          const UtcTimeStamp& now = UtcTimeStamp () )
  {
    Message::Sequence::set_in_ordered(header, SendingTime::Pack(now,
                     m_fractionAllowed ? m_timestampPrecision : 0) );
  }

  void insertOrigSendingTime( Header& header,
                              const UtcTimeStamp& when = UtcTimeStamp () )
  {
    Message::Sequence::set_in_ordered(header, OrigSendingTime::Pack(when,
                     m_fractionAllowed ? m_timestampPrecision : 0) );
  }

  void fill( Header&, UtcTimeStamp now = UtcTimeStamp()  );
  DataDictionary::MsgInfo::Admin::Trait fill( Header&, int num, UtcTimeStamp now = UtcTimeStamp() );

  inline bool isGoodTime( const SendingTime& sendingTime,
                          const UtcTimeStamp& now )
  {
    if ( !m_checkLatency ) return true;
    return labs( now - sendingTime ) <= m_maxLatency;
  }
  inline bool checkSessionTime( const UtcTimeStamp& timeStamp )
  {
    UtcTimeStamp creationTime = m_state.getCreationTime();
    return m_sessionTime.isInSameRange( timeStamp, creationTime );
  }
  bool isTargetTooHigh( const MsgSeqNum& msgSeqNum )
  { return msgSeqNum > ( m_state.getNextTargetMsgSeqNum() ); }
  bool isTargetTooLow( const MsgSeqNum& msgSeqNum )
  { return msgSeqNum < ( m_state.getNextTargetMsgSeqNum() ); }
  bool isCorrectCompID( const SenderCompID& senderCompID,
                        const TargetCompID& targetCompID )
  {
    if( !m_checkCompId ) return true;

    return
      m_sessionID.getSenderCompID() == targetCompID
      && m_sessionID.getTargetCompID() == senderCompID;
  }
  bool shouldSendReset();

  bool validLogonState( const MsgType& msgType );
  bool validLogonState( DataDictionary::MsgInfo::Admin::Type adminType );
  void fromCallback( DataDictionary::MsgInfo::Admin::Type adminType, const Message& msg,
                     const SessionID& sessionID );

  void doBadTime( const Message& msg );
  void doBadCompID( const Message& msg );
  bool doPossDup( const Message& msg );
  bool doTargetTooLow( const Message& msg );
  void doTargetTooHigh( const Message& msg );

  struct OnNextQueued {
    Session& session;
    const UtcTimeStamp& tstamp;

    OnNextQueued(Session& s, const UtcTimeStamp& ts)
    : session(s), tstamp(ts) {}
    bool operator()(int num, Message&);
  };

  void nextQueued( const UtcTimeStamp& timeStamp );
  bool nextQueued( int num, const UtcTimeStamp& timeStamp );

  void nextLogon( const Message&, const UtcTimeStamp& timeStamp );
  void nextHeartbeat( const Message&, const UtcTimeStamp& timeStamp );
  void nextTestRequest( const Message&, const UtcTimeStamp& timeStamp );
  void nextLogout( const Message&, const UtcTimeStamp& timeStamp );
  void nextReject( const Message&, const UtcTimeStamp& timeStamp );
  void nextSequenceReset( const Message&, const UtcTimeStamp& timeStamp );
  void nextResendRequest( const Message&, const UtcTimeStamp& timeStamp );

  void generateLogon();
  void generateLogon( const Message& );
  void generateResendRequest( const BeginString&, const MsgSeqNum& );
  void generateSequenceReset( int, int );
  void generateHeartbeat();
  void generateHeartbeat( const Message& );
  void generateTestRequest( const std::string& );
  void generateReject( const Message&, int err, int field = 0 );
  void generateReject( const Message&, const std::string& );
  void generateBusinessReject( const Message&, int err, int field = 0 );
  void generateLogout( const std::string& text = "" );

  void populateRejectReason( Message&, int field, const std::string& );
  void populateRejectReason( Message&, const std::string& );

  bool verify( const Message& msg, DataDictionary::MsgInfo::Admin::Type adminType,
				   const UtcTimeStamp& now,
                                   const Header& header,
                                   bool  checkTooHigh, bool checkTooLow );
  bool verify( const Message& msg,
               bool checkTooHigh = true, bool checkTooLow = true )
  {
    const Header&  header = msg.getHeader();
    const MsgType* pType = FIELD_GET_PTR( header, MsgType );
    return verify( msg,
                   pType ? DataDictionary::MsgInfo::msgAdminType(*pType) : DataDictionary::MsgInfo::Admin::None,
                   UtcTimeStamp(), header, checkTooHigh, checkTooLow );
  }
  bool verify( const Message& msg, DataDictionary::MsgInfo::Admin::Type adminType,
               bool checkTooHigh = true, bool checkTooLow = true )
  {
    return verify( msg, adminType, UtcTimeStamp(), msg.getHeader(),
                   checkTooHigh, checkTooLow );
  }

  bool set( int s, const Message& m );
  bool get( int s, Message& m ) const;

  Application& m_application;
  const SessionID m_sessionID;
  TimeRange m_sessionTime;
  TimeRange m_logonTime;

  std::string m_senderDefaultApplVerID;
  std::string m_targetDefaultApplVerID;
  bool m_sendRedundantResendRequests;
  bool m_checkCompId;
  bool m_checkLatency;
  int m_maxLatency;
  bool m_resetOnLogon;
  bool m_resetOnLogout;
  bool m_resetOnDisconnect;
  bool m_refreshOnLogon;
  int  m_timestampPrecision;
  bool m_persistMessages;
  bool m_validateLengthAndChecksum;
  const bool m_fractionAllowed;
  int m_pollSpin;

  SessionState m_state;
  DataDictionaryProvider m_dataDictionaryProvider;
  const DataDictionary* m_sessionDD, *m_defaultApplicationDD;
  MessageStoreFactory& m_messageStoreFactory;
  LogFactory* m_pLogFactory;
  Responder* m_pResponder;
  Mutex m_mutex;
  FieldMap::allocator_type m_rcvAllocator, m_sendAllocator;
  std::string m_sendStringBuffer;

  static Sessions s_sessions;
  static SessionIDs s_sessionIDs;
  static Sessions s_registered;
  static Mutex s_mutex;

  class StringBufferFactory {
	std::string m_buffer;

	public:
		typedef std::string buffer_type;

		buffer_type& buffer(size_t sz) {
			m_buffer.clear();
			m_buffer.reserve(sz);
			return m_buffer;
		}
		const buffer_type& flush() {
			return m_buffer;
		}
  };

  StringBufferFactory s_buffer_factory;

  class SgBufferFactory {
	public:

		class SgBuffer {
			static const int UIO_ARENA_SIZE = 32768;
			static const int UIO_SIZE = 8;

			Sg::sg_buf_t	sg_[UIO_SIZE];
			std::size_t	sz_;
			int		n_;
			
			public:

			SgBuffer() : sz_(UIO_ARENA_SIZE), n_(0) {
				ALIGNED_ALLOC(IOV_BUF(sg_[0]), sz_ + 16, 16);
				IOV_LEN(sg_[0]) = 0;
			}
			~SgBuffer() {
				ALIGNED_FREE(IOV_BUF(sg_[0]));
			}

			SgBuffer& append(const char* s, std::size_t l) {
				Sg::sg_buf_ptr e = sg_ + n_;
#if defined(_MSC_VER) || (defined(__GNUC__) && (defined(__x86_64__) || defined(__i386__)))
				union {
					char* p;
					uint64_t* q;
				} dst = { (char*)IOV_BUF(*e) + IOV_LEN(*e) };
				union {
					const char* p;
					const uint64_t* q;
				} src = { s };
				dst.q[0] = src.q[0];
				if (l > sizeof(uint64_t)) {
					if (LIKELY(l <= sizeof(uint64_t[3]))) {
						dst.q[1] = src.q[1];
						dst.p += l - sizeof(uint64_t);
						src.p += l - sizeof(uint64_t);
						dst.q[0] = src.q[0];
					} else 
					/* if (LIKELY(l < 512) || n_ >= (UIO_SIZE - 2) */ { 
#ifdef __INTEL_COMPILER
						std::size_t i = ((l + 7) >> 3) - 1;
#pragma unroll(0)
						do { dst.q[i] = src.q[i]; } while(LIKELY(--i));
#else
						for (std::size_t i = 8; i < l; i += 8)
							*(uint64_t*)(dst.p + i)= *(const uint64_t*)(src.p + i);
#endif
					} /* else {
						IOV_BUF(sg_[++n_]) = (Sg::sg_ptr_t)src;
						IOV_LEN(sg_[n_++]) = l;
						IOV_BUF(sg_[n_]) = (char*)dst;
						IOV_LEN(sg_[n_]) = 0;
						return *this;
					} */
				}
#else
				::memcpy((char*)IOV_BUF(*e) + IOV_LEN(*e), src, l);
#endif
				IOV_LEN(*e) += (Sg::sg_size_t)l;	
				return *this;
			}
			SgBuffer& HEAVYUSE append(int field, int sz, const char* s, std::size_t l) {
				Sg::sg_buf_ptr e = sg_ + n_;
				char* p = (char*)IOV_BUF(*e);
				p += IOV_LEN(*e);
				Util::Tag::write(p, field, sz);
				p[sz] = '=';
				IOV_LEN(*e) += sz + 1;
				append(s, l);
				e = sg_ + n_;
				p = (char*)IOV_BUF(*e);
				p += IOV_LEN(*e)++;
				*p = '\001';
				return *this;
			}

			SgBuffer& reset(std::size_t sz) {
				if (sz > sz_) {
					ALIGNED_FREE(IOV_BUF(sg_[0]));
					ALIGNED_ALLOC(IOV_BUF(sg_[0]), sz_ + 16, 16);
					sz_ = sz;
				}
				n_ = 0;
				IOV_LEN(sg_[0]) = 0;
				return *this;
			}

                        char& operator[](size_t pos) {
                          Sg::sg_buf_ptr e = sg_;
                          for (int i = 0; UNLIKELY(i < n_) && pos > IOV_LEN(*e); e = sg_ + ++i) pos -= IOV_LEN(*e);
                          return *((char*)IOV_BUF(*e) + pos); // "undefined behavior" if out of range
                        }
			Sg::sg_buf_ptr iovec() const { return (Sg::sg_buf_ptr)sg_; }
			int elements() const { return n_ + 1; }
		};

		typedef SgBuffer buffer_type;

		buffer_type& buffer(size_t sz) {
			return m_buffer.reset(sz);
		}

	private:
		SgBuffer m_buffer;
  };

  SgBufferFactory sg_buffer_factory;

};
}

#endif //FIX_SESSION_H
