#pragma once
#include <BWAPI.h>
#include <lua.hpp>
#include <string>

namespace BWAPI_Lua
{
  class AIScript
  {
  public: 
    AIScript();
    ~AIScript();
    virtual void onStart();
    virtual void onEnd(bool isWinner);
    virtual void onFrame();
    virtual bool onSendText(const std::string&);
    virtual void onPlayerLeft(BWAPI::Player*);
    virtual void onNukeDetect(BWAPI::Position);
    virtual void onUnitCreate(BWAPI::Unit*);
    virtual void onUnitDestroy(BWAPI::Unit*);
    virtual void onUnitMorph(BWAPI::Unit*);
    virtual void onUnitShow(BWAPI::Unit*);
    virtual void onUnitHide(BWAPI::Unit*);
    virtual void onUnitRenegade(BWAPI::Unit*);

  protected:
    void loadFile(const char*scriptFileRelativePath);
    void prepareFunction(const char*functionName);
    bool callFunction(int arguments=0,int returnValues=0);

  protected:
    lua_State*luaState;
    std::string preparedFunctionName;
  };
}