/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00305D80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = v0 == 0; s2 = 0; if (c_) goto L_00305DE8; }
    s1 = 0;
L_00305DA8:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = (u64) 0 < (u64) v0;
    v1 = v1 ^ 0x1;
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) s0); goto L_00305DD8; }
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    v0 = 1; goto L_00305DEC;
L_00305DD8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (u64) s2 < (u64) v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00305DA8; }
L_00305DE8:;
    v0 = 0;
L_00305DEC:;
    return v0;
}
