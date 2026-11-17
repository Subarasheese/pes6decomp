/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_0030E750(s32, s32, s32, s32);
f32 func_0030F590(s32);
f32 func_0030F720(s32);
s32 func_003108E0(s32);
s32 func_00310A50(s32, s32, s32, s32);
s32 func_003139F0(s32, s32);
s32 func_00325C20(s32);
s32 func_0032E980(s32);
s32 func_00333710(s32, s32);

s32 func_00315390(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a1 = 4;
    s5 = a0;
    s1 = (*(volatile s32 *) (u32) (a0 + 60));
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    s6 = (*(volatile s32 *) (u32) (a0 + 64));
    v0 = (*(volatile u8 *) (u32) (s1 + 5));
    a0 = (s32) ((u32) sp + 0x9fU);
    s3 = v0 ^ 0x1; v0 = func_00310A50(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = func_003108E0(a0);
    s4 = (s32) ((u32) sp + 0x80U);
    s2 = v0;
    a0 = s4;
    a1 = 20;
    a2 = (s32) ((u32) sp + 0x98U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = s3 & 0xff;
    a0 = s4; v0 = func_003139F0(a0, a1);
    a0 = s4;
    a1 = 2;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) ((u32) s3 + (u32) s1);
    a0 = s4;
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    a1 = 3;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 44));
    a0 = s4;
    a1 = 4;
    v0 = v0 ^ 0x14;
    a2 = (u64) v0 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 7;
    a2 = s2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_00325C20(a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s4; goto L_00315488; }
    a0 = s6;
    a1 = s3; v0 = func_00333710(a0, a1);
    v0 = v0 ^ 0xd;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00315488:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = func_0030E750(a0, a1, a2, a3);
    a0 = v0; f0.f = func_0030F720(a0);
    v0 = (s32) 0x463c0000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    fcc = f0.f <= f1.f;
    { s32 c_ = !fcc; a2 = 1; if (c_) goto L_003154C0; }
    a2 = 0;
L_003154C0:;
    if (a2 == 0) { a0 = s4; goto L_003154F4; }
    a0 = (*(volatile u8 *) (u32) (sp + 159)); f0.f = func_0030F590(a0);
    v0 = (s32) 0xc63c0000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    fcc = f0.f < f1.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_003154F0; }
    a2 = 0;
L_003154F0:;
    a0 = s4;
L_003154F4:;
    a1 = 13; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s4;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 2; v0 = func_0032E980(a0);
    a2 = v0;
    a0 = s4;
    a1 = 17; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 47;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s5; v0 = Pes6Job_SetDone(a0);
    v0 = 0;
    return v0;
}
