#include <BWAPI-Lua/Binder/BWAPI/BinderRace.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int raceGetName(lua_State*s)
    {
      lua_pushstring(s,popRace(s).getName().c_str());
      return 1;
    }

    int raceGetWorker(lua_State*s)
    {
      return pushUnitType(s,popRace(s).getWorker()->getID());
    }

    int raceGetCenter(lua_State*s)
    {
      return pushUnitType(s,popRace(s).getCenter()->getID());
    }

    int raceGetRefinery(lua_State*s)
    {
      return pushUnitType(s,popRace(s).getRefinery()->getID());
    }

    int raceGetTransport(lua_State*s)
    {
      return pushUnitType(s,popRace(s).getTransport()->getID());
    }

    int raceGetSupplyProvider(lua_State*s)
    {
      return pushUnitType(s,popRace(s).getSupplyProvider()->getID());
    }
  }

  void BinderRace::bindAllFunctions()
  {
    bindFunction( LuaInterface::raceGetName,           "raceGetName");
    bindFunction( LuaInterface::raceGetWorker,         "raceGetWorker");
    bindFunction( LuaInterface::raceGetCenter,         "raceGetCenter");
    bindFunction( LuaInterface::raceGetRefinery,       "raceGetRefinery");
    bindFunction( LuaInterface::raceGetTransport,      "raceGetTransport");
    bindFunction( LuaInterface::raceGetSupplyProvider, "raceGetSupplyProvider");
  }
}