/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
s32 func_001E6E10(s32);
void func_001EF900(s32, s32);
s32 func_008B9D60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008B9F90(s32, s32, s32, s32, f32);
s32 func_008C5020(void);

void func_008E19B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (a0 + 48));
    { s32 c_ = v1 == 0; s5 = a0; if (c_) goto L_008E1A84; }
    v0 = (s32) 0x8f0000U;
    a1 = (*(volatile u16 *) (u32) (v0 + -15024));
    a0 = (*(volatile s32 *) (u32) (s5 + 56)); f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = 20188; v0 = func_001E6E10(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 48));
    f12.i = f20.i;
    s4 = v0;
    a1 = 0; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    a0 = v0;
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s1 = (s32) 0x8f0000U;
    s3 = v0;
    s2 = 0;
    s1 = (s32) ((u32) s1 + 0xffffc550U);
    s0 = s5;
L_008E1A34:;
    a2 = (*(volatile u16 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (s5 + 56));
    a1 = (s32) ((u32) sp + 0x80U); v0 = func_001D7A20(a0, a1, a2);
    v0 = func_008C5020();
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = s4;
    a3 = v0; v0 = func_008B9D60(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 132)) = (u32) v0;
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = s2 < 14;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E1A34; }
L_008E1A84:;
    return;
}
