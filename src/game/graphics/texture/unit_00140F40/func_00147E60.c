/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
#pragma no_branch_likely on

s32 func_001493F0(s32, s32);

s32 func_00147E60(s32 arg0) {
    u8 r;

    r = 0;
    if (func_001493F0(0, arg0) != 0) {
        r |= 1;
    }
    if (func_001493F0(1, arg0) != 0) {
        r |= 2;
    }
    return (u8)r;
}
