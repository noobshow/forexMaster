if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(latency Application.cpp latency.cpp ${applink_SOURCE})

target_include_directories(latency PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include/quickfix ${CMAKE_SOURCE_DIR})


target_link_libraries(latency ${PROJECT_NAME} ${RT_LIBS})
if(HAVE_BOOST)
  target_link_libraries(latency boost_system)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(latency_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:latency> ${CMAKE_SOURCE_DIR}/bin/latency)
else()
set_target_properties(latency PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/bin/debug/latency/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/bin/release/latency/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/bin/release/latency/)
endif()                   

