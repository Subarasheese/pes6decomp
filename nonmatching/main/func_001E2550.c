/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

f32 func_0011D238(f32);                         /* extern */
extern void *D_0052AE9C;
extern char D_0052AEA0[];
extern f32 D_0052AEBC;

void func_001E2550(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f20;
    u8 var_a1;
    void *var_a1_2;

    var_f20 = 1.0f;
    if (D_0052AE9C != *(void **)D_0052AEA0) {
        var_a1 = M2C_FIELD(arg0, u8 *, 0x75);
        if ((var_a1 & 0x10) && ((temp_f0 = M2C_FIELD(arg0, f32 *, 0x24)) < D_0052AEBC)) {
            var_f20 = temp_f0 / D_0052AEBC;
            var_f12 = 0.0f;
        } else {
            var_a1 &= 0xF;
            if (var_a1 == 2) {
                var_f12 = M2C_FIELD(arg0, f32 *, 0x24) - D_0052AEBC;
            } else if (var_a1 == 1) {
                var_f12 = (M2C_FIELD(arg0, f32 *, 0x24) - D_0052AEBC) / 2.0f;
            } else {
                var_f12 = 0.0f;
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0x7A) != 0) {
            var_f12 -= 2.0f;
        }
        if ((var_f12 == 0.0f) && (var_f20 == 1.0f)) {
            return;
        }
        temp_f0_2 = func_0011D238(var_f12);
        var_a1_2 = D_0052AE9C;
        do {
            M2C_FIELD(var_a1_2, f32 *, 0x10) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x10) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x20) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x20) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x30) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x30) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x40) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x40) * var_f20) + temp_f0_2);
            var_a1_2 = M2C_FIELD(var_a1_2, void **, 0);
        } while (var_a1_2 != *(void **)D_0052AEA0);
    }
}
