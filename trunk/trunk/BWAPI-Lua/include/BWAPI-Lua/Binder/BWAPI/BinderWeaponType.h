#pragma once
#include <BWAPI-Lua/Binder/Binder.h>

namespace BWAPI_Lua
{
  class BinderWeaponType:public Binder
  {
  protected:
    virtual void bindAllFunctions();
  };
}