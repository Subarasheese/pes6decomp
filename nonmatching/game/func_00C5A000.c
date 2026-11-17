/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BC8B60(s32);
s32 func_00BC8BC0(void);
void func_00C59460(s32, s32, s32, s32);

void func_00C5A000(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = (s32) 0xcd0000U;
    s2 = (s32) ((u32) s2 + 0xffffb9d0U); v0 = func_00BC8BC0();
    s0 = v0 & 0xff;
    a0 = 0;
    v1 = 0 < s0;
    { s32 c_ = v1 != 0; s1 = 0; if (c_) goto L_00C5A044; }
L_00C5A034:;
    if (a0 != 0) goto L_00C5A080;
L_00C5A03C:;
    goto L_00C5A090;
L_00C5A044:;
    a0 = (u64) 0 < (u64) a0;
    if (a0 != 0) goto L_00C5A068;
    a0 = s1 & 0xff; v0 = func_00BC8B60(a0);
    v1 = (*(volatile s32 *) (u32) s2);
    a0 = v0 & 0xffff;
    a0 = v1 ^ a0;
    a0 = (u64) 0 < (u64) a0;
L_00C5A068:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < s0;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0xcU); if (c_) goto L_00C5A044; }
    goto L_00C5A034;
L_00C5A080:;
    func_00C59460(a0, a1, a2, a3);
    goto L_00C5A03C;
L_00C5A090:;
    return;
}
