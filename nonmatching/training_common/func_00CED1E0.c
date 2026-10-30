/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003F7790[];

s32 func_00CED1E0(s32 arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_a1;
    u32 temp_a0;
    u32 temp_hi;

    temp_f1 = fparg0 * (f32) (*(s32 *)D_003F7790);
    if (temp_f1 >= 2.1474836e9f) {
        var_a1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a1 = (s32) temp_f1;
    }
    temp_a0 = arg0 & 0xFF;
    temp_hi = (u32) var_a1 % temp_a0;
    if (((u32) var_a1 / temp_a0) & 1) {
        return (temp_a0 - temp_hi) & 0xFF;
    }
    return temp_hi & 0xFF;
}
