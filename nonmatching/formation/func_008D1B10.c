/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7D80(s32, s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);

void func_008D1B10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 484));
    { s32 c_ = v1 != 0; s0 = a2; if (c_) goto L_008D1BF0; }
    v1 = (*(volatile s32 *) (u32) (s2 + 500));
    if (v1 != 0) { ; goto L_008D1BF4; }
    v1 = (*(volatile s32 *) (u32) (s2 + 504));
    if (v1 == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 1)); goto L_008D1B5C; }
    goto L_008D1BF0;
    v1 = (*(volatile u8 *) (u32) (s2 + 1));
L_008D1B5C:;
    v0 = 1;
    if (v1 == v0) { a0 = 23; goto L_008D1B8C; }
    a0 = 22;
    v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a1 = 1;
    { s32 c_ = s0 != a1; (*(volatile u32 *) (u32) (s2 + 484)) = (u32) v0; if (c_) goto L_008D1B88; }
    a0 = (*(volatile s32 *) (u32) (s2 + 484)); func_001D7D80(a0, a1, a2, a3);
L_008D1B88:;
    a0 = 23;
L_008D1B8C:;
    a1 = s1; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a1 = 1;
    { s32 c_ = s0 != a1; (*(volatile u32 *) (u32) (s2 + 500)) = (u32) v0; if (c_) goto L_008D1BA8; }
    a0 = (*(volatile s32 *) (u32) (s2 + 500)); func_001D7D80(a0, a1, a2, a3);
L_008D1BA8:;
    a0 = (*(volatile s32 *) (u32) (s2 + 500));
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 113; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    a0 = 24;
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    a1 = (s32) ((u32) sp + 0x50U);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 8));
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a1 = 1;
    { s32 c_ = s0 != a1; (*(volatile u32 *) (u32) (s2 + 504)) = (u32) v0; if (c_) goto L_008D1BF0; }
    a0 = (*(volatile s32 *) (u32) (s2 + 504)); func_001D7D80(a0, a1, a2, a3);
L_008D1BF0:;
L_008D1BF4:;
    return;
}
