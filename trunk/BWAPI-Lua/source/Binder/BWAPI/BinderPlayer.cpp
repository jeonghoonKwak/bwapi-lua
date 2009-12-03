#include <BWAPI-Lua/Binder/BWAPI/BinderPlayer.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int playerGetName(lua_State*s)
    {
      lua_pushstring(s,popPlayer(s)->getName().c_str());
      return 1;
    }

    int playerGetUnits(lua_State*s)
    {
      return pushUnitSet(s,popPlayer(s)->getUnits());
    }

    int playerPlayerType(lua_State*s)
    {
      return pushPlayerType(s,popPlayer(s)->playerType().getID());
    }

    int playerGetForce(lua_State*s)
    {
      return pushForce(s,popPlayer(s)->getForce());
    }

    int playerIsAlly(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->isAlly(popPlayer(s)));
      return 1;
    }

    int playerIsEnemy(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->isEnemy(popPlayer(s)));
      return 1;
    }

    int playerIsNeutral(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->isNeutral());
      return 1;
    }

    int playerGetStartLocation(lua_State*s)
    {
      return pushTilePosition(s,popPlayer(s)->getStartLocation());
    }

    int playerLeftGame(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->leftGame());
      return 1;
    }

    int playerMinerals(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->minerals());
      return 1;
    }

    int playerGas(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->gas());
      return 1;
    }

    int playerCumulativeMinerals(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->cumulativeMinerals());
      return 1;
    }

    int playerCumulativeGas(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->cumulativeGas());
      return 1;
    }

    int playerSupplyTotal(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->supplyTotal());
      return 1;
    }

    int playerSupplyUsed(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->supplyUsed());
      return 1;
    }

    int playerSupplyTotalForRace(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->supplyTotal(popRace(s)));
      return 1;
    }

    int playerSupplyUsedForRace(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->supplyUsed(popRace(s)));
      return 1;
    }

    int playerAllUnitCount(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->allUnitCount(popUnitType(s)));
      return 1;
    }

    int playerCompletedUnitCount(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->completedUnitCount(popUnitType(s)));
      return 1;
    }

    int playerIncompleteUnitCount(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->incompleteUnitCount(popUnitType(s)));
      return 1;
    }

    int playerDeadUnitCount(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->deadUnitCount(popUnitType(s)));
      return 1;
    }

    int playerKilledUnitCount(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->killedUnitCount(popUnitType(s)));
      return 1;
    }

    int playerGetUpgradeLevel(lua_State*s)
    {
      lua_pushinteger(s,popPlayer(s)->getUpgradeLevel(popUpgradeType(s)));
      return 1;
    }

    int playerHasResearched(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->hasResearched(popTechType(s)));
      return 1;
    }

    int playerIsResearching(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->isResearching(popTechType(s)));
      return 1;
    }

    int playerIsUpgrading(lua_State*s)
    {
      lua_pushboolean(s,popPlayer(s)->isUpgrading(popUpgradeType(s)));
      return 1;
    }
  }

  void BinderPlayer::bindAllFunctions()
  {
    bindFunction( LuaInterface::playerGetName,             "playerGetName");
    bindFunction( LuaInterface::playerGetUnits,            "playerGetUnits");
    bindFunction( LuaInterface::playerPlayerType,          "playerPlayerType");
    bindFunction( LuaInterface::playerGetForce,            "playerGetForce");
    bindFunction( LuaInterface::playerIsAlly,              "playerIsAlly");
    bindFunction( LuaInterface::playerIsEnemy,             "playerIsEnemy");
    bindFunction( LuaInterface::playerIsNeutral,           "playerIsNeutral");
    bindFunction( LuaInterface::playerGetStartLocation,    "playerGetStartLocation");
    bindFunction( LuaInterface::playerLeftGame,            "playerLeftGame");
    bindFunction( LuaInterface::playerMinerals,            "playerMinerals");
    bindFunction( LuaInterface::playerGas,                 "playerGas");
    bindFunction( LuaInterface::playerCumulativeMinerals,  "playerCumulativeMinerals");
    bindFunction( LuaInterface::playerCumulativeGas,       "playerCumulativeGas");
    bindFunction( LuaInterface::playerSupplyTotal,         "playerSupplyTotal");
    bindFunction( LuaInterface::playerSupplyUsed,          "playerSupplyUsed");
    bindFunction( LuaInterface::playerSupplyTotalForRace,  "playerSupplyTotalForRace");
    bindFunction( LuaInterface::playerSupplyUsedForRace,   "playerSupplyUsedForRace");
    bindFunction( LuaInterface::playerAllUnitCount,        "playerAllUnitCount");
    bindFunction( LuaInterface::playerCompletedUnitCount,  "playerCompletedUnitCount");
    bindFunction( LuaInterface::playerIncompleteUnitCount, "playerIncompleteUnitCount");
    bindFunction( LuaInterface::playerDeadUnitCount,       "playerDeadUnitCount");
    bindFunction( LuaInterface::playerKilledUnitCount,     "playerKilledUnitCount");
    bindFunction( LuaInterface::playerGetUpgradeLevel,     "playerGetUpgradeLevel");
    bindFunction( LuaInterface::playerHasResearched,       "playerHasResearched");
    bindFunction( LuaInterface::playerIsResearching,       "playerIsResearching");
    bindFunction( LuaInterface::playerIsUpgrading,         "playerIsUpgrading");
  }
}