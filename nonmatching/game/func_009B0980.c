/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009B0980(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, t8 = 0, t9 = 0;
    s32 hi = 0, lo = 0;

    a0 = (s32) 0x590000U;
    a2 = 11;
    a7 = (*(volatile u8 *) (u32) (a0 + 7629));
    a1 = (s32) 0x590000U;
    at = a7 < 2;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (a1 + 7704)) = (u8) a2; if (c_) goto L_009B0C00; }
    a0 = (s32) 0x590000U;
    t5 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7140));
    t4 = (s32) 0x590000U;
    t7 = 0;
    t5 = (s32) ((u32) t5 + 0x1a90U);
    t4 = (s32) ((u32) t4 + 0x2980U);
    a2 = 5;
    a4 = 1;
    a0 = (s32) ((u32) a1 << 5);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a6 = (s32) ((u32) a0 << 3);
    a0 = (s32) 0x66660000U;
    a3 = a0 | 0x6667;
    a0 = (s32) 0x51eb0000U;
    a1 = a0 | 0x851f;
L_009B09EC:;
    t6 = 0;
L_009B09F0:;
    a0 = (s32) ((u32) t5 + (u32) t6);
    { s32 c_ = a7 == a4; a5 = (*(volatile u8 *) (u32) (a0 + 7)); if (c_) goto L_009B0AD8; }
    if (a7 == 0) goto L_009B0A10;
    goto L_009B0BA0;
L_009B0A10:;
    v1 = (s32) ((u32) a5 << 4);
    a0 = (s32) ((u32) v1 - (u32) a5);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) t4 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v1 + 109));
    a0 = a0 & 0x7f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t9 = (s32) ((u32) a0 >> 31);
    t8 = hi;
    a0 = (*(volatile u8 *) (u32) (v1 + 21));
    s0 = (*(volatile s32 *) (u32) (v1 + 24));
    t8 = (s32) t8 >> 2;
    t8 = (s32) ((u32) t8 + (u32) t9);
    a0 = (s32) ((u32) a2 - (u32) a0);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) t8 + (u32) a0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t9 = (s32) ((u32) s0 >> 31);
    t8 = hi;
    s0 = (*(volatile s32 *) (u32) (v1 + 216));
    v1 = (s32) t8 >> 5;
    v1 = (s32) ((u32) v1 + (u32) t9);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v1); hi = (s32) ((s32) s0 % (s32) v1); lo = q_; }
    t8 = lo;
    s0 = (s32) ((u32) t8 << 2);
    t8 = (s32) ((u32) s0 + (u32) t8);
    s0 = (s32) ((u32) t8 << 2);
    s0 = (s32) ((u32) t8 + (u32) s0);
    s0 = (s32) ((u32) s0 << 1);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t8 = (s32) ((u32) s0 >> 31);
    s0 = hi;
    s0 = (s32) s0 >> 5;
    s0 = (s32) ((u32) s0 + (u32) t8);
    s0 = (s32) ((u32) s0 + 0x32U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    s0 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    a0 = (s32) a0 >> 5;
    a0 = (s32) ((u32) a0 + (u32) s0);
    a0 = (s32) ((u32) a0 + 0x13U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; } goto L_009B0BA0;
L_009B0AD8:;
    v1 = (s32) ((u32) a5 << 4);
    a0 = (s32) ((u32) v1 - (u32) a5);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) t4 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v1 + 109));
    a0 = a0 & 0x7f;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t9 = (s32) ((u32) a0 >> 31);
    t8 = hi;
    a0 = (*(volatile u8 *) (u32) (v1 + 21));
    s0 = (*(volatile s32 *) (u32) (v1 + 24));
    t8 = (s32) t8 >> 2;
    t8 = (s32) ((u32) t8 + (u32) t9);
    a0 = (s32) ((u32) a2 - (u32) a0);
    a0 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) t8 + (u32) a0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    s0 = (s32) ((u32) s0 >> 31);
    t9 = hi;
    t8 = (*(volatile s32 *) (u32) (v1 + 216));
    v1 = (s32) t9 >> 5;
    v1 = (s32) ((u32) v1 + (u32) s0);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) t8 / (s32) v1); hi = (s32) ((s32) t8 % (s32) v1); lo = q_; }
    t9 = lo;
    t8 = (s32) ((u32) t9 << 2);
    t9 = (s32) ((u32) t8 + (u32) t9);
    t8 = (s32) ((u32) t9 << 2);
    t8 = (s32) ((u32) t9 + (u32) t8);
    t8 = (s32) ((u32) t8 << 1);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) t8; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t9 = (s32) ((u32) t8 >> 31);
    t8 = hi;
    t8 = (s32) t8 >> 5;
    t8 = (s32) ((u32) t8 + (u32) t9);
    t8 = (s32) ((u32) t8 + 0x32U);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) t8; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    t8 = (s32) ((u32) a0 >> 31);
    a0 = hi;
    a0 = (s32) a0 >> 5;
    a0 = (s32) ((u32) a0 + (u32) t8);
    a0 = (s32) ((u32) a0 + 0xfU);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
L_009B0BA0:;
    a0 = (s32) ((u32) a5 << 4);
    a5 = (s32) ((u32) a0 - (u32) a5);
    a0 = (s32) ((u32) a5 << 3);
    a0 = (s32) ((u32) a0 - (u32) a5);
    a0 = (s32) ((u32) a0 << 3);
    t9 = (s32) ((u32) t4 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) (t9 + 216));
    a0 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (t9 + 216)) = (u32) a0;
    a5 = (*(volatile s32 *) (u32) (t9 + 192));
    a0 = (*(volatile s32 *) (u32) (t9 + 216));
    at = a5 < a0;
    { s32 c_ = at != 0; t8 = (s32) ((u32) t9 + 0xd8U); if (c_) goto L_009B0C08; }
L_009B0BD8:;
    t6 = (s32) ((u32) t6 + 0x1U);
    a0 = t6 < 11;
    { s32 c_ = a0 != 0; (*(volatile u32 *) (u32) (t9 + 224)) = (u32) a6; if (c_) goto L_009B09F0; }
    t7 = (s32) ((u32) t7 + 0x1U);
    t5 = (s32) ((u32) t5 + 0x8bU);
    a0 = t7 < 2;
    { s32 c_ = a0 != 0; t4 = (s32) ((u32) t4 + 0x6900U); if (c_) goto L_009B09EC; }
L_009B0C00:;
    goto L_009B0C10;
L_009B0C08:;
    (*(volatile u32 *) (u32) t8) = (u32) a5; goto L_009B0BD8;
L_009B0C10:;
    return;
}
