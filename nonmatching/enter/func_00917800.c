/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK);                         /* extern */

u16 func_00917800(u16 *arg0, u8 *arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    u16 *var_s2;
    u16 var_s0;
    u8 *var_s1;
    u8 var_a0;
    u8 var_a1;
    u8 var_a2;

    var_s2 = arg0;
    var_s1 = arg1;
    var_s0 = 0;
    temp_v0 = ((s32) (func_00151EA0(0x3E8) & 0xFFFF) % 100) & 0xFF;
    if (var_s2 != NULL) {
        var_a1 = *var_s1;
        var_a3 = 0;
        var_a2 = var_a1;
        var_a0 = var_a1;
        if ((s32) var_a1 < 0x65) {
            temp_v1 = temp_v0 & 0xFF;
loop_3:
            if ((var_a1 != 0) && (temp_v1 >= (var_a3 & 0xFF)) && (temp_v1 < (s32) var_a0)) {
                var_s0 = *var_s2;
            }
            var_s2 += 2;
            var_s1 += 1;
            var_a3 = var_a2 & 0xFF;
            if (*var_s2 != 0) {
                var_a1 = *var_s1;
                if ((s32) var_a1 < 0x64) {
                    var_a2 = (var_a2 + var_a1) & 0xFF;
                    var_a0 = var_a2;
                    if ((s32) var_a2 < 0x65) {
                        goto loop_3;
                    }
                }
            }
        }
    }
    return var_s0;
}
