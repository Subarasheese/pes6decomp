/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_008FD190(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    if (a1 < 0) { v0 = 0; goto L_008FD204; }
    v0 = a1 < 11;
    if (v0 != 0) { v0 = 139; goto L_008FD1B0; }
    v0 = 0;
    goto L_008FD204;
L_008FD1B0:;
    a2 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a2 = (s32) ((u32) a2 + 0x1a97U);
    v0 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v0 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2a54U);
    a0 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) ((u32) v1 << 8);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
L_008FD204:;
    return v0;
}
