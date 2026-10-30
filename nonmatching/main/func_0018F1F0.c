/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00151CF0(M2C_UNK);                         /* extern */
s32 func_00151EA0(M2C_UNK);                         /* extern */

void func_0018F1F0(void *arg0) {
    s16 var_v0;
    s32 var_s0;
    s32 var_s2;
    void *var_s1;
    void *var_s3;

    var_s3 = arg0;
    var_s2 = 0;
    do {
        if ((M2C_FIELD(var_s3, u8 *, 0) != 0) && (M2C_FIELD(var_s3, u8 *, 3) == 0)) {
            if (!(M2C_FIELD(var_s3, u8 *, 2) & 4)) {
                var_v0 = (func_00151EA0(0x320) & 0xFFFF) + 0x960;
                goto block_8;
            }
            if (func_00151EA0(0x80) == 0) {
                var_v0 = 0x294;
block_8:
                M2C_FIELD(var_s3, s16 *, 0x20) = var_v0;
                M2C_FIELD(var_s3, u8 *, 3) = 1U;
                var_s1 = var_s3 + 0x30;
                M2C_FIELD(var_s3, s16 *, 0x22) = 0;
                var_s0 = 0;
                do {
                    M2C_FIELD(var_s1, f32 *, 0x1C) = (f32) (-1.0f * func_00151CF0(0x3F800000));
                    M2C_FIELD(var_s1, s32 *, 0x18) = 0;
                    M2C_FIELD(var_s1, s32 *, 0x20) = 0;
                    if (func_00151EA0(1) == 0) {

                    } else {
                        M2C_FIELD(var_s1, s32 *, 0x20) = (s32) (M2C_FIELD(var_s1, s32 *, 0x20) | 1);
                    }
                    var_s0 += 1;
                    var_s1 += 0x34;
                } while (var_s0 < 0x14);
                M2C_FIELD(var_s3, s32 *, 0x440) = 0x3F800000;
                M2C_FIELD(var_s3, s16 *, 0x444) = 0;
                M2C_FIELD(var_s3, s8 *, 0x446) = 1;
                if (func_00151EA0(4) != 0) {
                    M2C_FIELD(var_s3, s8 *, 0x447) = 0;
                } else {
                    M2C_FIELD(var_s3, s8 *, 0x447) = 1;
                }
            }
        }
        var_s2 += 1;
        var_s3 += 0x448;
    } while (var_s2 < 6);
}
