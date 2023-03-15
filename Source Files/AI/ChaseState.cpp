#include "ChaseState.h"


void PixelEngine::ChaseState::update(NPC* tempNPC)  
{
    setSpeed();
}



void PixelEngine::ChaseState::setIsHidden(bool tempHidden) { m_IsHidden = tempHidden; }
void PixelEngine::ChaseState::setSpeed(Vector3D tempSpeed) { m_NPCSpeed = tempSpeed;  }


    //some math to make it increase in speed over time
    ///return m_ChaseSpeed;
Vector3D PixelEngine::ChaseState::getNPCSpeed() const { return m_NPCSpeed; }
bool     PixelEngine::ChaseState::getIsHidden() const { return m_IsHidden; }