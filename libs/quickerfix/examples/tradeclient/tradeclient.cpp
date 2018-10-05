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
#include "SocketInitiator.h"
#include "ThreadedSocketInitiator.h"
#ifdef HAVE_SSL
#include "ThreadedSSLSocketInitiator.h"
#include "SSLSocketInitiator.h"
#endif
#include "SessionSettings.h"
#include "Log.h"
#include "Application.h"
#include <string>
#include <iostream>
#include <fstream>

#include "../../src/getopt-repl.h"

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

  FIX::Initiator * initiator = 0;
  try
  {
    FIX::SessionSettings settings( file );

    Application application;
    // FIX::FileStoreFactory storeFactory( settings );
    FIX::NullStoreFactory storeFactory;
    FIX::ScreenLogFactory logFactory( settings );
#ifdef HAVE_SSL
    if (mode.compare("SSL") == 0 || mode.compare("SSL-MT") == 0)
      initiator = new FIX::ThreadedSSLSocketInitiator ( application, storeFactory, settings, logFactory );
    else if (mode.compare("SSL-ST") == 0)
      initiator = new FIX::SSLSocketInitiator ( application, storeFactory, settings, logFactory );
    else
#endif
    if (mode.compare("MT") == 0)
      initiator = new FIX::ThreadedSocketInitiator ( application, storeFactory, settings ); // logFactory );
    else
      initiator = new FIX::SocketInitiator( application, storeFactory, settings ); // logFactory );

    initiator->start();
    application.run();
    initiator->stop();
    delete initiator;

    return 0;
  }
  catch ( std::exception & e )
  {
    std::cout << e.what();
    delete initiator;
    return 1;
  }
}
