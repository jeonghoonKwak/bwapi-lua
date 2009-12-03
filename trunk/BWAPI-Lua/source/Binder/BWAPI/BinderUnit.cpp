#include <BWAPI-Lua/Binder/BWAPI/BinderUnit.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int unitGetPlayer(lua_State*s)
    {
      return pushPlayer(s,popUnit(s)->getPlayer());
    }

    int unitGetType(lua_State*s)
    {
      return pushUnitType(s,popUnit(s)->getType().getID());
    }

    int unitGetInitialType(lua_State*s)
    {
      return pushUnitType(s,popUnit(s)->getInitialType().getID());
    }

    int unitGetHitPoints(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getHitPoints());
      return 1;
    }

    int unitGetInitialHitPoints(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getInitialHitPoints());
      return 1;
    }

    int unitGetShields(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getShields());
      return 1;
    }

    int unitGetEnergy(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getEnergy());
      return 1;
    }

    int unitGetResources(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getResources());
      return 1;
    }

    int unitGetInitialResources(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getInitialResources());
      return 1;
    }

    int unitGetKillCount(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getKillCount());
      return 1;
    }

    int unitGetGroundWeaponCooldown(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getGroundWeaponCooldown());
      return 1;
    }

    int unitGetAirWeaponCooldown(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getAirWeaponCooldown());
      return 1;
    }

    int unitGetSpellCooldown(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getSpellCooldown());
      return 1;
    }

    int unitGetDefenseMatrixPoints(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getDefenseMatrixPoints());
      return 1;
    }

    int unitGetDefenseMatrixTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getDefenseMatrixTimer());
      return 1;
    }

    int unitGetEnsnareTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getEnsnareTimer());
      return 1;
    }

    int unitGetIrradiateTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getIrradiateTimer());
      return 1;
    }

    int unitGetLockdownTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getLockdownTimer());
      return 1;
    }

    int unitGetMaelstromTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getMaelstromTimer());
      return 1;
    }

    int unitGetPlagueTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getPlagueTimer());
      return 1;
    }

    int unitGetRemoveTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getRemoveTimer());
      return 1;
    }

    int unitGetStasisTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getStasisTimer());
      return 1;
    }

    int unitGetStimTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getStimTimer());
      return 1;
    }

    int unitGetPosition(lua_State*s)
    {
      return pushPosition(s,popUnit(s)->getPosition());
    }

    int unitGetInitialPosition(lua_State*s)
    {
      return pushPosition(s,popUnit(s)->getInitialPosition());
    }

    int unitGetTilePosition(lua_State*s)
    {
      return pushTilePosition(s,popUnit(s)->getTilePosition());
    }

    int unitGetInitialTilePosition(lua_State*s)
    {
      return pushTilePosition(s,popUnit(s)->getInitialTilePosition());
    }

    int unitGetDistanceToUnit(lua_State*s)
    {
      lua_pushnumber(s,popUnit(s)->getDistance(popUnit(s)));
      return 1;
    }

    int unitGetDistanceToPosition(lua_State*s)
    {
      lua_pushnumber(s,popUnit(s)->getDistance(popPosition(s)));
      return 1;
    }

    int unitGetAngle(lua_State*s)
    {
      lua_pushnumber(s,popUnit(s)->getAngle());
      return 1;
    }

    int unitGetVelocityX(lua_State*s)
    {
      lua_pushnumber(s,popUnit(s)->getVelocityX());
      return 1;
    }

    int unitGetVelocityY(lua_State*s)
    {
      lua_pushnumber(s,popUnit(s)->getVelocityY());
      return 1;
    }

    int unitGetTarget(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getTarget());
    }

    int unitGetTargetPosition(lua_State*s)
    {
      return pushPosition(s,popUnit(s)->getTargetPosition());
    }

    int unitGetOrder(lua_State*s)
    {
      return pushOrder(s,popUnit(s)->getOrder().getID());
    }

    int unitGetOrderTarget(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getOrderTarget());
    }

    int unitGetOrderTimer(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getOrderTimer());
      return 1;
    }

    int unitGetSecondaryOrder(lua_State*s)
    {
      return pushOrder(s,popUnit(s)->getSecondaryOrder().getID());
    }

    int unitGetBuildUnit(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getBuildUnit());
    }

    int unitGetRemainingBuildTime(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getRemainingBuildTime());
      return 1;
    }

    int unitGetRemainingTrainTime(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getRemainingTrainTime());
      return 1;
    }

    int unitGetChild(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getChild());
    }

    int unitGetTrainingQueue(lua_State*s)
    {
      int outputs=0;
      const std::list<BWAPI::UnitType> queue=popUnit(s)->getTrainingQueue();
      for(std::list<BWAPI::UnitType>::const_iterator i=queue.begin();i!=queue.end();++i)
      {
        outputs+=pushUnitType(s,i->getID());
      }
      return outputs;
    }

    int unitGetTransport(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getTransport());
    }

    int unitGetLoadedUnits(lua_State*s)
    {
      int outputs=0;
      const std::list<BWAPI::Unit*> queue=popUnit(s)->getLoadedUnits();
      for(std::list<BWAPI::Unit*>::const_iterator i=queue.begin();i!=queue.end();++i)
      {
        outputs+=pushUnit(s,*i);
      }
      return outputs;
    }

    int unitGetInterceptorCount(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getInterceptorCount());
      return 1;
    }

    int unitGetScarabCount(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getScarabCount());
      return 1;
    }

    int unitGetSpiderMineCount(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getSpiderMineCount());
      return 1;
    }

    int unitGetTech(lua_State*s)
    {
      return pushTechType(s,popUnit(s)->getTech().getID());
    }

    int unitGetUpgrade(lua_State*s)
    {
      return pushUpgradeType(s,popUnit(s)->getUpgrade().getID());
    }

    int unitGetRemainingResearchTime(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getRemainingResearchTime());
      return 1;
    }

    int unitGetRemainingUpgradeTime(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getRemainingUpgradeTime());
      return 1;
    }

    int unitGetRallyPosition(lua_State*s)
    {
      return pushPosition(s,popUnit(s)->getRallyPosition());
    }

    int unitGetRallyUnit(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getRallyUnit());
    }

    int unitGetAddon(lua_State*s)
    {
      return pushUnit(s,popUnit(s)->getAddon());
    }

    int unitGetUpgradeLevel(lua_State*s)
    {
      lua_pushinteger(s,popUnit(s)->getUpgradeLevel(popUpgradeType(s)));
      return 1;
    }

    int unitExists(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->exists());
      return 1;
    }

    int unitIsAccelerating(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isAccelerating());
      return 1;
    }

    int unitIsBeingConstructed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isBeingConstructed());
      return 1;
    }

    int unitIsBeingHealed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isBeingHealed());
      return 1;
    }

    int unitIsBlind(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isBlind());
      return 1;
    }

    int unitIsBraking(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isBraking());
      return 1;
    }

    int unitIsBurrowed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isBurrowed());
      return 1;
    }

    int unitIsCarryingGas(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isCarryingGas());
      return 1;
    }

    int unitIsCarryingMinerals(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isCarryingMinerals());
      return 1;
    }

    int unitIsCloaked(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isCloaked());
      return 1;
    }

    int unitIsCompleted(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isCompleted());
      return 1;
    }

    int unitIsConstructing(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isConstructing());
      return 1;
    }

    int unitIsDefenseMatrixed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isDefenseMatrixed());
      return 1;
    }

    int unitIsEnsnared(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isEnsnared());
      return 1;
    }

    int unitIsFollowing(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isFollowing());
      return 1;
    }

    int unitIsGatheringGas(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isGatheringGas());
      return 1;
    }

    int unitIsGatheringMinerals(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isGatheringMinerals());
      return 1;
    }

    int unitIsHallucination(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isHallucination());
      return 1;
    }

    int unitIsIdle(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isIdle());
      return 1;
    }

    int unitIsIrradiated(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isIrradiated());
      return 1;
    }

    int unitIsLifted(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isLifted());
      return 1;
    }

    int unitIsLoaded(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isLoaded());
      return 1;
    }

    int unitIsLockedDown(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isLockedDown());
      return 1;
    }

    int unitIsMaelstrommed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isMaelstrommed());
      return 1;
    }

    int unitIsMorphing(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isMorphing());
      return 1;
    }

    int unitIsMoving(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isMoving());
      return 1;
    }

    int unitIsPatrolling(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isPatrolling());
      return 1;
    }

    int unitIsParasited(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isParasited());
      return 1;
    }

    int unitIsPlagued(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isPlagued());
      return 1;
    }

    int unitIsRepairing(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isRepairing());
      return 1;
    }

    int unitIsResearching(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isResearching());
      return 1;
    }

    int unitIsSelected(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isSelected());
      return 1;
    }

    int unitIsSieged(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isSieged());
      return 1;
    }

    int unitIsStartingAttack(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isStartingAttack());
      return 1;
    }

    int unitIsStasised(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isStasised());
      return 1;
    }

    int unitIsStimmed(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isStimmed());
      return 1;
    }

    int unitIsTraining(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isStimmed());
      return 1;
    }

    int unitIsUnderStorm(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isUnderStorm());
      return 1;
    }

    int unitIsUnpowered(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isUnpowered());
      return 1;
    }

    int unitIsUpgrading(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isUpgrading());
      return 1;
    }

    int unitIsVisible(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->isVisible());
      return 1;
    }

    int unitIsBeingGathered(lua_State*s)
    {
      //Implemented in BWAPI trunk
      //lua_pushboolean(s,popUnit(s)->isBeingGathered());
      return 1;
    }

    int unitAttackMove(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->attackMove(popPosition(s)));
      return 1;
    }

    int unitAttackUnit(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->attackUnit(popUnit(s)));
      return 1;
    }

    int unitRightClickPosition(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->rightClick(popPosition(s)));
      return 1;
    }

    int unitRightClickUnit(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->rightClick(popUnit(s)));
      return 1;
    }

    int unitTrain(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->train(popUnitType(s)));
      return 1;
    }

    int unitBuild(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->build(popPosition(s),popUnitType(s)));
      return 1;
    }

    int unitBuildAddon(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->buildAddon(popUnitType(s)));
      return 1;
    }

    int unitResearch(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->research(popTechType(s)));
      return 1;
    }

    int unitUpgrade(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->upgrade(popUpgradeType(s)));
      return 1;
    }

    int unitStop(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->stop());
      return 1;
    }

    int unitHoldPosition(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->holdPosition());
      return 1;
    }

    int unitPatrol(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->patrol(popPosition(s)));
      return 1;
    }

    int unitFollow(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->follow(popUnit(s)));
      return 1;
    }

    int unitSetRallyPosition(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->setRallyPosition(popPosition(s)));
      return 1;
    }

    int unitSetRallyUnit(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->setRallyUnit(popUnit(s)));
      return 1;
    }

    int unitRepair(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->repair(popUnit(s)));
      return 1;
    }

    int unitMorph(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->morph(popUnitType(s)));
      return 1;
    }

    int unitBurrow(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->burrow());
      return 1;
    }

    int unitUnburrow(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->unburrow());
      return 1;
    }

    int unitSiege(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->siege());
      return 1;
    }

    int unitUnsiege(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->unsiege());
      return 1;
    }

    int unitCloak(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cloak());
      return 1;
    }

    int unitDecloak(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->decloak());
      return 1;
    }

    int unitLift(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->lift());
      return 1;
    }

    int unitLand(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->land(popPosition(s)));
      return 1;
    }

    int unitLoad(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->load(popUnit(s)));
      return 1;
    }

    int unitUnload(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->unload(popUnit(s)));
      return 1;
    }
    
    int unitUnloadAll(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->unloadAll());
      return 1;
    }

    int unitUnloadAllToPosition(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->unloadAll(popPosition(s)));
      return 1;
    }

    int unitCancelConstruction(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelConstruction());
      return 1;
    }

    int unitHaltConstruction(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->haltConstruction());
      return 1;
    }

    int unitCancelMorph(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelMorph());
      return 1;
    }

    int unitCancelTrain(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelTrain());
      return 1;
    }

    int unitCancelAddon(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelAddon());
      return 1;
    }

    int unitCancelResearch(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelResearch());
      return 1;
    }

    int unitCancelUpgrade(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->cancelUpgrade());
      return 1;
    }

    int unitUseTech(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->useTech(popTechType(s)));
      return 1;
    }

    int unitUseTechOnPosition(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->useTech(popTechType(s),popPosition(s)));
      return 1;
    }

    int unitUseTechOnUnit(lua_State*s)
    {
      lua_pushboolean(s,popUnit(s)->useTech(popTechType(s),popUnit(s)));
      return 1;
    }
  }

  void BinderUnit::bindAllFunctions()
  {
    bindFunction( LuaInterface::unitGetPlayer,                "unitGetPlayer");
    bindFunction( LuaInterface::unitGetType,                  "unitGetType");
    bindFunction( LuaInterface::unitGetInitialType,           "unitGetInitialType");
    bindFunction( LuaInterface::unitGetHitPoints,             "unitGetHitPoints");
    bindFunction( LuaInterface::unitGetInitialHitPoints,      "unitGetInitialHitPoints");
    bindFunction( LuaInterface::unitGetShields,               "unitGetShields");
    bindFunction( LuaInterface::unitGetEnergy,                "unitGetEnergy");
    bindFunction( LuaInterface::unitGetResources,             "unitGetResources");
    bindFunction( LuaInterface::unitGetInitialResources,      "unitGetInitialResources");
    bindFunction( LuaInterface::unitGetKillCount,             "unitGetKillCount");
    bindFunction( LuaInterface::unitGetGroundWeaponCooldown,  "unitGetGroundWeaponCooldown");
    bindFunction( LuaInterface::unitGetAirWeaponCooldown,     "unitGetAirWeaponCooldown");
    bindFunction( LuaInterface::unitGetSpellCooldown,         "unitGetSpellCooldown");
    bindFunction( LuaInterface::unitGetDefenseMatrixPoints,   "unitGetDefenseMatrixPoints");
    bindFunction( LuaInterface::unitGetDefenseMatrixTimer,    "unitGetDefenseMatrixTimer");
    bindFunction( LuaInterface::unitGetEnsnareTimer,          "unitGetEnsnareTimer");
    bindFunction( LuaInterface::unitGetIrradiateTimer,        "unitGetIrradiateTimer");
    bindFunction( LuaInterface::unitGetMaelstromTimer,        "unitGetMaelstromTimer");
    bindFunction( LuaInterface::unitGetPlagueTimer,           "unitGetPlagueTimer");
    bindFunction( LuaInterface::unitGetRemoveTimer,           "unitGetRemoveTimer");
    bindFunction( LuaInterface::unitGetStasisTimer,           "unitGetStatisTimer");
    bindFunction( LuaInterface::unitGetStimTimer,             "unitGetStimTimer");
    bindFunction( LuaInterface::unitGetPosition,              "unitGetPosition");
    bindFunction( LuaInterface::unitGetInitialPosition,       "unitGetInitialPosition");
    bindFunction( LuaInterface::unitGetTilePosition,          "unitGetTilePosition");
    bindFunction( LuaInterface::unitGetInitialTilePosition,   "unitGetInitialTilePosition");
    bindFunction( LuaInterface::unitGetDistanceToUnit,        "unitGetDistanceToUnit");
    bindFunction( LuaInterface::unitGetDistanceToPosition,    "unitGetDistanceToPosition");
    bindFunction( LuaInterface::unitGetAngle,                 "unitGetAngle");
    bindFunction( LuaInterface::unitGetVelocityX,             "unitGetVelocityX");
    bindFunction( LuaInterface::unitGetVelocityY,             "unitGetVelocityY");
    bindFunction( LuaInterface::unitGetTarget,                "unitGetTarget");
    bindFunction( LuaInterface::unitGetTargetPosition,        "unitGetTargetPosition");
    bindFunction( LuaInterface::unitGetOrder,                 "unitGetOrder");
    bindFunction( LuaInterface::unitGetOrderTarget,           "unitGetOrderTarget");
    bindFunction( LuaInterface::unitGetSecondaryOrder,        "unitGetSecondaryOrder");
    bindFunction( LuaInterface::unitGetBuildUnit,             "unitGetBuildUnit");
    bindFunction( LuaInterface::unitGetRemainingBuildTime,    "unitGetRemainingBuildTime");
    bindFunction( LuaInterface::unitGetRemainingTrainTime,    "unitGetRemainingTrainTime");
    bindFunction( LuaInterface::unitGetChild,                 "unitGetChild");
    bindFunction( LuaInterface::unitGetTrainingQueue,         "unitGetTrainingQueue");
    bindFunction( LuaInterface::unitGetTransport,             "unitGetTransport");
    bindFunction( LuaInterface::unitGetLoadedUnits,           "unitGetLoadedUnits");
    bindFunction( LuaInterface::unitGetInterceptorCount,      "unitGetInterceptorCount");
    bindFunction( LuaInterface::unitGetScarabCount,           "unitGetScarabCount");
    bindFunction( LuaInterface::unitGetSpiderMineCount,       "unitGetSpiderMineCount");
    bindFunction( LuaInterface::unitGetTech,                  "unitGetTech");
    bindFunction( LuaInterface::unitGetUpgrade,               "unitGetUpgrade");
    bindFunction( LuaInterface::unitGetRemainingResearchTime, "unitGetRemainingResearchTime");
    bindFunction( LuaInterface::unitGetRemainingUpgradeTime,  "unitGetRemainingUpgradeTime");
    bindFunction( LuaInterface::unitGetRallyPosition,         "unitGetRallyPosition");
    bindFunction( LuaInterface::unitGetAddon,                 "unitGetAddon");
    bindFunction( LuaInterface::unitGetUpgradeLevel,          "unitGetUpgradeLevel");
    bindFunction( LuaInterface::unitExists,                   "unitExists");
    bindFunction( LuaInterface::unitIsAccelerating,           "unitIsAccelerating");
    bindFunction( LuaInterface::unitIsBeingConstructed,       "unitIsBeingConstructed");
    bindFunction( LuaInterface::unitIsBeingHealed,            "unitIsBeingHealed");
    bindFunction( LuaInterface::unitIsBlind,                  "unitIsBlind");
    bindFunction( LuaInterface::unitIsBraking,                "unitIsBraking");
    bindFunction( LuaInterface::unitIsBurrowed,               "unitIsBurrowed");
    bindFunction( LuaInterface::unitIsCarryingGas,            "unitIsCarryingGas");
    bindFunction( LuaInterface::unitIsCloaked,                "unitIsCloaked");
    bindFunction( LuaInterface::unitIsCompleted,              "unitIsCompleted");
    bindFunction( LuaInterface::unitIsConstructing,           "unitIsConstructing");
    bindFunction( LuaInterface::unitIsDefenseMatrixed,        "unitIsDefenseMatrixed");
    bindFunction( LuaInterface::unitIsEnsnared,               "unitIsEnsnared");
    bindFunction( LuaInterface::unitIsFollowing,              "unitIsFollowing");
    bindFunction( LuaInterface::unitIsGatheringGas,           "unitIsGatheringGas");
    bindFunction( LuaInterface::unitIsGatheringMinerals,      "unitIsGatheringMinerals");
    bindFunction( LuaInterface::unitIsHallucination,          "unitIsHallucination");
    bindFunction( LuaInterface::unitIsIdle,                   "unitIsIdle");
    bindFunction( LuaInterface::unitIsIrradiated,             "unitIsIrradiated");
    bindFunction( LuaInterface::unitIsLifted,                 "unitIsLifted");
    bindFunction( LuaInterface::unitIsLoaded,                 "unitIsLoaded");
    bindFunction( LuaInterface::unitIsLockedDown,             "unitIsLockedDown");
    bindFunction( LuaInterface::unitIsMaelstrommed,           "unitIsMaelstrommed");
    bindFunction( LuaInterface::unitIsMorphing,               "unitIsMorphing");
    bindFunction( LuaInterface::unitIsMoving,                 "unitIsMoving");
    bindFunction( LuaInterface::unitIsParasited,              "unitIsParasited");
    bindFunction( LuaInterface::unitIsPatrolling,             "unitIsPatrolling");
    bindFunction( LuaInterface::unitIsPlagued,                "unitIsPlagued");
    bindFunction( LuaInterface::unitIsRepairing,              "unitIsRepairing");
    bindFunction( LuaInterface::unitIsResearching,            "unitIsResearching");
    bindFunction( LuaInterface::unitIsSelected,               "unitIsSelected");
    bindFunction( LuaInterface::unitIsSieged,                 "unitIsSieged");
    bindFunction( LuaInterface::unitIsStartingAttack,         "unitIsStartingAttack");
    bindFunction( LuaInterface::unitIsStasised,               "unitIsStasised");
    bindFunction( LuaInterface::unitIsStimmed,                "unitIsStimmed");
    bindFunction( LuaInterface::unitIsTraining,               "unitIsTraining");
    bindFunction( LuaInterface::unitIsUnderStorm,             "unitIsUnderStorm");
    bindFunction( LuaInterface::unitIsUnpowered,              "unitIsUnpowered");
    bindFunction( LuaInterface::unitIsUpgrading,              "unitIsUpgrading");
    bindFunction( LuaInterface::unitIsVisible,                "unitIsVisible");
    bindFunction( LuaInterface::unitIsBeingGathered,          "unitIsBeingGathered");
    bindFunction( LuaInterface::unitAttackMove,               "unitAttackMove");
    bindFunction( LuaInterface::unitAttackUnit,               "unitAttackUnit");
    bindFunction( LuaInterface::unitRightClickPosition,       "unitRightClickPosition");
    bindFunction( LuaInterface::unitRightClickUnit,           "unitRightClickUnit");
    bindFunction( LuaInterface::unitTrain,                    "unitTrain");
    bindFunction( LuaInterface::unitBuild,                    "unitBuild");
    bindFunction( LuaInterface::unitBuildAddon,               "unitBuildAddon");
    bindFunction( LuaInterface::unitResearch,                 "unitResearch");
    bindFunction( LuaInterface::unitUpgrade,                  "unitUpgrade");
    bindFunction( LuaInterface::unitStop,                     "unitStop");
    bindFunction( LuaInterface::unitHoldPosition,             "unitJoldPosition");
    bindFunction( LuaInterface::unitPatrol,                   "unitPatrol");
    bindFunction( LuaInterface::unitFollow,                   "unitFollow");
    bindFunction( LuaInterface::unitSetRallyPosition,         "unitSetRallyPosition");
    bindFunction( LuaInterface::unitSetRallyUnit,             "unitSetRallyUnit");
    bindFunction( LuaInterface::unitRepair,                   "unitRepair");
    bindFunction( LuaInterface::unitMorph,                    "unitMorph");
    bindFunction( LuaInterface::unitBurrow,                   "unitBurrow");
    bindFunction( LuaInterface::unitUnburrow,                 "unitUnburrow");
    bindFunction( LuaInterface::unitSiege,                    "unitSiege");
    bindFunction( LuaInterface::unitUnsiege,                  "unitUnsiege");
    bindFunction( LuaInterface::unitCloak,                    "unitCloak");
    bindFunction( LuaInterface::unitDecloak,                  "unitDecloak");
    bindFunction( LuaInterface::unitLift,                     "unitKift");
    bindFunction( LuaInterface::unitLand,                     "unitKand");
    bindFunction( LuaInterface::unitLoad,                     "unitKoad");
    bindFunction( LuaInterface::unitUnload,                   "unitUnload");
    bindFunction( LuaInterface::unitUnloadAll,                "unitUnloadAll");
    bindFunction( LuaInterface::unitUnloadAllToPosition,      "unitUnloadAllToPosition");
    bindFunction( LuaInterface::unitCancelConstruction,       "unitCancelConstruction");
    bindFunction( LuaInterface::unitHaltConstruction,         "unitHaltConstruction");
    bindFunction( LuaInterface::unitCancelMorph,              "unitCancelMorph");
    bindFunction( LuaInterface::unitCancelTrain,              "unitCancelTrain");
    //bindFunction( LuaInterface::unitCancelTrainAtSlot,      "unitCancelTrainAtSlot");
    bindFunction( LuaInterface::unitCancelAddon,              "unitCancelAddon");
    bindFunction( LuaInterface::unitCancelResearch,           "unitCancelResearch");
    bindFunction( LuaInterface::unitUseTech,                  "unitUseTech");
    bindFunction( LuaInterface::unitUseTechOnPosition,        "unitUseTechOnPosition");
    bindFunction( LuaInterface::unitUseTechOnUnit,            "unitUseTechOnUnit");
  }
}