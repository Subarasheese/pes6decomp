/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C120C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = (s32) 0xcc0000U;
    { s32 c_ = s0 == 0; a0 = (s32) ((u32) a0 + 0xffffded0U); if (c_) goto L_00C12114; }
    at = (u64) a1 < (u64) (s64) 5;
    if (at == 0) goto L_00C12114;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0x3330U);
    (*(volatile u32 *) (u32) s0) = (u32) a1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = a2;
    v0 = (*(volatile s32 *) (u32) v0);
    a2 = a3;
    { u32 t_ = (u32) v0; a3 = a4; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
L_00C12114:;
    return;
}
