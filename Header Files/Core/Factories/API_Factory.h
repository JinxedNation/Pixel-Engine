#include "Graphics_API.h"
#include "OpenGL_API.h"


    /************
     * @class : API_Factory
     * @brief : A factory used to call the GraphicsAPI class, and then the type of graphics used.
     * 
     * 
     * @version : 1.0
     * @author  : William Halling
     * @date    : 10/4/2023 
     ************/

namespace PixelEngine
{
    enum class API_TYPE
    {
        None,
        OpenGL
        //Direct_X
        //Vulkan
    };

    class API_Factory 
    {
        public:

            static Graphics_API* createAPI(API_TYPE currentAPI); 

    };
} 
