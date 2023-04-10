#pragma once
#include "NPC_State.h"
#include "NPC_AI_Component.h"



// Math (Facade this later?)
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


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
                 * @brief  : NPC Constructor 
                 * @brief  : used used to delete a NPC object
                 * @return : void
                 *******************************************************************************************************/

            NPC();

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
                 * @brief  : setVelocity
                 * @brief  : used to set the NPC's current velocity
                 * @param  : glm::vec3& tempVelocity
                 * @return : void
                 *******************************************************************************************************/

            void setVelocity(const glm::vec3& tempVelocity);


                /*******************************************************************************************************
                 * @brief  : setXYZLocation
                 * @brief  : used to set the NPC's XYZ Location
                 * @param  : glm::vec3& tempXYZ
                 * @return : void
                 *******************************************************************************************************/

            void setXYZLocation(const glm::vec3& tempXYZ);



                /*******************************************************************************************************
                 * @brief  : getXYZLocation
                 * @brief  : used to get the NPC's XYZ Location
                 * @param  : 
                 * @return : glm::vec3 m_XYZLocation
                 *******************************************************************************************************/

            const glm::vec3& getXYZLocation() const;

            

                /*******************************************************************************************************
                 * @brief  : getVelocity
                 * @brief  : used to get the NPC's velocity
                 * @param  : 
                 * @return : m_Velocity glm::vec3
                 *******************************************************************************************************/

            const glm::vec3& getVelocity() const;



                /*******************************************************************************************************
                 * @brief  : set_NPCState
                 * @brief  : used to set the current state of the NPC
                 * @param  : NPC_States* tempState -> a temporary state to set the m_AIState
                 * @return : 
                 *******************************************************************************************************/

           // void set_NPCState(NPC_States* tempState);
    


        protected:
            glm::vec3 m_XYZLocation;
            glm::vec3 m_Velocity;

      
        //NPC_AI_Component m_NPC_Component;
        // NPC_States* m_NPCState = nullptr;
    };
}

