#pragma once
#include "NPC_States.h"


     /*******************************************************************************************************************************************************************
      * @class   : NPC
      * @brief   : Abstract base class used to define a basic interface for all NPCs that will be in thegame
      *
      * @author  : William Halling
      * @date    : 2023 March
      * @version : 1.0
      * @bug     : None known, however engineer was tired I suggest bringing coffee
      *******************************************************************************************************************************************************************/


namespace PixelEngine
{
    class NPC
    {
        public:

                /*******************************************************************************************************
                 * @brief  : NPC Destructor 
                 * @brief  : used used to delete a NPC object
                 * @return : void
                 *******************************************************************************************************/

            virtual ~NPC() {}


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

           // void set_NPCState(NPC_States* tempState);
    


        protected:

           // NPC_States* m_NPCState = nullptr;
    };
}

