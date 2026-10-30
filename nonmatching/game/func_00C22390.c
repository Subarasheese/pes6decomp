/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C22390(void *arg0, void *arg1) {
    f32 temp_f2;
    s32 var_a5;
    s32 var_v1;
    u8 temp_a2;
    u8 temp_a3;
    u8 var_a7;
    void *temp_a4;
    void *var_a6;
    void *var_t0;

    temp_f2 = fabsf(M2C_FIELD(arg1, f32 *, 4));
    temp_a3 = M2C_FIELD(arg0, u8 *, 0x300);
    var_t0 = arg0 + (M2C_FIELD(arg0, u8 *, 0x301) * 8);
    if (temp_a3 != 0) {
        if ((s32) temp_a3 >= 0x60) {
            var_a7 = M2C_FIELD(arg0, u8 *, 0x302);
            var_a6 = (var_a7 * 8) + arg0;
            if (!(temp_f2 <= fabsf(M2C_FIELD(var_a6, f32 *, 4)))) {
                goto block_3;
            }
            return;
        }
        var_a7 = temp_a3;
        var_a6 = arg0 + (temp_a3 * 8);
        M2C_FIELD(arg0, u8 *, 0x300) = (u8) (M2C_FIELD(arg0, u8 *, 0x300) + 1);
block_3:
        M2C_FIELD(var_a6, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(var_a6, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        if (temp_f2 <= fabsf(M2C_FIELD(var_t0, f32 *, 4))) {
            var_a5 = 1;
            if ((s32) temp_a3 >= 2) {
loop_6:
                temp_a2 = M2C_FIELD(var_t0, u8 *, 1);
                temp_a4 = arg0 + (temp_a2 * 8);
                var_v1 = 1;
                if (temp_f2 <= fabsf(M2C_FIELD(temp_a4, f32 *, 4))) {
                    var_v1 = 0;
                }
                if ((var_v1 ^ 1) == 0) {
                    M2C_FIELD(var_a6, u8 *, 1) = temp_a2;
                    M2C_FIELD(var_t0, u8 *, 1) = var_a7;
                } else {
                    var_a5 += 1;
                    var_t0 = temp_a4;
                    if (var_a5 >= (s32) temp_a3) {
                        goto block_11;
                    }
                    goto loop_6;
                }
            } else {
block_11:
                M2C_FIELD(var_t0, u8 *, 1) = var_a7;
                M2C_FIELD(arg0, u8 *, 0x302) = var_a7;
            }
        } else {
            M2C_FIELD(var_a6, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0x301);
            M2C_FIELD(arg0, u8 *, 0x301) = var_a7;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg0, u8 *, 0x300) = 1U;
        M2C_FIELD(arg0, u8 *, 0x301) = 0U;
        M2C_FIELD(arg0, u8 *, 0x302) = 0U;
    }
}
