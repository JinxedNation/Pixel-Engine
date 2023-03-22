#pragma once
#include <iostream>
#include <fstream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

/******************************************************************************************************************
 * @class   : GameWindow
 * @brief   : Used to generate a gameWindow, only contains information relevant to a game window and launching GLFW
 * 
 * 
 * @author  : William Halling
 * @date    : 2023 March
 * @version : 1.2
 * @bug     : None known, however engineer was tired I suggest bringing coffee
 ******************************************************************************************************************/

namespace PixelEngine
{
	class GameWindow
	{
		public:

				/***********************************************************************************************
				 * @brief  : GameWindow() - constructor for the shell of the program
				 * @brief  : used to set m_wWidth, m_wHeight, m_ProjectTitle
				 *
				 * @param  : temp_Width  - int
				 ***********************************************************************************************/

			GameWindow(int tempWidth, int tempHeight, const char* tempTitle);
		

				/***********************************************************************************************
				 * @brief : Destructor for GameWindow
				 * @brief : Used to manage memory and delete the gameWindow object
				 ***********************************************************************************************/

			~GameWindow();


				/***********************************************************************************************
				 * @brief  : getGameWindow
				 * @brief  : Used to get the GLFW settings 
				 * @return : void
				 ***********************************************************************************************/

			void getGLFWSettings();


				/***********************************************************************************************
				 * @brief  : getGameWindow
				 * @brief  : Used to get a glfw window pointer GameWindow()
				 * @return : GLFWwindow* m_GameWindow 
				 ***********************************************************************************************/

			GLFWwindow* getGameWindow() const;


				/***********************************************************************************************
				 * @brief  : getProjectTitle
				 * @brief  : Used to get the title of the project or game
				 * @return : C++ const * as the project title
				 ***********************************************************************************************/

			const char* getProjectTitle() const;


				/***********************************************************************************************
				 * @brief  : getWindowWidth
				 * @brief  : Used to get the width of the game window
				 * 
				 * @return : m_wWidth int
				 ***********************************************************************************************/

			int getWindowWidth() const;


				/***********************************************************************************************
				 * @brief  : getWindowHeight
				 * @brief  : Used to get the window height
				 * @return : C++ const string as the project title
				 ***********************************************************************************************/

			int getWindowHeight() const;


				/***********************************************************************************************
				 * @brief  : setTitle
				 * @brief  : Used to set the title of the project
				 *
				 * @param  : const std::string &tempTitle - tempTitle used to set m_ProjectTitle
				 * @return : void
				 ***********************************************************************************************/

			void setProjectTitle(const char* tempTitle);


				/***********************************************************************************************
				 * @brief  : setWindowHeight
				 * @brief  : Used to set the height of the game window
				 *
				 * @param  : tempHeight - int
				 * @return : void
				 ***********************************************************************************************/

			void setWindowHeight(int tempHeight);


				/***********************************************************************************************
				 * @brief  : setWindowWidth
				 * @brief  : Used to set the width of the game window
				 *
				 * @param  : tempWidth - int
				 * @return : void
				 ***********************************************************************************************/

			void setWindowWidth(int tempWidth);


				/*********************************************************************************************
				 * @brief  : SetWindow()
				 * @brief  : used to set the game window
				 *
				 * @param  : tempWindow GLFWwindow - a temporary gameWindow
				 * @return : void 
				 *********************************************************************************************/

			void setWindow(GLFWwindow* tempWindow);


				/***********************************************************************************************
				 * @brief  : testIsGLFWWorking
				 * @brief  : Used to test if GLFW is running or not
				 * @return : void
				 ***********************************************************************************************/

			void testIsGLFWWorking();


				/**********************************************************************************************
				 * @brief  : testBuildWindow
				 * @brief  : Displays an error message if GLFW cant be loaded
				 * @param  : GLFWwindow* m_GameWindow
				 * @return : void
				 ***********************************************************************************************/

			void testBuildWindow(GLFWwindow* m_GameWindow);


				/**********************************************************************************************
				 * @brief  : testIsGLADWorking
				 * @brief  : Dispalys an error message for glad if GLAD library cant be loaded
				 * @return : void
				 **********************************************************************************************/

			void testIsGLADWorking();


				/*********************************************************************************************
				 * @brief  : swapBuffers
				 * @brief  : used to swap GLFW buffers
				 * @return : void
				 *********************************************************************************************/

			void swapBuffers() const;


				/*********************************************************************************************
				 * @brief  : shouldClose
				 * @brief  : checks to see if the game window should be closed or not
				 * @return : bool condition based on if the window should be closed
				 *********************************************************************************************/

			bool shouldClose() const;


				/*********************************************************************************************
				 * @brief  : launchGameWindow
				 * @brief  : Used to create the project / game window
				 *
				 * @param  : tempWidth,
				 * @param  : tempHeight - integer
				 * @param  : tempTitle  - const char*
				 * @return :
				 *********************************************************************************************/

			GLFWwindow* launchGameWindow(int tempWidth, int tempHeight, const char* tempTitle);


		private:

				/*********************************************************************************************
				 * @brief  : clear
				 * @brief  : clears the variables of the GameWindow
				 * @return : void
				 *********************************************************************************************/

			void clear();

			int m_wHeight;
			int m_wWidth;
			const char* m_ProjectTitle;

			GLFWwindow* m_GameWindow;
	};
}