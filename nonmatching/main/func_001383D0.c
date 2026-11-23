/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00137FA0(s32);
void func_001381A0(s32, s32, s32, s32);
void func_00138A30(s32);

void func_001383D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0; func_00137FA0(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xce8c;
    a0 = (s32) ((u32) v0 + (u32) at); func_00138A30(a0);
    a0 = s0; func_001381A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + -12648));
    if (v1 == 0) goto L_00138440;
    a2 = (*(volatile s32 *) (u32) (s0 + 96));
    at = (s32) 0x530000U;
    at = at | 0xce98;
    a1 = (s32) ((u32) a0 + (u32) at);
    a0 = 1;
L_0013842C:;
    if (a2 == a0) goto L_00138440;
    v1 = (*(volatile s32 *) (u32) a1);
    if (v1 != 0) goto L_0013842C;
L_00138440:;
    v1 = 3;
    (*(volatile u32 *) (u32) (s0 + 96)) = (u32) v1;
    return;
}
