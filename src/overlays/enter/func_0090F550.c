/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern s32 Pes6SceneStack[];
extern u8 D_00591F2D[];
extern u16 D_0092F1A4[];

s32 func_0090F550(void) {
    if (Pes6SceneStack[0] != 9) {
        if (Pes6SceneStack[0] != 0xC) {
            return 0;
        }
    }

    if (D_00591F2D[0] != 2) {
        return 0;
    }
    switch (D_0092F1A4[0]) {
    case 0:
        return 0;
    case 1:
    case 2:
    case 3:
    case 18:
        return 1;
    case 4:
    case 5:
    case 6:
    case 17:
        return 2;
    case 7:
    case 8:
        return 4;
    case 9:
    case 10:
        return 5;
    case 14:
        return 6;
    case 11:
    case 15:
        return 7;
    case 12:
    case 16:
        return 8;
    default:
        return 3;
    }
}
