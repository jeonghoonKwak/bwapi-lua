#pragma once

#include <BWAPI-Lua/LogFlags.h>
#include <fstream>

namespace BWAPI_Lua
{
  class Logger
  {
  public:
    ~Logger();
    Logger(const char*relativePath);
    static Logger*get();
    void log(const char*message,unsigned flags=LogFlags::NONE);
    void append(const char*message);
    unsigned traceFlags;
    bool mute;

  protected:
    void trace(const char*message);
    std::ofstream logStream;

  private:    
    unsigned lastFlags;    
  };

  static Logger*logger;
}