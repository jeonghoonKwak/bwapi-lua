#include <BWAPI-Lua/Binder/BWAPI-Lua/BinderLogger.h>

#include <BWAPI-Lua/Logger.h>
#include <BWAPI-Lua/LogFlags.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int logInfo(lua_State*s)
    {
      Logger::get()->log(lua_tostring(s,-1),LogFlags::LUA);
      lua_pop(s,1);
      return 0;
    }

    int logWarning(lua_State*s)
    {
      Logger::get()->log(lua_tostring(s,-1),LogFlags::LUA|LogFlags::WARNING);
      lua_pop(s,1);
      return 0;
    }

    int logError(lua_State*s)
    {
      Logger::get()->log(lua_tostring(s,-1),LogFlags::LUA|LogFlags::ERROR);
      lua_pop(s,1);
      return 0;
    }
  }

  void BinderLogger::bindAllFunctions()
  {
    using namespace LuaInterface;

    bindFunction( LuaInterface::logInfo,    "logInfo");
    bindFunction( LuaInterface::logWarning, "logWarning");
    bindFunction( LuaInterface::logError,   "logError");
  }
}