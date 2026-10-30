/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
s32 func_008BD0F0(s32 arg0, s32 arg1) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    u8 temp_a0;
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    var_s4 = 1;
    var_s2 = arg0 + 2;
loop_1:
    temp_s0 = arg0 + var_s4;
    if ((arg1 & 0xFF) == (func_002937A0(M2C_FIELD(temp_s0, u8 *, 0x4A)) & 0xFF)) {
        var_s3 = 1;
        var_s1 = arg0 + 2;
loop_3:
        temp_a0 = M2C_FIELD((arg0 + var_s3), u8 *, 0x15);
        if ((M2C_FIELD(temp_s0, u8 *, 0x4A) != temp_a0) && ((func_002937A0(temp_a0) & 0xFF) >= 5)) {
            temp_v0 = M2C_FIELD(var_s1, u8 *, 0) - M2C_FIELD(var_s2, u8 *, 0x35);
            var_v1 = temp_v0 >> 1;
            temp_a0_2 = M2C_FIELD(var_s1, u8 *, -1) - M2C_FIELD(var_s2, u8 *, 0x34);
            if (temp_v0 < 0) {
                var_v1 = (s32) (temp_v0 + 1) >> 1;
            }
            if (((temp_a0_2 * temp_a0_2) + (var_v1 * var_v1)) < 0x24) {
                return 1;
            }
            goto block_9;
        }
block_9:
        var_s3 += 1;
        var_s1 += 2;
        if (var_s3 >= 0xB) {
            goto block_10;
        }
        goto loop_3;
    }
block_10:
    var_s4 += 1;
    var_s2 += 2;
    if (var_s4 >= 0xB) {
        return 0;
    }
    goto loop_1;
}
