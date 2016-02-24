# About #

BWAPI-Lua is a set of Lua bindings for BWAPI.

BWAPI-Lua is currently built against BWAPI 2.3 and supports almost all BWAPI calls. Future updates will bring it up to date with the latest stable BWAPI version and add bindings for BWTA.

# Included #

The repository currently includes:

  * Headers and compiled static libraries for BWAPI-Lua
  * Headers and compiled static libraries for BWAPI 2.3 and BWTA
  * Headers and compiled static libraries for LuaJIT 2.0.0-beta2
  * MSVC++ 2008 project files

# Quick start #

If you would like to try writing AIs in Lua as quickly as possible, follow these steps. This assumes working knowledge of BWAPI:

  1. From the "Source" tab, check out the trunk
  1. From trunk/ExampleLuaAI/lib, copy ExampleLuaAI.dll to bwapi-data/ai
  1. From trunk/ExampleScript, copy Interface.lua to bwapi-data/ai/scripts
  1. Edit bwapi-data/bwapi.ini, set ai\_dll = bwapi-data\ai\ExampleLuaAI.dll
  1. From the BWAPI homepage (See links on the right), get a copy of BWAPI 2.3 and follow installation instructions

If I missed any steps, please let me know!

# Calling BWAPI from Lua #

The Lua version of BWAPI isn't yet documented, but the names usually map directly to BWAPI methods:

```
UnitType::getName() --> unitTypeGetName( MY_UNIT_TYPE )
```

If in doubt, refer to the BWAPI-Lua/source/Binder/BWAPI for the Lua name.

# Contributing #

Let me know if you'd like to contribute or have suggestions for organizing the project. You can reach me at dan d0t gant at gmail d0t com.

Even if you're just using BWAPI-Lua, I'd love to hear about it!