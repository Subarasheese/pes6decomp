/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Job_SetArg(s32, s32, s32);
void Pes6Job_SetField4(s32, s32);
s32 func_00992220(s32, s32, s32, s32);

s32 func_00319D50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s1 = (*(volatile s32 *) (u32) (a0 + 68));
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    { s32 c_ = v0 != 0; s2 = a0; if (c_) goto L_00319D7C; }
    v0 = 0; goto L_00319E60;
L_00319D7C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 116));
    v0 = 10;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) s1 + 0x74U); if (c_) goto L_00319E5C; }
    v1 = (*(volatile u8 *) (u32) (s0 + 32));
    v0 = 3;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s0 + 4)); goto L_00319DC0; }
    v0 = 2;
    if (v1 == v0) goto L_00319DBC;
    v0 = 1;
    if (v1 == v0) goto L_00319DBC;
    v0 = 0; goto L_00319E60;
L_00319DBC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
L_00319DC0:;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00319DD8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00319DD8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00992220(a0, a1, a2, a3);
    if (v0 == 0) goto L_00319E5C;
    a1 = (s32) 0x320000U;
    a2 = (s32) 0x3e0000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xffff9bd0U);
    a2 = (s32) ((u32) a2 + 0x1510U); Pes6Job_SetField4(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s0 + 4));
    a0 = s2;
    a1 = 0; Pes6Job_SetArg(a0, a1, a2);
    a2 = (*(volatile u8 *) (u32) (s1 + 184));
    a0 = s2;
    a1 = 1; Pes6Job_SetArg(a0, a1, a2);
    a0 = s2;
    a1 = 2;
    a2 = 0; Pes6Job_SetArg(a0, a1, a2);
    a0 = s2;
    a1 = 3;
    a2 = 0; Pes6Job_SetArg(a0, a1, a2);
    v0 = 1; goto L_00319E60;
L_00319E5C:;
    v0 = 0;
L_00319E60:;
    return v0;
}
