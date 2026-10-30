/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002E1540(void *, void *);
M2C_UNK func_00212570(void *, f32 *);               /* extern */
extern void *D_003E9A00;

s32 func_00212E00(void *arg0, s8 arg1) {
    f32 sp50;
    f32 var_f0;
    f32 var_f1;
    s32 var_s2;
    s8 var_a1;
    s8 var_v0;
    void *temp_s3;
    void *var_s0;
    void *var_s1;

    var_a1 = arg1;
    if (arg0 != NULL) {
        var_s1 = arg0;
    } else {
        var_s1 = D_003E9A00;
    }
    if ((var_s1 != NULL) && (M2C_FIELD(var_s1, u8 *, 9) != 0)) {
        var_v0 = M2C_FIELD(var_s1, s8 *, 0xC) - 1;
        if (var_v0 < var_a1) {

        } else {
            if (var_a1 < 0) {
                var_a1 = 0;
            }
            var_v0 = var_a1;
        }
        M2C_FIELD(var_s1, s8 *, 0xD) = var_v0;
        M2C_FIELD(var_s1, u8 *, 8) = (u8) (M2C_FIELD(var_s1, u8 *, 8) | 2);
        if (M2C_FIELD(var_s1, u8 *, 9) == 1) {
            var_s2 = 0;
            var_s0 = var_s1;
            do {
                temp_s3 = var_s0 + 0x10;
                func_002E1540(temp_s3 + 0x28, &sp50);
                if (var_s2 == M2C_FIELD(var_s1, s8 *, 0xD)) {
                    if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                        var_f1 = 10.0f;
                    } else {
                        var_f1 = 0.0f;
                    }
                    sp50 = var_f1 - 5.0f;
                    M2C_FIELD(var_s0, s8 *, 0x10) = 2;
                } else {
                    if (M2C_FIELD(temp_s3, u8 *, 1) == 2) {
                        var_f0 = 10.0f;
                    } else {
                        var_f0 = 0.0f;
                    }
                    sp50 = var_f0;
                    M2C_FIELD(var_s0, s8 *, 0x10) = 0;
                }
                func_00212570(temp_s3, &sp50);
                var_s2 += 1;
                var_s0 += 0x7C;
            } while (var_s2 < 0xB);
        }
    }
    if (var_s1 == NULL) {
        return 0;
    }
    return M2C_FIELD(((M2C_FIELD(var_s1, s8 *, 0xD) * 0x7C) + var_s1), u8 *, 0x12) != 0;
}
