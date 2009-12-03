function onStart()
  logInfo("Lua onStart called!")
  logInfo("Latency: "..tostring(gameGetLatency()))
  logInfo("Is multiplayer: "..tostring(gameIsMultiplayer()))
end

function onEnd(argIsWinner)
end

function onFrame()
  if(gameGetFrameCount()%1000==0)then
    logInfo("Frame count:"..tostring(gameGetFrameCount()))
  end  
end

function onSendText(argText)
end

function onPlayerLeft(argPlayer)
end

function onNukeDetect(argPosition)
end

function onUnitCreate(argUnit)
  logInfo("onUnitCreate()")
  logInfo("Unit created:  "..unitTypeGetName(unitGetType(argUnit)))
end

function onUnitDestroy(argUnit)
  logInfo("onUnitDestroy()")
  logInfo("Unit destroyed: "..unitTypeGetName(unitGetType(argUnit)))
end

function onUnitMorph(argUnit)
  logInfo("onUnitMorph()")
  logInfo("Unit morphed: "..unitTypeGetName(unitGetType(argUnit)))
end

function onUnitShow(argUnit)
  logInfo("onUnitShow()")
  logInfo("Unit shown: "..unitTypeGetName(unitGetType(argUnit)))
end

function onUnitHide(argUnit)
  logInfo("onUnitHide()")
  logInfo("Unit hidden: "..unitTypeGetName(unitGetType(argUnit)))
end

function onUnitRenegade(argUnit)
  logInfo("onUnitRenegade()")
  logInfo("Unit mind controlled: "..unitTypeGetName(unitGetType(argUnit)))
end