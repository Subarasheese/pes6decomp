/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00222E80(int, int, u16);
s32 func_00BC59F0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BC5DF0(s32, s32, M2C_UNK);               /* extern */
s32 func_00BE4E10(u16, s32, s32, s32);              /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */

void func_00BE4BC0(u16 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = func_00BC5DF0(arg1, arg2 & 0xFF, 0) & 0xFFFF;
    if (func_00BE4E10(arg0, temp_s0, func_00BC59F0(arg1, arg2 & 0xFF, 0) & 0xFF, arg2) == 0) {
        func_00222E80(arg1, arg2 & 0xFF, arg0);
    }
    func_00C04330();
    func_00C1B380(7);
}
