#include <BWAPI-Lua/LuaInterface.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int pushDamageType(lua_State*s,int damageTypeId)
    {
      lua_pushinteger(s,damageTypeId);
      return 1;
    }

    int pushExplosionType(lua_State*s,int explosionTypeId)
    {
      lua_pushinteger(s,explosionTypeId);
      return 1;
    }

    int pushForce(lua_State*s,const BWAPI::Force*force)
    {
      lua_pushinteger(s,(lua_Integer)force);
      return 1;
    }

    int pushOrder(lua_State*s,int orderId)
    {
      lua_pushinteger(s,orderId);
      return 1;
    }

    int pushPlayer(lua_State*s,const BWAPI::Player*player)
    {
      lua_pushinteger(s,(lua_Integer)player);
      return 1;
    }

    int pushPlayerType(lua_State*s,int playerType)
    {
      lua_pushinteger(s,playerType);
      return 1;
    }

    int pushPosition(lua_State*s,const BWAPI::Position&position)
    {
      lua_pushinteger(s,position.x());
      lua_pushinteger(s,position.y());
      return 2;
    }

    int pushRace(lua_State*s,int raceId)
    {
      lua_pushinteger(s,raceId);
      return 1;
    }

    int pushUnitSize(lua_State*s,int unitSizeId)
    {
      lua_pushinteger(s,unitSizeId);
      return 1;
    }

    int pushTechType(lua_State*s,int techTypeId)
    {
      lua_pushinteger(s,techTypeId);
      return 1;
    }

    int pushTilePosition(lua_State*s,const BWAPI::TilePosition&tilePosition)
    {
      lua_pushinteger(s,tilePosition.x());
      lua_pushinteger(s,tilePosition.y());
      return 2;
    }

    int pushUnit(lua_State*s,const BWAPI::Unit*unit)
    {
      lua_pushinteger(s,(lua_Integer)unit);
      return 1;
    }

    int pushUnitType(lua_State*s,int unitTypeId)
    {
      lua_pushinteger(s,unitTypeId);
      return 1;
    }

    int pushUpgradeType(lua_State*s,int upgradeTypeId)
    {
      lua_pushinteger(s,upgradeTypeId);
      return 1;
    }

    int pushWeaponType(lua_State*s,int weaponTypeId)
    {
      lua_pushinteger(s,weaponTypeId);
      return 1;
    }

    int pushUnitSet(lua_State*s,const std::set<BWAPI::Unit*>&u)
    {
      int output=0;
      for(std::set<BWAPI::Unit*>::const_iterator i=u.begin();i!=u.end();++i)
      {
        pushUnit(s,*i);
        ++output;
      }
      return output;
    }

    /*
    AttackType InterfaceConnector::popAttackType(lua_State*s)
    {
      BWAPI::AttackType output(lua_tointeger(s,-1));
      lua_pop();
      return output;
    }
    */

    BWAPI::DamageType popDamageType(lua_State*s)
    {
      BWAPI::DamageType output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::Order popOrder(lua_State*s)
    {
      BWAPI::Order output(BWAPI::Order(lua_tointeger(s,-1)));
      lua_pop(s,1);
      return output;
    }

    BWAPI::Player* popPlayer(lua_State*s)
    {
      BWAPI::Player* output((BWAPI::Player*)lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::Position popPosition(lua_State*s)
    {
      BWAPI::Position output(lua_tointeger(s,-1),lua_tointeger(s,-2));
      lua_pop(s,2);
      return output;
    }

    BWAPI::Race popRace(lua_State*s)
    {
      BWAPI::Race output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::Unit* popUnit(lua_State*s)
    {
      BWAPI::Unit* output((BWAPI::Unit*)lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::UpgradeType popUpgradeType(lua_State*s)
    {
      BWAPI::UpgradeType output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::TechType popTechType(lua_State*s)
    {
      BWAPI::TechType output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::TilePosition popTilePosition(lua_State*s)
    {
      BWAPI::TilePosition output(lua_tointeger(s,-1),lua_tointeger(s,-2));
      lua_pop(s,2);
      return output;
    }

    BWAPI::UnitType popUnitType(lua_State*s)
    {
      BWAPI::UnitType output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }

    BWAPI::WeaponType popWeaponType(lua_State*s)
    {
      BWAPI::WeaponType output(lua_tointeger(s,-1));
      lua_pop(s,1);
      return output;
    }
  }
}