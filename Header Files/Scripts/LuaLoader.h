#pragma once

#include <iostream>
#include <string>
#include <lua.hpp>


 
	/*******************************************************************************************
	 * @brief   : LuaLoader class 
	 * @brief   : Class is used for loading and running lua scripts
	 *
	 * 
	 * @author  : William Halling Howard
	 * @date    : 2023 March
	 * @version : 1.2
	 * @bug     : None known, however engineer was tired I suggest bringing coffee
	 *******************************************************************************************/

namespace PixelEngine
{
	class LuaLoader
	{
	    public:

                /***************************************************************
                 * @brief  : LoadScript()
                 * @brief  : used to load the lua script
                 * @return : void
                 ***************************************************************/

            explicit LuaLoader(const std::string& tempFile);


                /***************************************************************
                 * @brief  : LoadScript()
                 * @brief  : Role is to create a new Lua State and opens lua libraries
                 *			 used to load the lua script
                 *			 calls Display error type if an error occurs
                 *
                 * @return : void
                 ***************************************************************/

            void LoadScript();


                /***************************************************************
                 * @brief  : RunScript()
                 * @brief  : used to run the lua script
                 *			 if an error occurs calls DisplayErrorType
                 *
                 *
                 * @return : void
                 ***************************************************************/

            void RunScript();

                /***************************************************************
                 * @brief  : LoadandRun()
                 * @brief  : calls the load and the run script functions
                 * @return : void
                 ***************************************************************/

            void LoadandRun();


	    private:

                /*********************************************************
                 * @brief : DisplayErrorType()
                 * @brief : Displays a given error on loading or running a lua script
                 *********************************************************/

            void DisplayErrorType(lua_State* m_LaunchState);


                /*********************************************************
                 * @brief : std::string used for getting read file path
                 *********************************************************/

            std::string m_ReadFile;


                /*********************************************************
                 * @brief : provides a lua_State
                 *********************************************************/

            lua_State* m_RunningState;
	};
}
