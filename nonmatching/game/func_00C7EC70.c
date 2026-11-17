/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D5410(void);
void func_00C88DD0(s64, s64, s64, s64);
void func_00C88EC0(s64, s64, s64);
void memset(s64, s64, s64);

void func_00C7EC70(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    s0 = a0;
    a0 = 5;
    if (v1 != a0) { v1 = 1; goto L_00C7EC9C; }
    s0 = 0;
    v1 = 1;
L_00C7EC9C:;
    if (s0 != v1) goto L_00C7ED28;
    v1 = (*(volatile s32 *) (u32) (gp + -19204));
    if (v1 != 0) goto L_00C7ED08;
    v0 = func_002D5410();
    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc040U);
    a2 = 48; memset(a0, a1, a2);
    v0 = (s32) 0xcd0000U;
    a1 = (s32) 0xc80000U;
    v0 = (s32) ((u32) v0 + 0xffffc040U);
    a2 = (s32) 0xc80000U;
    a0 = 18;
    (*(volatile u32 *) (u32) (gp + -19204)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0xffffed70U);
    a2 = (s32) ((u32) a2 + 0xffffed50U); func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc80000U;
    a2 = (s32) 0xc80000U;
    a0 = 18;
    a1 = (s32) ((u32) a1 + 0xffffec70U);
    a2 = (s32) ((u32) a2 + 0xffffed40U); func_00C88DD0(a0, a1, a2, a3);
L_00C7ED08:;
    v1 = (s32) 0xcd0000U;
    a0 = -2;
    a2 = (*(volatile u8 *) (u32) (v1 + -16280));
    a1 = (s64) ((u64) 0 + (u64) (s64) 1);
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -16280)) = (u8) a0;
L_00C7ED28:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u16 *) (u32) (v1 + -16278)) = (u16) s0;
    return;
}
