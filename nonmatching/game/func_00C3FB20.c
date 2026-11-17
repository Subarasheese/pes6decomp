/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_002AE670(s32);
s32 func_009B34C0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_009B36C0(s32, s32, s32, s32, s32, f32);
s32 func_00AB3B70(s32, s32, s32);
s32 func_00B07480(s32, s32, s32, s32, s32, f32);
s32 func_00C3DB00(s32, s32, s32, s32);
s32 func_00C40770(s32);
s32 func_00C41B50(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);

s32 func_00C3FB20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;

    s3 = a0;
    s2 = a1;
    a0 = 12;
    v0 = func_002AE670(a0);
    s1 = v0;
    a0 = s3;
    v0 = (*(volatile u16 *) (u32) (s3 + 38));
    f21.f = (*(volatile f32 *) (u32) (s3 + 136));
    f20.f = (*(volatile f32 *) (u32) (s3 + 140));
    (*(volatile u16 *) (u32) (s3 + 44)) = (u16) v0; v0 = func_00C3DB00(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s3; goto L_00C3FB7C; }
    v0 = 0; goto L_00C3FC90;
L_00C3FB7C:;
    v0 = func_00C40770(a0);
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (s3 + 164)); goto L_00C3FB94; }
    v0 = 0; goto L_00C3FC90;
L_00C3FB94:;
    a0 = s3;
    a3 = (*(volatile u16 *) (u32) (s3 + 44));
    a2 = 12;
    a4 = s1; v0 = func_00B07480(a0, a1, a2, a3, a4, f12.f);
    s0 = v0 & 0xff;
    a1 = s1 & 0xff;
    a0 = s3;
    a2 = s0; v0 = func_00C41B50(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (s3 + 164)); goto L_00C3FBCC; }
    v0 = 0; goto L_00C3FC90;
L_00C3FBCC:;
    a0 = s3;
    a3 = (*(volatile u16 *) (u32) (s3 + 44));
    a2 = 12;
    a4 = s0; func_009B36C0(a0, a1, a2, a3, a4, f12.f);
    a0 = (*(volatile s32 *) (u32) (s3 + 164));
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (s2 + 8)) = (u16) a0;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f1.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f0.f = f0.f - f20.f;
    f1.f = f1.f - f21.f;
    acc = f0.f * f0.f;
    f12.f = acc + f1.f * f1.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f2.f = (f32) f0.i;
    f1.f = (*(volatile f32 *) (u32) (a0 + 7148));
    f0.i = (s32) a1;
    f14.i = f21.i;
    f0.f = (f32) f0.i;
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u32 *) (u32) s2) = (u32) a0;
    f12.f = (*(volatile f32 *) (u32) (v1 + 7788));
    f13.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f15.i = f20.i; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    (*(volatile u16 *) (u32) (s2 + 10)) = (u16) v0;
    a2 = s1;
    v0 = (*(volatile u16 *) (u32) (s3 + 44));
    (*(volatile u16 *) (u32) (s2 + 12)) = (u16) v0;
    (*(volatile u8 *) (u32) (s2 + 16)) = (u8) s0;
    a1 = (*(volatile u16 *) (u32) (s3 + 44));
    a0 = s3; v0 = func_00AB3B70(a0, a1, a2);
    (*(volatile u16 *) (u32) (s3 + 56)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) (s3 + 28));
    v0 = 1;
    (*(volatile u32 *) (u32) (s3 + 32)) = (u32) v1;
    (*(volatile u8 *) (u32) (s3 + 102)) = (u8) 0;
L_00C3FC90:;
    return v0;
}
