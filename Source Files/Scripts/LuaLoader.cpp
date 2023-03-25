#include "LuaLoader.h"

/*
explicit PixelEngine::LuaLoader::LuaLoader(const std::string& tempFile) : m_ReadFile(tempFile)
{

}
*/
/*
void PixelEngine::LuaLoader::LoadScript()
{
    lua_State* m_LaunchState = luaL_newstate();

    luaL_openlibs(m_launchLua);



    if (luaL_loadfile(m_LaunchState, m_ReadFile.c_str()))
    {
        DisplayErrorType(m_LaunchState);
        lua_close(m_LaunchState);

        return;
    }

    // Save the Lua state for later execution
    m_RunningState = m_launchLua;
}


void PixelEngine::LuaLoader::RunScript()
{
    if (lua_pcall(m_RunningState, 0, 0, 0))
    {
        DisplayErrorType(m_RunningState);
    }
}


void PixelEngine::LuaLoader::LoadandRun()
{
    LoadScript();
    RunScript();
}



void PixelEngine::LuaLoader::DisplayErrorType(lua_State* m_LaunchState)
{
    const char* errorType = lua_tostring(m_LaunchState, -1);

    std::cout << "Lua Error Type " << errorType << std::endl;

    lua_pop(m_LaunchState);
}
*/