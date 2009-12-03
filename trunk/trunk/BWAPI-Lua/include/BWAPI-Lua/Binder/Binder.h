#pragma once
#include <lua.hpp>

namespace BWAPI_Lua
{
  class Binder
  {
  public:
    void addBindings(lua_State*recipient);

  protected:
    void bindFunction(lua_CFunction function,const char*luaFunctionName);
    virtual void bindAllFunctions()=0;

  protected:    
    lua_State*luaState;
  };
}