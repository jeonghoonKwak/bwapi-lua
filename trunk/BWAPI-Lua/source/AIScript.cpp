#include <BWAPI-Lua/AIScript.h>

#include <BWAPI-Lua/Binder/Binder.h>
#include <BWAPI-Lua/Binder/BWAPI-Lua/BinderBWAPI-Lua.h>
#include <BWAPI-Lua/Binder/BWAPI/BinderBWAPI.h>
#include <BWAPI-Lua/Binder/BWTA/BinderBWTA.h>
#include <BWAPI-Lua/LuaInterface.h>
#include <BWAPI-Lua/Logger.h>
#include <BWAPI-Lua/LogFlags.h>
#include <fstream>
#include <set>
#include <string>

namespace BWAPI_Lua
{
  /////////////////
  // Lua methods //
  /////////////////

  int luaAtPanic(lua_State* state)
  {
    Logger::get()->log("Lua panicked",LogFlags::LUA|LogFlags::ERROR);
    return 0;
  }

  ////////////
  // Public //
  ////////////

  AIScript::AIScript()
  {
    //Create the basic Lua state
    luaState=lua_open();
    luaL_openlibs(luaState);

    //Lua should call luaAtPanic if it encounters an error
    //while running in unprotected mode.
    //We don't expect to ever run in unprotected mode,
    //but this will let us know if we accidentally do and problems arise.
    lua_atpanic(luaState,luaAtPanic);

    //Add our C interface to the Lua state
    std::set<Binder*> binders;
    binders.insert(new BinderGame());
    binders.insert(new BinderLogger());
    binders.insert(new BinderPlayer());
    binders.insert(new BinderRace());
    binders.insert(new BinderTechType());
    binders.insert(new BinderUnit());
    binders.insert(new BinderUnitType());
    binders.insert(new BinderUpgradeType());
    binders.insert(new BinderWeaponType());
    for(std::set<Binder*>::iterator i=binders.begin();i!=binders.end();++i)
    {
      (*i)->addBindings(luaState);
      delete *i;
    }

    //Load expected script files.
    loadFile("bwapi-data/AI/scripts/Interface.lua");
  }

  AIScript::~AIScript()
  {
    if(luaState)lua_close(luaState);  
  }

  void AIScript::onStart()
  {
    prepareFunction("onStart");
    callFunction();
  }

  void AIScript::onEnd(bool isWinner)
  {
    prepareFunction("onEnd");
    lua_pushboolean(luaState,isWinner);
    callFunction(1);
  }

  void AIScript::onFrame()
  {
    prepareFunction("onFrame");
    callFunction();
  }

  bool AIScript::onSendText(const std::string& text)
  {
    prepareFunction("onSendText");
    lua_pushstring(luaState,text.c_str());
    callFunction(1,1);
    bool output=!!lua_toboolean(luaState,-1);
    lua_pop(luaState,-1);
    return output;
  }

  void AIScript::onPlayerLeft(BWAPI::Player* player)
  {
    prepareFunction("onPlayerLeft");
    callFunction(LuaInterface::pushPlayer(luaState,player));
  }

  void AIScript::onNukeDetect(BWAPI::Position target)
  {
    prepareFunction("onNukeDetect");
    callFunction(LuaInterface::pushPosition(luaState,target));
  }

  void AIScript::onUnitCreate(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitCreate");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  void AIScript::onUnitDestroy(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitDestroy");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  void AIScript::onUnitMorph(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitMorph");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  void AIScript::onUnitShow(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitShow");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  void AIScript::onUnitHide(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitHide");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  void AIScript::onUnitRenegade(BWAPI::Unit* unit)
  {
    prepareFunction("onUnitRenegade");
    callFunction(LuaInterface::pushUnit(luaState,unit));
  }

  ///////////////
  // Protected //
  ///////////////

  void AIScript::loadFile(const char* scriptFileRelativePath)
  {
    Logger::get()->log("Loading Lua script from ",LogFlags::LUA);
    Logger::get()->append(scriptFileRelativePath);
    
    //Create a file stream to the script file
    std::ifstream scriptFile(scriptFileRelativePath);
    if(scriptFile.fail())
    {
      Logger::get()->log("Lua script file not found",LogFlags::LUA|LogFlags::ERROR);
      return;
    }

    //Copy the script from the file stream
    std::string scriptText;
    std::string nextLine;
    while(std::getline(scriptFile,nextLine))
    {
      if(scriptText.length()>0)scriptText.append("\n");
      scriptText.append(nextLine);
    }    

    //Load the script
    if(luaL_dostring(luaState,scriptText.c_str()))
    {
      Logger::get()->log("Couldn't load Lua script file: ",LogFlags::LUA|LogFlags::ERROR);
      Logger::get()->append(scriptFileRelativePath);
      Logger::get()->append("");
      Logger::get()->append("Error was: ");
      Logger::get()->append(lua_tostring(luaState,-1));
    }
  }

  void AIScript::prepareFunction(const char*functionName)
  {
    lua_getglobal(luaState,functionName);
    preparedFunctionName.assign(functionName);
  }

  bool AIScript::callFunction(int arguments,int returnValues)
  {
    if(lua_pcall(luaState,arguments,returnValues,NULL))
    {
      Logger::get()->log("Lua function call failed: ",LogFlags::LUA|LogFlags::ERROR);
      Logger::get()->append(preparedFunctionName.c_str());
      Logger::get()->append("");
      Logger::get()->append("Error was: ");
      Logger::get()->append(lua_tostring(luaState,-1));
      return false;
    }
    return true;
  }
}