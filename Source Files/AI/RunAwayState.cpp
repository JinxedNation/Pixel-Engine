#include "RunAwayState.h"


void PixelEngine::RunAwayState::update(NPC* tempNPC)
{
    tempNPC->setVelocity(npc->getPosition().normalize() * -1); // Move away from the target
    tempNPC->setIsHidden(false); // Show the NPC

}

void PixelEngine::RunAwayState::setIsHidden(bool tempHidden) { m_IsHidden = tempHidden; }
void PixelEngine::RunAwayState::setNPCSpeed(Vector3D tempSpeed) { m_NPCSpeed = tempSpeed;  }


Vector3D PixelEngine::RunAwayState::getNPCSpeed() const { return m_NPCSpeed; }
bool     PixelEngine::RunAwayState::getIsHidden() const { return m_IsHidden; }