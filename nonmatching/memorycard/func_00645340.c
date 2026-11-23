/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021F150(s32);
s32 func_0022D9F0(s32, s32, s32, s32);
s32 func_00237530(s32);
void memcpy(s32, s32, s32);

void func_00645340(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v0 = (s32) 0x660000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -4232)); v0 = func_0022D9F0(a0, a1, a2, a3);
    s3 = v0;
    a0 = 295; v0 = func_00237530(a0);
    s2 = v0;
    a0 = 295; v0 = func_0021F150(a0);
    s1 = v0;
    a0 = s3;
    a1 = (s32) ((u32) s0 + 0xcU);
    a2 = 20; memcpy(a0, a1, a2);
    a0 = s2;
    a1 = (s32) ((u32) s0 + 0x20U);
    a2 = 4504; memcpy(a0, a1, a2);
    a1 = (s32) ((u32) s0 + 0x11b8U);
    a0 = s1;
    a2 = 8252; memcpy(a0, a1, a2);
    (*(volatile u32 *) (u32) s2) = (u32) s1;
    return;
}
