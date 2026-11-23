/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_002DB5E0(s32);
s32 func_008B9C10(s32, s32, s32, f32);

void func_008D4830(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    a0 = (*(volatile s32 *) (u32) (a0 + 28));
    { s32 c_ = a0 == 0; s0 = a2; if (c_) goto L_008D48BC; }
    v1 = (*(volatile s32 *) (u32) (s2 + 12));
    if (v1 != 0) { ; goto L_008D48C0; }
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 259; v0 = func_001D7A20(a0, a1, a2);
    f1.i = (s32) s1;
    a2 = s0;
    f1.f = (f32) f1.i;
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x40U);
    f0.f = (*(volatile f32 *) (u32) (sp + 76));
    f13.f = f0.f / f1.f;
    f12.i = (s32) 0;
    v0 = func_008B9C10(a0, a1, a2, f12.f);
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s2 + 28));
    a1 = 259; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 12));
    f12.i = f0.i; func_002DB5E0(a0);
L_008D48BC:;
L_008D48C0:;
    return;
}
