
namespace PixelEngine
{
        /****************************************************************************************************************************************
         * @brief   : Graphics_API Interface
         * @brief   : Used to decouple graphics APIS such as OpenGL, Directx, and Vulkan from the game engine 
         * @brief   : Improves the flexibility of the game engine 
         * 
         * @author  : William Halling
         * @date    : 20 March 2023
         * @version : 1.0
         ****************************************************************************************************************************************/

    class Graphics_API
    {
        
            /****************************************************************************************************************************
             * @brief  : configure()
             * @brief  : virtual function as this Interface will be inherited through the program to specified classes
             * @brief  : function is used to initialize and run specific API 
             * @return : void
             ****************************************************************************************************************************/
        
        virtual void configure() = 0;
        

            /****************************************************************************************************************************
             * @brief  : render()
             * @brief  : virtual function as this function is over ridden in other classes
             * @brief  : used to generate models of assets within the game
             * @return : void
             ****************************************************************************************************************************/
        
        virtual void render() = 0;


            /****************************************************************************************************************************
             * @brief  : resetEnvironment()
             * @brief  : virtual function as this function is over ridden in other classes
             * @brief  : used to free up memory and clean up the memory
             * @return : void
             ****************************************************************************************************************************/
        
        virtual void resetEnvironment() = 0;
    };
}