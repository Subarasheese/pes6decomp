/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B45B0(u32);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
s32 func_00849850(M2C_UNK);                         /* extern */
M2C_UNK func_009A2460(u8 *, u8, u8);                /* extern */
s32 func_009B4700();                                /* extern */
M2C_UNK func_009B6630(M2C_UNK, u16, f32);           /* extern */
extern u8 D_003E7A40;
extern u8 D_003E7A41;
extern u8 D_003E7A42;
extern u8 D_003E7A43;
extern s32 D_003EA73C;
extern char D_00591BE4[];
extern char D_00CBAA00[];
extern char D_00CBAA02[];
extern char D_00CBD2A2[];
extern char D_00CBD2A4[];
extern char D_00CBD2A5[];

s32 func_00BCFD30(void) {
    u8 sp3C;
    u8 sp3D;
    u8 sp3E;
    u8 sp3F;
    f32 var_f0;
    f32 var_f12;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBD2A2)) {
        goto block_1;
    }
    if (((*(u8 *)D_00CBD2A5) != 0) && ((s32) (*(u8 *)D_00CBD2A4) < (s32) ((u8) (*(u8 *)D_00591BE4) >> 1))) {
        (*(u8 *)D_00CBD2A4) += 1;
        return 0;
    }
block_1:
    if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02)) {
        var_v0 = (*(u16 *)D_00CBAA00) - (*(u16 *)D_00CBD2A2);
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        var_f12 = 0.5f * (f32) var_v0;
        var_f0 = 0.125f;
        if ((var_f12 < 0.125f) || (var_f0 = 1.0f, !(var_f12 <= 1.0f))) {
            var_f12 = var_f0;
        }
        temp_s0 = (*(u16 *)D_00CBAA00) & 0xFFFF;
        func_009B6630(0, (*(u16 *)D_00CBD2A2), var_f12);
        if (((*(u8 *)D_00CBD2A5) == 0) && (((temp_s0 < (s32) (*(u16 *)D_00CBD2A2)) && ((s32) (*(u16 *)D_00CBAA00) >= (s32) (*(u16 *)D_00CBD2A2))) || (((s32) (*(u16 *)D_00CBAA00) < temp_s0) && (((s32) (*(u16 *)D_00CBD2A2) >= temp_s0) || ((s32) (*(u16 *)D_00CBAA00) >= (s32) (*(u16 *)D_00CBD2A2)))))) {
            sp3C = D_003E7A40;
            sp3D = D_003E7A41;
            sp3E = D_003E7A42;
            sp3F = D_003E7A43;
            func_009A2460(&sp3C, D_003E7A41, D_003E7A40);
            (*(u8 *)D_00CBD2A5) = 1;
        }
    }
    if (D_003EA73C == 0) {
        if ((*(u16 *)D_00CBAA00) != (*(u16 *)D_00CBAA02)) {
            var_s1 = 0;
            temp_s0_2 = func_009B4700();
            if (func_002DCA30() == 0) {
                if (func_00154490(temp_s0_2, 8) != 0) {
                    var_s1 = 1;
                }
            } else {
                var_s1 = func_00849850(0) != 0;
            }
            if (var_s1 != 0) {
                goto block_23;
            }
        } else {
block_23:
            D_003EA73C = 1;
        }
    }
    if (D_003EA73C != 0) {
        if (func_00152130(1, 0x10) != 0) {
            var_v0_2 = 1;
        } else {
            goto block_27;
        }
    } else {
block_27:
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        func_009B45B0(6U);
    }
    return 0;
}
