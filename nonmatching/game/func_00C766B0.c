/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C766B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efaU);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 - (u32) a4);
    at = a2 < v1;
    if (at == 0) { a6 = 0; goto L_00C766E8; }
    v1 = a2;
    a6 = 0;
L_00C766E8:;
    if (a2 <= 0) goto L_00C76788;
    at = a2 < 9;
    { s32 c_ = at != 0; a3 = (s32) ((u32) a2 + 0xfffffff8U); if (c_) goto L_00C76758; }
    { s32 c_ = a2 < 0; v0 = 0; if (c_) goto L_00C7671C; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a2 < at;
    if (at == 0) goto L_00C7671C;
    v0 = 1;
L_00C7671C:;
    if (v0 == 0) goto L_00C76758;
    a5 = a1;
L_00C76728:;
    (*(volatile u32 *) (u32) a5) = (u32) 0;
    a6 = (s32) ((u32) a6 + 0x8U);
    (*(volatile u32 *) (u32) (a5 + 4)) = (u32) 0;
    v0 = a6 < a3;
    (*(volatile u32 *) (u32) (a5 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a5 + 12)) = (u32) 0;
    (*(volatile u32 *) (u32) (a5 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a5 + 20)) = (u32) 0;
    (*(volatile u32 *) (u32) (a5 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (a5 + 28)) = (u32) 0;
    { s32 c_ = v0 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_00C76728; }
L_00C76758:;
    at = a6 < a2;
    if (at == 0) goto L_00C76788;
    v0 = (s32) ((u32) a6 << 2);
    a3 = (s32) ((u32) a1 + (u32) v0);
L_00C7676C:;
    a6 = (s32) ((u32) a6 + 0x1U);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    v0 = a6 < a2;
    a3 = (s32) ((u32) a3 + 0x4U);
    if (v0 != 0) goto L_00C7676C;
L_00C76788:;
    v0 = 0;
    { s32 c_ = v1 <= 0; a5 = 0; if (c_) goto L_00C76828; }
    a3 = 139;
    a2 = (s32) ((u32) a4 << 3);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1a90U);
    a0 = (s32) ((u32) a0 + (u32) a3);
    a7 = (s32) ((u32) a0 + (u32) a2);
    a3 = -1;
    a6 = a7;
    a2 = 255;
L_00C767BC:;
    t4 = (*(volatile u8 *) (u32) (a7 + 82));
    { s32 c_ = v1 <= 0; t5 = 0; if (c_) goto L_00C767F8; }
    a4 = a6;
L_00C767D0:;
    a0 = (*(volatile u8 *) (u32) (a4 + 83));
    if (t4 != a0) goto L_00C767E8;
    t4 = a3; goto L_00C767F8;
L_00C767E8:;
    t5 = (s32) ((u32) t5 + 0x1U);
    a0 = t5 < v1;
    { s32 c_ = a0 != 0; a4 = (s32) ((u32) a4 + 0x8U); if (c_) goto L_00C767D0; }
L_00C767F8:;
    if (t4 == a2) goto L_00C76818;
    if (t4 == a3) goto L_00C76818;
    (*(volatile u32 *) (u32) a1) = (u32) t4;
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x4U);
L_00C76818:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a0 = a5 < v1;
    { s32 c_ = a0 != 0; a7 = (s32) ((u32) a7 + 0x8U); if (c_) goto L_00C767BC; }
L_00C76828:;
    return;
}
