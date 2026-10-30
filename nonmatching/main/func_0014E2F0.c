/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E2F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 var_a6;
    void *var_a0;

    var_a0 = arg0;
    var_a6 = 0;
    if (arg1 > 0) {
        do {
            temp_a5 = M2C_FIELD(var_a0, u8 *, 0) + arg2;
            if (temp_a5 >= 0x100) {
                M2C_FIELD(var_a0, u8 *, 0) = 0xFFU;
            } else if (temp_a5 >= 0) {
                M2C_FIELD(var_a0, u8 *, 0) = (u8) temp_a5;
            } else {
                M2C_FIELD(var_a0, u8 *, 0) = 0U;
            }
            temp_a5_2 = M2C_FIELD(var_a0, u8 *, 1) + arg3;
            if (temp_a5_2 < 0x100) {
                if (temp_a5_2 >= 0) {
                    M2C_FIELD(var_a0, u8 *, 1) = (u8) temp_a5_2;
                } else {
                    M2C_FIELD(var_a0, u8 *, 1) = 0U;
                }
            } else {
                M2C_FIELD(var_a0, u8 *, 1) = 0xFFU;
            }
            temp_a5_3 = M2C_FIELD(var_a0, u8 *, 2) + arg4;
            if (temp_a5_3 < 0x100) {
                if (temp_a5_3 >= 0) {
                    M2C_FIELD(var_a0, u8 *, 2) = (u8) temp_a5_3;
                } else {
                    M2C_FIELD(var_a0, u8 *, 2) = 0U;
                }
            } else {
                M2C_FIELD(var_a0, u8 *, 2) = 0xFFU;
            }
            var_a6 += 1;
            var_a0 += 4;
        } while (var_a6 < arg1);
    }
}
