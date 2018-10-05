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

#ifndef FIX_THREADEDSOCKETACCEPTOR_H
#define FIX_THREADEDSOCKETACCEPTOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Acceptor.h"
#include "ThreadedSocketConnection.h"
#include "Mutex.h"

namespace FIX
{
/// Threaded Socket implementation of Acceptor.
class ThreadedSocketAcceptor : public Acceptor
{
  friend class SocketConnection;
public:
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings& ) THROW_DECL( ConfigError );
  ThreadedSocketAcceptor( Application&, MessageStoreFactory&,
                          const SessionSettings&,
                          LogFactory& ) THROW_DECL( ConfigError );

  virtual ~ThreadedSocketAcceptor();

private:
  struct AcceptorThreadInfo
  {
    struct Attr
    {
      sys_socket_t m_socket;
      int m_port;
      size_t m_affinity;

      Attr( sys_socket_t socket = 0, int port = 0, size_t affinity = -1 )
      : m_socket( socket ), m_port( port ), m_affinity( affinity ) {}
    };

    AcceptorThreadInfo( ThreadedSocketAcceptor* pAcceptor, const Attr& attr )
    : m_pAcceptor( pAcceptor ), m_attr( attr ) {}

    ThreadedSocketAcceptor* m_pAcceptor;
    Attr m_attr;
  };

  struct ConnectionThreadInfo
  {
    ConnectionThreadInfo( ThreadedSocketAcceptor* pAcceptor, 
                          ThreadedSocketConnection* pConnection )
    : m_pAcceptor( pAcceptor ), m_pConnection( pConnection ) {}

    ThreadedSocketAcceptor* m_pAcceptor;
    ThreadedSocketConnection* m_pConnection;
  };

  bool readSettings( const SessionSettings& );

  typedef std::set < sys_socket_t >  Sockets;
  typedef std::set < SessionID > Sessions;
  typedef std::map < int, Sessions > PortToSessions;
  typedef std::map < sys_socket_t, AcceptorThreadInfo::Attr > SocketToAttr;
  typedef std::map < sys_socket_t, thread_id > SocketToThread;

  void onConfigure( const SessionSettings& ) THROW_DECL( ConfigError );
  void onInitialize( const SessionSettings& ) THROW_DECL( RuntimeError );

  void onStart();
  bool onPoll( double timeout );
  void onStop();

  void addThread(sys_socket_t s, thread_id t );
  void removeThread(sys_socket_t s );
  static THREAD_PROC socketAcceptorThread( void* p );
  static THREAD_PROC socketConnectionThread( void* p );

  Sockets m_sockets;
  PortToSessions m_portToSessions;
  SocketToAttr m_socketThreadAttr;
  SocketToThread m_threads;
  Mutex m_mutex;
};
/*! @} */
}

#endif //FIX_THREADEDSOCKETACCEPTOR_H
