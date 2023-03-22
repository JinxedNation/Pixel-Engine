

namespace PixelEngine
{
        /**************************************************************************************************************
         * @class   :
         * @brief   :
         * @brief   :
         * 
         * @author  : William
         * @date    : 2023
         * @version : 1.0
         **************************************************************************************************************/

    class InputManager
    {
        public:
            virtual ~InputManager() = default;

            virtual void updateInput() = 0;
    };
}