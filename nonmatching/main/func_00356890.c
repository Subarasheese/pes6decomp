/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00332FA0(s32, s32, s32, s32, s32, s32, s32);
s32 func_00338530(s32);

s32 func_00356890(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    s0 = a0;
    a0 = 61; v0 = func_00338530(a0);
    if (v0 == 0) goto L_003568B8;
    v0 = 0; goto L_00356910;
L_003568B8:;
    v0 = func_00332FA0(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 48)); goto L_003568D0; }
    v0 = 0; goto L_00356910;
L_003568D0:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x7a70U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a0 = (*(volatile s32 *) (u32) (s0 + 48));
    v1 = 5;
    v0 = 1;
    a0 = (s32) ((u32) a0 + 0x1U);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    v1 = hi;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v1;
L_00356910:;
    return v0;
}
