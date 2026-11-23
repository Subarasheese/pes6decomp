/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C89490(s64, s64);
void func_00C894D0(s64, s64);
s64 func_00C89600(s64);
void memcpy(s64, s64, s64);

void func_00C91020(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -10068));
    v0 = (s64) ((u64) v0 << 60);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -19152)); goto L_00C91090; }
    v0 = (*(volatile s32 *) (u32) (gp + -19152));
    v0 = (s32) ((u32) v0 >> 4);
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00C91064;
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b4U); goto L_00C9106C;
L_00C91064:;
    a1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffd8b8U);
L_00C9106C:;
    if (v0 == 0) goto L_00C91080;
    s0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffd8b8U); goto L_00C91088;
L_00C91080:;
    s0 = (s32) 0xcd0000U;
    s0 = (s32) ((u32) s0 + 0xffffd8b4U);
L_00C91088:;
    a0 = (s32) ((u32) sp + 0x2cU); goto L_00C910D4;
L_00C91090:;
    v0 = (s32) ((u32) v0 >> 4);
    v1 = v0 & 0x1;
    if (v1 == 0) goto L_00C910AC;
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10040)); goto L_00C910B4;
L_00C910AC:;
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10036));
L_00C910B4:;
    if (v1 == 0) goto L_00C910C8;
    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -10036)); goto L_00C910D0;
L_00C910C8:;
    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -10040));
L_00C910D0:;
    a0 = (s32) ((u32) sp + 0x2cU);
L_00C910D4:;
    a2 = 4; memcpy(a0, a1, a2);
    a1 = s0;
    a0 = (s32) ((u32) sp + 0x28U);
    a2 = 4; memcpy(a0, a1, a2);
    a1 = (s32) 0xcb0000U;
    a0 = 32;
    a1 = (s32) ((u32) a1 + 0xffff8a50U); func_00C894D0(a0, a1);
    s0 = 0;
L_00C91100:;
    a0 = (s32) ((u32) s0 + 0xaU); v0 = func_00C89600(a0);
    (*(volatile u8 *) (u32) (sp + 47)) = (u8) v0;
    a0 = (s32) ((u32) s0 + 0xaU);
    a1 = (s32) ((u32) sp + 0x2cU); func_00C89490(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    if (v0 != 0) goto L_00C91100;
    s0 = 0;
L_00C9112C:;
    a0 = (s32) ((u32) s0 + 0x15U); v0 = func_00C89600(a0);
    (*(volatile u8 *) (u32) (sp + 43)) = (u8) v0;
    a0 = (s32) ((u32) s0 + 0x15U);
    a1 = (s32) ((u32) sp + 0x28U); func_00C89490(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 11;
    if (v1 != 0) goto L_00C9112C;
    return;
}
