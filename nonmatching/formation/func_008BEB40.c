/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BEB40(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a6;
    u8 temp_a2;
    u8 temp_a4;
    void *temp_v1;
    void *temp_v1_2;

    var_a1 = arg1;
    if (var_a1 < 0x1F) {
        do {
            temp_v1 = arg0 + var_a1;
            temp_a4 = M2C_FIELD(temp_v1, u8 *, 0x766);
            if (M2C_FIELD((arg0 + temp_a4), u8 *, 0x193) != 0) {
                var_a6 = var_a1 + 1;
                if (var_a6 < 0x20) {
loop_3:
                    temp_v1_2 = arg0 + var_a6;
                    temp_a2 = M2C_FIELD(temp_v1_2, u8 *, 0x766);
                    if (M2C_FIELD((arg0 + temp_a2), u8 *, 0x193) == 0) {
                        M2C_FIELD(temp_v1, u8 *, 0x766) = temp_a2;
                        M2C_FIELD(temp_v1_2, u8 *, 0x766) = temp_a4;
                    } else {
                        var_a6 += 1;
                        if (var_a6 < 0x20) {
                            goto loop_3;
                        }
                    }
                }
            }
            var_a1 += 1;
        } while (var_a1 < 0x1F);
    }
}
