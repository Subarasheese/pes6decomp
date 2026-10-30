/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_00AA24E0(void *, s32, M2C_UNK);            /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00592260[];
extern char D_005926D8[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54], gap at: 0x8. */
s32 func_00AB9B10(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f20;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;

    var_s0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    var_s1 = arg2;
    if (var_s0 > 0) {

    } else {
        var_s0 = -var_s0;
    }
    temp_v0 = func_00BBB8C0(0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U));
    var_s2 = (arg1 + ((((var_s0 * temp_v0) / 200) + ((u32) (var_s0 * temp_v0) >> 0x1F)) & 0xFFFF)) & 0xFFFF;
    (*(s32 *)D_00592260) = var_s2;
    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
        return var_s1;
    }
    temp_f20 = (*(f32 *)D_005926D8);
    var_s0_2 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) - var_s2;
    if ((temp_f20 < (f32) func_002AE670(0x28)) && (temp_a0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50), ((temp_a0 < 0x3000) == 0))) {
        if ((s32) (*(u8 *)D_005926F4) < 0) {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
        } else {
            var_f0 = (f32) (*(u8 *)D_005926F4);
        }
        if (!(temp_f20 < var_f0) && (temp_a0 < 0x4000)) {
            goto block_14;
        }
    } else {
block_14:
        var_s0_2 -= 0x1000;
    }
    if (var_s0_2 > 0) {
        var_s2 = (var_s2 + (func_00AA24E0(arg0, var_s0_2, 8) & 0xFFFF)) & 0xFFFF;
        var_s1 += func_00AA24E0(arg0, (var_s0_2 / 188) + ((u32) var_s0_2 >> 0x1F), 8);
    }
    (*(s32 *)D_00592260) = var_s2 & 0xFFFF;
    return var_s1;
}
