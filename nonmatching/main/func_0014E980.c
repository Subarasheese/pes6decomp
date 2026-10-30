/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E980(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a4 = 0;
    if (arg1 > 0) {
        if (arg1 >= 9) {
            var_a6 = 0;
            var_v1 = 0;
            if ((arg1 >= 0) && (arg1 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                temp_v1 = arg1 & 0x80000000;
                var_a5 = 1;
                if ((temp_v1 == 0) && (temp_v1 != 0)) {
                    var_a5 = 0;
                }
                if (var_a5 != 0) {
                    var_a6 = 1;
                }
            }
            if (var_a6 != 0) {
                temp_v1_2 = arg2 & 0xFF;
                do {
                    M2C_FIELD(var_a0, u8 *, 3) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 3) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 7) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 7) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 0xB) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xB) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 0xF) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0xF) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 0x13) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x13) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 0x17) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x17) * temp_v1_2) >> 8);
                    M2C_FIELD(var_a0, u8 *, 0x1B) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1B) * temp_v1_2) >> 8);
                    var_a4 += 8;
                    M2C_FIELD(var_a0, u8 *, 0x1F) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0x1F) * temp_v1_2) >> 8);
                    var_a0 += 0x20;
                } while (var_a4 < (arg1 - 8));
            }
        }
        if (var_a4 < arg1) {
            do {
                var_a4 += 1;
                M2C_FIELD(var_a0, u8 *, 3) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 3) * (arg2 & 0xFF)) >> 8);
                var_a0 += 4;
            } while (var_a4 < arg1);
        }
    }
}
