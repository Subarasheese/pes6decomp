/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009861C0(s32, s32, s32, s32);
s32 func_0098EC40(s32, s32, s32, s32);
s32 func_009B3440(s32, s32, s32, s32);
s32 func_00AFBAB0(s32, s32, s32, s32);

void func_00920ED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    (*(volatile u8 *) (u32) (v0 + 7933)) = (u8) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7934)) = (u8) 0;
    v0 = (s32) 0x45e00000U;
    v0 = v0 | 0xc800;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00920FDC;
    v0 = (s32) 0xc5e00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00920FE8;
    s1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_00920F3C:;
    v1 = (*(volatile s16 *) (u32) (s1 + 20));
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) v0;
    f13.i = (s32) 0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f12.f = f0.f * f1.f; v0 = func_009B3440(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 19));
    a4 = (*(volatile u8 *) (u32) (v0 + 9950));
    v0 = (s32) 0xace0000U;
    a3 = v0 | 0x8370;
    v0 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a2 = 32; func_009861C0(a0, a1, a2, a3);
    s0 = (*(volatile u8 *) (u32) (s1 + 19));
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e53U);
    v1 = 255;
    a1 = (s32) ((u32) s0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    s2 = (*(volatile u8 *) (u32) a0);
    if (s2 != v1) goto L_00920FF8;
L_00920FC0:;
    v1 = (s32) 0x590000U;
    a0 = 1;
    v1 = (s32) ((u32) v1 + 0x1efdU);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    goto L_00921018;
L_00920FDC:;
    s1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xb0U); goto L_00920F3C;
L_00920FE8:;
    a0 = 1; v0 = func_0098EC40(a0, a1, a2, a3);
    s1 = v0; goto L_00920F3C;
L_00920FF8:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    if (s2 != v1) goto L_00921014;
    goto L_00920FC0;
L_00921014:;
L_00921018:;
    return;
}
