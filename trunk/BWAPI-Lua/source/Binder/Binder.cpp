#include <BWAPI-Lua/Binder/Binder.h>

namespace BWAPI_Lua
{
  void Binder::addBindings(lua_State*recipient)
  {
    luaState=recipient;
    bindAllFunctions();
  }

  void Binder::bindFunction(lua_CFunction function,const char*luaFunctionName)
  {
    lua_pushcfunction(luaState,function);
    lua_setglobal(luaState,luaFunctionName);
  }
}