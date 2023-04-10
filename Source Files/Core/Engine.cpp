

#include "Core/Engine.h"

// setting the static instance to null
Engine* Engine::staticInstance = nullptr;



PixelEngine::Engine::Engine()
{

}

PixelEngine::Engine::~Engine()
{
	// delete allocated memory? 
	delete engineWindow;

}


Engine& PixelEngine::Engine::getInstance()
{
	if (!staticInstance) 
	{
		staticInstance = new Engine();
	}

	return *staticInstance;
}



// init all the engine variables 
void PixelEngine::Engine::init() 
{
	/// initialize all subsystems required and game state

	// Step 1 : read all the lua files to fill up the member objects of the engine class?

	// Perhaps at this point engine would read a lua file to find out what the name of the game window would be?
	engineWindow = new PixelEngine::GameWindow(640, 480, "Pixel's World");

}

// running the loop
void PixelEngine::Engine::run() 
{
	while(!engineWindow->shouldClose())
	{
		///generateGameWorld
		///inputclass object
		///OpenGLAPI object

		engineWindow->swapBuffers();
	}


}