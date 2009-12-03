#include <BWAPI-Lua/Binder/BWAPI/BinderGame.h>

#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI.h>

namespace BWAPI_Lua
{
  namespace LuaInterface
  {
    int gameGetForces(lua_State*s)
    {
      std::set<BWAPI::Force*>f=BWAPI::Broodwar->getForces();
      int output=0;
      for(std::set<BWAPI::Force*>::const_iterator i=f.begin();i!=f.end();++i)
      {
        output+=pushForce(s,*i);
      }
      return output;
    }

    int gameGetPlayers(lua_State*s)
    {
      std::set<BWAPI::Player*>p=BWAPI::Broodwar->getPlayers();
      int output=0;
      for(std::set<BWAPI::Player*>::const_iterator i=p.begin();i!=p.end();++i)
      {
        output+=pushPlayer(s,*i);
      }
      return output;
    }

    int gameGetAllUnits(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getAllUnits());
    }

    int gameGetMinerals(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getMinerals());
    }

    int gameGetGeysers(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getGeysers());
    }

    int gameGetNeutralUnits(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getNeutralUnits());
    }

    int gameGetStaticMinerals(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getStaticMinerals());
    }

    int gameGetStaticGeysers(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getStaticGeysers());
    }

    int gameGetStaticNeutralUnits(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getStaticNeutralUnits());
    }

    int gameGetLatency(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getLatency());
      return 1;
    }

    int gameGetFrameCount(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getFrameCount());
      return 1;
    }

    int gameGetMouseX(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getMouseX());
      return 1;
    }

    int gameGetMouseY(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getMouseY());
      return 1;
    }

    int gameGetScreenX(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getScreenX());
      return 1;
    }

    int gameGetScreenY(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getScreenY());
      return 1;
    }

    int gameIsFlagEnabled(lua_State*s)
    {
      //INCOMPLETE
      //BWAPI::Broodwar->isFlagEnabled(...);
      return 0;
    }

    int gameEnableFlag(lua_State*s)
    {
      //INCOMPLETE
      //BWAPI::Broodwar->enableFlag(...);
      return 0;
    }

    int gameUnitsOnTile(lua_State*s)
    {
      BWAPI::Position p=popTilePosition(s);
      return pushUnitSet(s,BWAPI::Broodwar->unitsOnTile(p.x(),p.y()));
    }

    int gameGetLastError(lua_State*S)
    {
      //INCOMPLETE
      BWAPI::Broodwar->getLastError();
      return 0;
    }

    int gameMapWidth(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->mapWidth());
      return 1;
    }

    int gameMapHeight(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->mapHeight());
      return 1;
    }

    int gameMapFilename(lua_State*s)
    {
      lua_pushstring(s,BWAPI::Broodwar->mapFilename().c_str());
      return 1;
    }

    int gameMapName(lua_State*s)
    {
      lua_pushstring(s,BWAPI::Broodwar->mapName().c_str());
      return 1;
    }

    int gameGetMapHash(lua_State*s)
    {
      lua_pushinteger(s,BWAPI::Broodwar->getMapHash());
      return 1;
    }

    int gameBuildable(lua_State*s)
    {
      //BWAPI trunk supports buildable(TilePosition)
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushboolean(s,BWAPI::Broodwar->buildable(p.x(),p.y()));
      return 1;
    }

    int gameWalkable(lua_State*s)
    {
      //BWAPI trunk supports walkable(TilePosition)
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushboolean(s,BWAPI::Broodwar->walkable(p.x(),p.y()));
      return 1;
    }

    int gameVisible(lua_State*s)
    {
      //BWAPI trunk supports visible(TilePosition)
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushboolean(s,BWAPI::Broodwar->visible(p.x(),p.y()));
      return 1;
    }

    int gameGroundHeight(lua_State*s)
    {
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushinteger(s,BWAPI::Broodwar->groundHeight(p.x(),p.y()));
      return 1;
    }

    int gameHasCreep(lua_State*s)
    {
      //BWAPI trunk supports hasCreep(TilePosition)
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushboolean(s,BWAPI::Broodwar->hasCreep(p.x(),p.y()));
      return 1;
    }

    int gameHasPower(lua_State*s)
    {
      //BWAPI trunk supports hasPower(TilePosition,tileWidth,tileHeight)
      BWAPI::TilePosition p=popTilePosition(s);
      lua_pushboolean(s,BWAPI::Broodwar->hasPower(p.x(),p.y(),lua_tointeger(s,-1),lua_tointeger(s,-2)));
      lua_pop(s,2);
      return 1;
    }

    int gameCanBuildHere(lua_State*s)
    {
      BWAPI::Unit*u=popUnit(s);
      BWAPI::TilePosition p=popTilePosition(s);
      BWAPI::UnitType t=popUnitType(s);
      lua_pushboolean(s,BWAPI::Broodwar->canBuildHere(u,p,t));
      return 1;
    }

    int gameCanMake(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->canMake(popUnit(s),popUnitType(s)));
      return 1;
    }

    int gameCanResearch(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->canResearch(popUnit(s),popTechType(s)));
      return 1;
    }

    int gameCanUpgrade(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->canUpgrade(popUnit(s),popUpgradeType(s)));
      return 1;
    }

    int gameGetStartLocations(lua_State*s)
    {
      //INCOMPLETE
      BWAPI::Broodwar->getStartLocations();
      return 0;
    }

    int gamePrintf(lua_State*s)
    {
      //INCOMPLETE
      //BWAPI::Broodwar->printf(...);
      return 0;
    }

    int gameSendText(lua_State*s)
    {
      //INCOMPLETE
      //BWAPI::Broodwar->sendText(...);
      return 0;
    }

    int gameChangeRace(lua_State*s)
    {
      //Not yet implemented by BWAPI
      return 0;
    }

    int gameIsMultiplayer(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->isMultiplayer());
      return 1;
    }

    int gameIsPaused(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->isPaused());
      return 1;
    }

    int gameIsReplay(lua_State*s)
    {
      lua_pushboolean(s,BWAPI::Broodwar->isReplay());
      return 1;
    }

    int gameStartGame(lua_State*s)
    {
      //Not yet implemented by BWAPI
      BWAPI::Broodwar->startGame();
      return 0;
    }

    int gamePauseGame(lua_State*s)
    {
      BWAPI::Broodwar->pauseGame();
      return 0;
    }

    int gameResumeGame(lua_State*s)
    {
      BWAPI::Broodwar->resumeGame();
      return 0;
    }

    int gameLeaveGame(lua_State*s)
    {
      BWAPI::Broodwar->leaveGame();
      return 0;
    }

    int gameRestartGame(lua_State*s)
    {
      BWAPI::Broodwar->restartGame();
      return 0;
    }

    int gameSetLocalSpeed(lua_State*s)
    {
      BWAPI::Broodwar->setLocalSpeed(lua_tointeger(s,-1));
      lua_pop(s,1);
      return 0;
    }

    int gameGetSelectedUnits(lua_State*s)
    {
      return pushUnitSet(s,BWAPI::Broodwar->getSelectedUnits());
    }

    int gameSelf(lua_State*s)
    {
      return pushPlayer(s,BWAPI::Broodwar->self());
    }

    int gameEnemy(lua_State*s)
    {
      return pushPlayer(s,BWAPI::Broodwar->enemy());
    }
  }

  void BinderGame::bindAllFunctions()
  {
    bindFunction( LuaInterface::gameGetForces,         "gameGetForces");
    bindFunction( LuaInterface::gameGetPlayers,        "gameGetPlayers");
    bindFunction( LuaInterface::gameGetAllUnits,       "gameGetAllUnits");
    bindFunction( LuaInterface::gameGetMinerals,       "gameGetMinerals");
    bindFunction( LuaInterface::gameGetGeysers,        "gameGetGeysers");
    bindFunction( LuaInterface::gameGetNeutralUnits,   "gameGetNeutralUnits");
    bindFunction( LuaInterface::gameGetStaticMinerals, "gameGetStaticMinerals");
    bindFunction( LuaInterface::gameGetStaticGeysers,  "gameGetStaticGeysers");
    bindFunction( LuaInterface::gameGetLatency,        "gameGetLatency");
    bindFunction( LuaInterface::gameGetFrameCount,     "gameGetFrameCount");
    bindFunction( LuaInterface::gameGetMouseX,         "gameGetMouseX");
    bindFunction( LuaInterface::gameGetMouseY,         "gameGetMouseY");
    bindFunction( LuaInterface::gameGetScreenX,        "gameGetScreenX");
    bindFunction( LuaInterface::gameGetScreenY,        "gameGetScreenY");
    bindFunction( LuaInterface::gameIsFlagEnabled,     "gameIsFlagEnabled");
    bindFunction( LuaInterface::gameEnableFlag,        "gameEnableFlag");
    bindFunction( LuaInterface::gameUnitsOnTile,       "gameUnitsOnTile");
    bindFunction( LuaInterface::gameGetLastError,      "gameGetLastError");
    bindFunction( LuaInterface::gameMapWidth,          "gameMapWidth");
    bindFunction( LuaInterface::gameMapHeight,         "gameMapHeight");
    bindFunction( LuaInterface::gameMapFilename,       "gameMapFilename");
    bindFunction( LuaInterface::gameMapName,           "gameMapName");
    bindFunction( LuaInterface::gameGetMapHash,        "gameGetMapHash");
    bindFunction( LuaInterface::gameBuildable,         "gameBuildable");
    bindFunction( LuaInterface::gameWalkable,          "gameWalkable");
    bindFunction( LuaInterface::gameGroundHeight,      "gameHroundHeight");
    bindFunction( LuaInterface::gameHasCreep,          "gameHasCreep");
    bindFunction( LuaInterface::gameHasPower,          "gameHasPower");
    bindFunction( LuaInterface::gameCanBuildHere,      "gameCanBuildHere");
    bindFunction( LuaInterface::gameCanMake,           "gameCanMake");
    bindFunction( LuaInterface::gameCanResearch,       "gameCanResearch");
    bindFunction( LuaInterface::gameCanUpgrade,        "gameCanUpgrade");
    bindFunction( LuaInterface::gameGetStartLocations, "gameGetStartLocations");
    bindFunction( LuaInterface::gamePrintf,            "gamePrintf");
    bindFunction( LuaInterface::gameSendText,          "gameSendText");
    bindFunction( LuaInterface::gameChangeRace,        "gameChangeRace");
    bindFunction( LuaInterface::gameIsMultiplayer,     "gameIsMultiplayer");
    bindFunction( LuaInterface::gameIsPaused,          "gameIsPaused");
    bindFunction( LuaInterface::gameIsReplay,          "gameIsReplay");
    bindFunction( LuaInterface::gameStartGame,         "gameStartGame");
    bindFunction( LuaInterface::gamePauseGame,         "gamePauseGame");
    bindFunction( LuaInterface::gameResumeGame,        "gameResumeGame");
    bindFunction( LuaInterface::gameLeaveGame,         "gameLeaveGame");
    bindFunction( LuaInterface::gameRestartGame,       "gameRestartGame");
    bindFunction( LuaInterface::gameSetLocalSpeed,     "gameSetLocalSpeed");
    bindFunction( LuaInterface::gameGetSelectedUnits,  "gameGetSelectedUnits");
    bindFunction( LuaInterface::gameSelf,              "gameSelf");
    bindFunction( LuaInterface::gameEnemy,             "gameEnemy");
  }
}