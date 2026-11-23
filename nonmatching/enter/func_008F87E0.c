/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 func_00311460(s32, s32);
s32 func_00311A50(s32, s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_008F7940(s32, s32);
void func_008F7E70(s32, s32);
s32 func_008F8660(s32, s32, s32);

void func_008F87E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a2 = 255;
    s2 = a0;
    s1 = a1;
    a0 = (s32) ((u32) sp + 0x6fU);
    a1 = 2;
    v0 = func_003414D0(a0, a1, a2, a3);
    a2 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = s1; v0 = func_008F8660(a0, a1, a2);
    s0 = v0;
    if (s0 == 0) { a2 = (u64) 0 < (u64) s0; goto L_008F88A4; }
    a2 = (*(volatile u8 *) (u32) (gp + -20064));
    a0 = (s32) ((u32) sp + 0x6dU);
    a1 = (s32) ((u32) sp + 0x6eU); v0 = func_00311A50(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 81));
    v0 = (*(volatile u8 *) (u32) (sp + 109));
    if (a0 != v0) { a1 = (*(volatile u8 *) (u32) (sp + 82)); goto L_008F8860; }
    v1 = (*(volatile u8 *) (u32) (sp + 82));
    v0 = (*(volatile u8 *) (u32) (sp + 110));
    if (v1 == v0) { s0 = 0; goto L_008F88A0; }
    a1 = (*(volatile u8 *) (u32) (sp + 82));
L_008F8860:;
    v0 = func_00311460(a0, a1);
    if (v0 != 0) { s3 = (*(volatile u8 *) (u32) (sp + 81)); goto L_008F887C; }
    s0 = 0;
    goto L_008F88A0;
L_008F887C:;
    v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s3;
    s3 = (*(volatile u8 *) (u32) (sp + 82)); v0 = Pes6Job_GetManager();
    (*(volatile u8 *) (u32) (v0 + 4100)) = (u8) s3;
    s3 = (*(volatile u8 *) (u32) (sp + 81)); v0 = Pes6Job_GetManager();
    (*(volatile u8 *) (u32) (v0 + 4099)) = (u8) s3;
L_008F88A0:;
    a2 = (u64) 0 < (u64) s0;
L_008F88A4:;
    if (a2 == 0) { a0 = s2; goto L_008F88BC; }
    v0 = (*(volatile u8 *) (u32) (gp + -20076));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s2;
L_008F88BC:;
    a1 = 71; Pes6BitSet_Write(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (sp + 92));
    a0 = s2;
    a1 = 72;
    v0 = s0 ^ 0x1;
    a2 = (u64) 0 < (u64) v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 73; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 74; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 75; Pes6BitSet_Write(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (sp + 96));
    v0 = s0 ^ 0x1;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s2; goto L_008F893C; }
    v0 = (*(volatile s32 *) (u32) (sp + 100));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s2;
L_008F893C:;
    a1 = 78; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s2; goto L_008F8960; }
    v0 = s0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_008F8960:;
    a1 = 79; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 80; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 100));
    a0 = s2;
    a1 = 81; Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x50U); func_008F7E70(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x50U); func_008F7940(a0, a1);
    v0 = (*(volatile s32 *) (u32) (sp + 100));
    a0 = s2;
    a1 = 160;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 83));
    v0 = v0 < 7;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s2; goto L_008F89E0; }
    v0 = (*(volatile s32 *) (u32) (sp + 96));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_008F89E0:;
    a1 = 161; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 44));
    a0 = s2;
    a1 = 163;
    v0 = v0 & 0x40;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 44));
    a0 = s2;
    a1 = 164;
    v0 = v0 & 0x40;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 44));
    a0 = s2;
    a1 = 165;
    v0 = v0 & 0x40;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
