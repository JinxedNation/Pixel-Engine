
#include <memory>


#include "NPC.h"
#include "FiniteStateMachine.h"

namespace PixelEngine 
{
        /*******************************************************************************************************
         * @brief  : NPCAIComponent() constructor
         * @brief  : 
         * @param  : std::shared_ptr<NPC_State> tempNewState
         *  
         * @return : void
         *******************************************************************************************************/ 
        
    class NPCAIComponent
    {
        public:

            NPCAIComponent();
            
                /*******************************************************************************************************
                 * @brief  : NPCAIComponent() constructor
                 * @brief  : 
                 * @param  : std::shared_ptr<NPC_State> tempNewState
                 *  
                 * @return : void
                 *******************************************************************************************************/ 
            
            NPCAIComponent(std::shared_ptr<NPC> tempNPC);


                /*******************************************************************************************************
                 * @brief  : changeState()
                 * @brief  : used to update the NPC_AI
                 * @param  : float deltaTime - used to monitor time within engine
                 * @param  : std::shared_ptr<NPC_State> tempNewState
                 *  
                 * @return : void
                 *******************************************************************************************************/ 
                
            void update(float deltaTime, std::shared_ptr<NPC> tempNPC);


                /*******************************************************************************************************
                 * @brief  : changeState()
                 * @brief  : used to change the state of the NPC FiniteStateMachine
                 * @brief  : 
                 * @param  : std::shared_ptr<NPC_State> tempNewState
                 *  
                 * @return : void
                 *******************************************************************************************************/ 
            
            void changeState(std::shared_ptr<NPC_State> tempNewState);


        private:

            FiniteStateMachine m_StateMachine;
    };
}