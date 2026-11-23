/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DEFA0(s32, s32);
void func_001DF250(s32, s32);

void func_001F16E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_001F1758; }
    if (s0 == 0) goto L_001F1758;
    a0 = (*(volatile s32 *) (u32) (s1 + 84));
    a1 = (s32) ((u32) sp + 0x38U); func_001DEFA0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001F1740;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.f = (*(volatile f32 *) (u32) (sp + 60));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001F1740;
    goto L_001F175C;
L_001F1740:;
    a0 = (*(volatile s32 *) (u32) (s1 + 84));
    a1 = s0; func_001DF250(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s1 + 1));
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v1;
L_001F1758:;
L_001F175C:;
    return;
}
