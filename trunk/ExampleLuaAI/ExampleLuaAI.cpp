#include "ExampleLuaAI.h"

namespace LuaAI
{
  void AI::onStart()
  {
    if(BWAPI::Broodwar->isReplay())return;

    BWAPI::Broodwar->enableFlag(BWAPI::Flag::UserInput);

    script.onStart();
  }

  void AI::onEnd(bool isWinner)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onEnd(isWinner);
  }

  void AI::onFrame()
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onFrame();
  }

  bool AI::onSendText(std::string text)
  {
    if(BWAPI::Broodwar->isReplay())return false;

    return script.onSendText(text);
  }

  void AI::onPlayerLeft(BWAPI::Player*player)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onPlayerLeft(player);
  }

  void AI::onNukeDetect(BWAPI::Position target)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onNukeDetect(target);
  }

  void AI::onUnitCreate(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitCreate(unit);
  }

  void AI::onUnitDestroy(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitDestroy(unit);
  }

  void AI::onUnitMorph(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitMorph(unit);
  }

  void AI::onUnitShow(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitShow(unit);
  }

  void AI::onUnitHide(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitHide(unit);
  }

  void AI::onUnitRenegade(BWAPI::Unit*unit)
  {
    if(BWAPI::Broodwar->isReplay())return;

    script.onUnitRenegade(unit);
  }
}