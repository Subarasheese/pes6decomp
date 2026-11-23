/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B97A0(void);
s32 func_001B97B0(void);
s32 func_001B98D0(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EF900(s32, s32);
s32 func_002F9320(s32, s32);
s32 func_002F9370(s32);
s32 func_002F96F0(s32, s32);
void func_002FA280(s32, s32, s32, s32, s32);
s32 func_00C94510(void);

void func_00C81D10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    s2 = a0;
    s1 = a2;
    a1 = (*(volatile s32 *) (u32) (v0 + -15876));
    { s32 c_ = a1 >= 0; s0 = a3; if (c_) goto L_00C81D84; }
    v0 = func_00C94510();
    s0 = v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15920));
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    goto L_00C81DE0;
L_00C81D84:;
    v0 = func_001B98D0(a0, a1);
    v0 = func_001B97B0();
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 72)) = f0.f; v0 = func_001B97A0();
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15920));
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f; v0 = func_002F9370(a0);
    a0 = s2;
    a2 = s1;
    a3 = s0;
    a1 = v0;
    a4 = (s32) ((u32) sp + 0x48U); func_002FA280(a0, a1, a2, a3, a4);
L_00C81DE0:;
    return;
}
