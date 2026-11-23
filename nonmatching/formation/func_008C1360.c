/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D6D70(s32, s32, s32);
void func_001D7BE0(s32, s32);

void func_008C1360(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a2; if (c_) goto L_008C13B0; }
    func_001D6D70(a0, a1, a2);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x30U); func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (sp + 48));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
L_008C13B0:;
    return;
}
