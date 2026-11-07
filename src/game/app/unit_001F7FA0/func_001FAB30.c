/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001FAC50(s32 a, s32 b);
u8 func_001FAB30(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;
    r = func_001FAC50(arg0, arg2);
    return *(u8 *)(arg1 + r + 0x1E);
}
