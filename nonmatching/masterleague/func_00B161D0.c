/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
u16 *func_00994C60(s32, s32);                       /* extern */
M2C_UNK func_00AFA850(s32, s32);                    /* extern */

void func_00B161D0(void) {
    s32 temp_s0;
    s32 var_s1;
    u16 *temp_v0;

    temp_s0 = func_00225820() & 0xFF;
    var_s1 = 0;
    do {
        temp_v0 = func_00994C60(temp_s0, var_s1 & 0xFFFF);
        if ((temp_v0 != NULL) && (((u64) ((s64) *temp_v0 << 0x35) >> 0x3C) == 5)) {
            func_00AFA850(temp_s0, var_s1 & 0xFF);
        }
        var_s1 = (var_s1 + 1) & 0xFFFF;
    } while (var_s1 < 0x25);
}
