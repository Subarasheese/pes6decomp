/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0035EE00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a97U);
    v1 = (s32) ((u32) a0 << 4);
    a2 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) a2 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 - (u32) a2);
    v1 = (s32) ((u32) v1 + 0x2a54U);
    a2 = (s32) ((u32) a3 + (u32) a4);
    a0 = (s32) ((u32) a0 << 8);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) a1);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v1 == 0; v0 = 1; if (c_) goto L_0035EE7C; }
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2994U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_0035EE80;
L_0035EE7C:;
    v0 = 0;
L_0035EE80:;
    return v0;
}
