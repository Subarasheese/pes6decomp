/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C32710(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    s32 hi = 0, lo = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 12));
    { s32 c_ = v0 != 0; a2 = (*(volatile u8 *) (u32) a0); if (c_) goto L_00C32750; }
    v0 = (*(volatile u8 *) (u32) (a0 + 22));
    if (v0 != 0) goto L_00C32748;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 <= 0) goto L_00C32748;
    v0 = 0; goto L_00C32840;
L_00C32748:;
    v0 = 1; goto L_00C32840;
L_00C32750:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00C3277C;
    v0 = (*(volatile u8 *) (u32) (a0 + 22));
    if (v0 <= 0) goto L_00C3277C;
    v0 = 0; goto L_00C32840;
L_00C3277C:;
    a7 = (*(volatile u8 *) (u32) (a0 + 22));
    at = 0 < a7;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_00C32748; }
    a1 = (s32) 0x590000U;
    v1 = 139;
    a1 = (s32) ((u32) a1 + 0x1e00U);
    a3 = (s32) ((u32) a1 + (u32) a2);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1a90U);
    t5 = (*(volatile u8 *) (u32) (a3 + 248));
    v1 = (*(volatile u8 *) (u32) (a3 + 246));
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = 1;
    a6 = (s32) ((u32) t5 + (u32) v1);
    v1 = (s32) ((u32) t5 << 3);
    a5 = (s32) ((u32) a2 + (u32) v1);
L_00C327C4:;
    at = t5 < a6;
    t6 = 0;
    { s32 c_ = at == 0; t7 = t5; if (c_) goto L_00C32820; }
    v1 = (s32) ((u32) a0 + (u32) v0);
    t4 = a5;
    a4 = (*(volatile u8 *) (u32) (v1 + 33));
    a3 = (s32) ((u32) v1 + 0x1aU);
L_00C327E8:;
    v1 = (*(volatile u8 *) (u32) (t4 + 83));
    if (a4 != v1) goto L_00C32810;
    a2 = (*(volatile u8 *) (u32) a3);
    v1 = (*(volatile u8 *) (u32) (t4 + 82));
    if (a2 != v1) goto L_00C32810;
    t6 = a1; goto L_00C32820;
L_00C32810:;
    t7 = (s32) ((u32) t7 + 0x1U);
    v1 = t7 < a6;
    { s32 c_ = v1 != 0; t4 = (s32) ((u32) t4 + 0x8U); if (c_) goto L_00C327E8; }
L_00C32820:;
    if (t6 == 0) { v0 = 0; goto L_00C32840; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = v0 < a7;
    if (v1 != 0) goto L_00C327C4;
    goto L_00C32748;
L_00C32840:;
    return v0;
}
