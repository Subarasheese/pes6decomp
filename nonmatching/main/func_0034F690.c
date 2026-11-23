/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_00305C50(void);
s32 func_0030DAF0(s32);
s32 func_00326070(s32);
void func_00326760(s32, s32, s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034F690(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 7;
    a2 = (s32) ((u32) sp + 0x88U);
    s4 = (s32) ((u32) sp + 0x60U);
    s1 = a0;
    a0 = s4; Pes6BitSet_Initialize(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s1 + 72));
    s0 = (*(volatile s32 *) (u32) (s1 + 64));
    a0 = s2; v0 = func_00326070(a0);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s1 + 48)); goto L_0034F6E4; }
    v0 = 0; goto L_0034F8D8;
L_0034F6E4:;
    at = v0 < 10;
    if (at == 0) { a0 = (s32) ((u32) sp + 0x8fU); goto L_0034F6F8; }
    v0 = 0; goto L_0034F8D8;
L_0034F6F8:;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 132)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s0;
    (*(volatile u16 *) (u32) (sp + 134)) = (u16) v0; v0 = func_00333740(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 44));
    s0 = v0;
    v0 = 40;
    { s32 c_ = v1 == v0; s1 = 1; if (c_) goto L_0034F74C; }
    v0 = 41;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (sp + 143)); goto L_0034F750; }
    s1 = 0;
L_0034F74C:;
    a2 = (*(volatile u8 *) (u32) (sp + 143));
L_0034F750:;
    v0 = 4;
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (v1 + 64));
    if (v1 == v0) { v0 = (s32) ((u32) a2 << 1); goto L_0034F770; }
    s3 = 0; goto L_0034F7C8;
L_0034F770:;
    a1 = s2;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (s32) ((u32) v0 + 0x84U); func_00326760(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a1 = s2;
    a2 = v0 ^ 0x1;
    v0 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (s32) ((u32) v0 + 0x84U); func_00326760(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = a2 ^ 0x1;
    v1 = (s32) ((u32) a2 << 1);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s16 *) (u32) (v1 + 132));
    v0 = (*(volatile s16 *) (u32) (v0 + 132));
    if (v1 != v0) { s3 = 0; goto L_0034F7C8; }
    s3 = 1;
L_0034F7C8:;
    v0 = (u64) 0 < (u64) s1;
    if (v0 == 0) { a2 = v0; goto L_0034F7EC; }
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0xa;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0;
L_0034F7EC:;
    a0 = s4;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s2 + 48));
    a0 = s4;
    a1 = 2;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s4;
    a1 = 3;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s3;
    if (a2 == 0) { a0 = s4; goto L_0034F848; }
    a2 = s0 < 13;
    a0 = s4;
L_0034F848:;
    a1 = 4; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    v0 = v0 ^ 0xa;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0034F880; }
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_0034F880:;
    a1 = 5; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_00305C50();
    s0 = (*(volatile u8 *) (u32) (v0 + 86)); v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4092));
    a2 = s0 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0034F8C0; }
    v0 = func_00305C50();
    v0 = (*(volatile s32 *) (u32) (v0 + 40));
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_0034F8C0:;
    a1 = 6; Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 176;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034F8D8:;
    return v0;
}
