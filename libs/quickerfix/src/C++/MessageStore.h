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

#ifndef FIX_MESSAGESTORE_H
#define FIX_MESSAGESTORE_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Message.h"
#include <map>
#include <vector>
#include <string>

namespace FIX
{
class MessageStore;

/**
 * This interface must be implemented to create a MessageStore.
 */
class MessageStoreFactory
{
public:
  virtual ~MessageStoreFactory() {}
  virtual MessageStore* create( const SessionID& ) = 0;
  virtual void destroy( MessageStore* ) = 0;
};

/**
 * Creates a memory based implementation of MessageStore.
 *
 * This will lose all data on process termination. This class should only
 * be used for test applications, never in production.
 */
class MemoryStoreFactory : public MessageStoreFactory
{
public:
  MessageStore* create( const SessionID& );
  void destroy( MessageStore* );
};

/**
 * This interface must be implemented to store and retrieve messages and
 * sequence numbers.
 */
class MessageStore
{
  UtcTimeStamp m_creationTime;

public:
  virtual ~MessageStore() {}

  virtual bool set( int, const std::string& ) THROW_DECL( IOException ) = 0;
  virtual bool set( int msgSeqNum, Sg::sg_buf_ptr b, int n )
  { return set(msgSeqNum, Sg::toString(b, n)); }
  virtual void get( int, int, std::vector < std::string > & ) const
    THROW_DECL( IOException ) = 0;

  virtual int getNextSenderMsgSeqNum() const THROW_DECL( IOException ) = 0;
  virtual int getNextTargetMsgSeqNum() const THROW_DECL( IOException ) = 0;
  virtual void setNextSenderMsgSeqNum( int ) THROW_DECL( IOException ) = 0;
  virtual void setNextTargetMsgSeqNum( int ) THROW_DECL( IOException ) = 0;
  virtual void incrNextSenderMsgSeqNum() THROW_DECL( IOException ) = 0;
  virtual void incrNextTargetMsgSeqNum() THROW_DECL( IOException ) = 0;

  inline UtcTimeStamp NOTHROW getCreationTime() const THROW_DECL( IOException )
  { return m_creationTime; }
  inline UtcTimeStamp NOTHROW setCreationTime( const UtcTimeStamp& creationTime )
  { m_creationTime.set( creationTime ); return m_creationTime; }

  virtual void reset() THROW_DECL( IOException ) = 0;
  virtual void refresh() THROW_DECL( IOException ) = 0;
};
/*! @} */

/**
 * Memory based implementation of MessageStore.
 *
 * This will lose all data on process terminition. This class should only
 * be used for test applications, never in production.
 */
class MemoryStore : public MessageStore
{
public:
  MemoryStore() : m_nextSenderMsgSeqNum( 1 ), m_nextTargetMsgSeqNum( 1 ) {}

  using MessageStore::set;
  bool set( int, const std::string& ) THROW_DECL( IOException );

  void get( int, int, std::vector < std::string > & ) const
    THROW_DECL( IOException );

  int getNextSenderMsgSeqNum() const THROW_DECL( IOException )
  { return m_nextSenderMsgSeqNum; }
  int getNextTargetMsgSeqNum() const THROW_DECL( IOException )
  { return m_nextTargetMsgSeqNum; }
  void setNextSenderMsgSeqNum( int value ) THROW_DECL( IOException )
  { m_nextSenderMsgSeqNum = value; }
  void setNextTargetMsgSeqNum( int value ) THROW_DECL( IOException )
  { m_nextTargetMsgSeqNum = value; }
  void incrNextSenderMsgSeqNum() THROW_DECL( IOException )
  { ++m_nextSenderMsgSeqNum; }
  void incrNextTargetMsgSeqNum() THROW_DECL( IOException )
  { ++m_nextTargetMsgSeqNum; }

  void reset() THROW_DECL( IOException )
  {
    m_nextSenderMsgSeqNum = 1; m_nextTargetMsgSeqNum = 1;
    m_messages.clear(); setCreationTime( UtcTimeStamp());
  }
  void refresh() THROW_DECL( IOException ) {}

private:
  typedef std::map < int, std::string > Messages;

  Messages m_messages;
  int m_nextSenderMsgSeqNum;
  int m_nextTargetMsgSeqNum;
};

class MessageStoreFactoryExceptionWrapper
{
private:
  MessageStoreFactory* m_pFactory;
public:
  MessageStoreFactoryExceptionWrapper( MessageStoreFactory* pFactory )
  : m_pFactory( pFactory ) {}

  MessageStore* create( const SessionID&, bool&, ConfigError& );
  void destroy( MessageStore* );
};

class MessageStoreExceptionWrapper
{
private:
  MessageStore* m_pStore;
public:
  MessageStoreExceptionWrapper( MessageStore* pStore ) : m_pStore( pStore ) {}
  ~MessageStoreExceptionWrapper() { delete m_pStore; }

  bool set( int, const std::string&, bool&, IOException& );
  void get( int, int, std::vector < std::string > &, bool&, IOException& ) const;
  int getNextSenderMsgSeqNum( bool&, IOException& ) const;
  int getNextTargetMsgSeqNum( bool&, IOException& ) const;
  void setNextSenderMsgSeqNum( int, bool&, IOException& );
  void setNextTargetMsgSeqNum( int, bool&, IOException& );
  void incrNextSenderMsgSeqNum( bool&, IOException& );
  void incrNextTargetMsgSeqNum( bool&, IOException& );

  UtcTimeStamp getCreationTime( bool&, IOException& );

  void reset( bool&, IOException& );
  void refresh( bool&, IOException& );
};
}

#endif //FIX_MESSAGESTORE_H
