/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002C1FD0(s32, s32, s32, s32);
s32 func_00C13840(void);

s32 func_00C5BEE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = -1;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    { s32 c_ = a0 == v0; s0 = 0; if (c_) goto L_00C5BF54; }
    if (s3 == v0) goto L_00C5BF54;
    a3 = 37; v0 = func_002C1FD0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C5BF54;
    v0 = func_00C13840();
    a1 = s3;
    a2 = s2;
    a0 = v0;
    a3 = 36; v0 = func_002C1FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v0;
    { u32 t_ = (u32) s1; a0 = (s32) ((u32) sp + 0x5cU); v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s0 = v0;
L_00C5BF54:;
    v0 = s0;
    return v0;
}
