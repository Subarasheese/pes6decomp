/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00151EA0(M2C_UNK);                         /* extern */

void func_00982160(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        if ((var_s0 & 0xFF) < 0x50) {
            temp_s2 = func_00151EA0(2) & 0xFFFF;
            temp_s1 = func_00151EA0(5) & 0xFFFF;
            temp_v0 = func_002260F0(var_s0 & 0xFF);
            if (temp_v0 != 0) {
                M2C_FIELD(temp_v0, s8 *, 0x39) = (s8) ((temp_s2 * 0x10) | temp_s1);
            }
        }
        var_s0 += 1;
    } while (var_s0 < 0x50);
}
