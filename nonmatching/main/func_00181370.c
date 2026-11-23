/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00180950(s32, s32, s32, s32);
void func_00180A60(s32, s32, s32, s32, s32, s32);
s32 func_00180C20(s32, s32);
s32 func_001C80F0(s32);
s32 func_001C9C78(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00181370(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[48];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0x6340U);
    s5 = a0;
    s4 = a1;
    v1 = (s32) ((u32) s4 << 4);
    s3 = a2;
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) s3 << 3);
    s6 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) s6);
    if (v0 != 0) goto L_001813C8;
    v0 = 0; goto L_00181494;
L_001813C8:;
    a3 = (*(volatile s32 *) (u32) (s6 + 4));
    if (a3 != 0) goto L_001813DC;
    v0 = 0; goto L_00181494;
L_001813DC:;
    v0 = (s32) 0x390000U;
    a1 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) s5 << 2);
    v0 = (s32) ((u32) v0 + 0x7000U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) sp + 0x80U);
    a2 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffca80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    if (s5 != 0) goto L_00181440;
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_001C80F0(a0);
    s0 = v0;
    { s32 c_ = s0 == 0; s2 = 0; if (c_) goto L_00181440; }
    s1 = (s32) ((u32) sp + 0x80U);
L_00181420:;
    a0 = (*(volatile s8 *) (u32) s1); v0 = func_001C9C78(a0);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (u64) s2 < (u64) s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00181420; }
L_00181440:;
    a0 = s4;
    a1 = s3; v0 = func_00180C20(a0, a1);
    a0 = (s32) ((u32) s5 << 2);
    v1 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) a0 + (u32) s5);
    v1 = (s32) ((u32) v1 + 0x7750U);
    a4 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) s6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = s4;
    a4 = (*(volatile s32 *) (u32) v0);
    a2 = s3;
    a0 = s5;
    a5 = (s32) ((u32) sp + 0x80U); func_00180A60(a0, a1, a2, a3, a4, a5);
    func_00180950(a0, a1, a2, a3);
    v0 = 1;
L_00181494:;
    return v0;
}
