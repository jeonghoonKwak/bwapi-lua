#include <BWAPI-Lua/Binder/BWAPI/BinderWeaponType.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>


namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int weaponGetName(lua_State*s)
    {
      lua_pushstring(s,popWeaponType(s).getName().c_str());
      return 1;
    }

    int weaponGetTech(lua_State*s)
    {
      return pushTechType(s,popWeaponType(s).getTech()->getID());
    }

    int weaponWhatUses(lua_State*s)
    {
      return pushUnitType(s,popWeaponType(s).whatUses()->getID());
    }

    int weaponDamageAmount(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).damageAmount());
      return 1;
    }

    int weaponDamageBonus(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).damageBonus());
      return 1;
    }

    int weaponDamageCooldown(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).damageCooldown());
      return 1;
    }

    int weaponDamageFactor(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).damageFactor());
      return 1;
    }

    int weaponUpgradeType(lua_State*s)
    {
      return pushUpgradeType(s,popWeaponType(s).upgradeType()->getID());
    }

    int weaponDamageType(lua_State*s)
    {
      return pushDamageType(s,popWeaponType(s).damageType()->getID());
    }

    int weaponExplosionType(lua_State*s)
    {
      return pushExplosionType(s,popWeaponType(s).explosionType()->getID());
    }

    int weaponMinRange(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).minRange());
      return 1;
    }

    int weaponMaxRange(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).maxRange());
      return 1;
    }

    int weaponInnerSplashRadius(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).innerSplashRadius());
      return 1;
    }

    int weaponMedianSplashRadius(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).medianSplashRadius());
      return 1;
    }
    int weaponOuterSplashRadius(lua_State*s)
    {
      lua_pushinteger(s,popWeaponType(s).outerSplashRadius());
      return 1;
    }
    int weaponTargetsAir(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsAir());
      return 1;
    }
    int weaponTargetsGround(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsGround());
      return 1;
    }

    int weaponTargetsMechanical(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsMechanical());
      return 1;
    }

    int weaponTargetsOrganic(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsOrganic());
      return 1;
    }

    int weaponTargetsNonBuilding(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsNonBuilding());
      return 1;
    }

    int weaponTargetsNonRobotic(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsNonRobotic());
      return 1;
    }

    int weaponTargetsOrgOrMech(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsOrgOrMech());
      return 1;
    }

    int weaponTargetsOwn(lua_State*s)
    {
      lua_pushboolean(s,popWeaponType(s).targetsOwn());
      return 1;
    }
  }

  void BinderWeaponType::bindAllFunctions()
  {
    bindFunction( LuaInterface::weaponGetName,            "weaponGetName");
    bindFunction( LuaInterface::weaponGetTech,            "weaponGetTech");
    bindFunction( LuaInterface::weaponWhatUses,           "weaponWhatUses");
    bindFunction( LuaInterface::weaponDamageAmount,       "weaponDamageAmount");
    bindFunction( LuaInterface::weaponDamageBonus,        "weaponDamageBonus");
    bindFunction( LuaInterface::weaponDamageCooldown,     "weaponDamageCooldown");
    bindFunction( LuaInterface::weaponDamageFactor,       "weaponDamageFactor");
    bindFunction( LuaInterface::weaponUpgradeType,        "weaponUpgradeType");
    bindFunction( LuaInterface::weaponDamageType,         "weaponDamageType");
    bindFunction( LuaInterface::weaponExplosionType,      "weaponExplosionType");
    bindFunction( LuaInterface::weaponMinRange,           "weaponMinRange");
    bindFunction( LuaInterface::weaponMaxRange,           "weaponMaxRange");
    bindFunction( LuaInterface::weaponInnerSplashRadius,  "weaponInnerSplashRadius");
    bindFunction( LuaInterface::weaponMedianSplashRadius, "weaponMedianSplashRadius");
    bindFunction( LuaInterface::weaponOuterSplashRadius,  "weaponOuterSplashRadius");
    bindFunction( LuaInterface::weaponTargetsAir,         "weaponTargetsAir");
    bindFunction( LuaInterface::weaponTargetsGround,      "weaponTargetsGround");
    bindFunction( LuaInterface::weaponTargetsMechanical,  "weaponTargetsMechanical");
    bindFunction( LuaInterface::weaponTargetsOrganic,     "weaponTargetsOrganic");
    bindFunction( LuaInterface::weaponTargetsNonBuilding, "weaponTargetsNonBuilding");
    bindFunction( LuaInterface::weaponTargetsNonRobotic,  "weaponTargetsNonRobotic");
    bindFunction( LuaInterface::weaponTargetsOrgOrMech,   "weaponTargetsOrgOrMech");
    bindFunction( LuaInterface::weaponTargetsOwn,         "weaponTargetsOwn");

  }
}