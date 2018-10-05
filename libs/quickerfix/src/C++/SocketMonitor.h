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

#ifndef FIX_SOCKETMONITOR_H
#define FIX_SOCKETMONITOR_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#ifdef _MSC_VER
#include <Winsock2.h>
typedef int socklen_t;
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif

#include "Utility.h"
#include <set>
#include <queue>
#include <time.h>

namespace FIX
{
/// Monitors events on a collection of sockets.
class SocketMonitor
{
public:
  class Strategy;

  SocketMonitor( int timeout = 0 );
  virtual ~SocketMonitor();

  bool addConnect(sys_socket_t socket );
  bool addRead(sys_socket_t socket );
  bool addWrite(sys_socket_t socket );
  bool drop(sys_socket_t socket );
  void signal(sys_socket_t socket );
  void unsignal(sys_socket_t socket );
  void block( Strategy& strategy, bool poll = 0, double timeout = 0.0 );

  size_t numSockets() 
  { return m_readSockets.size() - 1; }

private:
  typedef std::set < sys_socket_t > Sockets;
  typedef std::queue < sys_socket_t > Queue;

  void setsockopt();
  bool bind();
  bool listen();
  void buildSet( const Sockets&, fd_set& );
  inline timeval* getTimeval( bool poll, double timeout );
  inline bool sleepIfEmpty( bool poll );

  void processReadSet( Strategy&, fd_set& );
  void processWriteSet( Strategy&, fd_set& );
  void processExceptSet( Strategy&, fd_set& );

  int m_timeout;
  timeval m_timeval;
#ifndef SELECT_DECREMENTS_TIME
  clock_t m_ticks;
#endif

  sys_socket_t m_signal;
  sys_socket_t m_interrupt;
  Sockets m_connectSockets;
  Sockets m_readSockets;
  Sockets m_writeSockets;
  Queue m_dropped;

public:
  class Strategy
  {
  public:
    virtual ~Strategy()
    {}
    virtual void onConnect( SocketMonitor&, sys_socket_t socket ) = 0;
    virtual void onEvent( SocketMonitor&, sys_socket_t socket ) = 0;
    virtual void onWrite( SocketMonitor&, sys_socket_t socket ) = 0;
    virtual void onError( SocketMonitor&, sys_socket_t socket ) = 0;
    virtual void onError( SocketMonitor& ) = 0;
    virtual void onTimeout( SocketMonitor& )
  {}}
  ;
};
}

#endif //FIX_SOCKETMONITOR_H
