/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FD0(s32, s32, s32, s32);

s32 func_00151A50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, a4 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x370000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0x68f0U);
    a4 = 64;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00151A80; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00151A80:;
    a1 = (s32) ((u32) a4 + (u32) v0);
    v0 = 1;
    if (a0 == v0) { a1 = (s32) ((u32) a1 + 0x40U); goto L_00151A9C; }
    v0 = 2;
    if (a0 == v0) { a1 = (s32) ((u32) a1 + 0x400U); goto L_00151A9C; }
L_00151A9C:;
    a0 = a3;
    a2 = 1; v0 = func_00153FD0(a0, a1, a2, a3); return v0;
}
