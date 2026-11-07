/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB3300[];

s32 func_0030F790(u32 *arg0, s32 *arg1) {
    s32 first;
    u32 total;

    first = M2C_FIELD(*(void **)D_00CB3300, s32 *, 0x20);
    total = first + M2C_FIELD(*(void **)D_00CB3300, s32 *, 0x314);
    if (total != 0) {
        *arg0 = (u32) (first * 0x64) / total;
    } else {
        *arg0 = 0x32;
    }
    *arg1 = 0x64 - *arg0;
    return 1;
}
