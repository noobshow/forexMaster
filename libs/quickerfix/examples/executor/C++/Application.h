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

#ifndef EXECUTOR_APPLICATION_H
#define EXECUTOR_APPLICATION_H

#include "Application.h"
#include "MessageCracker.h"
#include "Values.h"
#include "Utility.h"
#include "Mutex.h"

#include "fix40/NewOrderSingle.h"
#include "fix41/NewOrderSingle.h"
#include "fix42/NewOrderSingle.h"
#include "fix43/NewOrderSingle.h"
#include "fix44/NewOrderSingle.h"
#include "fix50/NewOrderSingle.h"

#include "fix42/ExecutionReport.h"

class Application
: public FIX::Application, public FIX::MessageCracker
{
  template <typename F> static inline F& ref(FIX::FieldMap& f)
  { 
    f.setField( F(), false ); // make sure it's present first
    return const_cast<F&>( static_cast<const F&>( f.getFieldRef( F::Pack::Tag ) ) );
  }
public:
  Application()
  : m_orderID(0), m_execID(0),
    answer42( FIX::OrderID( genOrderID() ),
              FIX::ExecID( genExecID() ),
              FIX::ExecTransType( FIX::ExecTransType_NEW ),
              FIX::ExecType( FIX::ExecType_FILL ),
              FIX::OrdStatus( FIX::OrdStatus_FILLED ),
              FIX::Symbol( "" ),
              FIX::Side( FIX::Side_BUY ),
              FIX::LeavesQty( 0 ),
              FIX::CumQty( 0 ),
              FIX::AvgPx( 0 ) ),
    symbol42( ref<FIX::Symbol>( answer42 ) ), clOrdID42( ref<FIX::ClOrdID>( answer42 ) ),
    price42( ref<FIX::Price>( answer42 ) ), orderQty42( ref<FIX::OrderQty>( answer42 ) )
  {}

  // Application overloads
  void onCreate( const FIX::SessionID& );
  void onLogon( const FIX::SessionID& sessionID );
  void onLogout( const FIX::SessionID& sessionID );
  void toAdmin( FIX::Message&, const FIX::SessionID& );
  void toApp( FIX::Message&, const FIX::SessionID& )
    THROW_DECL( FIX::DoNotSend );
  void fromAdmin( const FIX::Message&, const FIX::SessionID& )
    THROW_DECL( FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::RejectLogon );
  void fromApp( const FIX::Message& message, const FIX::SessionID& sessionID )
    THROW_DECL( FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType );

  // MessageCracker overloads
  void onMessage( const FIX40::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX41::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX42::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX43::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX44::NewOrderSingle&, const FIX::SessionID& );
  void onMessage( const FIX50::NewOrderSingle&, const FIX::SessionID& );

  std::string genOrderID() {
    std::stringstream stream;
    stream << ++m_orderID;
    return stream.str();
  }
  std::string genExecID() {
    std::stringstream stream;
    stream << ++m_execID;
    return stream.str();
  }
private:
  int m_orderID, m_execID;
  FIX42::ExecutionReport answer42;
  FIX::Symbol& symbol42;
  FIX::ClOrdID& clOrdID42;
  FIX::Price& price42;
  FIX::OrderQty& orderQty42;
};

#endif
