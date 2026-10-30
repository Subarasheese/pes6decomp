/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00245160(s32);
M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */

void func_00639AE0(s32 arg0, void *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 var_a0;

    if (M2C_FIELD(arg1, s16 *, 0) == 0) {
        temp_v0 = M2C_FIELD(arg1, s16 *, 2);
        if (temp_v0 != 0) {
            var_a0 = temp_v0 + 1;
        } else {
            var_a0 = 0;
        }
    } else {
        temp_v0_2 = M2C_FIELD(arg1, s16 *, 2);
        if (temp_v0_2 != 0) {
            var_a0 = temp_v0_2 + 4;
        } else {
            var_a0 = 1;
        }
    }
    func_001C4730(func_00245160(var_a0), arg0 + 0x5C, 0x36);
}
