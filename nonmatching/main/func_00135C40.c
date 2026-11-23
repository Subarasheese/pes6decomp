/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00134F80(s32, s32, s32, s32, s32);
void func_00135370(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001354E0(s32, s32, s32, s32);
void func_00135840(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00135C40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    if (a0 != 0) goto L_00135CBC;
L_00135C4C:;
    v1 = (*(volatile s32 *) (u32) (gp + -23504));
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + -12040)); v0 = func_001354E0(a0, a1, a2, a3);
    if (v0 != 0) goto L_00135C94;
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xcdc0;
    a0 = (s32) ((u32) v0 + (u32) at);
    at = (s32) 0x450000U;
    at = at | 0x9540;
    a1 = (s32) ((u32) v0 + (u32) at);
    at = (s32) 0x530000U;
    at = at | 0xcd88;
    a2 = (s32) ((u32) v0 + (u32) at); func_00135840(a0, a1, a2, a3, a4, a5, a6, a7);
L_00135C94:;
    func_00135370(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
    a1 = 0;
    a2 = 0;
    a3 = 1024;
    a4 = 512; func_00134F80(a0, a1, a2, a3, a4);
    v0 = 0; goto L_00135CC4;
L_00135CBC:;
    (*(volatile u32 *) (u32) (gp + -23480)) = (u32) 0; goto L_00135C4C;
L_00135CC4:;
    return v0;
}
