/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001FCED0(void);

void func_001FCE50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a1;
    at = (u64) a0 < (u64) s3;
    s2 = a2;
    s1 = a3;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_001FCEA0; }
L_001FCE80:;
    v0 = (*(volatile s32 *) (u32) s0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s0 = (s32) ((u32) s0 + 0x4U);
    v0 = (u64) s0 < (u64) s3;
    if (v0 != 0) goto L_001FCE80;
L_001FCEA0:;
    a0 = s2;
    a1 = s1; func_001FCED0();
    return;
}
