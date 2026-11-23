/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D6C80(s32, s32);
s32 func_001D6CD0(s32, s32);
void func_001D6D70(s32, s32, s32);
f32 func_001DE2F0(s32, s32, s32, s32, f32);
void func_001DF370(s32, s32);

void func_0063AC30(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    v0 = func_001D6CD0(a0, a1);
    s1 = v0;
    a0 = s5;
    a1 = s4; v0 = func_001D6C80(a0, a1);
    s0 = v0;
    a0 = s5;
    a1 = s4;
    a2 = (s32) ((u32) sp + 0x70U); func_001D6D70(a0, a1, a2);
    a0 = s2;
    a1 = s1; f0.f = func_001DE2F0(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (sp + 120));
    fcc = f0.f <= f1.f;
    { s32 c_ = !fcc; a0 = (*(volatile s32 *) (u32) (s3 + 12)); if (c_) goto L_0063ACB4; }
    a1 = s0; func_001DF370(a0, a1);
    goto L_0063ACC0;
L_0063ACB4:;
    a1 = 16; func_001DF370(a0, a1);
L_0063ACC0:;
    return;
}
