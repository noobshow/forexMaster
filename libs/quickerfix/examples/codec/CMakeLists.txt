if (HAVE_SSL AND WIN32)
set(applink_SOURCE ${OPENSSL_INCLUDE_DIR}/openssl/applink.c)
endif()

add_executable(codec codec.cpp ${applink_SOURCE})

target_include_directories(codec PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/include/quickfix ${CMAKE_SOURCE_DIR})
add_definitions(-DQUICKERFIX)

target_link_libraries(codec ${PROJECT_NAME} ${RT_LIBS})
if(HAVE_BOOST)
  target_link_libraries(codec boost_system)
endif()

if (NOT WIN32)
ADD_CUSTOM_TARGET(codec_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:codec> ${CMAKE_SOURCE_DIR}/bin/codec)
else()
set_target_properties(codec PROPERTIES
                      RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/bin/debug/codec/
                      RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/bin/release/codec/
                      RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${CMAKE_SOURCE_DIR}/bin/release/codec/)
endif()                   

