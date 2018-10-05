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
#include <poll.h>
#endif

#include "ThreadedSocketConnection.h"
#include "ThreadedSocketAcceptor.h"
#include "ThreadedSocketInitiator.h"
#include "Session.h"
#include "Utility.h"

namespace FIX
{
ThreadedSocketConnection::ThreadedSocketConnection
(sys_socket_t s, Sessions sessions, Log* pLog )
: m_socket( s ), m_pLog( pLog ),
  m_sessions( sessions ), m_pSession( 0 ),
  m_disconnect( false ), m_pollspin( 0 )
{
#ifdef HAVE_VMA
  m_api = vma_get_api();
  if ( m_api )
  { // make sure this socket is offloaded
    uint16_t len;
    if ( m_api->get_socket_network_header( s, NULL, &len ) == -1 && errno == EINVAL ) m_api = NULL;
  }
#endif
}

ThreadedSocketConnection::ThreadedSocketConnection
( const SessionID& sessionID, sys_socket_t s,
  const std::string& address, short port, 
  Log* pLog,
  const std::string& sourceAddress, short sourcePort )
  : m_socket( s ), m_address( address ), m_port( port ),
    m_sourceAddress( sourceAddress ), m_sourcePort( sourcePort ),
    m_pLog( pLog ),
    m_pSession( Session::lookupSession( sessionID ) ),
    m_disconnect( false ), m_pollspin( 0 )
{
#ifdef HAVE_VMA
  m_api = vma_get_api();
  if ( m_api )
  { // make sure this socket is offloaded
    uint16_t len;
    if ( m_api->get_socket_network_header( s, NULL, &len ) == -1 && errno == EINVAL ) m_api = NULL;
  }
#endif
  if ( m_pSession ) m_pSession->setResponder( this );
}

ThreadedSocketConnection::~ThreadedSocketConnection()
{
  if ( m_pSession )
  {
    m_pSession->setResponder( 0 );
    Session::unregisterSession( m_pSession->getSessionID() );
  }
}

bool ThreadedSocketConnection::send( const std::string& msg )
{
  return socket_send( m_socket, String::data(msg), String::size(msg) ) > 0;
}

bool ThreadedSocketConnection::send( Sg::sg_buf_ptr bufs, int n )
{
  DTRACE_AUTO(probe, quickfix, threaded__socket__tx__start, threaded__socket__tx__end);
  return Sg::send(m_socket, bufs, n) > 0;
}

bool ThreadedSocketConnection::connect()
{
  // do the bind in the thread as name resolution may block
  if ( !m_sourceAddress.empty() || m_sourcePort )
    socket_bind( m_socket, String::c_str(m_sourceAddress), m_sourcePort );

  return socket_connect(getSocket(), String::c_str(m_address), m_port) >= 0;
}

void ThreadedSocketConnection::disconnect()
{
  m_disconnect = true;
  socket_close( m_socket );
  m_parser.reset();
}

inline bool HEAVYUSE ThreadedSocketConnection::readMessage( Sg::sg_buf_t& msg )
{
  while( true )
  {
    try
    {
      DTRACE_AUTO(probe, quickfix, parse_start, parse_end);
      if( m_parser.parse() )
      {
        m_parser.retrieve( msg );
        return true;
      }
      break;
    }
    catch ( MessageParseError& e )
    {
      if( m_pLog )
      {
        m_pLog->onEvent( e.what() );
      }
    }
  }
  return false;
}

inline bool HEAVYUSE  ThreadedSocketConnection::dispatchMessage( Sg::sg_buf_t& buf )
{
  if ( !m_pSession )
  {
    if ( !setSession( buf ) )
    { disconnect(); return false; }
  }
  try
  {
    m_ts.setCurrent();
    m_pSession->next( buf, m_ts );
  }
  catch( InvalidMessage& )
  {
    if( !m_pSession->isLoggedOn() )
    {
      disconnect();
      return false;
    }
  }
  return true;
}

void HEAVYUSE HOTSECTION  ThreadedSocketConnection::processStream()
{
  Sg::sg_buf_t buf;
  while( readMessage( buf ) && dispatchMessage( buf ) );
}

#ifdef HAVE_VMA
std::size_t HEAVYUSE HOTSECTION  ThreadedSocketConnection::processFragment(char* p, std::size_t sz)
{
  DTRACE_AUTO(probe, quickfix, vma__fragment__start, vma__fragment__end);

  std::size_t parsed = 0;
  while( parsed < sz )
  {
    try
    {
      DTRACE_PROBE(quickfix, parse_start);
      std::size_t l = m_parser.parse(p, sz);
      DTRACE_PROBE(quickfix, parse_end);
      if( l )
      {
        Sg::sg_buf_t buf = IOV_BUF_INITIALIZER( p, l );
        p += l;
        parsed += l;
        if ( !dispatchMessage( buf ) ) return 0;
      }
      else
        break;
    }
    catch ( MessageParseError& e )
    {
      if( m_pLog )
      {
        m_pLog->onEvent( e.what() );
      }
    }
  }
  return parsed;
}
#endif

bool HEAVYUSE HOTSECTION ThreadedSocketConnection::read()
{
  try
  {
restart:
    int result, timeout, busy = m_pollspin;
    // Wait for input (1 second timeout)
    do {
      timeout = (busy-- > 0) ? 0 : 1000;
#ifndef _MSC_VER
      struct pollfd pfd = { m_socket, POLLIN | POLLPRI, 0 };
      result = poll(&pfd, 1, timeout);
#else
      struct pollfd pfd = { (SOCKET)m_socket, POLLIN, 0 };
      result = WSAPoll(&pfd, 1, timeout);
#endif
    } while( result == 0 && timeout == 0 );

    if( result > 0 ) // Something to read
    {
      DTRACE_AUTO(probe, quickfix, threaded__socket__receive__start, threaded__socket__receive__end);

      // We can read without blocking
#ifdef HAVE_VMA
      if (LIKELY(m_api != NULL && !m_parser.pending()))
      {
        VmaPkts u( m_api, m_socket );
	if ( u.recv() )
        {
          size_t n, f;
          vma_packet_t* pkt = &u.packets().pkts[0];
          for (n = 0; n < u.packets().n_packet_num; n++)
          {
            for (f = 0; f < pkt->sz_iov; f++)
            {
              std::size_t l = processFragment((char*)pkt->iov[f].iov_base, pkt->iov[f].iov_len);
              if (LIKELY(pkt->iov[f].iov_len == l))
                continue;

              // discontinuity, copy remaining fragments to the receive buffer and go back to the standard path
              m_parser.addToStream((char*)pkt->iov[f].iov_base + l, pkt->iov[f].iov_len - l);
              f++;
              do {
                for( ; f < pkt->sz_iov; f++ ) {
                  m_parser.addToStream( (char*)pkt->iov[f].iov_base, pkt->iov[f].iov_len ); 
                } 
                processStream();
                pkt = (vma_packet_t*)&pkt->iov[f]; // as per vma/sock/sockinfo_tcp.cpp
                f = 0;
              } while( ++n < u.packets().n_packet_num );
  
              goto restart;
            }
            pkt = (vma_packet_t*)&pkt->iov[f];
          }
          return true;
        }
        // either unable to do zerocopy or socket error, retry
      }
#endif
      Sg::sg_buf_t buf = m_parser.buffer();
      ssize_t size = recv( m_socket, IOV_BUF(buf), IOV_LEN(buf), 0 );
      if ( LIKELY(size > 0) )
      {
        m_parser.advance( size );
        processStream();
      }
      else
        throw SocketRecvFailed( size );
    }
    else if( result == 0 && m_pSession ) // Timeout
    {
      m_pSession->next();
    }
    else if( result < 0 ) // Error
    {
      throw SocketRecvFailed( result );
    }
    return true;
  }
  catch ( SocketRecvFailed& e )
  {
    if( m_disconnect )
      return false;

    if( m_pSession )
    {
      m_pSession->getLog()->onEvent( e.what() );
      m_pSession->disconnect();
    }
    else
    {
      disconnect();
    }

    return false;
  }
}

bool ThreadedSocketConnection::setSession( Sg::sg_buf_t& msg )
{
  m_pSession = Session::lookupSession( msg, true );
  if ( !m_pSession ) 
  {
    if( m_pLog )
    {
      m_pLog->onEvent( "Session not found for incoming message: " + Sg::toString(msg) );
      m_pLog->onIncoming( &msg, 1 );
    }
    return false;
  }

  SessionID sessionID = m_pSession->getSessionID();
  m_pSession = 0;

  // see if the session frees up within 5 seconds
  for( int i = 1; i <= 5; i++ )
  {
    if( !Session::isSessionRegistered( sessionID ) )
      m_pSession = Session::registerSession( sessionID );
    if( m_pSession ) break;
    process_sleep( 1 );
  }

  if ( !m_pSession ) 
    return false;
  if ( m_sessions.find(m_pSession->getSessionID()) == m_sessions.end() )
    return false;

  m_pSession->setResponder( this );
  m_pollspin = m_pSession->getPollSpin();
  return true;
}

} // namespace FIX
