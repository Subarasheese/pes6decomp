/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);

f32 func_002FA370(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a2 = a2 & 0xffff;
    s0 = a0;
    a0 = a1;
    a1 = (s32) ((u32) sp + 0x20U); v0 = func_001D7A20(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 32));
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 36));
    (*(volatile f32 *) (u32) (s0 + 4)) = f0.f;
    return f0.f;
}
