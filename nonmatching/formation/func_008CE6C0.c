/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7A20(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001D7D80(s64, s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);
s64 func_008C5740(s64);

void func_008CE6C0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x30U);
    s1 = a1;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008CE700; }
L_008CE6E4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008CE6E4;
L_008CE700:;
    f0.f = (*(volatile f32 *) (u32) (s0 + 48));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (s0 + 516));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s0 + 516)); goto L_008CE75C; }
    a0 = (s32) ((u32) s0 + 0x214U); v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 107; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = 27;
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 516)) = (u32) v0;
    a1 = (*(volatile u8 *) (u32) (s0 + 10));
    a0 = v0; func_001D7D60(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 516));
L_008CE75C:;
    a1 = (s64) ((u64) s1 << 48);
    a1 = a1 >> 48; func_001D7D80(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 516));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 136; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 520));
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (s0 + 496)); goto L_008CE7A8; }
    a0 = 28;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 520)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 496));
L_008CE7A8:;
    if (v1 != 0) { ; goto L_008CE7D0; }
    a0 = 35;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s0 + 496)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_001D7D80(a0, a1, a2, a3);
L_008CE7D0:;
    return;
}
