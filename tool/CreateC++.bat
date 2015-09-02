@echo off
set DIR=%~dp0
set PB_FOLDER=%DIR%\proto\
set CPP_FOLDER=%DIR%\cpps\
echo %PB_FOLDER%
echo %CPP_FOLDER%
setlocal enabledelayedexpansion
set "total_pkgs= "
for /f %%i in ('dir /B %PB_FOLDER%\*.proto') do ( 
	set total_pkgs=!total_pkgs! %%i

)
cd %PB_FOLDER%
%DIR%\protoc --cpp_out=%CPP_FOLDER% %total_pkgs%
echo "finished create [cpp] file & [h] file from [proto] file"
