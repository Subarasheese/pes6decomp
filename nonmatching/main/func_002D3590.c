/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
s32 func_0026DA40(s32);
void func_0026E280(s32, s32, s32, s32);
s32 func_00C00630(void);

void func_002D3590(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = 2;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -22016));
    if (a0 == v1) { a0 = 3; goto L_002D367C; }
    v1 = 1;
    if (a0 == v1) { a0 = 3; goto L_002D3658; }
    if (a0 == 0) goto L_002D35D0;
    goto L_002D3694;
L_002D35D0:;
    v0 = func_00C00630();
    v1 = 40;
    if (v0 == v1) goto L_002D3690;
    v1 = 38;
    if (v0 == v1) goto L_002D3690;
    v1 = 36;
    if (v0 == v1) goto L_002D3690;
    a0 = 8; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    a0 = 3;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x2020U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) s1; v0 = func_0026DA40(a0);
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -22016)); goto L_002D3648; }
    a0 = s1;
    a1 = 3;
    a2 = 0;
    a3 = 0; func_0026E280(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22016));
L_002D3648:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22016)) = (u32) v1; goto L_002D3690;
    a0 = 3;
L_002D3658:;
    v0 = func_0026DA40(a0);
    if (v0 == 0) goto L_002D3690;
    v1 = (*(volatile s32 *) (u32) (gp + -22016));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22016)) = (u32) v1; goto L_002D3690;
    a0 = 3;
L_002D367C:;
    v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_002D3690;
    (*(volatile u32 *) (u32) (gp + -22016)) = (u32) 0;
L_002D3690:;
L_002D3694:;
    return;
}
