/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Debug_Printf(void);
void func_0026DBA0(s32, s32, s32, s32);
s32 func_00307400(s32);

void func_0026E690(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    s0 = a1;
    a0 = (*(volatile s32 *) (u32) (gp + -22264));
    a1 = (s32) 0x3e0000U;
    a2 = s1;
    a1 = (s32) ((u32) a1 + 0xffff9ba0U); Pes6Debug_Printf();
    a0 = s1; v0 = func_00307400(a0);
    s1 = v0;
    if (s1 == 0) { a0 = 0; goto L_0026E72C; }
    v1 = (s32) ((u32) s1 >> 25);
    v1 = v1 & 0xf;
    if (v1 != 0) { at = (u64) v1 < (u64) (s64) 16; goto L_0026E6EC; }
    a0 = 0;
    goto L_0026E72C;
L_0026E6EC:;
    if (at == 0) { a0 = 0; goto L_0026E72C; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9bb0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26e710U) goto L_0026E710; if (t_ == 0x26e718U) goto L_0026E718; if (t_ == 0x26e720U) goto L_0026E720; if (t_ == 0x26e728U) goto L_0026E728; }
L_0026E710:;
    a0 = 3; goto L_0026E72C;
L_0026E718:;
    a0 = 1; goto L_0026E72C;
L_0026E720:;
    a0 = 2; goto L_0026E72C;
L_0026E728:;
    a0 = 0;
L_0026E72C:;
    v1 = 2;
    if (a0 == v1) { a0 = s1; goto L_0026E740; }
    goto L_0026E74C;
L_0026E740:;
    a1 = s0; func_0026DBA0(a0, a1, a2, a3);
L_0026E74C:;
    return;
}
