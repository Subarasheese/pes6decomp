/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
void func_0036E8C0(void *arg0) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    void *temp_s0;
    void *temp_s1;

    var_s2 = 1;
    temp_s1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + 0x7D6;
    do {
        temp_s0 = temp_s1 + var_s2;
        temp_a0 = func_002937A0(M2C_FIELD(temp_s0, u8 *, 0x14)) & 0xFF;
        if ((temp_a0 != 9) && (temp_a0 != 0xB) && (temp_a0 != 0xC)) {

        } else {
            var_a2 = 0;
            var_a3 = 0;
            do {
                if (M2C_FIELD(temp_s0, u8 *, 0x1F) & (1 << var_a3)) {
                    var_a2 = (var_a2 + 1) & 0xFF;
                }
                var_a3 += 1;
            } while (var_a3 < 8);
            if ((var_a2 & 0xFF) == 2) {
                if (!(M2C_FIELD(temp_s0, u8 *, 0x1F) & 0x38)) {
                    M2C_FIELD(temp_s0, u8 *, 0x1F) = 0U;
                    goto block_13;
                }
            } else {
block_13:
                M2C_FIELD(temp_s0, u8 *, 0x1F) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x1F) | 0x10);
            }
        }
        var_s2 += 1;
    } while (var_s2 < 0xB);
}
