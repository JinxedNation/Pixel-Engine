
//#include <GL/glew.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Graphics_API.h"

namespace PixelEngine
{

    /***********************************************************************************************************************************
     * @brief   : OpenGL_API class
     * @brief   : 
     * @brief   :
     * 
     * @author  : William Halling
     * @date    : March 2023
     * @version : 1.0
     * @author  : William Halling
     * @date    : 10/4/2023
     * @version : 1.1
     * @brief   : Further implemention of the OpenGL_API class
     ***********************************************************************************************************************************/

    class OpenGL_API : public Graphics_API 
    {
        public:

                /************************************************************************************************************
                 * @brief : resetEnvironment()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            OpenGL_API();


                /************************************************************************************************************
                 * @brief : resetEnvironment()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            ~OpenGL_API();


                /************************************************************************************************************
                 * @brief : configureAPI()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            void configureAPI() override;
            

                /************************************************************************************************************
                 * @brief : resetEnvironment()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            void resetGameWorld() override;


                /************************************************************************************************************
                 * @brief : resetEnvironment()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            void setClearColourValues(float tempRed, float tempGreen, float tempBlue, float tempAlpha) override;


                /************************************************************************************************************
                 * @brief : resetEnvironment()
                 * @brief : used to clean up the current window
                 ************************************************************************************************************/

            void SwapBuffers() override;


                /************************************************************************************************************
                 * @brief : render()
                 * @brief : used to render in specific models and such
                 *
                 ************************************************************************************************************/

            void render() override;


                        
            enum class API_TYPE
            {
                None,
                OpenGL
                //Direct_X
                //Vulkan
            };

        private:
    };
}