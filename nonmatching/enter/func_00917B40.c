/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00918350(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00917B40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { ; goto L_00917BB4; }
    func_00918350(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff260U);
    a1 = 0;
    a2 = 88;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) v0 + (u32) v1); memset(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00917BB4:;
    return;
}
