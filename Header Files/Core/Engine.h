#pragma once

#include "OpenGL_API.h"
#include "GameWindow.h"


	/******************************************************************************************************************************************************
	 * @class : Engine
	 * @brief : blah blah blah
	 * @brief :
	 * 
	 * @version : 1.0 
	 * @date 	: 10/4/2023
	 * @author  : Jason ___
	 * @version : 1.1
	 * @date 	: 10/4/2023
	 * @author  : William Halling
	 * @brief   : Added to init and run class, renamed some vars as they were unclear of what they were doing
	 ******************************************************************************************************************************************************/

namespace PixelEngine
{

	class Engine
	{
		public:

			// place object references here 

			

			
			// returning reference to the singleton instance
			static Engine& getInstance();

			// init all the engine variables 
			void init();

			// running the loop
			void run();


			void TurnOffEngine();


		private:

			// constructors
			Engine();
			// destructor
			~Engine();


			// deleting the assignment + copy constructor
			Engine(const Engine&) = delete;
			Engine& operator=(const Engine&) = delete;

				// private instance
			static Engine* staticInstance;
			
			
				// window object
			PixelEngine::GameWindow* m_GameWindow;
			Graphics_API* m_GraphicsAPI; 
			OpenGL_API* m_OpenGL_API;

			//PixelEngine::OpenGL_API

	};	
} // namespace name

