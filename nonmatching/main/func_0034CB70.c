/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030EA70(void);
s32 func_00326040(s32, s32);
s32 func_00335390(void);
s32 func_00339540(s32, s32, s32, s32);
s32 func_00340C80(f32);

s32 func_0034CB70(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a1 = 6;
    a2 = (s32) ((u32) sp + 0x6cU);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x50U);
    a0 = s2;
    Pes6BitSet_Initialize(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (s3 + 80));
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = (*(volatile s32 *) (u32) (s3 + 84));
    s1 = (*(volatile s32 *) (u32) (s3 + 72));
    a3 = (*(volatile u8 *) (u32) (s0 + 13));
    a2 = 9; v0 = func_00339540(a0, a1, a2, a3);
    v0 = func_0030EA70();
    s3 = v0 & 0xff; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s3 & 0xff; goto L_0034CBEC; }
    if (v0 == 0) goto L_0034CBE8;
    v1 = s3 & 0xff; goto L_0034CC0C;
L_0034CBE8:;
    v1 = s3 & 0xff;
L_0034CBEC:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034CC30; }
    a0 = 1; goto L_0034CC30;
L_0034CC0C:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034CC2C;
    goto L_0034CC30;
L_0034CC2C:;
    a0 = 0;
L_0034CC30:;
    if (a0 != 0) goto L_0034CC40;
    v0 = 0; goto L_0034CCB0;
L_0034CC40:;
    v0 = func_00335390();
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) goto L_0034CC6C;
    v0 = (s32) 0x40800000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    v1 = (*(volatile s32 *) (u32) (sp + 104));
    a2 = v0 < v1;
L_0034CC6C:;
    if (a2 == 0) { a0 = s2; goto L_0034CC88; }
    a1 = (*(volatile u8 *) (u32) (s0 + 13));
    a0 = s1; v0 = func_00326040(a0, a1);
    a2 = (u64) 0 < (u64) v0;
    a0 = s2;
L_0034CC88:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 164;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    if (v0 == 0) goto L_0034CCB0;
    v1 = 255;
    (*(volatile u8 *) (u32) (s0 + 13)) = (u8) v1;
L_0034CCB0:;
    return v0;
}
