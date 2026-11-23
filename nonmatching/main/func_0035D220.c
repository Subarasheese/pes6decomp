/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0035D360(s32, s32, s32, s32, s32, s32);

void func_0035D220(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a6 = (*(volatile s16 *) (u32) (v1 + 31840));
    a5 = a3;
    a0 = (*(volatile s16 *) (u32) (v0 + 31842));
    a4 = (s32) ((u32) gp + 0xffffac54U);
    (*(volatile u16 *) (u32) (sp + 24)) = (u16) a6;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a3 = (*(volatile s16 *) (u32) (v1 + 31844));
    a6 = (*(volatile s16 *) (u32) (v0 + 31846));
    (*(volatile u16 *) (u32) (sp + 26)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 28)) = (u16) a3;
    v1 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (gp + -21424));
    a0 = a1;
    a1 = a2;
    (*(volatile u16 *) (u32) (sp + 30)) = (u16) a6;
    v1 = (s32) ((u32) v1 + 0x7ba0U);
    a2 = (s32) ((u32) sp + 0x18U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a4 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a4 = (*(volatile s32 *) (u32) (v0 + 608));
    v0 = (s32) ((u32) a4 << 1);
    v0 = (s32) ((u32) v0 + (u32) a4);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a4 = (*(volatile s32 *) (u32) v0);
    a3 = 1; func_0035D360(a0, a1, a2, a3, a4, a5);
    return;
}
