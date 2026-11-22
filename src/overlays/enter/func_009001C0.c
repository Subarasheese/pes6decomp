/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00900040(void);

s32 func_009001C0(u32 arg0) {
    switch (arg0) {
    default:
        return 0;
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    case 3:
        return 4;
    case 4:
        return 5;
    case 5:
        return 6;
    case 6:
        return 0xD;
    case 7:
        return func_00900040();
    }
}
