/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002562B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    a1 = (s32) 0x590000U;
    at = a0 < 20;
    { s32 c_ = at == 0; a1 = (s32) ((u32) a1 + 0xffffcda0U); if (c_) goto L_002562E4; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) goto L_002562E4;
    { u32 t_ = (u32) v1; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002562E4:;
    return v0;
}
