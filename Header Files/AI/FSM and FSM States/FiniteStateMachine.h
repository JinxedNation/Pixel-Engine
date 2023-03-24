#include "NPC.h"
#include "NPC_State.h"

#include <memory>

using namespace std;

namespace PixelEngine 
{
        /*******************************************************************************************************
         * @brief  : setIsHidden()
         * @brief  : Used to set the variable m_IsHidden with tempHidden
         * @param  : tempHidden - boolean var
         * @return : void
         *******************************************************************************************************/ 

    class FiniteStateMachine
    {
        public:
                /*******************************************************************************************************
                 * @brief  : FiniteStateMachine()
                 * @brief  : FiniteStateMachineConstructor
                 * 
                 * @return : void
                 *******************************************************************************************************/ 

            FiniteStateMachine();


                /*******************************************************************************************************
                 * @brief  : FiniteStateMachine() Destructor
                 * @brief  : Used to delete the FiniteStateMachine object
                 * 
                 * @return : void
                 *******************************************************************************************************/ 

            ~FiniteStateMachine();


                /*******************************************************************************************************
                 * @brief  : ChangeState
                 * @brief  : Used to Change the current state of the finite state machine
                 * 
                 * @return : void
                 *******************************************************************************************************/ 

            void changeState(std::shared_ptr<NPC_State> newState);


                /*******************************************************************************************************
                 * @brief  : FiniteStateMachine() Destructor
                 * @brief  : Used to delete the FiniteStateMachine object
                 * 
                 * @return : void
                 *******************************************************************************************************/ 

            void update(float deltaTime, std::shared_ptr<NPC> tempNpc);


        private:
            std::shared_ptr<NPC_State> m_CurrentState;
    };
}