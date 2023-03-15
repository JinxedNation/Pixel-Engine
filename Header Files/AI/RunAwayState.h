#pragma once

#include "NPC.h"

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

namespace PixelEngine
{
	class RunAwayState : public NPC_States
	{
        public:
                            
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
                 * @param  : Vector3D tempSpeed - temporary speed variable for x,y,z plane
                 * 
                 * @return : void
                 *******************************************************************************************************/ 
            
            void setNPCSpeed(Vector3D tempSpeed);


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
            
            Vector3d getNPCSpeed() const;


                /*******************************************************************************************************
                 * @brief  : getIsHidden()
                 * @brief  : Used to get the m_IsHidden variable
                 * @return : bool true or false depending on if the AI is hidden
                 *******************************************************************************************************/ 

            bool getIsHidden() const;


        private:
            bool m_IsHidden;
            Vector3D m_NPCSpeed;
	};
}
