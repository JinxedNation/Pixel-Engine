#include "HideState.h"


void PixelEngine::HideState::setIsHidden(bool tempHidden)    { m_IsHidden = tempHidden; }
void PixelEngine::HideState::setNPCSpeed(glm::vec3 tempSpeed) { m_NPCSpeed = tempSpeed;  }


glm::vec3 PixelEngine::HideState::getNPCSpeed() const { return m_NPCSpeed; }
bool     PixelEngine::HideState::getIsHidden() const { return m_IsHidden; }
