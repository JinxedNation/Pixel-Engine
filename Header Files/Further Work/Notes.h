/*************
 * @brief : note this is just a notes class for some additional work if we wish to see how far we can push the project
 * @brief : RainFall class - 
 * @brief : Skybox class   -  
 * @brief : DirectX_API    - ???
 * 
 * 
 * 
 * 
 * 
struct ParticleType_Rain
{
    glm::vec3 position;
    glm::vec3 velocity;
    float lifetime;

    void update(float deltaTime) 
    {
        position += velocity * deltaTime;
        lifetime -= deltaTime;
    }
};



class Environment_SystemType_Rain 
{
    std::vector<ParticleType_Rain> m_Raindrop;

    void update(float deltaTime) 
    {
        for (auto& particle : m_Raindrop) 
        {
            particle.update(deltaTime);
        }
        removeExpiredParticles();
    }

    void spawn(int count) 
    {
        for (int i = 0; i < count; ++i) 
        {
            m_Raindrop.push_back(createRaindrop());
        }
    }

    void draw() 
    {
        // Render particles using OpenGL.
    }

private:
    
    void removeExpiredParticles()
    {
        // Remove particles with a lifetime <= 0.
    }

    ParticleType_Rain createRaindrop() 
    {
        // Generate random position above terrain and create a new createRaindrop.
    }
};


// In your game loop
Environment_SystemType_Rain m_Rainfall;
while (gameIsRunning) 
{
    float deltaTime = calculateDeltaTime();
    
    m_Rainfall.update(deltaTime);
    m_Rainfall.spawn(rainSpawnCount);
    m_Rainfall.draw();

    // Update and draw other game objects.
}
 **/