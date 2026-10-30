/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_008B9660();                                /* extern */

s32 func_008BC400(void *arg0) {
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a4;
    s32 var_a5;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_v1;
    u8 temp_a0;
    u8 var_a3;
    void *temp_v1_2;
    void *var_v1;

    temp_v1 = (s64) (func_008B9660() << 0x30) >> 0x30;
    if ((temp_v1 != 5) && (temp_v1 != 4)) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = 1;
    }
    if (var_v0_2 == 0) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x75C);
        var_a2 = 0;
        var_a1 = 0;
        var_a5 = 0;
        do {
            var_a3 = M2C_FIELD((arg0 + var_a5), u8 *, 0x766);
            var_a4 = 0;
            if ((s32) temp_a0 > 0) {
                var_v1 = arg0;
loop_11:
                if (M2C_FIELD(var_v1, u8 *, 0x74E) == var_a3) {
                    var_a3 = M2C_FIELD((arg0 + (var_a4 * 2)), u8 *, 0x74F);
                } else if (M2C_FIELD(var_v1, u8 *, 0x74F) == var_a3) {
                    var_a3 = M2C_FIELD((arg0 + (var_a4 * 2)), u8 *, 0x74E);
                } else {
                    var_a4 += 1;
                    var_v1 += 2;
                    if (var_a4 < (s32) temp_a0) {
                        goto loop_11;
                    }
                }
            }
            temp_v1_2 = arg0 + (var_a3 & 0xFF);
            if (M2C_FIELD(temp_v1_2, u8 *, 0x33) != 0) {
                var_a2 = (var_a2 + 1) & 0xFF;
            } else if (M2C_FIELD(temp_v1_2, u8 *, 0x53) != 0) {
                var_a1 = (var_a1 + 1) & 0xFF;
            }
            var_a5 += 1;
        } while (var_a5 < 0xB);
        temp_a0_2 = var_a2 & 0xFF;
        var_v0 = 1;
        if ((temp_a0_2 < 7) && ((temp_a0_2 + (var_a1 & 0xFF)) >= 7)) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
