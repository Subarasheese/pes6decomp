/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030EA70(void);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_00341AA0(s32, s32);

s32 func_0034D070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a1 = 11;
    a2 = (s32) ((u32) sp + 0x78U);
    s3 = (s32) ((u32) sp + 0x50U);
    s0 = a0;
    a0 = s3; Pes6BitSet_Initialize(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s0 + 64)); v0 = func_0030EA70();
    s1 = v0;
    a0 = (s32) ((u32) sp + 0x7fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s0 = (*(volatile u8 *) (u32) (sp + 127)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = (*(volatile u8 *) (u32) (sp + 127));
    a0 = s2; v0 = func_00333740(a0, a1);
    s0 = v0;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = 0; func_00341AA0(a0, a1);
    a0 = (s32) ((u32) sp + 0x74U);
    a1 = 1; func_00341AA0(a0, a1);
    v0 = s0 < 17;
    s2 = v0 ^ 0x1;
    if (s2 == 0) goto L_0034D11C;
    v0 = (*(volatile u8 *) (u32) (sp + 127));
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 112));
    v0 = v0 ^ 0xb;
    s2 = (u64) 0 < (u64) v0;
L_0034D11C:;
    v0 = Pes6MatchContext_GetHalf();
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) goto L_0034D13C;
    v0 = s1 < 85;
    a2 = v0 ^ 0x1;
L_0034D13C:;
    if (a2 == 0) { a0 = s3; goto L_0034D15C; }
    v0 = s0 < 17;
    a2 = v0 ^ 0x1;
    if (a2 != 0) goto L_0034D158;
    a2 = s0 < 10;
L_0034D158:;
    a0 = s3;
L_0034D15C:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 5;
    a2 = s2; Pes6BitSet_Write(a0, a1, a2);
    a2 = s2;
    a0 = s3;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 162;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    return v0;
}
