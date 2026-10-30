/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001E5410(void);
s32 func_00BBB1A0(s8);                              /* extern */
s32 func_00C76850(s32);                             /* extern */
s8 func_00C76890();                                 /* extern */
s32 func_00C76950(u8);                              /* extern */
s32 func_00C76A40();                                /* extern */
s32 func_00C76A90();                                /* extern */
M2C_UNK func_00C76AE0(void *, void *);              /* extern */
s32 func_00C76B40();                                /* extern */
s32 func_00C76BC0();                                /* extern */
s32 func_00C76C10(u8);                              /* extern */
s32 func_00C76C90();                                /* extern */
s32 func_00C76CF0(s32);                             /* extern */
extern char D_003F7796[];
extern char D_00591DB5[];
extern char D_00CCCC30[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00C82DB0(void) {
    M2C_UNK *var_s0;
    f32 temp_f20;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_a0;
    u8 temp_a0_2;

    var_s1 = 0;
    var_s0 = ((void *)D_00CCCC30);
    do {
        if (func_00C76CF0(var_s1) != 1) {
            M2C_FIELD(var_s0, s32 *, 4) = 0xFF;
        } else {
            func_00C76AE0(var_s0 + 0x10, var_s0 + 0x14);
            temp_f20 = (f32) (*(s16 *)D_003F7796);
            M2C_FIELD(var_s0, f32 *, 0x14) = (f32) ((M2C_FIELD(var_s0, f32 *, 0x14) * func_001E5410()) / temp_f20);
            M2C_FIELD(var_s0, s32 *, 8) = func_00C76A40();
            M2C_FIELD(var_s0, s8 *, 0) = func_00C76890();
            M2C_FIELD(var_s0, s32 *, 4) = func_00C76B40();
            temp_a0 = M2C_FIELD(var_s0, u8 *, 0xC);
            M2C_FIELD(var_s0, u8 *, 0xC) = (u8) ((temp_a0 & ~1) | (func_00C76C90() & 1));
            temp_a0_2 = M2C_FIELD(var_s0, u8 *, 0xC);
            M2C_FIELD(var_s0, u8 *, 0xC) = (u8) ((temp_a0_2 & ~2) | ((func_00C76C10(temp_a0) & 1) * 2));
            if (func_00C76950(temp_a0_2) == 0) {
                var_v0 = 0xB;
            } else {
                var_v0 = 0xA;
            }
            M2C_FIELD(var_s0, s32 *, 0x18) = var_v0;
            M2C_FIELD(var_s0, s32 *, 0x1C) = func_00C76BC0();
            var_v0_2 = func_00C76850(var_s1);
            if ((var_v0_2 != 2) && (var_v0_2 != 1) && (var_v0_2 != 0)) {
                var_v0_2 = 0;
            }
            M2C_FIELD(var_s0, s32 *, 0x20) = var_v0_2;
            if (var_v0_2 != 1) {
                if (var_v0_2 != 2) {
                    var_v0_3 = func_00C76BC0();
                    goto block_16;
                }
                M2C_FIELD(var_s0, s32 *, 0x24) = func_00C76A90();
                M2C_FIELD(var_s0, s32 *, 0x28) = func_00C76A40();
            } else {
                var_v0_3 = M2C_FIELD(var_s0, s32 *, 4);
block_16:
                M2C_FIELD(var_s0, s32 *, 0x24) = var_v0_3;
            }
            M2C_FIELD(var_s0, u8 *, 0xC) = (u8) ((M2C_FIELD(var_s0, u8 *, 0xC) & ~0xC) | ((func_00BBB1A0((s8) M2C_FIELD(var_s0, s32 *, 4)) & 3) * 4));
            if ((*(s8 *)D_00591DB5) != 0) {
                M2C_FIELD(var_s0, u8 *, 0xC) = (u8) ((M2C_FIELD(var_s0, u8 *, 0xC) & ~0xC) | ((0 & 3) * 4));
            }
        }
        var_s1 += 1;
        var_s0 += 0x2C;
    } while (var_s1 < 8);
}
