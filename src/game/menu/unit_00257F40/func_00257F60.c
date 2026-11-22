/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0025E080(s32);

extern s32 D_0058CF20[];

void func_00257F60(void) {
    if (D_0058CF20[0] != 2) {
        if (D_0058CF20[0] == 1) {
            D_0058CF20[0] -= 1;
        } else
            switch (D_0058CF20[0]) {
            case 0:
                func_0025E080(3);
                break;
            }
    }
}
