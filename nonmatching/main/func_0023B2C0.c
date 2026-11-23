/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008B31A0(s32, s32, s32, s32);
void func_008B3210(s32, s32, s32, s32);
void func_008B3280(s32, s32, s32, s32);
void func_008B3290(s32, s32, s32, s32);

void func_0023B2C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc320U);
    s2 = a1;
    s1 = a2;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) s0);
    a1 = s1 & 0xffff;
    a0 = s2; func_008B3210(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x40U); func_008B3280(a0, a1, a2, a3);
    v1 = (s32) 0x44bb0000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (sp + 72));
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) { ; goto L_0023B348; }
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f;
    a1 = (s32) ((u32) sp + 0x40U); func_008B3290(a0, a1, a2, a3);
L_0023B348:;
    return;
}
