#pragma once

#include "NPC.h"


#include <glm/glm.hpp>                  // Includes the core GLM library
#include <glm/gtc/matrix_transform.hpp> // For matrix transformations (e.g., glm::translate, glm::rotate, glm::scale)
#include <glm/gtc/type_ptr.hpp>         // For converting between C++ types and their GLSL equivalents (e.g., glm::value_ptr)
#include <glm/gtc/constants.hpp>        // For mathematical constants (e.g., glm::pi)
#include <glm/gtx/string_cast.hpp>      // For converting GLM types to strings (e.g., glm::to_string)


namespace PixelEngine
{
        /*******************************************************************************************************************************************************************
         * @class   : RunAwayState
         * @brief   : Calls the abstract base class NPC_States before performing an update and various other tasks
         *			: Triggers the NPC to run away from the player and an NPC if one is the chaser
        *
        * @author  : William Halling
        * @date    : 2023 March
        * @version : 1.0
        * @bug     : None known, however engineer was tired I suggest bringing coffee
        *******************************************************************************************************************************************************************/

	class RunAwayState : public NPC_States
	{
        public:

                /*******************************************************************************************************
                 * @brief  : RunAwayState Constructor 
                 * @brief  : used create an RunAwayState object
                 * @return : void
                 *******************************************************************************************************/

            RunAwayState();

                
                /*******************************************************************************************************
                 * @brief  : RunAwayState Destructor 
                 * @brief  : used destroy an RunAwayState object
                 * @return : void
                 *******************************************************************************************************/

            virtual ~RunAwayState();


                /*******************************************************************************************************
                 * @brief  : update()
                 * @brief  : sets the NPCS state, Note NPC leaves this state once the chaser gets too close
                 * @brief  : Performs necessary update functions as required
                 * @param  : NPC* tempNPC
                 * 
                 * @return : void
                 *******************************************************************************************************/ 
            
		    void update(NPC* tempNPC) override;


                /*******************************************************************************************************
                 * @brief  : setNPCSpeed()
                 * @brief  : used to set the variable m_ChaseSpeed with tempSpeed
                 * @param  : glm::vec3 tempSpeed - temporary speed variable for x,y,z plane
                 * 
                 * @return : void
                 *******************************************************************************************************/ 
            
            void setNPCSpeed(glm::vec3 tempSpeed);


                /*******************************************************************************************************
                 * @brief  : setIsHidden()
                 * @brief  : Used to set the variable m_IsHidden with tempHidden
                 * @param  : tempHidden - boolean var
                 * @return : void
                 *******************************************************************************************************/ 

            void setIsHidden(bool tempHidden);



                /*******************************************************************************************************
                 * @brief  : getNPCSpeed()
                 * @brief  : used to get the speed of which the AI chases the player and other AI
                 *         : requires some math to make it increase in speed over time so it can catch the player
                 * 
                 * @return : void
                 *******************************************************************************************************/ 
            
            glm::vec3 getNPCSpeed() const;


                /*******************************************************************************************************
                 * @brief  : getIsHidden()
                 * @brief  : Used to get the m_IsHidden variable
                 * @return : bool true or false depending on if the AI is hidden
                 *******************************************************************************************************/ 

            bool getIsHidden() const;


        private:
            bool m_IsHidden;
            glm::vec3 m_NPCSpeed;
	};
}
