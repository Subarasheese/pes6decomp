/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154070(s32);
s32 func_001C80F0(s32);
void strcpy(s32, s32);

void func_00180A60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x520000U;
    s3 = a0;
    s2 = a1;
    s1 = a5;
    (*(volatile u32 *) (u32) (v0 + -368)) = (u32) s3;
    s0 = (s32) ((u32) a2 << 2);
    v0 = (u64) 0 < (u64) s2;
    a0 = s1;
    v1 = (s32) ((u32) v0 << 3);
    v0 = (s32) 0x390000U;
    v0 = (s32) ((u32) v0 + 0x6ff0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (s32) ((u32) s0 + (u32) v0);
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + -360)) = (u32) a3;
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + -356)) = (u32) a4;
    v0 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) (v1 + -364)) = (u32) v0; v0 = func_001C80F0(a0);
    a0 = (s32) ((u32) v0 + 0x1U); v0 = func_00154070(a0);
    v1 = (s32) 0x520000U;
    a1 = s1;
    (*(volatile u32 *) (u32) (v1 + -352)) = (u32) v0;
    a0 = v0; strcpy(a0, a1);
    a0 = (u64) 0 < (u64) s2;
    v1 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 + 0x6ff0U);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) s0 + (u32) v1);
    { s32 c_ = s3 != 0; a1 = (*(volatile s32 *) (u32) v1); if (c_) goto L_00180B10; }
    goto L_00180B14;
L_00180B10:;
    a1 = (s32) ((u32) a1 + 0x80U);
L_00180B14:;
    v1 = (s32) 0x520000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + -348)) = (u32) a1;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + -340)) = (u8) a0;
    return;
}
