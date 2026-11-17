/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);

void func_00B275E0(s32 a0, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    a0 = (s32) ((u32) sp + 0x40U);
    f20.i = f13.i;
    s0 = 0; func_00188910(a0);
    if (s1 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 72)); goto L_00B27614; }
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
L_00B27614:;
    v0 = (s32) 0x41200000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    fcc = f0.f <= f20.f;
    if (fcc) goto L_00B27634;
    s0 = 1;
L_00B27634:;
    v0 = s0;
    return;
}
