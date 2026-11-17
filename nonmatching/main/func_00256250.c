/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00256250(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a2 = (s32) ((u32) a0 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + 0xffffcdf0U);
    a1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0xffffcda0U); if (c_) goto L_00256288; }
L_00256280:;
    goto L_002562A4;
L_00256288:;
    v0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_00256280;
L_002562A4:;
    return v0;
}
