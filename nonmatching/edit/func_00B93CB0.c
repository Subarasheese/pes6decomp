/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002210F0(s32);
extern void func_00221020(s32, s8);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
s32 func_00B94DC0(s32);                             /* extern */
s32 func_00B94DF0(s32);                             /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */

void func_00B93CB0(s32 arg0) {
    s32 temp_a1;
    s32 temp_s0;

    if ((arg0 < 0x24) && (temp_s0 = func_002210F0(arg0), temp_a1 = func_00B94DF0(arg0), (temp_s0 != 0))) {
        if (temp_a1 == 0) {
            return;
        }
        func_001C4730(temp_s0, temp_a1, 0x3D);
        func_00221020(arg0, func_00B94DC0(arg0) & 0xFF);
        func_00C1B380(4);
    }
}
