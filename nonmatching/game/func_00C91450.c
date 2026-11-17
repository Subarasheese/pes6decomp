/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C820A0(s32, s32, s32);

void func_00C91450(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7628));
    if (v0 != 0) { t6 = (*(volatile u8 *) (u32) a1); goto L_00C914C4; }
    t6 = (*(volatile u8 *) (u32) a0);
    a6 = (s32) 0xcd0000U;
    t5 = (*(volatile u8 *) (u32) (a0 + 1));
    a5 = (s32) 0xcd0000U;
    t4 = (*(volatile u8 *) (u32) (a0 + 2));
    a4 = (s32) 0xcd0000U;
    a7 = (*(volatile u8 *) (u32) (a0 + 3));
    a3 = (s32) 0xcd0000U;
    a2 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (a6 + -10060)) = (u8) t6;
    a0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (a5 + -10059)) = (u8) t5;
    (*(volatile u8 *) (u32) (a4 + -10058)) = (u8) t4;
    (*(volatile u8 *) (u32) (a3 + -10057)) = (u8) a7;
    a5 = (*(volatile u8 *) (u32) a1);
    a4 = (*(volatile u8 *) (u32) (a1 + 1));
    a3 = (*(volatile u8 *) (u32) (a1 + 2));
    a1 = (*(volatile u8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) (a2 + -10056)) = (u8) a5;
    (*(volatile u8 *) (u32) (a0 + -10055)) = (u8) a4;
    (*(volatile u8 *) (u32) (v1 + -10054)) = (u8) a3;
    (*(volatile u8 *) (u32) (v0 + -10053)) = (u8) a1; goto L_00C91520;
L_00C914C4:;
    a6 = (s32) 0xcd0000U;
    t5 = (*(volatile u8 *) (u32) (a1 + 1));
    a5 = (s32) 0xcd0000U;
    t4 = (*(volatile u8 *) (u32) (a1 + 2));
    a4 = (s32) 0xcd0000U;
    a7 = (*(volatile u8 *) (u32) (a1 + 3));
    a3 = (s32) 0xcd0000U;
    a2 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (a6 + -10060)) = (u8) t6;
    a1 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (a5 + -10059)) = (u8) t5;
    (*(volatile u8 *) (u32) (a4 + -10058)) = (u8) t4;
    (*(volatile u8 *) (u32) (a3 + -10057)) = (u8) a7;
    a5 = (*(volatile u8 *) (u32) a0);
    a4 = (*(volatile u8 *) (u32) (a0 + 1));
    a3 = (*(volatile u8 *) (u32) (a0 + 2));
    a0 = (*(volatile u8 *) (u32) (a0 + 3));
    (*(volatile u8 *) (u32) (a2 + -10056)) = (u8) a5;
    (*(volatile u8 *) (u32) (a1 + -10055)) = (u8) a4;
    (*(volatile u8 *) (u32) (v1 + -10054)) = (u8) a3;
    (*(volatile u8 *) (u32) (v0 + -10053)) = (u8) a0;
L_00C91520:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10080));
    v1 = v1 | 0x8;
    (*(volatile u32 *) (u32) (v0 + -10080)) = (u32) v1; v0 = func_00C820A0(a0, a1, a2); return;
}
