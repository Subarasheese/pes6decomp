/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F5140(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = 0;
    { s32 c_ = a1 == 0; v1 = (s32) ((u32) v1 + 0x10U); if (c_) goto L_001F5168; }
    if (a1 == 0) { v0 = 0; goto L_001F5160; }
    v0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 5);
L_001F5160:;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) v0 + 0x10U);
L_001F5168:;
    a1 = (s32) ((u32) v1 + 0x20U);
    v0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0x2bf0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x10U);
    return v0;
}
