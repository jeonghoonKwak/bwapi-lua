#include <BWAPI-Lua/Binder/BWAPI/BinderTechType.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int techTypeGetName(lua_State*s)
    {
      lua_pushstring(s,popTechType(s).getName().c_str());
      return 1;
    }

    int techTypeGetRace(lua_State*s)
    {
      //Doesn't seem to have been implemented
      //return pushRace(s,popTechType(s).getRace().getID());
      return 0;
    }

    int techTypeMineralPrice(lua_State*s)
    {
      lua_pushinteger(s,popTechType(s).mineralPrice());
      return 1;
    }

    int techTypeGasPrice(lua_State*s)
    {
      lua_pushinteger(s,popTechType(s).gasPrice());
      return 1;
    }

    int techTypeEnergyUsed(lua_State*s)
    {
      lua_pushinteger(s,popTechType(s).energyUsed());
      return 1;
    }

    int techTypeWhatResearches(lua_State*s)
    {
      return pushUnitType(s,popTechType(s).whatResearches()->getID());
    }

    int techTypeGetWeapon(lua_State*s)
    {
      return pushWeaponType(s,popTechType(s).getWeapon()->getID());
    }

    int techTypeWhatUses(lua_State*s)
    {
      int output=0;
      const std::set<const BWAPI::UnitType*>&u=popTechType(s).whatUses();
      for(std::set<const BWAPI::UnitType*>::const_iterator i=u.begin();i!=u.end();++i)
      {
        output+=pushUnitType(s,(*i)->getID());
      }
      return output;
    }
  }

  void BinderTechType::bindAllFunctions()
  {
    bindFunction( LuaInterface::techTypeGetName,        "techTypeGetName");
    bindFunction( LuaInterface::techTypeGetRace,        "techTypeGetRace");
    bindFunction( LuaInterface::techTypeMineralPrice,   "techTypeMineralPrice");
    bindFunction( LuaInterface::techTypeGasPrice,       "techTypeGasPrice");
    bindFunction( LuaInterface::techTypeEnergyUsed,     "techTypeEnergyUsed");
    bindFunction( LuaInterface::techTypeWhatResearches, "techTypeWhatResearches");
    bindFunction( LuaInterface::techTypeGetWeapon,      "techTypeGetWeapon");
    bindFunction( LuaInterface::techTypeWhatUses,       "techTypeWhatUses");
  }
}