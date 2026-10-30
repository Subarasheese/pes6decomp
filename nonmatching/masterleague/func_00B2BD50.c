/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B2BD50(s32 arg0) {
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *temp_v0;
    void *temp_v0_2;

    var_s5 = 0;
    var_s2 = 0;
    temp_s1 = arg0 & 0xFF;
    do {
        temp_v0 = func_00994C60(temp_s1, var_s5);
        if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) == 9) {
            var_s4 = 0;
            do {
                if ((var_s4 != temp_s1) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
                    var_s3 = 0;
                    do {
                        temp_v0_2 = func_00994C60(var_s4, var_s3);
                        if ((M2C_FIELD(temp_v0, u16 *, 4) == M2C_FIELD(temp_v0_2, u16 *, 4)) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x39) >> 0x3A) != 9)) {
                            var_s2 += 1;
                        }
                        var_s3 += 1;
                    } while (var_s3 < 0x25);
                }
                var_s4 += 1;
            } while (var_s4 < 0x48);
        }
        var_s5 += 1;
    } while (var_s5 < 0x25);
    return var_s2 < 0x20;
}
