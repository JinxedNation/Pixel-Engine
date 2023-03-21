#include "Player.h"


Player::Player() 
{
    // Initialize player data here. e.g. load model, initial position, speed and such unless lua dealing with this.
}

Player::~Player() 
{
    // Release any player resources here.
}



    /*********************************************************************************************************
     * used to updater the player's state based on deltaTime and other factors such as user input.
     * update the player's position, 
     * perform character animation 
     * 
     *********************************************************************************************************/
    
void Player::Update(float deltaTime) 
{

}


    /******************************************************************************************
     * drawObject the player using OpenGL.
     * draw the player model at current xyz location
     * apply textures
     * add physics
     * 
     * NOTE: This is just a placeholder. implementation to be done inside Graphics engne or the facade engine
     *****************************************************************************************/

void Player::drawObject() 
{
    std::cout << "Rendering player..." << std::endl;
}