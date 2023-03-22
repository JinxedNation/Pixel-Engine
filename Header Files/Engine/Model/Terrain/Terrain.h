#pragma once

#include "Object.h"

/******************************************************************************************************************************************
 * @class   : Terrain
 * @brief   : used as a base class to allow for a variety of terrain types
 * 
 * 
 * @author  : William Halling
 * @date    : March 2023
 * @version : 1.0
 ******************************************************************************************************************************************/

#include <vector>
#include <string>
namespace PixelEngine
{
    
    class Terrain : public PixelEngine::Object 
    {
        public:
                
                /******************************************************************************************************
                 * @brief : Terrain : Assigned constructor 
                 * 
                 ******************************************************************************************************/

            Terrain(const std::string& tempName, unsigned tempWidth, unsigned tempHeight, float tempScale);

                            
                /******************************************************************************************************
                 * @brief : virtual destructor 
                 * @brief : this is required to delete terrain as terrain will be extended on by other terrain types
                 ******************************************************************************************************/

            virtual ~Terrain();

                            
                /******************************************************************************************************
                 * @brief : Update
                 * @brief : this is required to delete terrain as terrain will be extended on by other terrain types
                 ******************************************************************************************************/

            virtual void Update(float temp_DeltaT) override;
                            

                /******************************************************************************************************
                 * @brief : drawObject
                 * @brief : this is required to delete terrain as terrain will be extended on by other terrain types
                 ******************************************************************************************************/

            virtual void drawObject() override;

        protected:
            
            float m_Scale;
            unsigned int m_TerrainWidth;
            unsigned int m_TerrainHeight;

            std::vector<std::vector<float>> m_Heightmap;
    };
}
