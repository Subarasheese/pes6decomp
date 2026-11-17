/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D5410(void);
void func_00C88DD0(s32, s32, s32, s32);
void func_00C88EC0(s32, s32, s32);
void func_00C94270(s32);
s32 func_00C94280(void);
void memset(s32, s32, s32);

void func_00C787F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    a1 = 0;
    a2 = 68;
    s1 = (s32) 0xcd0000U;
    s1 = (s32) ((u32) s1 + 0xffffbe90U);
    (*(volatile u32 *) (u32) (gp + -19252)) = (u32) 0;
    a0 = s1;
    s0 = (s32) ((u32) gp + 0xffffb4d0U); memset(a0, a1, a2);
    (*(volatile u32 *) (u32) s0) = (u32) s1; v0 = func_002D5410();
    a0 = v0; func_00C94270(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 << 2); v0 = func_00C94280();
    v1 = (s32) 0xcd0000U;
    a2 = (s32) 0xc80000U;
    v1 = (s32) ((u32) v1 + 0xffffbe9cU);
    a0 = 255;
    a1 = (s32) ((u32) v1 + (u32) s0);
    a2 = (s32) ((u32) a2 + 0xffff8760U);
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0xffffbea0U);
    a1 = (s32) 0xc80000U;
    v0 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) a1 + 0xffff87c0U);
    (*(volatile u32 *) (u32) v0) = (u32) a0;
    a0 = 6; func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc80000U;
    a2 = (s32) 0xc80000U;
    a0 = 6;
    a1 = (s32) ((u32) a1 + 0xffff83d0U);
    a2 = (s32) ((u32) a2 + 0xffff8460U); func_00C88DD0(a0, a1, a2, a3);
    return;
}
