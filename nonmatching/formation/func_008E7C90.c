/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008E7C90(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    f0.f = (*(volatile f32 *) (u32) (a1 + 8));
    (*(volatile f32 *) (u32) (sp + 104)) = f0.f;
    s2 = (*(volatile u8 *) (u32) (a0 + 1));
    at = s2 < 10;
    { s32 c_ = at == 0; s3 = a0; if (c_) goto L_008E7DA0; }
    v1 = (s32) ((u32) s2 << 2);
    s1 = a2;
    s0 = (s32) ((u32) s3 + (u32) v1);
L_008E7CCC:;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_008E7DA0;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    if (v1 != 0) goto L_008E7CF0;
    v1 = (*(volatile s32 *) (u32) (s0 + 60));
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (s3 + 12)); goto L_008E7CF8; }
L_008E7CF0:;
    goto L_008E7DA8;
L_008E7CF8:;
    if (a0 == 0) goto L_008E7D38;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 250; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = s2 & 0xff;
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    v1 = (*(volatile u8 *) (u32) (s3 + 2));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
L_008E7D38:;
    a0 = 49;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = 252; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    a0 = 50;
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 60)) = (u32) v0;
    a0 = v0;
    a2 = (*(volatile s32 *) (u32) s1);
    a1 = 133; v0 = func_008C13D0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 100)) = (u32) v0;
    v1 = s2 < 10;
    s0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008E7CCC; }
L_008E7DA0:;
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) s2;
L_008E7DA8:;
    return;
}
