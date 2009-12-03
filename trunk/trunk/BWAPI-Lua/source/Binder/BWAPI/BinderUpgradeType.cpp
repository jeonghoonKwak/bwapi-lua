#include <BWAPI-Lua/Binder/BWAPI/BinderUpgradeType.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int upgradeTypeGetName(lua_State*s)
    {
      lua_pushstring(s,popUpgradeType(s).getName().c_str());
      return 1;
    }

    int upgradeTypeGetRace(lua_State*s)
    {
      return pushRace(s,popUpgradeType(s).getRace().getID());
    }

    int upgradeTypeMineralPriceBase(lua_State*s)
    {
      lua_pushinteger(s,popUpgradeType(s).mineralPriceBase());
      return 1;
    }

    int upgradeTypeMineralPriceFactor(lua_State*s)
    {
      lua_pushinteger(s,popUpgradeType(s).mineralPriceFactor());
      return 1;
    }

    int upgradeTypeGasPriceBase(lua_State*s)
    {
      lua_pushinteger(s,popUpgradeType(s).gasPriceBase());
      return 1;
    }

    int upgradeTypeGasPriceFactor(lua_State*s)
    {
      lua_pushinteger(s,popUpgradeType(s).gasPriceFactor());
      return 1;
    }

    int upgradeTypeMaxRepeats(lua_State*s)
    {
      lua_pushinteger(s,popUpgradeType(s).maxRepeats());
      return 1;
    }

    int upgradeTypeWhatUpgrades(lua_State*s)
    {
      return pushUnitType(s,popUpgradeType(s).whatUpgrades()->getID());
    }

    int upgradeTypeWhatUses(lua_State*s)
    {
      int output=0;
      const std::set<const BWAPI::UnitType*>&u=popUpgradeType(s).whatUses();
      for(std::set<const BWAPI::UnitType*>::const_iterator i=u.begin();i!=u.end();++i)
      {
        output+=pushUnitType(s,(*i)->getID());
      }
      return output;
    }
  }

  void BinderUpgradeType::bindAllFunctions()
  {
    bindFunction( LuaInterface::upgradeTypeGetName,            "upgradeTypeGetName");
    bindFunction( LuaInterface::upgradeTypeGetRace,            "upgradeTypeGetRace");
    bindFunction( LuaInterface::upgradeTypeMineralPriceBase,   "upgradeTypeMineralPriceBase");
    bindFunction( LuaInterface::upgradeTypeMineralPriceFactor, "upgradeTypeMineralPriceFactor");
    bindFunction( LuaInterface::upgradeTypeGasPriceBase,       "upgradeTypeGasPriceBase");
    bindFunction( LuaInterface::upgradeTypeGasPriceFactor,     "upgradeTypeGasPriceFactor");
    bindFunction( LuaInterface::upgradeTypeMaxRepeats,         "upgradeTypeMaxRepeats");
    bindFunction( LuaInterface::upgradeTypeWhatUpgrades,       "upgradeTypeWhatUpgrades");
    bindFunction( LuaInterface::upgradeTypeWhatUses,           "upgradeTypeWhatUses");
  }
}