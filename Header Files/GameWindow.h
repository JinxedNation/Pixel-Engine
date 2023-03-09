#pragma once
#include <iostream>
#include <string>
#include <sstream>


/*******************
 * @class   : GameWindow
 * @brief   : Used to generate a gameWindow, only contains information relevant to a game window and launching GLFW
 * @date    : March 2023
 * @author  : William Halling
 * @version : 1.0
 ********************/

namespace PixelEngine
{
	class GameWindow
	{
	public:

		GameWindow(int tempWidth, int tempHeight, const char* tempTitle);


			/**********************************************************************
			 *@brief : Destructor for GameWindow
			 *@brief : Used to manage memory and delete the gameWindow object
			 **********************************************************************/
		
		~GameWindow();


			/**********************************************************************
			 *@brief : getGameWindow
			 *@brief : Used to get the GameWindow()
			 **********************************************************************/

		void getGLFWSettings();


			/**********************************************************************
			 *@brief : getGameWindow
			 *@brief : Used to get the GameWindow()
			 **********************************************************************/

		GLFWwindow* getGameWindow() const;


			/**********************************************************************
			 *@brief  : getProjectTitle
			 *@brief  : Used to get the title of the project or game
			 *@param  : 
			 *@return : C++ const * as the project title
			 **********************************************************************/

		const char* getProjectTitle() const;


			/**********************************************************************
			 *@brief  : getWindowWidth
			 *@brief  : Used to get the title of the project or game
			 *@param  :
			 *@return : C++ const string as the project title
			 **********************************************************************/

		int getWindowWidth() const;


			/**********************************************************************
			 *@brief  : getWindowHeight
			 *@brief  : Used to get the window height 
			 *@param  :
			 *@return : C++ const string as the project title
			 **********************************************************************/

		int getWindowHeight() const;


			/**********************************************************************
			 *@brief  : setTitle
			 *@brief  : Used to set the title of the project
			 * 
			 *@param  : const std::string &tempTitle 
			 *@return : 
			 **********************************************************************/

		void setProjectTitle(const char* tempTitle);


			/**********************************************************************
			 *@brief  : setWindowHeight
			 *@brief  : Used to set the height of the game window
			 *
			 *@param  : tempHeight - int
			 *@return : 
			 **********************************************************************/

		void setWindowHeight(int tempHeight);


			/**********************************************************************
			 *@brief  : setWindowWidth
			 *@brief  : Used to set the width of the game window
			 *
			 *@param  : tempWidth - int
			 *@return :
			 **********************************************************************/

		void setWindowWidth(int tempWidth);


			/**********************************************************************
			 *@brief  : testIsGLFWWorking
			 *@brief  : Used to test if GLFW is running or not
			 *
			 *@param  :
			 *@return :
			 **********************************************************************/

		void testIsGLFWWorking();


			/**********************************************************************
			 *@brief  : testBuildWindow
			 *@brief  : Displays an error message if GLFW cant be loaded
			 * 
			 *@param  : GLFWwindow* m_GameWindow
			 *@return :
			 **********************************************************************/

		void testBuildWindow(GLFWwindow* m_GameWindow);


			/**********************************************************************
			 *@brief  : testIsGLADWorking
			 *@brief  : Dispalys an error message for glad if GLAD library cant be loaded
			 *@param  :	
			 *@return :
			 **********************************************************************/

		void testIsGLADWorking();


			/**********************************************************************
			 *@brief  : launchGameWindow
			 *@brief  : Used to create the project / game window
			 
			 *@param  : tempWidth, 
			 *@param  : tempHeight - integer 
			 *@param  : tempTitle  - const char* 
			 *@return :
			 **********************************************************************/

		GLFWwindow* launchGameWindow(int tempWidth, int tempHeight, const char* tempTitle);



	private:
		
		void clear();


		 int m_WindowHeight;
		 int m_WindowWidth;
		 const char* m_ProjectTitle;

		 GLFWwindow* m_GameWindow;
	};
}
