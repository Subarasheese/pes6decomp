/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D6CD0(s32, s32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
s32 func_001E4A40(s32, s32, s32, s32);
s32 func_001F08B0(s32);
void func_002DB5E0(s32);
void func_002DC190(s32, s32, s32);
s32 func_008B9C10(s32, s32, s32, f32);
s32 func_008C5740(s32);
void func_008E1150(s32, s32, s32, s32);

void func_008E14C0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 96));
    { s32 c_ = a0 == 0; s3 = a1; if (c_) goto L_008E1604; }
    a1 = 107; v0 = func_001D6CD0(a0, a1);
    s1 = v0;
    s2 = 0;
    s0 = s4;
L_008E1500:;
    a0 = (*(volatile s32 *) (u32) s3);
    if (a0 == 0) goto L_008E1538;
    v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    v1 = (*(volatile u8 *) (u32) (s4 + 34));
    v0 = 1;
    if (v1 != v0) goto L_008E1538;
    a1 = (*(volatile s32 *) (u32) (s0 + 36));
    a0 = s1;
    a2 = (s32) ((u32) s4 + 0x22U); v0 = func_001E4A40(a0, a1, a2, a3);
L_008E1538:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 14;
    s3 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E1500; }
    a0 = s4;
    a1 = 0; func_008E1150(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s4 + 96));
    if (v1 == 0) { ; goto L_008E1608; }
    v1 = (*(volatile s32 *) (u32) (s4 + 92));
    if (v1 != 0) goto L_008E1604;
    a0 = s4; v0 = func_008C5740(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 100; v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s4 + 34));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_008E15A0; }
    f0.i = (s32) v0;
    f13.f = (f32) f0.i; goto L_008E15B8;
L_008E15A0:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f13.f = (f32) f0.i;
    f13.f = f13.f + f13.f;
L_008E15B8:;
    a1 = (*(volatile u8 *) (u32) (s4 + 32));
    f12.i = (s32) 0;
    a2 = (*(volatile u8 *) (u32) (s4 + 33));
    a0 = (s32) ((u32) sp + 0x60U); v0 = func_008B9C10(a0, a1, a2, f12.f);
    a1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (s4 + 92)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0x1120U);
    a2 = s4; func_002DC190(a0, a1, a2);
    a0 = s4; v0 = func_008C5740(a0);
    a0 = v0;
    a1 = 100; f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 92));
    f12.i = f0.i; func_002DB5E0(a0);
L_008E1604:;
L_008E1608:;
    return;
}
