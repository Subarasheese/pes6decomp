/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C12070(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    f0.i = (s32) 0;
    if (a0 == 0) goto L_00C120AC;
    v0 = (*(volatile s32 *) (u32) a0);
    at = (u64) v0 < (u64) (s64) 5;
    if (at == 0) goto L_00C120AC;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x33b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a0 = (*(volatile s32 *) (u32) (a0 + 4)); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00C120AC:;
    return v0;
}
