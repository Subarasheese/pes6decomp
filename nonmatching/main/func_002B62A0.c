/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A5620(void *);
extern void func_001A5670(f32);
s32 func_00151EA0(M2C_UNK, s16);                    /* extern */
void *func_009B4090(M2C_UNK);                       /* extern */
s32 func_009B44E0();                                /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
extern s32 D_003E758C;
extern char D_0059274A[];

void func_002B62A0(void) {
    f32 sp30;
    s32 sp34;
    f32 sp38;
    f32 sp40;
    s32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;
    s16 temp_a1;
    s64 var_s0;
    u16 var_a0;
    void *temp_v0;

    if (M2C_FIELD((((func_009B44E0() & 0xFFFF) * 0x354) + D_003E758C), s16 *, 0x348) >= 0) {
        var_s0 = 1;
    } else {
        var_s0 = -1;
    }
    temp_v0 = func_009B4090(0);
    temp_a1 = M2C_FIELD(temp_v0, s16 *, 8);
    temp_f21 = (f32) temp_a1;
    temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0xC);
    if (((s64) (var_s0 << 0x38) >> 0x38) == 1) {
        var_a0 = (func_00151EA0(0x4000, temp_a1) & 0xFFFF) + 0x6000;
    } else {
        var_a0 = (func_00151EA0(0x4000, temp_a1) & 0xFFFF) + 0x7FFF + 0x6001;
    }
    (*(u16 *)D_0059274A) = var_a0;
    temp_f0 = (f32) func_00BBB990((*(u16 *)D_0059274A), 0x2328);
    sp44 = 0xC4C02000;
    sp40 = temp_f21 + temp_f0;
    sp48 = temp_f20 + (f32) func_00BBB9C0((*(u16 *)D_0059274A), 0x2328);
    temp_f0_2 = (f32) func_00BBB990((*(u16 *)D_0059274A), 0x3D9);
    sp34 = 0xC3A88000;
    sp30 = temp_f21 + temp_f0_2;
    sp38 = temp_f20 + (f32) func_00BBB9C0((*(u16 *)D_0059274A), 0x3D9);
    func_001A5620(&sp40);
    func_001A5550(&sp30);
    func_001A5670(2600.0f);
}
