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
call setup.bat %3
%DIR%\atrun -t run -s "%DIR%\at.exe -f cfg\at.cfg" -d . -c "ruby -I.\ Runner.rb 127.0.0.1 %3 definitions\server\fix40\*.def definitions\server\fix41\*.def definitions\server\fix42\*.def definitions\server\fix43\*.def definitions\server\fix44\*.def definitions\server\fix50\*.def definitions\server\fix50sp1\*.def definitions\server\fix50sp2\*.def" -i .\
goto quit

:usage
echo "Usage: runat [release|debug] [Win32|x64] [port]"

:quit