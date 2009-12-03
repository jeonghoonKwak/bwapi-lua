#pragma once
#include <BWAPI.h>
#include <BWAPI-Lua.h>

namespace LuaAI
{
  class AI:public BWAPI::AIModule
  {
  public: 
    virtual void onStart();
    virtual void onEnd(bool isWinner);
    virtual void onFrame();
    virtual bool onSendText(std::string text);
    virtual void onPlayerLeft(BWAPI::Player*);
    virtual void onNukeDetect(BWAPI::Position);
    virtual void onUnitCreate(BWAPI::Unit*);
    virtual void onUnitDestroy(BWAPI::Unit*);
    virtual void onUnitMorph(BWAPI::Unit*);
    virtual void onUnitShow(BWAPI::Unit*);
    virtual void onUnitHide(BWAPI::Unit*);
    virtual void onUnitRenegade(BWAPI::Unit*);
 
  protected:
    BWAPI_Lua::AIScript script;
  };
}