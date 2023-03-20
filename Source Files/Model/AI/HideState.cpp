#include "HideState.h"


void PixelEngine::HideState::setIsHidden(bool tempHidden)    { m_IsHidden = tempHidden; }
void PixelEngine::HideState::setNPCSpeed(Vector3D tempSpeed) { m_NPCSpeed = tempSpeed;  }


Vector3D PixelEngine::HideState::getNPCSpeed() const { return m_NPCSpeed; }
bool     PixelEngine::HideState::getIsHidden() const { return m_IsHidden; }
