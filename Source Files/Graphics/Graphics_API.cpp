#include "Graphics_API"

enum class Graphics_API
{
    None,
    OpenGL
    //Direct_X
    //Vulkan
};

Graphics_API* generateFactory::createObjectSpawner(Graphics_API tempAPI)
{
    switch (tempAPI)
    {
        case Graphics_API::API_Type_OpenGL:
            return new OpenGLGenerator();
        break;
    
        default:
            return nullptr;
        break;
    }
}


