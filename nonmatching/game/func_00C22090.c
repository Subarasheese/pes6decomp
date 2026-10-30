/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C21A30(void *);                          /* extern */
s32 func_00C21D60();                                /* extern */

s32 func_00C22090(void *arg0) {
    f32 var_f1;
    f32 var_f2;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_s0;
    u8 temp_a2;
    void *var_a3;
    void *var_s1;

    var_s1 = arg0;
    var_s0 = func_00C21D60() & 0xFF;
    temp_a2 = M2C_FIELD(var_s1, u8 *, 0x300);
    temp_v1 = var_s0 & 0xFF;
    temp_v0 = func_00C21A30(var_s1) & 0xFF;
    var_f1 = 0.0f;
    var_a4 = 0;
    if ((s32) temp_a2 > 0) {
        var_a3 = var_s1;
        do {
            if ((M2C_FIELD(var_a3, u8 *, 2) == ((temp_v1 >> 5) & 1 & 0xFF)) && (M2C_FIELD(var_a3, u8 *, 3) == (temp_v1 & 0x1F & 0xFF))) {
                var_f1 += M2C_FIELD(var_a3, f32 *, 4);
            }
            var_a4 += 1;
            var_a3 += 8;
        } while (var_a4 < (s32) temp_a2);
    }
    temp_a1 = temp_v0 & 0xFF;
    var_a3_2 = 0;
    var_f2 = 0.0f;
    if ((s32) temp_a2 > 0) {
        do {
            if ((M2C_FIELD(var_s1, u8 *, 2) == ((temp_a1 >> 5) & 1 & 0xFF)) && (M2C_FIELD(var_s1, u8 *, 3) == (temp_a1 & 0x1F & 0xFF))) {
                var_f2 += M2C_FIELD(var_s1, f32 *, 4);
            }
            var_a3_2 += 1;
            var_s1 += 8;
        } while (var_a3_2 < (s32) temp_a2);
    }
    if (fabsf(var_f1) <= fabsf(var_f2)) {
        var_s0 = temp_v0;
    }
    return var_s0;
}
