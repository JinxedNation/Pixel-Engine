

//#include <GL/glew.h>
#include <GLFW/glfw3.h>



#include "Graphics_API.h"
//#include "Terrain.h"


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
     ***********************************************************************************************************************************/

    // In your game engine setup or main loop
    //PerlinTerrain perlinTerrain("PerlinTerrain1", 512, 512, 0.1f, 42);
    //GraphicsEngine::getInstance().renderTerrain(perlinTerrain);

    class OpenGL_API : public Graphics_API 
    {
        public:
            
                /************************************************************************************************************
                 * @brief  : OpenGL_API() 
                 * @brief  : Constructor for the OpenGL_API class
                 * 
                 * @return :
                 ************************************************************************************************************/

            OpenGL_API();


                /************************************************************************************************************
                 * @brief  : ~OpenGL_API() Destructor 
                 * @brief  : used to delete OpenGL_API object
                 * 
                 * @return :
                 ************************************************************************************************************/

            virtual ~OpenGL_API();
            
            
                /************************************************************************************************************
                 * @brief  : configureAPI() 
                 * @brief  : used to configure OpenGL Specific Libraries
                 * 
                 * @return :
                 ************************************************************************************************************/

            void configureAPI() override;


                /************************************************************************************************************
                 * @brief  : drawType()
                 * @brief  : used to render in specific models and such
                 *
                 * @return : void
                 ************************************************************************************************************/

            void drawType() override;
 

                /************************************************************************************************************
                 * @brief  : drawType()
                 * @brief  : used to render in specific models and such
                 * 
                 * @param  : tempTerrainType const Terrain&
                 * @return : void
                 ************************************************************************************************************/

            virtual void drawTerrain(const Terrain& tempTerrainType) override; 


                /************************************************************************************************************
                 * @brief  : resetEnvironment()
                 * @brief  : used to clean up the current window
                 * 
                 * @return : void
                 ************************************************************************************************************/

            void resetEnvironment() override;

    };
}
