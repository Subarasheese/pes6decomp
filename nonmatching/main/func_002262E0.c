/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);

s32 func_002262E0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    a0 = 1;
    if (v0 != a0) { v0 = s0 & 0xff; goto L_00226308; }
    v0 = 17; goto L_0022635C;
L_00226308:;
    at = (u64) v0 < (u64) (s64) 59;
    if (at == 0) { v0 = 6; goto L_0022635C; }
    v1 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7dd0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x226330U) goto L_00226330; if (t_ == 0x226338U) goto L_00226338; if (t_ == 0x226340U) goto L_00226340; if (t_ == 0x226348U) goto L_00226348; if (t_ == 0x226350U) goto L_00226350; }
L_00226330:;
    v0 = 2; goto L_0022635C;
L_00226338:;
    v0 = a0; goto L_0022635C;
L_00226340:;
    v0 = 3; goto L_0022635C;
L_00226348:;
    v0 = 0; goto L_0022635C;
L_00226350:;
    v0 = 5; goto L_0022635C;
    v0 = 6;
L_0022635C:;
    return v0;
}
