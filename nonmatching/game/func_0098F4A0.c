/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0098EAD0(s32, s32, s32);

s32 func_0098F4A0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0x2cU);
    a2 = (s32) ((u32) sp + 0x28U);
    s0 = a0; func_0098EAD0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    if (v1 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 44)); goto L_0098F4F8; }
    v0 = 1;
L_0098F4CC:;
    if (v1 != v0) goto L_0098F518;
    f1.f = (*(volatile f32 *) (u32) (sp + 44));
    v0 = (s32) 0xc53c0000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0098F518;
L_0098F4F0:;
    v0 = 1; goto L_0098F51C;
L_0098F4F8:;
    v0 = (s32) 0x453c0000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0098F4F0;
    v0 = 1; goto L_0098F4CC;
L_0098F518:;
    v0 = 0;
L_0098F51C:;
    return v0;
}
