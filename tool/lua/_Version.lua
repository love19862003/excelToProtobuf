local MAJOR_VERSION = 1 
local MINOR_VERSION = 4 
local BUILD_VERSION = 0 
local SVN_VERSION = 0 
local function MakeVersion() 
  return "trunk."..MAJOR_VERSION.."."..MINOR_VERSION.."."..BUILD_VERSION.."."..SVN_VERSION 
end 
return MakeVersion()  
