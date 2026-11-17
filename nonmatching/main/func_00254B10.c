/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00254B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = 7344;
    a1 = (s32) 0x580000U;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a1 = (s32) ((u32) a1 + 0x543cU);
    a2 = (s32) 0x580000U;
    a4 = 0;
    a2 = (s32) ((u32) a2 + 0x5430U);
    a0 = (s32) 0x580000U;
    a1 = (s32) ((u32) a1 + (u32) a3);
    a0 = (s32) ((u32) a0 + 0x5434U);
    v1 = (s32) 0x580000U;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a0 = (s32) ((u32) a0 + (u32) a3);
    v1 = (s32) ((u32) v1 + 0x5438U);
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00254B5C:;
    a1 = 0;
    a0 = a2;
L_00254B68:;
    (*(volatile u32 *) (u32) (a0 + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 44)) = (u32) 0;
    v1 = a1 < 32;
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 56)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 60)) = (u32) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x1cU); if (c_) goto L_00254B68; }
    (*(volatile u32 *) (u32) (a2 + 24)) = (u32) 0;
    a4 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a2 + 32)) = (u32) 0;
    v1 = a4 < 8;
    (*(volatile u32 *) (u32) (a2 + 28)) = (u32) 0;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x394U); if (c_) goto L_00254B5C; }
    return v0;
}
