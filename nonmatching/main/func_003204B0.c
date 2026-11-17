/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
f32 func_0030EBB0(s32, s32, f32);
s32 func_0030EE80(s32);
s32 func_0030FEB0(s32, s32, s32);
s32 func_003139F0(s32, s32);
s32 func_00339440(s32, s32, s32);
s32 func_00340C80(f32);
s32 func_003412D0(s32);
s32 func_00341390(s32);
s32 func_003419C0(s32);
s32 func_003419E0(s32);

s32 func_003204B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a2 = 0;
    a1 = (s32) ((u32) sp + 0xa8U);
    s3 = a0;
    s1 = (*(volatile s32 *) (u32) (a0 + 64));
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = (s32) ((u32) s0 + 0x74U); v0 = func_0030FEB0(a0, a1, a2);
    a0 = (s32) ((u32) s0 + 0x74U);
    a1 = (s32) ((u32) sp + 0xa4U);
    a2 = 1; v0 = func_0030FEB0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x98U); v0 = func_0030EE80(a0);
    a0 = s3;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    f12.f = (*(volatile f32 *) (u32) (sp + 152));
    a0 = v0 & 0xff;
    a1 = 1; f0.f = func_0030EBB0(a0, a1, f12.f);
    f20.i = f0.i;
    a0 = s3;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s5 = v0;
    a0 = s1;
    a1 = 5;
    a2 = s5; v0 = func_00339440(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 168));
    s4 = v0; v0 = func_003419C0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 164));
    s2 = v0; v0 = func_00341390(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 164));
    s1 = v0; v0 = func_003419E0(a0);
    s0 = v0;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 16;
    a2 = (s32) ((u32) sp + 0xacU); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = s5 & 0xff;
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_003139F0(a0, a1);
    v0 = (s32) 0x41000000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a2 = s4 < v0;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0xc5e00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f20.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_003205CC; }
    a2 = 0;
L_003205CC:;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 168)); v0 = func_003412D0(a0);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 164)); v0 = func_003412D0(a0);
    a2 = s2 & v0;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    s1 = s1 & s2;
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = s0 & s1;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s0;
    a0 = (s32) ((u32) sp + 0x80U);
    v0 = v0 ^ 0x1;
    a1 = 13;
    a2 = v0 & s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 34;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s3; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
