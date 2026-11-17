/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetSquadIndex(s32);
s32 func_0030EA70(s32, s32, s32, s32);
s32 func_00310A50(s32, s32, s32, s32);
s32 func_003139F0(s32, s32);
s32 func_00325F60(s32);
s32 func_003336E0(s32, s32);
s32 func_003336F0(s32);
s32 func_00341010(s32);

s32 func_00345670(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    a1 = 6;
    s6 = a0;
    s4 = (*(volatile s32 *) (u32) (a0 + 68));
    s7 = (*(volatile s32 *) (u32) (a0 + 64));
    a0 = (s32) ((u32) sp + 0xbfU); v0 = func_00310A50(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (sp + 191)); v0 = Pes6MatchPlayer_GetSquadIndex(a0);
    s3 = v0 & 0xff;
    a0 = s4; v0 = func_003336F0(a0);
    s0 = s3 & 0xff;
    s1 = v0;
    v0 = (s32) ((u32) s0 << 2);
    a0 = s4;
    v0 = (s32) ((u32) v0 + (u32) s4);
    fp = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = s0; v0 = func_003336E0(a0, a1);
    s5 = (s32) ((u32) sp + 0xa0U);
    s2 = v0;
    a0 = s5;
    a1 = 27;
    a2 = (s32) ((u32) sp + 0xb8U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = s3;
    a0 = s5; v0 = func_003139F0(a0, a1);
    v0 = s2 ^ 0xd;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 < 14;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s5; goto L_00345740; }
    v0 = (*(volatile u8 *) (u32) (s4 + 53));
    a2 = v0 ^ s0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_00345740:;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 11;
    a2 = s1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = fp < 17;
    v0 = (u64) 0 < (u64) s1;
    v1 = v1 ^ 0x1;
    v0 = v0 ^ 0x1;
    a2 = v1 & v0;
    a0 = s5;
    a1 = 16; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s7; v0 = func_00325F60(a0);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_00345798;
    a0 = s2; v0 = func_00341010(a0);
    a2 = (u64) 0 < (u64) v0;
L_00345798:;
    if (a2 == 0) { a0 = s5; goto L_003457B4; }
    v0 = func_0030EA70(a0, a1, a2, a3);
    v0 = v0 < 76;
    a2 = v0 ^ 0x1;
    a0 = s5;
L_003457B4:;
    a1 = 21; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 62;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s6; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
