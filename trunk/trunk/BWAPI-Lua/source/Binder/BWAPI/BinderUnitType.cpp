#include <BWAPI-Lua/Binder/BWAPI/BinderUnitType.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>
#include <map>
#include <set>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int unitTypeGetName(lua_State*s)
    {
      lua_pushstring(s,popUnitType(s).getName().c_str());
      return 1;
    }

    int unitTypeGetSubLabel(lua_State*s)
    {
      lua_pushstring(s,popUnitType(s).getSubLabel().c_str());
      return 1;
    }

    int unitTypeGetRace(lua_State*s)
    {
      return pushRace(s,popUnitType(s).getRace().getID());
    }

    int unitTypeWhatBuilds(lua_State*s)
    {
      const std::pair<const BWAPI::UnitType*,int>&p=popUnitType(s).whatBuilds();
      pushUnitType(s,p.first->getID());
      lua_pushinteger(s,p.second);
      return 2;
    }

    int unitTypeRequiredUnits(lua_State*s)
    {
      int output=0;
      const std::map<const BWAPI::UnitType*,int>&m=popUnitType(s).requiredUnits();
      for(std::map<const BWAPI::UnitType*,int>::const_iterator i=m.begin();i!=m.end();++i)
      {
        pushUnitType(s,i->first->getID());
        lua_pushinteger(s,i->second);
        output+=2;
      }
      return output;
    }

    int unitTypeRequiredTech(lua_State*s)
    {
      return pushTechType(s,popUnitType(s).requiredTech()->getID());
    }

    int unitTypeAbilities(lua_State*s)
    {
      int output=0;
      const std::set<const BWAPI::TechType*>&t=popUnitType(s).abilities();
      for(std::set<const BWAPI::TechType*>::const_iterator i=t.begin();i!=t.end();++i)
      {
        pushTechType(s,(*i)->getID());
        ++output;
      }
      return output;
    }

    int unitTypeUpgrades(lua_State*s)
    {
      int output=0;
      const std::set<const BWAPI::UpgradeType*>&t=popUnitType(s).upgrades();
      for(std::set<const BWAPI::UpgradeType*>::const_iterator i=t.begin();i!=t.end();++i)
      {
        pushUpgradeType(s,(*i)->getID());
        ++output;
      }
      return output;
    }

    int unitTypeArmorUpgrade(lua_State*s)
    {
      return pushUpgradeType(s,popUnitType(s).armorUpgrade()->getID());
    }

    int unitTypeMaxHitPoints(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).maxHitPoints());
      return 1;
    }

    int unitTypeMaxShields(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).maxShields());
      return 1;
    }

    int unitTypeMaxEnergy(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).maxEnergy());
      return 1;
    }

    int unitTypeArmor(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).armor());
      return 1;
    }

    int unitTypeMineralPrice(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).mineralPrice());
      return 1;
    }

    int unitTypeGasPrice(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).gasPrice());
      return 1;
    }

    int unitTypeBuildTime(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).buildTime());
      return 1;
    }

    int unitTypeSupplyRequired(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).supplyRequired());
      return 1;
    }

    int unitTypeSupplyProvided(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).supplyProvided());
      return 1;
    }

    int unitTypeSpaceRequired(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).spaceRequired());
      return 1;
    }

    int unitTypeSpaceProvided(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).spaceProvided());
      return 1;
    }

    int unitTypeBuildScore(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).buildScore());
      return 1;
    }

    int unitTypeDestroyScore(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).destroyScore());
      return 1;
    }

    int unitTypeSize(lua_State*s)
    {
      return pushUnitSize(s,popUnitType(s).size().getID());
    }

    int unitTypeTileWidth(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).tileWidth());
      return 1;
    }

    int unitTypeTileHeight(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).tileHeight());
      return 1;
    }

    int unitTypeDimensionLeft(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).dimensionLeft());
      return 1;
    }

    int unitTypeDimensionUp(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).dimensionUp());
      return 1;
    }

    int unitTypeDimensionRight(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).dimensionRight());
      return 1;
    }

    int unitTypeDimensionDown(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).dimensionDown());
      return 1;
    }

    int unitTypeSeekRange(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).seekRange());
      return 1;
    }

    int unitTypeSightRange(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).sightRange());
      return 1;
    }

    int unitTypeGroundWeapon(lua_State*s)
    {
      return pushWeaponType(s,popUnitType(s).groundWeapon()->getID());
    }

    int unitTypeMaxGroundHits(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).maxGroundHits());
      return 1;
    }

    int unitTypeAirWeapon(lua_State*s)
    {
      return pushWeaponType(s,popUnitType(s).airWeapon()->getID());
    }

    int unitTypeMaxAirHits(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).maxAirHits());
      return 1;
    }

    int unitTypeTopSpeed(lua_State*s)
    {
      lua_pushnumber(s,popUnitType(s).topSpeed());
      return 1;
    }

    int unitTypeAcceleration(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).acceleration());
      return 1;
    }

    int unitTypeHaltDistance(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).haltDistance());
      return 1;
    }

    int unitTypeTurnRadius(lua_State*s)
    {
      lua_pushinteger(s,popUnitType(s).turnRadius());
      return 1;
    }

    int unitTypeCanProduce(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).canProduce());
      return 1;
    }

    int unitTypeCanAttack(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).canAttack());
      return 1;
    }

    int unitTypeCanMove(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).canMove());
      return 1;
    }

    int unitTypeIsFlyer(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isFlyer());
      return 1;
    }

    int unitTypeRegeneratesHP(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).regeneratesHP());
      return 1;
    }

    int unitTypeIsSpellcaster(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isSpellcaster());
      return 1;
    }

    int unitTypeHasPermanentCloak(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).hasPermanentCloak());
      return 1;
    }

    int unitTypeIsInvincible(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isInvincible());
      return 1;
    }

    int unitTypeIsOrganic(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isOrganic());
      return 1;
    }

    int unitTypeIsMechanical(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isMechanical());
      return 1;
    }

    int unitTypeIsRobotic(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isRobotic());
      return 1;
    }

    int unitTypeIsDetector(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isDetector());
      return 1;
    }

    int unitTypeIsResourceContainer(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isResourceContainer());
      return 1;
    }

    int unitTypeIsResourceDepot(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isResourceDepot());
      return 1;
    }

    int unitTypeIsRefinery(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isRefinery());
      return 1;
    }

    int unitTypeIsWorker(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isWorker());
      return 1;
    }

    int unitTypeRequiresPsi(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).requiresPsi());
      return 1;
    }

    int unitTypeRequiresCreep(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).requiresCreep());
      return 1;
    }

    int unitTypeIsTwoUnitsInOneEgg(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isTwoUnitsInOneEgg());
      return 1;
    }

    int unitTypeIsBurrowable(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isBurrowable());
      return 1;
    }

    int unitTypeIsCloakable(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isCloakable());
      return 1;
    }

    int unitTypeIsBuilding(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isBuilding());
      return 1;
    }

    int unitTypeIsAddon(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isAddon());
      return 1;
    }

    int unitTypeIsFlyingBuilding(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isFlyingBuilding());
      return 1;
    }

    int unitTypeIsNeutral(lua_State*s)
    {
      lua_pushboolean(s,popUnitType(s).isNeutral());
      return 1;
    }
  }

  void BinderUnitType::bindAllFunctions()
  {
    bindFunction( LuaInterface::unitTypeGetName,             "unitTypeGetName");
    bindFunction( LuaInterface::unitTypeGetSubLabel,         "unitTypeGetSubLabel");
    bindFunction( LuaInterface::unitTypeGetRace,             "unitTypeGetRace");
    bindFunction( LuaInterface::unitTypeWhatBuilds,          "unitTypeWhatBuilds");
    bindFunction( LuaInterface::unitTypeRequiredUnits,       "unitTypeRequiredUnits");
    bindFunction( LuaInterface::unitTypeRequiredTech,        "unitTypeRequiredTech");
    bindFunction( LuaInterface::unitTypeAbilities,           "unitTypeAbilities");
    bindFunction( LuaInterface::unitTypeUpgrades,            "unitTypeUpgrades");
    bindFunction( LuaInterface::unitTypeArmorUpgrade,        "unitTypeArmorUpgrade");
    bindFunction( LuaInterface::unitTypeMaxHitPoints,        "unitTypeMaxHitPoints");
    bindFunction( LuaInterface::unitTypeMaxShields,          "unitTypeMaxShields");
    bindFunction( LuaInterface::unitTypeMaxEnergy,           "unitTypeMaxEnergy");
    bindFunction( LuaInterface::unitTypeArmor,               "unitTypeArmor");
    bindFunction( LuaInterface::unitTypeMineralPrice,        "unitTypeMineralPrice");
    bindFunction( LuaInterface::unitTypeGasPrice,            "unitTypeGasPrice");
    bindFunction( LuaInterface::unitTypeBuildTime,           "unitTypeBuildTime");
    bindFunction( LuaInterface::unitTypeSupplyRequired,      "unitTypeSupplyRequired");
    bindFunction( LuaInterface::unitTypeSupplyProvided,      "unitTypeSupplyProvided");
    bindFunction( LuaInterface::unitTypeSpaceProvided,       "unitTypeSpaceProvided");
    bindFunction( LuaInterface::unitTypeBuildScore,          "unitTypeBuildScore");
    bindFunction( LuaInterface::unitTypeDestroyScore,        "unitTypeDestroyScore");
    bindFunction( LuaInterface::unitTypeSize,                "unitTypeSize");
    bindFunction( LuaInterface::unitTypeTileWidth,           "unitTypeTileWidth");
    bindFunction( LuaInterface::unitTypeTileHeight,          "unitTypeTileHeight");
    bindFunction( LuaInterface::unitTypeDimensionLeft,       "unitTypeDimensionLeft");
    bindFunction( LuaInterface::unitTypeDimensionUp,         "unitTypeDimensionUp");
    bindFunction( LuaInterface::unitTypeDimensionRight,      "unitTypeDimensionRight");
    bindFunction( LuaInterface::unitTypeDimensionDown,       "unitTypeDimensionDown");
    bindFunction( LuaInterface::unitTypeSeekRange,           "unitTypeSeekRange");
    bindFunction( LuaInterface::unitTypeSightRange,          "unitTypeSightRange");
    bindFunction( LuaInterface::unitTypeGroundWeapon,        "unitTypeGroundWeapon");
    bindFunction( LuaInterface::unitTypeMaxGroundHits,       "unitTypeMaxGroundHits");
    bindFunction( LuaInterface::unitTypeAirWeapon,           "unitTypeAirWeapon");
    bindFunction( LuaInterface::unitTypeMaxAirHits,          "unitTypeMaxAirHits");
    bindFunction( LuaInterface::unitTypeTopSpeed,            "unitTypeAcceleration");
    bindFunction( LuaInterface::unitTypeHaltDistance,        "unitType");
    bindFunction( LuaInterface::unitTypeTurnRadius,          "unitTypeTurnRadius");
    bindFunction( LuaInterface::unitTypeCanProduce,          "unitTypeCanProduce");
    bindFunction( LuaInterface::unitTypeCanAttack,           "unitTypeCanAttack");
    bindFunction( LuaInterface::unitTypeCanMove,             "unitTypeCanMove");
    bindFunction( LuaInterface::unitTypeIsFlyer,             "unitTypeIsFlyer");
    bindFunction( LuaInterface::unitTypeRegeneratesHP,       "unitTypeRegeneratesHP");
    bindFunction( LuaInterface::unitTypeIsSpellcaster,       "unitTypeIsSpellcaster");
    bindFunction( LuaInterface::unitTypeHasPermanentCloak,   "unitTypeHasPermanentCloak");
    bindFunction( LuaInterface::unitTypeIsInvincible,        "unitTypeIsInvincible");
    bindFunction( LuaInterface::unitTypeIsOrganic,           "unitTypeIsOrganic");
    bindFunction( LuaInterface::unitTypeIsMechanical,        "unitTypeIsMechanical");
    bindFunction( LuaInterface::unitTypeIsRobotic,           "unitTypeIsRobotic");
    bindFunction( LuaInterface::unitTypeIsDetector,          "unitTypeIsDetector");
    bindFunction( LuaInterface::unitTypeIsResourceContainer, "unitTypeIsResourceContainer");
    bindFunction( LuaInterface::unitTypeIsResourceDepot,     "unitTypeIsResourceDepot");
    bindFunction( LuaInterface::unitTypeIsRefinery,          "unitTypeIsRefinery");
    bindFunction( LuaInterface::unitTypeIsWorker,            "unitTypeIsWorker");
    bindFunction( LuaInterface::unitTypeRequiresPsi,         "unitTypeRequiresPsi");
    bindFunction( LuaInterface::unitTypeRequiresCreep,       "unitTypeRequiresCreep");
    bindFunction( LuaInterface::unitTypeIsTwoUnitsInOneEgg,  "unitTypeIsTwoUnitsInOneEgg");
    bindFunction( LuaInterface::unitTypeIsBurrowable,        "unitTypeIsBurrowable");
    bindFunction( LuaInterface::unitTypeIsCloakable,         "unitTypeIsCloakable");
    bindFunction( LuaInterface::unitTypeIsBuilding,          "unitTypeIsBuilding");
    bindFunction( LuaInterface::unitTypeIsAddon,             "unitTypeIsAddon");
    bindFunction( LuaInterface::unitTypeIsFlyingBuilding,    "unitTypeIsFlyingBuilding");
    bindFunction( LuaInterface::unitTypeIsNeutral,           "unitTypeIsNeutral");
  }
}