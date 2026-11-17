/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s64, s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
void func_0030E010(s64, s64, s64, s64);
void func_00326E40(s64, s64, s64);

void func_003640D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    a1 = 8;
    a2 = (s32) ((u32) sp + 0x48U);
    s1 = a0;
    s0 = (s32) ((u32) sp + 0x30U);
    a0 = s0; Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s1 + 20));
    a2 = (*(volatile u8 *) (u32) (s1 + 14));
    a0 = (s32) ((u32) sp + 0x4eU); func_00326E40(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s1 + 14));
    a0 = (s32) ((u32) sp + 0x4cU); func_0030E010(a0, a1, a2, a3);
    v0 = (*(volatile s16 *) (u32) (sp + 76));
    if (v0 == 0) { v0 = (*(volatile s16 *) (u32) (sp + 78)); goto L_00364144; }
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 255;
    if (v1 == v0) goto L_00364140;
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (sp + 78)) = (u16) v0;
L_00364140:;
    v0 = (*(volatile s16 *) (u32) (sp + 78));
L_00364144:;
    a0 = s0;
    a1 = 0;
    v0 = v0 < 2;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 1;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 2;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 3;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 4;
    v0 = v0 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 5;
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    a0 = s0;
    a1 = 6;
    v0 = v0 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 78));
    v0 = v0 < 8;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s0; goto L_0036420C; }
    v0 = (*(volatile s16 *) (u32) (sp + 76));
    v0 = v0 ^ 0xff;
    a2 = (u64) 0 < (u64) v0;
    a0 = s0;
L_0036420C:;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    a1 = s0;
    a0 = 136;
    a2 = 2; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { v0 = 1; goto L_00364230; }
    v0 = 3;
L_00364230:;
    return;
}
