/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_0030EA70(void);
s32 func_00333710(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
void func_00341AA0(s32, s32);

s32 func_0034F160(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 16;
    a2 = (s32) ((u32) sp + 0x88U);
    s4 = (s32) ((u32) sp + 0x60U);
    s0 = a0;
    a0 = s4; Pes6BitSet_Initialize(a0, a1, a2);
    s3 = (*(volatile s32 *) (u32) (s0 + 68));
    a0 = (s32) ((u32) sp + 0x8fU);
    a1 = 2;
    s0 = (*(volatile s32 *) (u32) (s0 + 64));
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v1 = 255;
    if (v0 != v1) { v0 = (s32) ((u32) v0 << 1); goto L_0034F1C4; }
    v0 = 0; goto L_0034F354;
L_0034F1C4:;
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    if (v0 != v1) goto L_0034F1DC;
    v0 = 0; goto L_0034F354;
L_0034F1DC:;
    v0 = func_0030EA70();
    s2 = v0;
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = s0;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    s1 = (s32) ((u32) s2 - (u32) v0); v0 = func_00333710(a0, a1);
    at = s1 < 11;
    { s32 c_ = at != 0; s0 = v0; if (c_) goto L_0034F244; }
    v0 = s2 < 45;
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x80U); goto L_0034F248; }
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 56));
    at = v0 < 44;
    if (at == 0) goto L_0034F244;
    v0 = 0; goto L_0034F354;
L_0034F244:;
    a0 = (s32) ((u32) sp + 0x80U);
L_0034F248:;
    a1 = 0; func_00341AA0(a0, a1);
    a0 = (s32) ((u32) sp + 0x84U);
    a1 = 1; func_00341AA0(a0, a1);
    s2 = (*(volatile u8 *) (u32) (s3 + 5)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s2;
    v0 = s1 < 10;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s4; goto L_0034F280; }
    a2 = s1 < 16;
    a0 = s4;
L_0034F280:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s3 + 6));
    a2 = 0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    { s32 c_ = v0 == 0; a0 = 0; if (c_) goto L_0034F2D0; }
    v0 = (*(volatile u8 *) (u32) (s3 + 5));
    v1 = (s32) ((u32) v0 << 2);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile s32 *) (u32) (v1 + 128));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 128));
    at = v1 < v0;
    if (at == 0) goto L_0034F2D0;
    a0 = 1;
L_0034F2D0:;
    if (a0 == 0) { a0 = s4; goto L_0034F2EC; }
    v0 = 16;
    if (s0 != v0) goto L_0034F2E8;
    a2 = 1;
L_0034F2E8:;
    a0 = s4;
L_0034F2EC:;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    a0 = s4;
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a1 = 2;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s4;
    v1 = (*(volatile u8 *) (u32) (s3 + 5));
    a1 = 8;
    v0 = v0 ^ 0x1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 < 13;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 15; Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 102;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034F354:;
    return v0;
}
