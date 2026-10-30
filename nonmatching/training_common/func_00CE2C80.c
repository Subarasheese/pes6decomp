/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F87E0(s32, s32);
extern s32 func_00CE2CE0(void *, s32, s32);
s32 func_00CE2C80(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;

    if (arg2 != 0) {
        var_a2 = 8;
    } else {
        var_a2 = 0;
    }
    temp_v0 = func_00CE2CE0(arg0, arg1, var_a2);
    if (temp_v0 != 0) {
        func_001F87E0(1, 0x20);
    }
    return temp_v0;
}
