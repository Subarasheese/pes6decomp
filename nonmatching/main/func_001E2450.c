/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D238(u8, f32);                         /* extern */
extern char D_0052AE74[];

void func_001E2450(void *arg0) {
    f32 temp_f0;
    f32 var_f12;
    u8 temp_a0;
    void *var_v1;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0x76);
    if (temp_a0 != 2) {
        if (temp_a0 != 1) {
            var_f12 = 0.0f;
        } else {
            var_f12 = (M2C_FIELD(arg0, f32 *, 0x28) - (*(f32 *)D_0052AE74)) / 2.0f;
        }
    } else {
        var_f12 = M2C_FIELD(arg0, f32 *, 0x28) - (*(f32 *)D_0052AE74);
    }
    if (M2C_FIELD(arg0, u8 *, 0x7A) != 0) {
        var_f12 -= 2.0f;
    }
    if (var_f12 != 0.0f) {
        temp_f0 = func_0011D238(temp_a0, var_f12);
        var_v1 = M2C_FIELD(arg0, void **, 8);
        do {
            M2C_FIELD(var_v1, f32 *, 0x14) = (f32) (M2C_FIELD(var_v1, f32 *, 0x14) + temp_f0);
            M2C_FIELD(var_v1, f32 *, 0x24) = (f32) (M2C_FIELD(var_v1, f32 *, 0x24) + temp_f0);
            M2C_FIELD(var_v1, f32 *, 0x34) = (f32) (M2C_FIELD(var_v1, f32 *, 0x34) + temp_f0);
            M2C_FIELD(var_v1, f32 *, 0x44) = (f32) (M2C_FIELD(var_v1, f32 *, 0x44) + temp_f0);
            var_v1 = M2C_FIELD(var_v1, void **, 0);
        } while (var_v1 != NULL);
    }
}
