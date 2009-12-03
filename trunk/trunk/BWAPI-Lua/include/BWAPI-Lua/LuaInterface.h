#pragma once

#include <BWAPI.h>
#include <lua.hpp>
#include <set>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int pushDamageType    (lua_State*,int);
    int pushExplosionType (lua_State*,int);
    int pushForce         (lua_State*,const BWAPI::Force*);
    int pushOrder         (lua_State*,int);
    int pushPlayer        (lua_State*,const BWAPI::Player*);
    int pushPlayerType    (lua_State*,int);
    int pushPosition      (lua_State*,const BWAPI::Position&);
    int pushRace          (lua_State*,int);
    int pushUnitSize      (lua_State*,int);
    int pushTechType      (lua_State*,int);
    int pushTilePosition  (lua_State*,const BWAPI::TilePosition&);
    int pushUnit          (lua_State*,const BWAPI::Unit*);
    int pushUnitType      (lua_State*,int);
    int pushUpgradeType   (lua_State*,int);
    int pushWeaponType    (lua_State*,int);

    int pushUnitSet       (lua_State*,const std::set<BWAPI::Unit*>&);
    
    BWAPI::DamageType   popDamageType(lua_State*);
    BWAPI::Order        popOrder(lua_State*);
    BWAPI::Player*      popPlayer(lua_State*);
    BWAPI::Position     popPosition(lua_State*);
    BWAPI::Race         popRace(lua_State*);
    BWAPI::Unit*        popUnit(lua_State*);
    BWAPI::TechType     popTechType(lua_State*);
    BWAPI::TilePosition popTilePosition(lua_State*);
    BWAPI::UnitType     popUnitType(lua_State*);
    BWAPI::UpgradeType  popUpgradeType(lua_State*);
    BWAPI::WeaponType   popWeaponType(lua_State*);
  }
}