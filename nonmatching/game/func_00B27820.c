/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);
s32 func_00B29CB0(void);

f32 func_00B27820(s32 a0) {
    s32 v0 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_00B29CB0();
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x20U); goto L_00B27850; }
    v0 = (s32) 0x46140000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
L_00B27848:;
    goto L_00B2786C;
L_00B27850:;
    func_00188910(a0);
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    if (v0 == 0) { f0.f = (*(volatile f32 *) (u32) (sp + 40)); goto L_00B27848; }
    f0.f = (*(volatile f32 *) (u32) (sp + 52)); goto L_00B27848;
L_00B2786C:;
    return f0.f;
}
