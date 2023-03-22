#include "GameWindow.h"



/*******************
 * @class   : Client
 * @brief   : contains main and will load program
 * @date    : March 2023
 * @author  : William Halling
 * @version : 1.0
 ********************/


int main()
{
	PixelEngine::GameWindow pixelsEngine(640, 480, "Pixel's World");
	
	pixelsEngine.launchGameWindow(650, 640, "Pixels World");


	return 0;

}
