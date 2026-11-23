/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008E7FF0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a3 = 0;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    s0 = a0;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0;
    a2 = s0;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) 0;
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
L_008E8028:;
    (*(volatile u32 *) (u32) (a2 + 20)) = (u32) 0;
    a3 = (s32) ((u32) a3 + 0x5U);
    (*(volatile u32 *) (u32) (a2 + 60)) = (u32) 0;
    v1 = a3 < 10;
    (*(volatile u32 *) (u32) (a2 + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 108)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 112)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 116)) = (u32) 0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x14U); if (c_) goto L_008E8028; }
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    if (v1 != 0) { ; goto L_008E80D8; }
    a0 = 46; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s1 = v0;
    a1 = (s32) ((u32) sp + 0x40U);
    a0 = s1;
    a2 = 250;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) s1; v0 = func_001D7A20(a0, a1, a2);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U);
    a2 = 251; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_008E80D0; }
L_008E80D0:;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
L_008E80D8:;
    return;
}
