#include "RunAwayState.h"


void PixelEngine::RunAwayState::update(NPC* tempNPC)
{
    tempNPC->setVelocity(npc->getPosition().normalize() * -1); // Move away from the target
    tempNPC->setIsHidden(false); // Show the NPC

}

void setVelocity()
{
    //m_NPCSpeed = 
}

void setIsHidden(bool tempHidden)
{
    m_IsHidden = tempHidden;
}


Vector3D PixelEngine::ChaseState::getNPCSpeed() const { return m_NPCSpeed; }
bool     PixelEngine::ChaseState::getIsHidden() const { return m_IsHidden; }