@echo off
set DIR=%~dp0
set TOOL=%DIR%
set PBS=%DIR%\pbs\
set PB_FOLDER=%DIR%\proto\
setlocal enabledelayedexpansion
cd %PB_FOLDER%
for /r %%i in (*.proto) do ( 
set pbname=%%i 
      set pbname=!pbname:~0,-5!b
      %TOOL%protoc -I %PB_FOLDER% --descriptor_set_out=!pbname! %%i 
)
echo "finished create [pb] file from [proto] file"
