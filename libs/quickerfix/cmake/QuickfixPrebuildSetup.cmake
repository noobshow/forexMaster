# Needed to build examples, copy only for now as include/quickfix symlink breaks subsequent non-cmake builds

file(WRITE ${CMAKE_SOURCE_DIR}/src/C++/Config.h
        "/* Config.h.   Generated by CMake */\n"
)
if (HAVE_SSL)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_SSL           1\n"
  )
endif()
if (HAVE_TBB)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_TBB           1\n"
  )
  target_link_libraries(${PROJECT_NAME} tbbmalloc)
endif()
if (HAVE_EMX)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_EMX           1\n"
  )
endif()
if (HAVE_BOOST)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_BOOST         1\n"
  )
endif()
if (ENABLE_SSO)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_SSO "       ${ENABLE_SSO} "\n"
  )
endif()
if (ENABLE_THROW_DECL)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_THROW_DECL  1\n"
  )
endif()
if (ENABLE_DICTIONARY_FIELD_ORDER)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_DICTIONARY_FIELD_ORDER      1\n"
  )
endif()
if (HAVE_STD_UNIQUE_PTR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_STD_UNIQUE_PTR 1\n"
  )
endif()
if (ENABLE_FLAT_FIELDMAP)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_FLAT_FIELDMAP       1\n"
  )
endif()
if (ENABLE_RELAXED_ORDERING)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_RELAXED_ORDERING    1\n"
  )
endif()
if (HAVE_STD_SHARED_PTR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_STD_SHARED_PTR        1\n"
  )
endif()
if (HAVE_BOOST_SHARED_PTR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_BOOST_SHARED_PTR      1\n"
  )
endif()
if (HAVE_STD_TR1_SHARED_PTR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define HAVE_STD_TR1_SHARED_PTR    1\n"
  )
endif()
if (ENABLE_DEBUG_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_DEBUG_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_NEW_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_NEW_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_BOOST_POOL_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_POOL_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_BOOST_FAST_POOL__ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_FAST_POOL_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_POOL_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_POOL_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_MT_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_MT_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_BITMAP_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_BITMAP_ALLOCATOR    1\n"
  )
endif()
if (ENABLE_TBB_ALLOCATOR)
  file(APPEND ${CMAKE_SOURCE_DIR}/src/C++/Config.h
    "#define ENABLE_TBB_ALLOCATOR    1\n"
  )
endif()

add_custom_target(QUICKFIX_HEADERS_COPY ALL 
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Acceptor.h ${CMAKE_SOURCE_DIR}/include/quickfix/Acceptor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Application.h ${CMAKE_SOURCE_DIR}/include/quickfix/Application.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/AtomicCount.h ${CMAKE_SOURCE_DIR}/include/quickfix/AtomicCount.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Config.h ${CMAKE_SOURCE_DIR}/include/quickfix/Config.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Container.h ${CMAKE_SOURCE_DIR}/include/quickfix/Container.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/DatabaseConnectionID.h ${CMAKE_SOURCE_DIR}/include/quickfix/DatabaseConnectionID.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/DatabaseConnectionPool.h ${CMAKE_SOURCE_DIR}/include/quickfix/DatabaseConnectionPool.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/DataDictionary.h ${CMAKE_SOURCE_DIR}/include/quickfix/DataDictionary.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/DataDictionaryProvider.h ${CMAKE_SOURCE_DIR}/include/quickfix/DataDictionaryProvider.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Dictionary.h ${CMAKE_SOURCE_DIR}/include/quickfix/Dictionary.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/dirent_windows.h ${CMAKE_SOURCE_DIR}/include/quickfix/dirent_windows.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/DOMDocument.h ${CMAKE_SOURCE_DIR}/include/quickfix/DOMDocument.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Event.h ${CMAKE_SOURCE_DIR}/include/quickfix/Event.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Exceptions.h ${CMAKE_SOURCE_DIR}/include/quickfix/Exceptions.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Field.h ${CMAKE_SOURCE_DIR}/include/quickfix/Field.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FieldConvertors.h ${CMAKE_SOURCE_DIR}/include/quickfix/FieldConvertors.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FieldMap.h ${CMAKE_SOURCE_DIR}/include/quickfix/FieldMap.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FieldNumbers.h ${CMAKE_SOURCE_DIR}/include/quickfix/FieldNumbers.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Fields.h ${CMAKE_SOURCE_DIR}/include/quickfix/Fields.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FieldTypes.h ${CMAKE_SOURCE_DIR}/include/quickfix/FieldTypes.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FileLog.h ${CMAKE_SOURCE_DIR}/include/quickfix/FileLog.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FileStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/FileStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FixExtensions.h ${CMAKE_SOURCE_DIR}/include/quickfix/FixExtensions.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FixFieldNumbers.h ${CMAKE_SOURCE_DIR}/include/quickfix/FixFieldNumbers.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FixFields.h ${CMAKE_SOURCE_DIR}/include/quickfix/FixFields.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FixString.h ${CMAKE_SOURCE_DIR}/include/quickfix/FixString.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FixValues.h ${CMAKE_SOURCE_DIR}/include/quickfix/FixValues.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/FlexLexer.h ${CMAKE_SOURCE_DIR}/include/quickfix/FlexLexer.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Group.h ${CMAKE_SOURCE_DIR}/include/quickfix/Group.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/HtmlBuilder.h ${CMAKE_SOURCE_DIR}/include/quickfix/HtmlBuilder.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/HttpConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/HttpConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/HttpMessage.h ${CMAKE_SOURCE_DIR}/include/quickfix/HttpMessage.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/HttpParser.h ${CMAKE_SOURCE_DIR}/include/quickfix/HttpParser.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/HttpServer.h ${CMAKE_SOURCE_DIR}/include/quickfix/HttpServer.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ItemAllocator.h ${CMAKE_SOURCE_DIR}/include/quickfix/ItemAllocator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Initiator.h ${CMAKE_SOURCE_DIR}/include/quickfix/Initiator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Log.h ${CMAKE_SOURCE_DIR}/include/quickfix/Log.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Message.h ${CMAKE_SOURCE_DIR}/include/quickfix/Message.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MessageCracker.h ${CMAKE_SOURCE_DIR}/include/quickfix/MessageCracker.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MessageSorters.h ${CMAKE_SOURCE_DIR}/include/quickfix/MessageSorters.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MessageStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/MessageStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Mutex.h ${CMAKE_SOURCE_DIR}/include/quickfix/Mutex.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MySQLConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/MySQLConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MySQLLog.h ${CMAKE_SOURCE_DIR}/include/quickfix/MySQLLog.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/MySQLStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/MySQLStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/NullStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/NullStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/OdbcConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/OdbcConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/OdbcLog.h ${CMAKE_SOURCE_DIR}/include/quickfix/OdbcLog.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/OdbcStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/OdbcStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Parser.h ${CMAKE_SOURCE_DIR}/include/quickfix/Parser.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/PostgreSQLConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/PostgreSQLConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/PostgreSQLLog.h ${CMAKE_SOURCE_DIR}/include/quickfix/PostgreSQLLog.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/PostgreSQLStore.h ${CMAKE_SOURCE_DIR}/include/quickfix/PostgreSQLStore.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/PUGIXML_DOMDocument.h ${CMAKE_SOURCE_DIR}/include/quickfix/PUGIXML_DOMDocument.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Queue.h ${CMAKE_SOURCE_DIR}/include/quickfix/Queue.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Responder.h ${CMAKE_SOURCE_DIR}/include/quickfix/Responder.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Session.h ${CMAKE_SOURCE_DIR}/include/quickfix/Session.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SessionFactory.h ${CMAKE_SOURCE_DIR}/include/quickfix/SessionFactory.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SessionID.h ${CMAKE_SOURCE_DIR}/include/quickfix/SessionID.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SessionSettings.h ${CMAKE_SOURCE_DIR}/include/quickfix/SessionSettings.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SessionState.h ${CMAKE_SOURCE_DIR}/include/quickfix/SessionState.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Settings.h ${CMAKE_SOURCE_DIR}/include/quickfix/Settings.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketAcceptor.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketAcceptor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketConnector.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketConnector.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketInitiator.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketInitiator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketMonitor.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketMonitor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SocketServer.h ${CMAKE_SOURCE_DIR}/include/quickfix/SocketServer.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SSLSocketAcceptor.h ${CMAKE_SOURCE_DIR}/include/quickfix/SSLSocketAcceptor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SSLSocketConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/SSLSocketConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/SSLSocketInitiator.h ${CMAKE_SOURCE_DIR}/include/quickfix/SSLSocketInitiator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/stdafx.h ${CMAKE_SOURCE_DIR}/include/quickfix/stdafx.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/strptime.h ${CMAKE_SOURCE_DIR}/include/quickfix/strptime.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSocketAcceptor.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSocketAcceptor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSocketConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSocketConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSocketInitiator.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSocketInitiator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSSLSocketAcceptor.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSSLSocketAcceptor.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSSLSocketConnection.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSSLSocketConnection.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/ThreadedSSLSocketInitiator.h ${CMAKE_SOURCE_DIR}/include/quickfix/ThreadedSSLSocketInitiator.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/TimeRange.h ${CMAKE_SOURCE_DIR}/include/quickfix/TimeRange.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Utility.h ${CMAKE_SOURCE_DIR}/include/quickfix/Utility.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/UtilitySSL.h ${CMAKE_SOURCE_DIR}/include/quickfix/UtilitySSL.h
COMMAND ${CMAKE_COMMAND} -E copy_if_different ${CMAKE_SOURCE_DIR}/src/C++/Values.h ${CMAKE_SOURCE_DIR}/include/quickfix/Values.h

COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix40
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix40 ${CMAKE_SOURCE_DIR}/include/quickfix/fix40/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix41
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix41 ${CMAKE_SOURCE_DIR}/include/quickfix/fix41/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix42
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix42 ${CMAKE_SOURCE_DIR}/include/quickfix/fix42/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix43
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix43 ${CMAKE_SOURCE_DIR}/include/quickfix/fix43/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix44
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix44 ${CMAKE_SOURCE_DIR}/include/quickfix/fix44/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix50 ${CMAKE_SOURCE_DIR}/include/quickfix/fix50/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp1
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix50sp1 ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp1/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp2
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fix50sp2 ${CMAKE_SOURCE_DIR}/include/quickfix/fix50sp2/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/fixt11
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fixt11 ${CMAKE_SOURCE_DIR}/include/quickfix/fixt11/
COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/include/quickfix/wx
COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/src/C++/fixt11 ${CMAKE_SOURCE_DIR}/include/quickfix/wx/
)
