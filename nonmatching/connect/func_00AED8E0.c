/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00AED8E0(s32 arg0, void *arg1, f32 fparg0, f32 fparg1) {
    f32 *var_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 var_f2;
    s32 var_a4;
    s32 var_v1;
    void *var_a3;

    var_a4 = 0;
    var_f2 = fparg0 + (((fparg1 - fparg0) - ((56.0f * (f32) arg0) - 4.0f)) / 2.0f);
    if (arg0 > 0) {
        if (arg0 >= 9) {
            var_v1 = 0;
            if ((arg0 >= 0) && (arg0 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                var_a3 = arg1;
                do {
                    temp_f0 = var_f2 + 56.0f;
                    var_a4 += 8;
                    M2C_FIELD(var_a3, f32 *, 0) = var_f2;
                    M2C_FIELD(var_a3, f32 *, 4) = temp_f0;
                    temp_f0_2 = temp_f0 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 8) = temp_f0_2;
                    temp_f0_3 = temp_f0_2 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 0xC) = temp_f0_3;
                    temp_f0_4 = temp_f0_3 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 0x10) = temp_f0_4;
                    temp_f0_5 = temp_f0_4 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 0x14) = temp_f0_5;
                    temp_f0_6 = temp_f0_5 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 0x18) = temp_f0_6;
                    temp_f0_7 = temp_f0_6 + 56.0f;
                    var_f2 = temp_f0_7 + 56.0f;
                    M2C_FIELD(var_a3, f32 *, 0x1C) = temp_f0_7;
                    var_a3 += 0x20;
                } while (var_a4 < (arg0 - 8));
            }
        }
        if (var_a4 < arg0) {
            var_a1 = arg1 + (var_a4 * 4);
            do {
                *var_a1 = var_f2;
                var_a4 += 1;
                var_f2 += 56.0f;
                var_a1 += 4;
            } while (var_a4 < arg0);
        }
    }
}
