/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E810(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a2;
    s32 temp_a6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a5;
    s32 var_a6;
    s32 var_a7;
    s32 var_v1;
    void *var_a0;
    void *var_a1;

    temp_v1 = arg2 * 4;
    var_a0 = arg0 + temp_v1;
    var_a1 = arg1 + temp_v1;
    var_a5 = 0;
    if (arg3 > 0) {
        if (arg3 >= 9) {
            var_a7 = 0;
            var_v1 = 0;
            if ((arg3 >= 0) && (arg3 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                temp_v1_2 = arg3 & 0x80000000;
                var_a6 = 1;
                if ((temp_v1_2 == 0) && (temp_v1_2 != 0)) {
                    var_a6 = 0;
                }
                if (var_a6 != 0) {
                    var_a7 = 1;
                }
            }
            if (var_a7 != 0) {
                temp_v1_3 = arg4 & 0xFF;
                do {
                    M2C_FIELD(var_a1, s8 *, 3) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 3) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 7) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 7) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 0xB) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xB) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 0xF) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xF) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 0x13) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x13) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 0x17) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x17) * temp_v1_3) >> 8);
                    M2C_FIELD(var_a1, s8 *, 0x1B) = (s8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1B) * temp_v1_3) >> 8);
                    var_a5 += 8;
                    temp_a6 = (s32) (M2C_FIELD(var_a0, u8 *, 0x1F) * temp_v1_3) >> 8;
                    var_a0 += 0x20;
                    M2C_FIELD(var_a1, s8 *, 0x1F) = (s8) temp_a6;
                    var_a1 += 0x20;
                } while (var_a5 < (arg3 - 8));
            }
        }
        if (var_a5 < arg3) {
            do {
                temp_a2 = M2C_FIELD(var_a0, u8 *, 3) * (arg4 & 0xFF);
                var_a5 += 1;
                var_a0 += 4;
                M2C_FIELD(var_a1, s8 *, 3) = (s8) (temp_a2 >> 8);
                var_a1 += 4;
            } while (var_a5 < arg3);
        }
    }
}
