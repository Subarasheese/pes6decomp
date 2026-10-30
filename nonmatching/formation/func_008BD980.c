/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
void func_008BD980(void *arg0) {
    s32 var_s0;
    void *temp_v1;
    void *var_v1;

    var_s0 = 1;
    do {
        if ((func_002937A0(M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_s0), u8 *, 0x7EA)) & 0xFF) != 2) {
            temp_v1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_s0;
            if (M2C_FIELD(temp_v1, u8 *, 0x80B) == 0) {
                M2C_FIELD(temp_v1, u8 *, 0x80B) = 1U;
                var_v1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_s0;
                goto block_6;
            }
        } else {
            M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_s0), s8 *, 0x80B) = 0;
            var_v1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x73E) * 0x52) + var_s0;
block_6:
            M2C_FIELD(var_v1, s8 *, 0x816) = 0xFF;
        }
        var_s0 += 1;
    } while (var_s0 < 0xB);
}
