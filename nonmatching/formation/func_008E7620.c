/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7F10(s32, s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008E7620(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x30U);
    { s32 c_ = v1 == 0; s1 = a0; if (c_) goto L_008E765C; }
L_008E7640:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008E7640;
L_008E765C:;
    a0 = 46;
    a1 = (s32) ((u32) sp + 0x30U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a1 = s1;
    a0 = s0;
    a2 = 250; v0 = func_001D7A20(a0, a1, a2);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 251; v0 = func_001D7A20(a0, a1, a2);
    a0 = s0; func_001D7F10(a0, a1, a2, a3);
    f1.f = (*(volatile f32 *) (u32) (s1 + 4));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_008E76B4; }
L_008E76B4:;
    f0.i = (s32) v0;
    a0 = 52;
    f0.f = (f32) f0.i;
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s0 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = s0;
    a2 = 257; v0 = func_001D7A20(a0, a1, a2);
    a0 = s0; func_001D7F10(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    return;
}
