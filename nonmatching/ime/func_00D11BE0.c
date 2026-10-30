/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D11BE0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    var_a1 = arg1;
    if (arg0 != NULL) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0xDA8);
        switch (temp_a3) {                          /* irregular */
        case 4:
            var_v1 = 0x15;
block_14:
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xD90) - var_v1;
            if (var_a1 >= temp_v0) {
                var_a1 = temp_v0;
            }
            if (var_a1 < 0) {
                var_a1 = 0;
            }
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xD9C);
            if (var_a1 != temp_v1) {
                M2C_FIELD(arg0, s32 *, 0xD9C) = var_a1;
                var_v0 = M2C_FIELD(arg0, s32 *, 0xDA0) + arg2;
                goto block_25;
            }
            if (M2C_FIELD(arg0, s32 *, 0xD94) != temp_v1) {
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xDA0);
                if (temp_v0_2 != 0) {
                    var_v0 = temp_v0_2 + arg2;
block_25:
                    M2C_FIELD(arg0, s32 *, 0xDA0) = var_v0;
                }
            }
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xD94);
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0xD9C);
            if (temp_v1_2 < temp_v0_3) {
                var_v1_2 = (s32) (7.0f * ((f32) (temp_v0_3 - temp_v1_2) - M2C_FIELD(arg0, f32 *, 0xD98)));
            } else {
                var_v1_2 = (s32) (7.0f * (M2C_FIELD(arg0, f32 *, 0xD98) + (f32) (temp_v1_2 - temp_v0_3)));
            }
            if (var_v1_2 < M2C_FIELD(arg0, s32 *, 0xDA0)) {
                M2C_FIELD(arg0, s32 *, 0xDA0) = var_v1_2;
            }
            if (M2C_FIELD(arg0, s32 *, 0xDA0) >= 0x29) {
                M2C_FIELD(arg0, s32 *, 0xDA0) = 0x28;
            }
            return 0;
        case 2:
            var_v1 = 4;
            goto block_14;
        case 3:
            var_v1 = 4;
            goto block_14;
        default:
            return 2;
        }
    } else {
        return 2;
    }
}
