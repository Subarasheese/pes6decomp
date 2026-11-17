/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00325910(s32);
extern s32 func_00325900(void *);

s32 func_0031EE70(s32 *arg0, s32 arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_s0;

    if (*arg0 != 7) {
        return 4;
    }
    temp_s0 = func_00325910(arg2 & 0xFF);
    temp_a0 = func_00325900(arg0) & 0xFF;
    if (temp_a0 == 1) {
        if (temp_s0 == 0) {
            if (arg1 < 0xD) {
                return 2;
            }
        } else if (temp_s0 == 3) {
            if (arg1 >= 0xE) {
                return 1;
            }
        }
    } else if (temp_a0 == 2) {
        if (temp_s0 == 3 || temp_s0 == 4) {
            if (arg1 >= 0xE) {
                return 1;
            }
        } else if (temp_s0 == 2 || temp_s0 == 1) {
            if (arg1 < 0xD) {
                return 2;
            }
        }
    }
    return 4;
}
