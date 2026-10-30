/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */

s32 func_00B35890(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 var_s5;
    s32 var_s6;
    u8 temp_s2;

    var_s6 = 0;
    var_s5 = 0;
loop_1:
    temp_a1 = *arg0;
    temp_s2 = M2C_FIELD(((arg3 * 0xB) + temp_a1 + var_s5), u8 *, 0x1B4);
    if ((temp_s2 != 0xFF) && ((u32) M2C_FIELD((temp_a1 + (temp_s2 * 4)), u32 *, 0x158) < (u32) (arg2 * arg2))) {
        if ((func_009B3070(arg1, M2C_FIELD((temp_a1 + (temp_s2 * 2)), u16 *, 0x128)) & 0xFFFF) < 0x800) {
            var_s6 = temp_s2 & 0xFF;
        } else {
            var_s5 += 1;
            if (var_s5 < 0xB) {
                goto loop_1;
            }
        }
    }
    return var_s6 & 0xFF;
}
