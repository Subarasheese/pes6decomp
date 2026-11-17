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
s32 func_00C587F0(s32, s32, s32);
void func_00C58BE0(s32, s32, s32, f32);
void func_00C58E40(s32, s32, s32, f32);

void func_00C58560(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a2;
    at = (u64) s2 < (u64) a1;
    { s32 c_ = at == 0; s1 = a1; if (c_) goto L_00C585AC; }
L_00C585A4:;
    goto L_00C587B0;
L_00C585AC:;
    s0 = (s32) ((u32) sp + 0xbcU);
    s5 = (s32) ((u32) sp + 0xbaU);
    s6 = (s32) ((u32) sp + 0xbbU);
    s7 = (s32) ((u32) sp + 0xb4U);
    fp = (s32) ((u32) sp + 0xb2U);
L_00C585C0:;
    a0 = s1; v0 = func_00C132C0(a0);
    s4 = v0 & 0xff;
    a0 = s2;
    a1 = s1; v0 = func_00C132D0(a0, a1);
    at = v0 < 16;
    if (at != 0) { a0 = 15; goto L_00C58614; }
L_00C585E8:;
    v1 = -1;
    if (s1 == v1) goto L_00C58600;
    a0 = s1; v0 = func_00C137C0(a0);
    s1 = v0;
L_00C58600:;
    at = (u64) s2 < (u64) s1;
    if (at == 0) goto L_00C585C0;
    goto L_00C585A4;
L_00C58614:;
    v1 = (s32) 0x41700000U;
    v0 = (s32) ((u32) a0 - (u32) v0);
    f1.i = (s32) v0;
    f0.i = (s32) v1;
    f1.f = (f32) f1.i;
    f12.f = f1.f / f0.f;
    f0.f = func_001CD9E0();
    v1 = s4 & 0xff;
    at = (u64) v1 < (u64) (s64) 35;
    { s32 c_ = at == 0; f20.i = f0.i; if (c_) goto L_00C585E8; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4920U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc585e8U) goto L_00C585E8; if (t_ == 0xc58670U) goto L_00C58670; if (t_ == 0xc586f0U) goto L_00C586F0; if (t_ == 0xc58710U) goto L_00C58710; if (t_ == 0xc58770U) goto L_00C58770; if (t_ == 0xc58790U) goto L_00C58790; }
L_00C58670:;
    a0 = s2; v0 = func_00C132B0(a0);
    s4 = v0 & 0xff;
    a0 = s1; v0 = func_00C132B0(a0);
    v1 = s4 & 0xff;
    a0 = v0 & 0xff;
    a0 = (s32) a0 >> 5;
    v1 = (s32) v1 >> 5;
    a0 = a0 & 0x1;
    v1 = v1 & 0x1;
    if (v1 == a0) goto L_00C585E8;
    v0 = (s32) 0xc0c00000U;
    (*(volatile u8 *) (u32) s5) = (u8) a0;
    f0.i = (s32) v0;
    a0 = s1;
    f0.f = f0.f * f20.f;
    v0 = 21;
    (*(volatile u8 *) (u32) (sp + 184)) = (u8) v0;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s3;
    v0 = v0 & 0x1f;
    a1 = (s32) ((u32) sp + 0xb8U);
    (*(volatile u8 *) (u32) s6) = (u8) v0; func_00C22390(a0, a1);
    goto L_00C585E8;
L_00C586F0:;
    a0 = s3;
    f12.i = f20.i;
    a1 = s1;
    a2 = s2; func_00C58E40(a0, a1, a2, f12.f);
    goto L_00C585E8;
L_00C58710:;
    a0 = s2; v0 = func_00C132C0(a0);
    if (s1 != s2) goto L_00C585E8;
    v1 = (s32) 0x41400000U;
    v0 = 20;
    f0.i = (s32) v1;
    (*(volatile u8 *) (u32) (sp + 176)) = (u8) v0;
    a0 = s1;
    f0.f = f0.f * f20.f;
    (*(volatile f32 *) (u32) s7) = f0.f; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    a0 = s3;
    a1 = (s32) v0 >> 5;
    v1 = v0 & 0x1f;
    v0 = (s32) ((u32) sp + 0xb3U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = a1 & 0x1;
    (*(volatile u8 *) (u32) fp) = (u8) v0;
    a1 = (s32) ((u32) sp + 0xb0U); func_00C22390(a0, a1);
    goto L_00C585E8;
L_00C58770:;
    a0 = s3;
    f12.i = f20.i;
    a1 = s1;
    a2 = s2; func_00C58BE0(a0, a1, a2, f12.f);
    goto L_00C585E8;
L_00C58790:;
    a1 = s1;
    f12.i = f20.i;
    a0 = s3;
    a2 = s2; v0 = func_00C587F0(a0, a1, a2);
    s1 = v0; goto L_00C585E8;
L_00C587B0:;
    return;
}
