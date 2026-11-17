/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F9110(s32, s32, s32, s32);

void func_00C7F3B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s2 = 0;
    s1 = (s32) 0xcd0000U;
    s0 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0xffffc070U);
    s0 = (s32) ((u32) s0 + 0xffffc080U);
L_00C7F3D8:;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_00C7F420;
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (gp + -19200)) = (u32) s2; func_002F9110(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -19200));
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffc080U);
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    a0 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00C7F420:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x58U); if (c_) goto L_00C7F3D8; }
    return;
}
