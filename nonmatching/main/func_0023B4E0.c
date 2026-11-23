/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00365340(s32, s32, s32, s32);
void func_008B3280(s32, s32, s32, s32);
void func_008B3290(s32, s32, s32, s32);

void func_0023B4E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x540000U;
    a0 = a1;
    v0 = (s32) ((u32) v0 + 0xffffc320U);
    a1 = a2;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a2 = a3; v0 = func_00365340(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x20U); func_008B3280(a0, a1, a2, a3);
    v1 = (s32) 0x44bb0000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (sp + 40));
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) { ; goto L_0023B550; }
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile f32 *) (u32) (sp + 40)) = f0.f;
    a1 = (s32) ((u32) sp + 0x20U); func_008B3290(a0, a1, a2, a3);
L_0023B550:;
    return;
}
