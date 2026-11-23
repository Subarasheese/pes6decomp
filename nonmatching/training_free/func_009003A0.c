/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C99810(s32, s32, s32, s32);

s32 func_009003A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x1;
    if (v0 != 0) goto L_009003C4;
    v0 = 0; goto L_00900400;
L_009003C4:;
    v0 = func_00C99810(a0, a1, a2, a3);
    if (v0 == 0) goto L_009003EC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x80;
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + 0x3U); goto L_00900400;
L_009003EC:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v0 = v0 & 0x40;
    v0 = (s32) v0 >> 6;
    v0 = (s32) ((u32) v0 + 0x1U);
L_00900400:;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xffffdf80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    return v0;
}
