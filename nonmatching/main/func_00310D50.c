/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C31F0(s32, s32);

void func_00310D50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, s0 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    a1 = a1 & 0xff;
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); func_002C31F0(a0, a1);
    v0 = (s32) 0x55550000U;
    a0 = 0;
    v1 = (s32) ((u32) sp + 0x20U);
    v0 = v0 | 0x5556;
L_00310D7C:;
    a2 = (*(volatile s32 *) (u32) (v1 + 48));
    a0 = (s32) ((u32) a0 + 0x1U);
    t4 = (*(volatile s32 *) (u32) (v1 + 120));
    a1 = a0 < 6;
    a3 = (*(volatile s32 *) (u32) (v1 + 24));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t6 = (s32) ((u32) a2 >> 31);
    a5 = (*(volatile s32 *) (u32) (v1 + 72));
    a7 = (s32) ((u32) t4 >> 31);
    a4 = (*(volatile s32 *) (u32) (v1 + 96));
    a2 = (*(volatile s32 *) (u32) v1);
    t5 = hi;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) t4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t5 = (s32) ((u32) t5 + (u32) t6);
    a4 = (s32) ((u32) a5 + (u32) a4);
    a6 = (s32) ((u32) a3 + (u32) a2);
    a4 = (s32) ((u32) t5 + (u32) a4);
    a3 = (*(volatile s32 *) (u32) (v1 + 144));
    a2 = (*(volatile s32 *) (u32) (v1 + 168));
    a3 = (s32) ((u32) a3 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x4U);
    a2 = (s32) ((u32) t5 << 1);
    a5 = (s32) ((u32) a6 + (u32) a2);
    a2 = hi;
    a2 = (s32) ((u32) a2 + (u32) a7);
    a4 = (s32) ((u32) a2 + (u32) a4);
    a2 = (s32) ((u32) a2 << 1);
    { s32 c_ = a1 != 0; a2 = (s32) ((u32) a3 + (u32) a2); if (c_) goto L_00310D7C; }
    at = a2 < a4;
    if (at == 0) { v0 = a2; goto L_00310E00; }
    v0 = a4;
L_00310E00:;
    at = v0 < a5;
    if (at == 0) { at = a2 < a4; goto L_00310E14; }
    a2 = a5; goto L_00310E24;
L_00310E14:;
    if (at == 0) goto L_00310E24;
    a2 = a4; goto L_00310E24;
L_00310E24:;
    if (a2 != a5) goto L_00310E38;
    v0 = 6;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00310E50;
L_00310E38:;
    if (a2 != a4) { v0 = 5; goto L_00310E4C; }
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00310E50;
L_00310E4C:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_00310E50:;
    v0 = 1;
    return;
}
