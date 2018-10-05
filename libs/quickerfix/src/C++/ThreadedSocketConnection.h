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

#ifndef FIX_THREADEDSOCKETCONNECTION_H
#define FIX_THREADEDSOCKETCONNECTION_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "Parser.h"
#include "Responder.h"
#include "SessionID.h"
#include <set>
#include <map>
#ifdef HAVE_VMA
#include <mellanox/vma_extra.h>
#endif

namespace FIX
{
class ThreadedSocketAcceptor;
class ThreadedSocketInitiator;
class Session;
class Application;
class Log;

/// Encapsulates a socket file descriptor (multi-threaded).
class ThreadedSocketConnection : Responder
{
public:
  typedef std::set<SessionID> Sessions;

  ThreadedSocketConnection(sys_socket_t s, Sessions sessions, Log* pLog );
  ThreadedSocketConnection( const SessionID&, sys_socket_t s,
                            const std::string& address, short port, 
                            Log* pLog,
                            const std::string& sourceAddress = "", short sourcePort = 0);
  virtual ~ThreadedSocketConnection() ;

  Session* getSession() const { return m_pSession; }
  sys_socket_t getSocket() const { return m_socket; }
  bool connect();
  void disconnect();
  bool read();

private:
  bool readMessage( Sg::sg_buf_t& msg );
  bool dispatchMessage( Sg::sg_buf_t& msg );
  void processStream();
  bool setSession( Sg::sg_buf_t& msg );

  bool send( const std::string& );
  bool send( Sg::sg_buf_ptr bufs, int n );

  sys_socket_t m_socket;
  char m_buffer[4 * BUFSIZ];

  UtcTimeStamp m_ts;
  std::string m_address;
  std::string m_msg;
  int m_port;
  std::string m_sourceAddress;
  int m_sourcePort;

  Log* m_pLog;
  Parser m_parser;
  Sessions m_sessions;
  Session* m_pSession;
  bool m_disconnect;
  int m_pollspin;

#ifdef HAVE_VMA
  class VmaPkts {
    union { 
      char data[sizeof(struct vma_packets_t) + sizeof(struct vma_packet_t) + sizeof(struct iovec) * 16];
      struct vma_packets_t packets;
    } m_value;
    vma_api_t* m_api;
    sys_socket_t m_socket;
    public:
    VmaPkts(vma_api_t* api, sys_socket_t s) : m_api(api), m_socket(s)
    { m_value.packets.n_packet_num = 0; }
    ~VmaPkts()
    { 
      if ( m_value.packets.n_packet_num )
        m_api->free_packets( m_socket, m_value.packets.pkts, m_value.packets.n_packet_num );
    }
    struct vma_packets_t& packets() { return m_value.packets; }
    bool recv()
    {
      int flags = MSG_VMA_ZCOPY_FORCE;
      return m_api->recvfrom_zcopy( m_socket, m_value.data, sizeof(m_value), &flags, NULL, NULL) > 0
             && LIKELY(flags & MSG_VMA_ZCOPY);
    }
  };

  vma_api_t* m_api;

  std::size_t processFragment(char* buf, std::size_t sz);
#endif
};
}

#endif //FIX_THREADEDSOCKETCONNECTION_H
