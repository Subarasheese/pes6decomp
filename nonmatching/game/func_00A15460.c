/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32);

void func_00A15460(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 == 0) goto L_00A15530;
    v0 = func_00AFBAB0(a0);
    a6 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) 0x590000U;
    a7 = v0 & 0xff;
    a3 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (s0 + 18));
    a2 = (s32) 0x590000U;
    a5 = (*(volatile s32 *) (u32) (v1 + 7620));
    a0 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + 0x1f44U);
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    a2 = (s32) ((u32) a2 + 0x1f64U);
    a0 = (s32) ((u32) a0 + 0x1f60U);
    a7 = (s32) ((u32) a6 - (u32) a7);
    a6 = (s32) ((u32) a7 << 3);
    a7 = (s32) ((u32) a6 + (u32) a7);
    v1 = (s32) ((u32) a4 << 5);
    a6 = (s32) ((u32) v1 + (u32) a4);
    a4 = (s32) ((u32) a6 << 2);
    v1 = (s32) ((u32) a7 << 2);
    a4 = (s32) ((u32) a4 - (u32) a6);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) a3) = (u8) 0;
    a4 = (*(volatile u8 *) (u32) (s0 + 18));
    a3 = (s32) ((u32) a4 << 5);
    a4 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 - (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u32 *) (u32) a2) = (u32) a5;
    a3 = (*(volatile u8 *) (u32) (a1 + 104));
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = (s32) ((u32) a2 << 5);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u16 *) (u32) v1) = (u16) a3;
L_00A15530:;
    return;
}
