#pragma once
#include "NPC_States.h"

#include <glm/glm.hpp>                  // Includes the core GLM library
#include <glm/gtc/matrix_transform.hpp> // For matrix transformations (e.g., glm::translate, glm::rotate, glm::scale)
#include <glm/gtc/type_ptr.hpp>         // For converting between C++ types and their GLSL equivalents (e.g., glm::value_ptr)
#include <glm/gtc/constants.hpp>        // For mathematical constants (e.g., glm::pi)
#include <glm/gtx/string_cast.hpp>      // For converting GLM types to strings (e.g., glm::to_string)




namespace PixelEngine
{
        /*******************************************************************************************************************************************************************
         * @class   : NPC
         * @brief   : Abstract base class used to define a basic interface for all NPCs that will be in thegame
         *
         * @author  : William Halling
         * @date    : 2023 March
         * @version : 1.0
         * @bug     : None known, however engineer was tired I suggest bringing coffee
         *******************************************************************************************************************************************************************/

    class NPC
    {
        public:

                /*******************************************************************************************************
                 * @brief  : NPC Constructor 
                 * @brief  : used create an NPC object
                 * @return : void
                 *******************************************************************************************************/

            NPC();


                /*******************************************************************************************************
                 * @brief  : NPC Destructor 
                 * @brief  : used used to delete a NPC object
                 * @return : void
                 *******************************************************************************************************/

            virtual ~NPC() = default;


                /*******************************************************************************************************
                 * @brief  : update
                 * @brief  : virtual function as this class is an abstract class which is implemeted inside the AI states
                 * @param  :
                 * @return : void
                 *******************************************************************************************************/

            virtual void update() = 0;


                /*******************************************************************************************************
                 * @brief  : draw
                 * @brief  : virtual function as this class is an abstract class  which is implemeted inside the AI states used to draw the NPC
                 * @param  : 
                 * @return : void
                 *******************************************************************************************************/

            virtual void draw() = 0;


                /*******************************************************************************************************
                 * @brief  : set_NPCState
                 * @brief  : used to set the current state of the NPC
                 * @param  : NPC_States* tempState -> a temporary state to set the m_AIState
                 * @return : void
                 *******************************************************************************************************/

            void set_NPCState(NPC_States* tempState);
    


        protected:

            NPC_States* m_NPCState = nullptr;
    };
}

