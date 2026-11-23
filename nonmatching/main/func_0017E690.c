/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00180B50(s32);
s32 func_00180BA0(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0017E690(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = (s32) a0 >> 16;
    s2 = v1 & 0x7;
    v1 = 4;
    s1 = a1;
    { s32 c_ = s2 != v1; s0 = a0 & 0xffff; if (c_) goto L_0017E6FC; }
    a1 = (s32) 0x3000000U;
    a1 = (s32) ((u32) a1 + 0x100U);
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    if (v1 == 0) goto L_0017E77C;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) s0 << 3);
    a2 = (*(volatile s32 *) (u32) a1);
    a0 = s1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (s32) 0x3d0000U;
    a1 = (s32) ((u32) a1 + 0xffffca08U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_0017E6F4:;
    goto L_0017E780;
L_0017E6FC:;
    a0 = s2; v0 = func_00180BA0(a0);
    a0 = s2;
    s2 = v0; v0 = func_00180B50(a0);
    v1 = (s32) 0x3000000U;
    a0 = (s32) ((u32) s2 << 3);
    v1 = (s32) ((u32) v1 + 0x200U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile s32 *) (u32) v1);
    if (a2 == 0) goto L_0017E77C;
    v1 = (*(volatile s32 *) (u32) (a2 + 8));
    a1 = (s32) 0x3d0000U;
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    a3 = (s32) ((u32) s0 << 3);
    a0 = s1;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = (*(volatile s32 *) (u32) a2);
    a3 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) a3);
    a4 = (*(volatile s32 *) (u32) (a3 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = (s32) ((u32) a1 + 0xffffca18U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0017E6F4;
L_0017E77C:;
L_0017E780:;
    return;
}
