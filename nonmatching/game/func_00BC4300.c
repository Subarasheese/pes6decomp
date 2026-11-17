/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002929C0(void);
s64 func_00292A30(void);
s64 func_00292AA0(void);
s64 func_00292B10(void);
s64 func_00292BD0(void);
s64 func_00BA9400(s64);
s64 func_00BBB8C0(s64);
s64 func_00BDBD60(s64, s64, s64, s64, s64, s64);

void func_00BC4300(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;

    a0 = 0;
    v0 = func_00BA9400(a0);
    s2 = v0;
    v0 = (*(volatile s8 *) (u32) (gp + -19484));
    if (v0 <= 0) { s4 = 1; goto L_00BC433C; }
    s4 = 0;
L_00BC433C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7629));
    v0 = 2;
    { s32 c_ = v1 == v0; s3 = 1; if (c_) goto L_00BC4360; }
    v0 = 3;
    if (v1 == v0) goto L_00BC4360;
    s3 = 0;
L_00BC4360:;
    v0 = func_00292B10();
    s1 = v0; v0 = func_00292AA0();
    s0 = v0; v0 = func_00292A30();
    s5 = v0; v0 = func_002929C0();
    a0 = s4;
    a1 = s1;
    a2 = s0;
    a3 = s5;
    a5 = s3;
    a4 = v0; v0 = func_00BDBD60(a0, a1, a2, a3, a4, a5);
    s0 = 0 < v0; v0 = func_00292BD0();
    if (v0 == 0) goto L_00BC445C;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = 100;
    a0 = (s32) ((u32) v0 - (u32) v1); v0 = func_00BBB8C0(a0);
    a1 = (*(volatile s8 *) (u32) (gp + -19484));
    f0.i = (s32) v0;
    v1 = (s32) 0x42c60000U;
    a0 = -1;
    f3.i = (s32) v1;
    v0 = (s32) 0x3f000000U;
    f2.i = (s32) v0;
    a2 = 1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x42c80000U;
    v0 = (s32) 0x590000U;
    if (s0 == 0) a0 = a2;
    a3 = (s32) ((u32) a1 + 0x32U);
    a1 = (*(volatile s16 *) (u32) (v0 + 7696));
    f4.i = (s32) a3;
    f0.i = (s32) v1;
    f4.f = (f32) f4.i;
    f3.f = f4.f / f3.f;
    f2.f = f3.f - f2.f;
    f1.f = f1.f * f2.f;
    f1.f = f1.f / f0.f;
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    a0 = (s64) ((u64) a0 << 48);
    v0 = (s32) 0x590000U;
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u16 *) (u32) (v1 + 7696)) = (u16) a0;
    v0 = (*(volatile s16 *) (u32) (v0 + 7696));
    if (v0 > 0) goto L_00BC445C;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + 7696)) = (u16) a2;
L_00BC445C:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    a0 = (*(volatile u8 *) (u32) (s2 + 20));
    s0 = 1;
    v1 = -1;
    if (v0 != 0) s0 = v1; v0 = func_00BBB8C0(a0);
    v1 = (s32) 0x42c60000U;
    f2.i = (s32) v1;
    f0.i = (s32) s0;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (v1 + 7696));
    f3.f = (f32) f0.i;
    f0.i = (s32) a0;
    v1 = (s32) 0x590000U;
    f4.i = (s32) v0;
    f1.f = (f32) f0.i;
    f0.f = (f32) f4.i;
    f0.f = f0.f * f3.f;
    f2.f = f0.f / f2.f;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f1.f * f2.f;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    (*(volatile u16 *) (u32) (v1 + 7696)) = (u16) a0;
    return;
}
