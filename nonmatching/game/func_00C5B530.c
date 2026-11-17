/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C13640(s32, s32, s32);

s32 func_00C5B530(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a1;
    s2 = 0;
    s1 = -1;
    { s32 c_ = a0 == s1; s0 = a2; if (c_) goto L_00C5B588; }
    if (s3 == s1) goto L_00C5B588;
    a1 = (s32) 0xcb0000U;
    a2 = 3;
    a1 = (s32) ((u32) a1 + 0x4a40U); v0 = func_00C13640(a0, a1, a2);
    s1 = v0;
    at = (u64) s3 < (u64) s1;
    if (at == 0) goto L_00C5B588;
    s1 = -1;
L_00C5B588:;
    v0 = -1;
    if (s1 == v0) goto L_00C5B5E4;
    a0 = s1;
    s0 = s0 & 0xff; v0 = func_00C132B0(a0);
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_00C5B5E4;
    v0 = (s32) 0xcb0000U;
    a1 = (s32) 0xcb0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 13416));
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x3450U); v0 = func_00C13640(a0, a1, a2);
    v1 = -1;
    if (v0 == v1) goto L_00C5B5E4;
    a0 = v0; v0 = func_00C132C0(a0);
    v0 = v0 & 0xff;
    v0 = v0 ^ 0xa;
    s2 = (u64) v0 < (u64) (s64) 1;
L_00C5B5E4:;
    v0 = s2;
    return v0;
}
