/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B5350(s32, s32, s32, s32, f32, f32);
s32 func_001D6820(s32, s32, s32, s32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7D80(s32, s32, s32, s32);
s32 func_001E6E10(s32);
void func_001ED880(s32, f32);
void func_001EDA30(s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);
s32 func_008C4F50(s32, s32);

void func_008C8E60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a3;
    a1 = a2;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    a0 = 57; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    a1 = 1;
    { s32 c_ = s2 != a1; (*(volatile u32 *) (u32) s4) = (u32) v0; if (c_) goto L_008C8EAC; }
    a0 = (*(volatile s32 *) (u32) s4); func_001D7D80(a0, a1, a2, a3);
L_008C8EAC:;
    v1 = (*(volatile s32 *) (u32) s4);
    if (v1 == 0) { ; goto L_008C8F44; }
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) s4);
    s1 = v0;
    a1 = 266; v0 = func_001D6820(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) goto L_008C8F40;
    if (s1 == 0) goto L_008C8F40;
    a0 = (*(volatile s32 *) (u32) s4);
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 266; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 1; func_001EDA30(a0, a1);
    a0 = (*(volatile s32 *) (u32) s4);
    a1 = 266; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    f12.i = f0.i; func_001ED880(a0, f12.f);
    a0 = s3;
    a1 = s2; v0 = func_008C4F50(a0, a1);
    a2 = (*(volatile s32 *) (u32) (s0 + 12));
    f12.i = (s32) 0;
    a3 = s1;
    a0 = (s32) ((u32) sp + 0x60U);
    f13.i = f12.i;
    a1 = v0; v0 = func_001B5350(a0, a1, a2, a3, f12.f, f13.f);
L_008C8F40:;
L_008C8F44:;
    return;
}
