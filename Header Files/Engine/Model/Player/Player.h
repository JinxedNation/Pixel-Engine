#ifndef PLAYER_H
#define PLAYER_H

#include "Object.h"
#include <string>
#include <iostream>

class Player : public PixelEngine::Object 
{
public:
    Player();
    virtual ~Player();

    virtual void Update(float deltaTime) override;
    virtual void drawObject() override;
};

#endif // PLAYER_H