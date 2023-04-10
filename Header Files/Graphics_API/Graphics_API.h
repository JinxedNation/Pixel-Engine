
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
        
        public:
        
            virtual ~Graphics_API() = default;


                /****************************************************************************************************************************
                 * @brief  : configure()
                 * @brief  : virtual function as this Interface will be inherited through the program to specified classes
                 * @brief  : function is used to initialize and run specific API 
                 * @return : void
                 ****************************************************************************************************************************/
            
            virtual void configureAPI() = 0;
            


            /****************************************************************************************************************************
             * @brief  : 
             * @brief  : virtual function as this Interface will be over written in the child class : name
             * @brief  : used to free up memory and clean up the memory
             * @return : void
             ****************************************************************************************************************************/
        
            virtual void resetGameWorld() = 0;



            /****************************************************************************************************************************
             * @brief  : 
             * @brief  : virtual function as this Interface will be over written in the child class : name
             * @brief  : 
             * @return : void
             ****************************************************************************************************************************/
        
            virtual void setClearColourValues(float tempRed, float tempGreen, float tempBlue, float tempAlpha) = 0;


            /****************************************************************************************************************************
             * @brief  : 
             * @brief  : virtual function as this Interface will be over written in the child class : name
             * @brief  :  
             * @return : void
             ****************************************************************************************************************************/
        
            virtual void SwapBuffers() = 0;


            /****************************************************************************************************************************
             * @brief  : render()
             * @brief  : virtual function as this function is over ridden in other classes
             * @brief  : used to generate models of assets within the game
             * @return : void
             ****************************************************************************************************************************/
        
        virtual void render() = 0;

    };
}