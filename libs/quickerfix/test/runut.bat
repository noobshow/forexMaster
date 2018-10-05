echo off
if "%1" == "" goto usage
if "%2" == "" goto usage
if "%3" == "" goto usage

if "%1" == "debug" goto debug:
if "%1" == "release" goto release:
goto usage

:debug
set DIR=%2\Debug
goto start

:release
set DIR=%2\Release
goto start

:start
%DIR%\ut.exe -p %3 -f cfg\ut.cfg
goto quit

:usage
echo "Usage: runut [release|debug] [Win32|x64] [port]"

:quit