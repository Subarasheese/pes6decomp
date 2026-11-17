/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C22830(s64, s64, s64, s64);
s64 func_00C22890(s64, s64, s64, s64);
s64 func_00C7EF80(s64, s64, s64, s64);

s64 func_00311E40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    s0 = a0; v0 = func_00C22830(a0, a1, a2, a3);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 < 0) goto L_00311E6C;
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_00311EDC;
L_00311E6C:;
    v0 = func_00C22890(a0, a1, a2, a3);
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    if (v0 < 0) { a0 = 0; goto L_00311E8C; }
    v0 = v0 & 0xff; goto L_00311EA4;
L_00311E8C:;
    v0 = func_00C7EF80(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 1; goto L_00311EA0; }
    v0 = 0;
L_00311EA0:;
    v0 = v0 & 0xff;
L_00311EA4:;
    a1 = v0 & 0xff;
    v1 = (s32) 0x590000U;
    v0 = 139;
    v1 = (s32) ((u32) v1 + 0x1ae2U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
L_00311EDC:;
    v0 = 1;
    return v0;
}
