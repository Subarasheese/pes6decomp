/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_002E4400(s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
s32 func_008B9410(void);
s32 func_008B9C80(s32, s32, s32, s32, f32);

void func_008C5900(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    { s32 c_ = s0 == 0; s1 = a1; if (c_) goto L_008C5990; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = 267; v0 = func_001D7A20(a0, a1, a2);
    a0 = s0;
    a1 = 267; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i; v0 = func_008B9410();
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_008C5968; }
    v0 = 1;
    if (s1 != v0) goto L_008C5964;
    s1 = 5;
L_008C5964:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
L_008C5968:;
    func_002E4570(a0, a1, a2, a3);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x50U);
    f12.i = f20.i; v0 = func_008B9C80(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_002E4400(a0, a1, a2, a3);
L_008C5990:;
    return;
}
