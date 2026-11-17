/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009B3440(s32, s32, s32, s32, f32, f32);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);

void func_009CDC80(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    s4 = a0;
    f13.i = (s32) 0;
    v1 = (*(volatile s16 *) (u32) (a0 + 20));
    f1.i = (s32) v1;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (f32) f1.i;
    f12.f = f0.f * f1.f; v0 = func_009B3440(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xffff;
    v0 = (s32) 0x590000U;
    s3 = (*(volatile u8 *) (u32) (v0 + 9950));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = s3 < v0;
    if (at == 0) goto L_009CDDC4;
    s0 = (s32) ((u32) s3 << 2);
L_009CDCEC:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v0 + (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 1148));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009CDD0C; }
L_009CDD0C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009CDDC4;
    f1.i = (s32) s3;
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    f3.f = (f32) f1.i;
    f2.i = (s32) 0;
    f4.f = (*(volatile f32 *) (u32) (s4 + 240));
    acc = f2.f + f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 232));
    f1.f = (*(volatile f32 *) (u32) (s4 + 248));
    f14.f = (*(volatile f32 *) (u32) (v1 + 1152));
    f15.f = (*(volatile f32 *) (u32) (v1 + 2944));
    f12.f = acc + f4.f * f3.f;
    acc = f2.f + f0.f;
    f13.f = acc + f1.f * f3.f; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s1 = v0 & 0xffff;
    a0 = s2;
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 65;
    if (at != 0) goto L_009CDDC4;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (*(volatile u16 *) (u32) (v0 + 88));
    a1 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 64;
    if (v0 != 0) goto L_009CDDC4;
    v0 = (s32) 0x590000U;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_009CDCEC; }
L_009CDDC4:;
    v0 = s3;
    return;
}
