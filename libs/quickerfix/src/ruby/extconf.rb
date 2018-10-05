require 'mkmf'

CONFIG["warnflags"].sub!('-Wdeprecated-declarations', '-Wno-deprecated-declarations -Wno-deprecated')
CONFIG["warnflags"].sub!('-Wall', '')
CONFIG["warnflags"].sub!('-Wextra', '')

if( ENV['CXX'] != nil )
  RbConfig::CONFIG['CC'] = ENV['CXX']
  CONFIG["CXX"] = ENV['CXX']
  CONFIG["LDSHARED"].gsub!("g++", ENV['CXX']) 
  CONFIG["LDSHARED"].gsub!("gcc", ENV['CXX']) 
  CONFIG["LDSHARED"].gsub!("cc", ENV['CXX'])
end

dir_config("quickfix", ["../..", "../../include", "../C++"], "../../lib")
have_library("quickfix", nil, nil, ENV['LIBS'])

warning_flags = ' -Wno-deprecated-declarations -Wno-deprecated -Wno-maybe-uninitialized -Wno-unused-but-set-variable'
$LDFLAGS << " " + ENV['LIBS']
$CXXFLAGS << " " + ENV['CXXFLAGS']
$CXXFLAGS << warning_flags

create_makefile("quickfix")

