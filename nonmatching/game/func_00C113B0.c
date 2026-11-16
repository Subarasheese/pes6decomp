/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u32 D_00CB3318;

void func_00C113B0(u8 *arg0, u32 arg1, u32 arg2, f32 fparg0) {
    u32 val;
    u32 lim;
    u8 *p;
    s32 sh;

    if (arg0 != 0 && arg1 < 8U && arg2 < 6U) {
        lim = D_00CB3318;
        if (!(fparg0 >= 2.1474836e9f)) {
            val = (s32)fparg0;
        } else {
            val = (s32)(fparg0 - 2.1474836e9f) | 0x80000000;
        }
        if (val >= lim) {
            val = lim;
        }
        p = arg0 + arg1 * 3 + ((s32)arg2 >> 1);
        sh = (arg2 & 1) * 4;
        if (sh == 0) {
            *p = (*p & 0xF) | ((val & 0xF) << 4);
        } else {
            *p = (*p & 0xF0) | (val & 0xF);
        }
    }
}
