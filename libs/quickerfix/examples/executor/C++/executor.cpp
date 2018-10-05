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
#pragma warning( disable : 4503 4355 4786 )
#else
#include "config.h"
#endif

#include "NullStore.h"
#include "FileStore.h"
#include "ThreadedSocketAcceptor.h"
#include "SocketAcceptor.h"
#ifdef HAVE_SSL
#include "ThreadedSSLSocketAcceptor.h"
#include "SSLSocketAcceptor.h"
#endif
#include "Log.h"
#include "SessionSettings.h"
#include "Application.h"
#include <string>
#include <iostream>
#include <fstream>

void wait()
{
  std::cout << "Type Ctrl-C to quit" << std::endl;
  while(true)
  {
    FIX::process_sleep(1);
  }
}

int main( int argc, char** argv )
{
  if ( argc < 2 )
  {
    std::cout << "usage: " << argv[ 0 ]
    << " FILE." << std::endl;
    return 0;
  }
  std::string file = argv[ 1 ];

  std::string mode;
  if (argc > 2)
  {
    mode.assign(argv[2]);
  }

  FIX::Acceptor * acceptor = 0;
  try
  {
    FIX::SessionSettings settings( file );

    Application application;
    // FIX::FileStoreFactory storeFactory( settings );
    FIX::NullStoreFactory storeFactory;
    FIX::ScreenLogFactory logFactory( settings );
#ifdef HAVE_SSL
    if (mode.compare("SSL") == 0 || mode.compare("SSL-MT") == 0)
      acceptor = new FIX::ThreadedSSLSocketAcceptor ( application, storeFactory, settings, logFactory );
    else if (mode.compare("SSL-ST") == 0)
      acceptor = new FIX::SSLSocketAcceptor ( application, storeFactory, settings, logFactory );
    else
#endif
    if (mode.compare("MT") == 0)
      acceptor = new FIX::ThreadedSocketAcceptor ( application, storeFactory, settings ); // logFactory );
    else
      acceptor = new FIX::SocketAcceptor ( application, storeFactory, settings ); // , logFactory );

    acceptor->start();
    wait();
    acceptor->stop();
    delete acceptor;
    return 0;
  }
  catch ( std::exception & e )
  {
    std::cout << e.what() << std::endl;
    delete acceptor;
    return 1;
  }
}
