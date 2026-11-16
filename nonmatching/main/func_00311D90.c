/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s64 func_00C22860();
s64 func_00C22890();
s32 func_00C7EF80(s32);
extern u8 D_00591AE3[];
extern u8 D_00591EF8[];

s32 func_00311D90(u8 *arg0) {
    s32 a;
    s32 b;

    a = (s8) func_00C22860();
    if (a >= 0) {
        *arg0 = (u8) a;
    } else {
        b = (s8) func_00C22890();
        if (b < 0) {
            if (func_00C7EF80(0) == 0) {
                b = 1;
            } else {
                b = 0;
            }
        }
        b &= 0xFF;
        *arg0 = *(D_00591AE3 + b * 0x8B + D_00591EF8[b] * 8);
    }
    return 1;
}
