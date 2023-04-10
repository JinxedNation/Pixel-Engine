

#include "Core/Engine.h"

// setting the static instance to null
Engine* Engine::staticInstance = nullptr;



Engine::Engine()
{

}

Engine::~Engine()
{
	// delete allocated memory? 
	delete engineWindow;

}


Engine& Engine::getInstance()
{
	if (!staticInstance) {
		staticInstance = new Engine();
	}

	return *staticInstance;


}



// init all the engine variables 
void Engine::init() {


	// Step 1 : read all the lua files to fill up the member objects of the engine class?

	// Perhaps at this point engine would read a lua file to find out what the name of the game window would be?
	engineWindow = new PixelEngine::GameWindow(640, 480, "Pixel's World");

}

// running the loop
void Engine::run() {



}