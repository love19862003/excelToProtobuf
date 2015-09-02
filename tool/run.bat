@echo off
set DIR=%~dp0
setlocal enabledelayedexpansion
set PB_PATH=%DIR%\proto\
echo PB_PATH:%PB_PATH%
set LUA_PATH=%DIR%\lua\
echo LUA_PATH:%LUA_PATH%
set CPP_PATH=%DIR%\cpps\
echo CPP_PATH:%CPP_PATH%
set TOOl_PATH=%DIR%\tool\
set PROPERTY=%DIR%\property\
set DATA_PATH=%DIR%\data\
del /a /f /s /q %PB_PATH%\*.*
del /a /f /s /q %LUA_PATH%\*.*
del /a /f /s /q %CPP_PATH%\*.*
del /a /f /s /q %DATA_PATH%\*.*
echo ############export excel files##########################
%DIR%\packtool %PROPERTY%config.xls
echo ############export excel files done##########################
cd /d "%DIR%"
set VersionFile=%LUA_PATH%\_Version.lua
echo make %VersionFile%
echo local MAJOR_VERSION = 1 >%VersionFile%
echo local MINOR_VERSION = 4 >>%VersionFile%
echo local BUILD_VERSION = 0 >>%VersionFile%
echo local SVN_VERSION = 0 >>%VersionFile%
echo local function MakeVersion() >>%VersionFile%
echo   return "trunk."..MAJOR_VERSION.."."..MINOR_VERSION.."."..BUILD_VERSION.."."..SVN_VERSION >>%VersionFile%
echo end >>%VersionFile%
echo return MakeVersion() >>%VersionFile% 
echo complete done file %VersionFile%
echo ####################make pack and protos################################
lua main.lua
pause
