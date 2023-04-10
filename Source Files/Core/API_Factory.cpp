#include "API_Factory.h"
#include "OpenGL_API.h"


Graphics_API* PixelEngine::API_Factory::createAPI(API_Type currentAPI)
{
    switch (currentAPI)
    {
        case API_TYPE::OpenGL:
        {
            return new OpenGL_API();
        }
        break;
    
        default:
            break;
    }
}