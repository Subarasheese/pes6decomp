/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D238(u8, f32);                         /* extern */
extern void *D_0052AE9C;
extern char D_0052AEA0[];
extern char D_0052AEBC[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_001E2550(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f12;
    f32 var_f20;
    u8 var_a1;
    void *var_a1_2;

    var_f20 = 1.0f;
    if (D_0052AE9C != (*(s32 *)D_0052AEA0)) {
        var_a1 = M2C_FIELD(arg0, u8 *, 0x75);
        if (!(var_a1 & 0x10)) {
            goto block_2;
        }
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x24);
        if (temp_f0 < (*(f32 *)D_0052AEBC)) {
            var_f20 = temp_f0 / (*(f32 *)D_0052AEBC);
            var_f12 = 0.0f;
        } else {
block_2:
            var_a1 &= 0xF;
            switch (var_a1) {                       /* irregular */
            default:
            case 3:
                var_f12 = 0.0f;
                break;
            case 1:
                var_f12 = (M2C_FIELD(arg0, f32 *, 0x24) - (*(f32 *)D_0052AEBC)) / 2.0f;
                break;
            case 2:
                var_f12 = M2C_FIELD(arg0, f32 *, 0x24) - (*(f32 *)D_0052AEBC);
                break;
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0x7A) != 0) {
            var_f12 -= 2.0f;
        }
        if ((var_f12 == 0.0f) && (var_f20 == 1.0f)) {
            return;
        }
        temp_f0_2 = func_0011D238(var_a1, var_f12);
        var_a1_2 = D_0052AE9C;
        do {
            M2C_FIELD(var_a1_2, f32 *, 0x10) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x10) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x20) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x20) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x30) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x30) * var_f20) + temp_f0_2);
            M2C_FIELD(var_a1_2, f32 *, 0x40) = (f32) ((M2C_FIELD(var_a1_2, f32 *, 0x40) * var_f20) + temp_f0_2);
            var_a1_2 = M2C_FIELD(var_a1_2, void **, 0);
        } while (var_a1_2 != *(s32 *)0x52AEA0);
    }
}
