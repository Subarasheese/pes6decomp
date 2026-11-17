/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001AC5A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = (*(volatile s32 *) (u32) (gp + -23260));
    if (s0 == 0) goto L_001AC600;
L_001AC5B8:;
    a2 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = 2;
    a1 = (*(volatile s32 *) (u32) (gp + -32112));
    a0 = (*(volatile u8 *) (u32) (s0 + 1));
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    { s32 c_ = a0 != v1; a1 = (*(volatile s32 *) (u32) a1); if (c_) goto L_001AC5F0; }
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    if (v1 == 0) goto L_001AC5F0;
    v0 = (*(volatile s32 *) (u32) (a1 + 12));
    { u32 t_ = (u32) v0; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_001AC5F0:;
    s0 = (*(volatile s32 *) (u32) (s0 + 36));
    if (s0 != 0) goto L_001AC5B8;
L_001AC600:;
    return v0;
}
