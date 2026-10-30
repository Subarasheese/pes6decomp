/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32);                             /* extern */
s32 func_00BDB8B0(M2C_UNK *);                       /* extern */
extern char D_0058EA30[];
extern char D_005902F0[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
u8 func_00914930(s32 arg0) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_s0;
    s32 var_s3;
    s32 var_s3_2;
    u8 var_s2;

    var_s2 = 0;
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 == 0) {
        var_s1 = ((void *)D_0058EA30);
        var_f20 = 13465.0f;
        var_s3 = 0;
        do {
            if (func_00BDB8B0(var_s1) != 0) {
                temp_f0 = M2C_FIELD(var_s1, f32 *, 0xE0);
                if (temp_f0 < var_f20) {
                    var_s2 = M2C_FIELD(var_s1, u8 *, 0);
                    var_f20 = temp_f0;
                }
            }
            var_s3 = (var_s3 + 1) & 0xFF;
            var_s1 += 0x240;
        } while (var_s3 < 0xA);
    } else {
        var_s1_2 = ((void *)D_005902F0);
        var_f20_2 = -13465.0f;
        var_s3_2 = 0;
        do {
            if (func_00BDB8B0(var_s1_2) != 0) {
                temp_f0_2 = M2C_FIELD(var_s1_2, f32 *, 0xE0);
                if (!(temp_f0_2 <= var_f20_2)) {
                    var_s2 = M2C_FIELD(var_s1_2, u8 *, 0);
                    var_f20_2 = temp_f0_2;
                }
            }
            var_s3_2 = (var_s3_2 + 1) & 0xFF;
            var_s1_2 += 0x240;
        } while (var_s3_2 < 0xA);
    }
    if (!(var_s2 & 0xFF)) {
        var_s2 = func_00AFBAB0(((temp_s0 * 0xB) + 1) & 0xFF) & 0xFF;
    }
    return var_s2;
}
