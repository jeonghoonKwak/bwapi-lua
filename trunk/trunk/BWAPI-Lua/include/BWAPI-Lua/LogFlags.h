#pragma once

namespace BWAPI_Lua
{
  namespace LogFlags
  {
    static unsigned NONE    = 0;
    static unsigned ANY     = 1<<0;
    static unsigned WARNING = 1<<1;
    static unsigned ERROR   = 1<<2;
    static unsigned LUA     = 1<<3;
  }
}