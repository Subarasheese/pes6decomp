/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00151BA0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x370000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0x68f0U);
    a0 = 64;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 1; if (c_) goto L_00151BD0; }
    v0 = (s32) ((u32) v1 + 0x1U);
    v0 = (s32) v0 >> 1;
L_00151BD0:;
    v0 = (s32) ((u32) a0 + (u32) v0); return v0;
}
