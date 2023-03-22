#include "InputManager.h"

namespace PixelEngine
{
        /**************************************************************************************************************
         * @class   : Manage_Mouse_Input
         * @brief   :
         * @brief   :
         * 
         * @author  : William
         * @date    : 2023
         * @version : 1.0
         **************************************************************************************************************/

    class Manage_Mouse_Input : public InputManager
    {
        public:
            void updateInput() override;
    };
}