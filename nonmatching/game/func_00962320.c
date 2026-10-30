/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952420(void *, u16, s32, u32);           /* extern */
s32 func_00967760();                                /* extern */
s32 func_0098ED30(u8);                              /* extern */
s32 func_009B30B0(s32, u16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00AD9860(void *);                          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
s32 func_00962320(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;

    temp_v0 = 0x1000 - ((func_009B30B0(func_00967760() & 0xFFFF, M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) * 8);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x124) < (u32) (temp_v0 * temp_v0)) {
        var_s0 = 0;
        temp_v1 = func_0098ED30(M2C_FIELD(arg0, u8 *, 0)) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 2:
            var_s0 = 0x200;
            break;
        case 3:
            var_s0 = 0x400;
            break;
        case 5:
            var_s0 = 0x800;
            break;
        }
        temp_s1 = 0x1800 - (var_s0 & 0xFFFF);
        if (func_00952420(arg0, M2C_FIELD(arg0, u16 *, 0x120), temp_s1 & 0xFFFF, M2C_FIELD(arg0, u32 *, 0x124)) != 0) {
            return 1;
        }
        if (!(M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_s0_2 = 1;
        } else {
            var_s0_2 = -1;
        }
        temp_f20 = 13465.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14);
        if (func_00952420(arg0, func_009B3480(arg0, temp_f20, (f32) (var_s0_2 * (func_00AD9860(arg0) & 0xFFFF))) & 0xFFFF, temp_s1 & 0xFFFF, M2C_FIELD(arg0, u32 *, 0x124)) != 0) {
            return 1;
        }
        if (!(M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_s0_3 = 1;
        } else {
            var_s0_3 = -1;
        }
        temp_f20_2 = 13465.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14);
        if (func_00952420(arg0, func_009B3480(arg0, temp_f20_2, (f32) (-var_s0_3 * (func_00AD9860(arg0) & 0xFFFF))) & 0xFFFF, temp_s1 & 0xFFFF, M2C_FIELD(arg0, u32 *, 0x124)) != 0) {
            return 1;
        }
        goto block_25;
    }
block_25:
    return 0;
}
