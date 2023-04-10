#ifndef FACTORY_GAME_ASSET_H
#define FACTORY_GAME_ASSET_H

#include <string>

#include "Object.h"

namespace PixelEngine
{
        /***************************************************************************************************
         * @brief   : Factory_GameAsset - wanted to call the class Factory_GameObject but requirements were labled as GameAssetFactory. This small change notifies to the reader we are using the Factory method pattern in this class for a game asset
         * @brief   : What it does      :
         * @brief   : What its used for : 
         *  
         * @date    : March 2023
         * @author  : William Halling
         * @version : 1.0 
         ***************************************************************************************************/

    class Factory_GameAsset
    {
        public:

                /*******************************************************************************************************************************************************************************************************************************************************************************************************
                 * @brief  : create_ObjectType 
                 * @brief  : Funtion will not run while the classes have not been implemented, this is to remain here as a shell with temporary implementation for now
                 * @param  : const::std string& temp_ObjectType -> the name of the object the program wishes to create
                 * 
                 * @return : Object* 
                 *******************************************************************************************************************************************************************************************************************************************************************************************************/

            static Object* generate_ObjectType(const std::string& temp_ObjectType);


        private:
                // class objects
    };
}
#endif 
// END OF THE FOLLOWING INTERFACE
// FACTORY_GAME_ASSET_H