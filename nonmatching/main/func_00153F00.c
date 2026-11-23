/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0012DD70(void);
void memset(s32, s32, s32);

void func_00153F00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a0 = (s32) 0x510000U;
    a0 = (s32) ((u32) a0 + 0xffffd490U);
    a1 = 0;
    a2 = 20; memset(a0, a1, a2);
    a3 = (s32) 0x2000000U;
    a1 = (s32) 0x1d90000U;
    a0 = (s32) 0x10000U;
    a2 = (s32) 0x0U;
    a3 = (s32) ((u32) a3 + 0xffff8000U);
    v0 = -1;
    a1 = (s32) ((u32) a1 + 0xffffa800U);
    a0 = (s32) ((u32) a0 + 0xffff8000U);
    { s32 c_ = a3 != v0; a2 = (s32) ((u32) a2 + 0x3000U); if (c_) goto L_00153F4C; }
    v0 = (s32) 0x2000000U;
    a3 = (s32) ((u32) v0 - (u32) a0);
L_00153F4C:;
    v0 = -1;
    if (a2 != v0) goto L_00153F5C;
    a2 = (s32) ((u32) a3 - (u32) a1);
L_00153F5C:;
    v0 = (s32) 0x510000U;
    v1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u32 *) (u32) (v0 + -11120)) = (u32) a1;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + -11116)) = (u32) v1;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + -11112)) = (u32) a2;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + -11108)) = (u32) a3;
    v0 = (s32) 0x510000U;
    (*(volatile u32 *) (u32) (v0 + -11104)) = (u32) a0; func_0012DD70();
    return;
}
