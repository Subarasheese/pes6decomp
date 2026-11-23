/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7580(s32, s32);
s32 func_001D7A20(s32, s32, s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);
s32 func_008C5210(s32);

void func_008E7DC0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    { s32 c_ = v1 != 0; s1 = a3; if (c_) goto L_008E7ED4; }
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_008E7E18; }
    goto L_008E7ED8;
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
L_008E7E18:;
    if (a0 == 0) { f0.f = (*(volatile f32 *) (u32) (s3 + 8)); goto L_008E7E5C; }
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 250; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = s0 & 0xff;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    v1 = (*(volatile u8 *) (u32) (s4 + 2));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
L_008E7E5C:;
    a0 = 47;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    a2 = s2;
    a0 = v0;
    a1 = 132;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s4);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) v0; v0 = func_008C13D0(a0, a1, a2);
    a0 = 48;
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a0 = s1;
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s4);
    (*(volatile u32 *) (u32) (v0 + 60)) = (u32) s0; v0 = func_008C5210(a0);
    a0 = s0;
    a1 = v0; func_001D7580(a0, a1);
    v1 = 1;
    (*(volatile u8 *) (u32) s4) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s4 + 1)) = (u8) v1;
L_008E7ED4:;
L_008E7ED8:;
    return;
}
