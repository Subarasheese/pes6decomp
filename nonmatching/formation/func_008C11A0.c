/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B5260(s32, s32, s32, s32, f32, f32);
s32 func_001D6820(s32, s32, s32, s32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);

void func_008C11A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    { s32 c_ = s4 == 0; s1 = a3; if (c_) goto L_008C11D8; }
    if (s2 != 0) goto L_008C11E0;
L_008C11D8:;
    v0 = 0; goto L_008C1248;
L_008C11E0:;
    v0 = func_001D6820(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) { v0 = s0; goto L_008C1248; }
    a2 = s3 & 0xffff;
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 1; func_001EDA30(a0, a1);
    a1 = s3 & 0xffff;
    a0 = s4; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    f12.i = f0.i; func_001ED880(a0, f12.f);
    a2 = (*(volatile s32 *) (u32) (s0 + 12));
    f12.i = (s32) 0;
    a1 = s1;
    a3 = s2;
    a0 = (s32) ((u32) sp + 0x60U);
    f13.i = f12.i; func_001B5260(a0, a1, a2, a3, f12.f, f13.f);
    v0 = s0;
L_008C1248:;
    return;
}
