#pragma once


#include "GameWindow.h"

class Engine {



public:

	// place object references here 

	// window object
	PixelEngine::GameWindow* engineWindow;
	
	// returning reference to the singleton instance
	static Engine& getInstance();

	// init all the engine variables 
	void init();

	// running the loop
	void run();


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

};