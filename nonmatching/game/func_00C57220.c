/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C132D0(s32, s32);
s32 func_00C137C0(s32);
void func_00C22390(s32, s32);
void func_00C57430(s32, s32, s32, f32);
void func_00C57680(s32, s32, s32, f32);
void func_00C578F0(s32, s32, s32, f32);

void func_00C57220(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    at = (u64) s2 < (u64) a1;
    { s32 c_ = at == 0; s1 = a1; if (c_) goto L_00C57264; }
L_00C5725C:;
    goto L_00C57400;
L_00C57264:;
    s0 = (s32) ((u32) sp + 0x9cU);
    s5 = (s32) ((u32) sp + 0x9aU);
    s6 = (s32) ((u32) sp + 0x9bU);
L_00C57270:;
    a0 = s1; v0 = func_00C132C0(a0);
    s4 = v0 & 0xff;
    a0 = s2;
    a1 = s1; v0 = func_00C132D0(a0, a1);
    at = v0 < 21;
    if (at != 0) { a0 = 20; goto L_00C572C4; }
L_00C57298:;
    v1 = -1;
    if (s1 == v1) goto L_00C572B0;
    a0 = s1; v0 = func_00C137C0(a0);
    s1 = v0;
L_00C572B0:;
    at = (u64) s2 < (u64) s1;
    if (at == 0) goto L_00C57270;
    goto L_00C5725C;
L_00C572C4:;
    v1 = (s32) 0x41a00000U;
    v0 = (s32) ((u32) a0 - (u32) v0);
    f1.i = (s32) v0;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    f12.f = f1.f / f0.f;
    f0.f = func_001CD9E0();
    v1 = s4 & 0xff;
    at = (u64) v1 < (u64) (s64) 35;
    { s32 c_ = at == 0; f20.i = f0.i; if (c_) goto L_00C57298; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4800U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc57298U) goto L_00C57298; if (t_ == 0xc57320U) goto L_00C57320; if (t_ == 0xc57340U) goto L_00C57340; if (t_ == 0xc573c0U) goto L_00C573C0; if (t_ == 0xc573e0U) goto L_00C573E0; }
L_00C57320:;
    a0 = s3;
    f12.i = f20.i;
    a1 = s1;
    a2 = s2; func_00C578F0(a0, a1, a2, f12.f);
    goto L_00C57298;
L_00C57340:;
    a0 = s2; v0 = func_00C132B0(a0);
    s4 = v0 & 0xff;
    a0 = s1; v0 = func_00C132B0(a0);
    v1 = s4 & 0xff;
    a0 = v0 & 0xff;
    a0 = (s32) a0 >> 5;
    v1 = (s32) v1 >> 5;
    a0 = a0 & 0x1;
    v1 = v1 & 0x1;
    if (v1 == a0) goto L_00C57298;
    v0 = (s32) 0xc1400000U;
    (*(volatile u8 *) (u32) s5) = (u8) a0;
    f0.i = (s32) v0;
    a0 = s1;
    f0.f = f0.f * f20.f;
    v0 = 8;
    (*(volatile u8 *) (u32) (sp + 152)) = (u8) v0;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s3;
    v0 = v0 & 0x1f;
    a1 = (s32) ((u32) sp + 0x98U);
    (*(volatile u8 *) (u32) s6) = (u8) v0; func_00C22390(a0, a1);
    goto L_00C57298;
L_00C573C0:;
    a0 = s3;
    f12.i = f20.i;
    a1 = s1;
    a2 = s2; func_00C57680(a0, a1, a2, f12.f);
    goto L_00C57298;
L_00C573E0:;
    a0 = s3;
    f12.i = f20.i;
    a1 = s1;
    a2 = s2; func_00C57430(a0, a1, a2, f12.f);
    goto L_00C57298;
L_00C57400:;
    return;
}
