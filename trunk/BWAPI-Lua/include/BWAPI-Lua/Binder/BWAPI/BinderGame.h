#pragma once
#include <BWAPI-Lua/Binder/Binder.h>

namespace BWAPI_Lua
{
  class BinderGame:public Binder
  {
  protected:
    virtual void bindAllFunctions();
  };
}