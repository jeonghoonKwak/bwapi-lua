#pragma once
#include <BWAPI-Lua/Binder/Binder.h>

namespace BWAPI_Lua
{
  class BinderRace:public Binder
  {
  protected:
    virtual void bindAllFunctions();
  };
}