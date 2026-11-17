/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00305CF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0;

    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = v0 == 0; s2 = 0; if (c_) goto L_00305D58; }
    s1 = 0;
L_00305D18:;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s0 + 8)); goto L_00305D44; }
    v0 = 1; goto L_00305D5C;
L_00305D44:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (u64) s2 < (u64) v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00305D18; }
L_00305D58:;
    v0 = 0;
L_00305D5C:;
    return v0;
}
