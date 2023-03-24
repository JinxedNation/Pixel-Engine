#pragma once
#include "NPC.h"
#include <memory>
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
    class NPC_State 
    {
        public:
            
                /*************************
                 * @brief : NPC_State Destructor 
                 * @brief : Used to delete an NPC_States object
                 *************************/

            NPC_State();


                /*************************
                 * @brief : NPC_State Destructor 
                 * @brief : Used to delete an NPC_States object
                 *************************/

          //  virtual ~NPC_State() {}


                /*************************
                 * @brief : update
                 * @brief : virtual function which will be modified in each of the ai states
                 *************************/

           // virtual void update(float deltaTime, std::shared_ptr<NPC> tempNPC) = 0;
    };
}
