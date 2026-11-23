/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED8B0(s32, s32);
void func_002E3780(s32, s32);

void func_002E2D40(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    { s32 c_ = s2 == 0; s0 = a2; if (c_) goto L_002E2D6C; }
    if (s1 != 0) { a0 = (*(volatile s32 *) (u32) s2); goto L_002E2D74; }
L_002E2D6C:;
    v0 = 0; goto L_002E2DCC;
L_002E2D74:;
    a1 = (s32) ((u32) sp + 0x50U); func_001ED8B0(a0, a1);
    v1 = (s32) ((u32) s0 << 2);
    v0 = (*(volatile s32 *) (u32) (s2 + 36));
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) sp + 0x40U);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1); func_002E3780(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = s1;
    f0.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 72));
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 76));
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
L_002E2DCC:;
    return;
}
