/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_0030E5B0(void);
s32 func_003139F0(s32, s32);
s32 func_00313A20(s32, s32, s32);
s32 func_0031BE20(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0031C380(s32, s32, s32, s32);
s32 func_0031D2A0(s32, s32, s32, s32);
s32 func_00339440(s32, s32, s32);
s32 func_00340C80(f32);

s32 func_0031D6D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a1 = 334;
    a2 = (s32) ((u32) sp + 0x50U);
    s2 = a0;
    s1 = (s32) ((u32) sp + 0x80U);
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = s1; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = func_0030E5B0();
    a2 = v0 & 0xff;
    a0 = s1;
    v0 = (*(volatile u8 *) (u32) (s0 + 96));
    v0 = v0 ^ 0x1;
    a1 = v0 & 0xff; v0 = func_00313A20(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 96));
    a0 = s1; v0 = func_003139F0(a0, a1);
    a0 = s1;
    a1 = s2; v0 = func_0031D2A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 60));
    a0 = (*(volatile s32 *) (u32) (s2 + 64));
    s0 = (*(volatile s32 *) (u32) (s2 + 80));
    a2 = (*(volatile u8 *) (u32) (v0 + 96));
    a1 = 0; v0 = func_00339440(a0, a1, a2);
    s3 = v0;
    v0 = (s32) 0x42700000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    a2 = s3 < v0;
    if (a2 == 0) goto L_0031D784;
    v0 = (*(volatile u8 *) (u32) (s0 + 29));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = (u64) v0 < (u64) (s64) 3;
    a2 = v0 ^ 0x1;
L_0031D784:;
    if (a2 == 0) goto L_0031D798;
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = v0 ^ 0x8;
    a2 = (u64) 0 < (u64) v0;
L_0031D798:;
    if (a2 == 0) goto L_0031D7AC;
    v0 = (*(volatile u8 *) (u32) (s0 + 17));
    v0 = v0 ^ 0xa;
    a2 = (u64) 0 < (u64) v0;
L_0031D7AC:;
    if (a2 == 0) { a0 = s1; goto L_0031D7C4; }
    v0 = (*(volatile u8 *) (u32) (s0 + 6));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s1;
L_0031D7C4:;
    a1 = 170; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = s2; v0 = func_0031C380(a0, a1, a2, a3);
    a0 = s1;
    a1 = s2; v0 = func_0031BE20(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = s1;
    a0 = 50;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
