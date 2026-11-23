/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0091F3F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile s16 *) (u32) (v0 + 348));
    v0 = (*(volatile s16 *) (u32) (v0 + 350));
    a2 = (s32) ((u32) v1 - (u32) v0);
    at = a2 < 1000;
    if (at != 0) { at = a2 < -999; goto L_0091F42C; }
    a2 = 999; goto L_0091F438;
L_0091F42C:;
    if (at == 0) goto L_0091F438;
    a2 = -999;
L_0091F438:;
    a1 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb258U);
    a1 = (s32) ((u32) a1 + 0xffffe9c8U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) ((u32) gp + 0xffffb258U);
    return v0;
}
