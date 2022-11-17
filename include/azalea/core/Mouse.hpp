#ifndef AZALEA_MOUSE_HPP
#define AZALEA_MOUSE_HPP

#include <cstdint>

namespace azalea {
    typedef int32_t MouseButton;

    namespace Mouse {
        enum : MouseButton {
            NONE = -1,

            // retrieved from GLFW/glfw3.h

            MOUSE_BUTTON_1 = 0,
            MOUSE_BUTTON_2 = 1,
            MOUSE_BUTTON_3 = 2,
            MOUSE_BUTTON_4 = 3,
            MOUSE_BUTTON_5 = 4,
            MOUSE_BUTTON_6 = 5,
            MOUSE_BUTTON_7 = 6,
            MOUSE_BUTTON_8 = 7,

            MOUSE_BUTTON_LEFT = MOUSE_BUTTON_1,
            MOUSE_BUTTON_RIGHT = MOUSE_BUTTON_1,

            MOUSE_BUTTON_MIDDLE = MOUSE_BUTTON_3


        };
    }

}


#endif// AZALEA_MOUSE_HPP