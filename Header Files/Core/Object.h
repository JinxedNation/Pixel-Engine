#ifndef OBJECT_H
#define OBJECT_H

/*********************************************************************************************************************************
 * @brief   : PixelEngine 
 * @brief   : PixelEngine is our own created namespace for wrapping of the classes
 * 
 * @version : 1.0 
 * @author  : William Halling
 * @date    : March 2023  
 *********************************************************************************************************************************/

namespace PixelEngine
{

        /***************************************************************************************************
         * @brief   : Object class
         * @brief   : What it does : Provides a base abstract class class for creating future objects such as terrain, AI and so on 
         * @brief   : 
         *  
         * @version : 1.0 
         * @date    : March 2023
         * @author  : William Halling
         ***************************************************************************************************/

    class Object
    {
        public:

                /***************************************************************************************************
                 * @brief  : Object()
                 * @brief  : Object of the Abstract class
                 *  
                 * @return :
                 ***************************************************************************************************/

            Object();


                /***************************************************************************************************
                 * @brief  : Object()
                 * @brief  : Object virtual destructor
                 *  
                 * @return :
                 ***************************************************************************************************/

            virtual ~Object();


                /***************************************************************************************************
                 * @brief  : Update(float temp_DTime)
                 * @brief  : update is a pure virtual function as it will be inherited through the player, AI and terrian
                 * @brief  : Functionality is for updating game objects at each frame or each tick of temp_DeltaT
                 * 
                 * @return : virtual void = 0 stops any implementation in this class
                 ***************************************************************************************************/
            
            virtual void Update(float temp_DeltaT) = 0;


                /***************************************************************************************************
                 * @brief  : drawObject
                 * @brief  : drawObject is is a pure virtual function as this will be inherited and over ridden in other classes. 
                 * @brief  : Functionality is for drawing / rendering the object onto the users screen
                 *  
                 * @return : virtual void = 0 stops any implementation in this class
                 ***************************************************************************************************/
            
            virtual void drawObject() = 0;
    };
}
#endif
// END OF THE FOLLOWING INTERFACE
// OBJECT_H