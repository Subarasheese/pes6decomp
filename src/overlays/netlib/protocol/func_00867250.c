/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 func_00867250(s32 *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    if (!((arg0 != 0) && (arg1 != 0) && (arg2 != 0) && (arg3 != 0))) {
        return -0x18;
    } else {
        if (*arg0 == 0x3073) {
            *arg1 = 0;
            *arg3 = 1;
            return 0;
        }
        return -0x46;
    }
}
