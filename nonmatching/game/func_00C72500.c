/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002D5410(void);
void func_00C73460(void);
void func_00C88DD0(s32, s32, s32, s32);
void func_00C88EC0(s32, s32, s32);
void memset(s32, s32, s32);

void func_00C72500(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v0 = func_002D5410();
    s0 = (s32) 0xcd0000U;
    s1 = v0;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xffffbd30U);
L_00C72528:;
    a0 = s0;
    a1 = 0;
    a2 = 80;
    (*(volatile u32 *) (u32) (gp + -19280)) = (u32) s2; memset(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (gp + -19280));
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    s2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) a0 + 0xffffbd30U);
    v1 = (s32) ((u32) v1 + 0xffffbd28U);
    a2 = (s32) ((u32) a1 << 2);
    v0 = s2 < 2;
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a1 = (s32) ((u32) a1 << 4);
    s0 = (s32) ((u32) s0 + 0x50U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (a0 + 24)) = (u32) s1; if (c_) goto L_00C72528; }
    s0 = 0;
L_00C72580:;
    (*(volatile u32 *) (u32) (gp + -19280)) = (u32) s0; func_00C73460();
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) goto L_00C72580;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_00C725D8;
    v0 = (s32) 0xcd0000U;
    v1 = 1;
    a1 = (*(volatile u8 *) (u32) (v0 + -16983));
    a0 = 0 & 0x1;
    (*(volatile u32 *) (u32) (gp + -19280)) = (u32) v1;
    v1 = -2;
    v1 = a1 & v1;
    v0 = (s32) 0xcd0000U;
    v1 = v1 | a0;
    (*(volatile u8 *) (u32) (v0 + -16983)) = (u8) v1;
L_00C725D8:;
    a1 = (s32) 0xc70000U;
    a2 = (s32) 0xc70000U;
    a0 = 22;
    a1 = (s32) ((u32) a1 + 0x24a0U);
    a2 = (s32) ((u32) a2 + 0x2400U); func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc70000U;
    a2 = (s32) 0xc70000U;
    a0 = 22;
    a1 = (s32) ((u32) a1 + 0x2360U);
    a2 = (s32) ((u32) a2 + 0x23e0U); func_00C88DD0(a0, a1, a2, a3);
    return;
}
