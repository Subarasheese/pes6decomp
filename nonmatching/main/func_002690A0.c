/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_00269DF0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00308400(void);

s32 func_002690A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = func_00308400();
    if (v0 == 0) goto L_002690C0;
    v0 = 0; goto L_00269130;
L_002690C0:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5766));
    v1 = (s32) ((u32) v1 + 0xffffb410U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) v0);
    if (v0 == 0) { v0 = 0; goto L_00269130; }
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5764));
    at = v0 < 9;
    if (at == 0) goto L_0026912C;
    v1 = (s32) ((u32) v0 + 0x1U);
    a1 = 2;
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v0 + -5764)) = (u8) v1;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + 197)) = (u8) a1;
    (*(volatile u8 *) (u32) (v0 + -5763)) = (u8) v1; func_00269DF0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
L_0026912C:;
    v0 = 0;
L_00269130:;
    return v0;
}
