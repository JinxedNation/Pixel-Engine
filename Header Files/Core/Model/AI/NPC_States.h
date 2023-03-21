#pragma once
#include "NPC.h"

    /*******************************************************************************************************************************************************************
     * @class   : NPC_States Abstract Base Class
     * @brief   : Enables us to create multiple classes that can represent a range of differnet NPC Behaviours / states
     *          : In the Engines case in Early 2023, the following states : Chase, runAway, and Hide 
     *
     *             
     * @author  : William Halling
     * @date    : 2023 March
     * @version : 1.0
     * @bug     : None known, however engineer was tired I suggest bringing coffee
     *******************************************************************************************************************************************************************/

namespace PixelEngine
{
    class NPC_States
    {
        public:
                /*************************
                 * @brief : NPC_States Destructor 
                 * @brief : Used to delete an NPC_States object
                 *************************/

            virtual ~NPC_States() {}


                /*************************
                 * @brief : update
                 * @brief : virtual function which will be modified in each of the ai states
                 *************************/

            virtual void update(NPC* tempNPC) = 0;
    };
}