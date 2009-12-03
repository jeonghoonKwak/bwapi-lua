#include <BWAPI-Lua/Logger.h>
#include <BWAPI.h>
#include <fstream>

namespace BWAPI_Lua
{
  Logger::Logger(const char*relativePath)
  :logStream(relativePath,std::ios_base::trunc)
  ,traceFlags(LogFlags::ANY)
  ,mute(false)
  {
    logStream << "[[[ Log begins ]]]\n";
  }

  Logger::~Logger()
  {
    logStream << "[[[ Log ends ]]]\n";
  }

  void Logger::log(const char*message,unsigned flags)
  {
    lastFlags=flags|LogFlags::ANY;

    trace(message);

    logStream<<std::endl<<"::::"<<flags<<"::::"<<std::endl<<message;
    logStream.flush();
  }

  void Logger::append(const char*message)
  {
    trace(message);
    logStream<<message;
    logStream.flush();
  }

  void Logger::trace(const char*message)
  {
    //BWAPI::Broodwar->printf("Trace? %d %d %d", lastFlags, traceFlags, lastFlags&traceFlags);
    if(lastFlags&traceFlags)BWAPI::Broodwar->printf(message);
  }

  Logger* Logger::get()
  {
    if(!logger)logger=new Logger("bwapi-data/logs/BLAILog.txt");
    return logger;
  }
}