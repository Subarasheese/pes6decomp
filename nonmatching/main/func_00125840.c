/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 __umoddi3(s64, M2C_UNK);                    /* extern */

s32 func_00125840(u64 arg0, u8 *arg1, u32 arg2) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 temp_a5_4;
    s32 temp_a6;
    s64 var_s0;
    s64 var_s1;
    u32 var_s2;
    u32 var_v0;
    u8 *var_s3;
    u8 temp_v1;

    var_s3 = arg1;
    var_s2 = arg2;
    var_s1 = arg0 & 0xFFFF;
    var_s0 = (arg0 >> 0x10) & 0xFFFF;
    if (var_s3 != NULL) {
        if (var_s2 != 0) {
            do {
                if (var_s2 >= 0x15B0U) {
                    var_v0 = 0x15B0;
                } else {
                    var_v0 = var_s2;
                }
                var_s2 -= var_v0;
                if ((s32) var_v0 >= 0x10) {
                    do {
                        var_v0 -= 0x10;
                        temp_a6 = var_s1 + M2C_FIELD(var_s3, u8 *, 0);
                        temp_a5 = temp_a6 + M2C_FIELD(var_s3, u8 *, 1);
                        temp_a3 = temp_a5 + M2C_FIELD(var_s3, u8 *, 2);
                        temp_a3_2 = temp_a3 + M2C_FIELD(var_s3, u8 *, 3);
                        temp_a1 = temp_a3_2 + M2C_FIELD(var_s3, u8 *, 4);
                        temp_a1_2 = temp_a1 + M2C_FIELD(var_s3, u8 *, 5);
                        temp_a5_2 = temp_a1_2 + M2C_FIELD(var_s3, u8 *, 6);
                        temp_a5_3 = temp_a5_2 + M2C_FIELD(var_s3, u8 *, 7);
                        temp_a5_4 = temp_a5_3 + M2C_FIELD(var_s3, u8 *, 8);
                        temp_a3_3 = temp_a5_4 + M2C_FIELD(var_s3, u8 *, 9);
                        temp_a3_4 = temp_a3_3 + M2C_FIELD(var_s3, u8 *, 0xA);
                        temp_a1_3 = temp_a3_4 + M2C_FIELD(var_s3, u8 *, 0xB);
                        temp_a1_4 = temp_a1_3 + M2C_FIELD(var_s3, u8 *, 0xC);
                        temp_a1_5 = temp_a1_4 + M2C_FIELD(var_s3, u8 *, 0xD);
                        temp_a2 = var_s0 + temp_a6 + temp_a5 + temp_a3 + temp_a3_2 + temp_a1 + temp_a1_2 + temp_a5_2 + temp_a5_3 + temp_a5_4 + temp_a3_3 + temp_a3_4 + temp_a1_3 + temp_a1_4 + temp_a1_5;
                        temp_v1 = M2C_FIELD(var_s3, u8 *, 0xF);
                        temp_a1_6 = temp_a1_5 + M2C_FIELD(var_s3, u8 *, 0xE);
                        var_s3 += 0x10;
                        var_s1 = temp_a1_6 + temp_v1;
                        var_s0 = temp_a2 + temp_a1_6 + var_s1;
                    } while ((s32) var_v0 >= 0x10);
                }
                if (var_v0 != 0) {
                    do {
                        var_v0 -= 1;
                        var_s1 += *var_s3;
                        var_s3 += 1;
                        var_s0 += var_s1;
                    } while (var_v0 != 0);
                }
                var_s1 = __umoddi3(var_s1, 0xFFF1);
                var_s0 = __umoddi3(var_s0, 0xFFF1);
            } while (var_s2 != 0);
        }
        return (var_s0 << 0x10) | var_s1;
    }
    return 1;
}
