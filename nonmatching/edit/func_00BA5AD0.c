/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9370(int);
M2C_UNK func_0021F5B0(s32, s32);                    /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */

void func_00BA5AD0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_00C1B460(0) & 0xFFFF;
    func_0021F5B0(temp_s0, arg0 & 0xFF);
    if ((temp_s0 & 0xFFFF) != 0x126) {
        func_002E9370(0x40000);
    }
}
