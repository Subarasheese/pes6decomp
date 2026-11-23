/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00129250(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, t8 = 0, t9 = 0;
    u64 qh_a5 = 0;
    u64 qh_t4 = 0;
    u64 qh_t5 = 0;
    u64 qh_t7 = 0;
    u64 qh_s0 = 0;
    u64 qh_s2 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;

    t6 = 0;
    a2 = 0;
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    a7 = (*(volatile s32 *) (u32) a1);
    a6 = (*(volatile s32 *) (u32) (a1 + 4));
    a5 = (*(volatile s32 *) (u32) v1);
    a4 = (*(volatile s32 *) (u32) (v1 + 4));
    a3 = (*(volatile s32 *) (u32) (v1 + 8));
    a1 = a0;
    t9 = (*(volatile s32 *) (u32) (v1 + 16));
L_00129290:;
    (*(volatile u16 *) (u32) (a1 + 2892)) = (u16) 0;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u16 *) (u32) (a1 + 2894)) = (u16) 0;
    at = a2 < 16;
    (*(volatile u16 *) (u32) (a1 + 2896)) = (u16) 0;
    (*(volatile u16 *) (u32) (a1 + 2898)) = (u16) 0;
    (*(volatile u16 *) (u32) (a1 + 2900)) = (u16) 0;
    (*(volatile u16 *) (u32) (a1 + 2902)) = (u16) 0;
    (*(volatile u16 *) (u32) (a1 + 2904)) = (u16) 0;
    (*(volatile u16 *) (u32) (a1 + 2906)) = (u16) 0;
    { s32 c_ = at != 0; a1 = (s32) ((u32) a1 + 0x10U); if (c_) goto L_00129290; }
    v1 = (*(volatile s32 *) (u32) (a0 + 5220));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 2924));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a7);
    (*(volatile u16 *) (u32) (v1 + 2)) = (u16) 0;
    v1 = (*(volatile s32 *) (u32) (a0 + 5220));
    t8 = (s32) ((u32) v1 + 0x1U);
    at = t8 < 573;
    if (at == 0) goto L_00129350;
    v1 = (s32) ((u32) t8 << 2);
    t5 = (s32) ((u32) a0 + (u32) v1);
L_001292F8:;
    a1 = (*(volatile s32 *) (u32) (t5 + 2924));
    a2 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) a7 + (u32) a2);
    t4 = (*(volatile u16 *) (u32) (v1 + 2));
    t4 = (s32) ((u32) t4 << 2);
    t4 = (s32) ((u32) a7 + (u32) t4);
    t4 = (*(volatile u16 *) (u32) (t4 + 2));
    t4 = (s32) ((u32) t4 + 0x1U);
    at = t9 < t4;
    { s32 c_ = at == 0; t7 = (s32) ((u32) v1 + 0x2U); if (c_) goto L_00129330; }
    t4 = t9;
    t6 = (s32) ((u32) t6 + 0x1U);
L_00129330:;
    at = a6 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) t7) = (u16) t4; if (c_) goto L_001293A8; }
L_00129340:;
    t8 = (s32) ((u32) t8 + 0x1U);
    v1 = t8 < 573;
    { s32 c_ = v1 != 0; t5 = (s32) ((u32) t5 + 0x4U); if (c_) goto L_001292F8; }
L_00129350:;
    if (t6 == 0) goto L_00129470;
    v1 = (s32) ((u32) t9 << 1);
    a4 = (s32) ((u32) t9 + 0xffffffffU);
    a3 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) a4 << 1);
    a5 = (s32) ((u32) a3 + 0xb4cU);
    a2 = (s32) ((u32) a0 + (u32) v1);
L_00129370:;
    v1 = (*(volatile u16 *) (u32) (a2 + 2892));
    { s32 c_ = v1 != 0; a1 = a4; if (c_) goto L_00129478; }
    t4 = a2;
L_00129380:;
    t4 = (s32) ((u32) t4 + 0xfffffffeU);
    v1 = (*(volatile u16 *) (u32) (t4 + 2892));
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    if (v1 == 0) goto L_00129380;
    v1 = (s32) ((u32) a1 << 1); goto L_0012947C;
L_001293A8:;
    t7 = (s32) ((u32) t4 << 1);
    s2 = (s32) ((u32) a0 + (u32) t7);
    s0 = a1 < a3;
    s1 = (*(volatile u16 *) (u32) (s2 + 2892));
    t7 = 0;
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = s0 != 0; (*(volatile u16 *) (u32) (s2 + 2892)) = (u16) s1; if (c_) goto L_001293D8; }
    a1 = (s32) ((u32) a1 - (u32) a3);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a4 + (u32) a1);
    t7 = (*(volatile s32 *) (u32) a1);
L_001293D8:;
    s4 = (*(volatile u16 *) (u32) v1);
    v1 = (s32) ((u32) t4 + (u32) t7);
    a1 = (s64) ((u64) s4 << 32);
    s3 = (s64) ((u64) v1 << 32);
    a1 = a1 >> 32;
    s3 = s3 >> 32;
    { s64 m_ = (s64) (u64) (u32) a1 * (s64) (u64) (u32) s3; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    t4 = hi;
    v1 = s3 >> 32;
    { u64 s_ = (u64) t4, t_ = (u64) s0; s2 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_s2 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); s1 = lo1; }
    v1 = s4 >> 32;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    t4 = (*(volatile s64 *) (u32) (a0 + 5816));
    s0 = (s64) ((u64) s1 + (u64) s0);
    s0 = (s64) ((u64) s0 << 32);
    s0 = (s64) ((u64) s0 + (u64) s2);
    t4 = (s64) ((u64) t4 + (u64) s0);
    { s32 c_ = a5 == 0; (*(volatile u64 *) (u32) (a0 + 5816)) = (u64) t4; if (c_) goto L_00129340; }
    a2 = (s32) ((u32) a5 + (u32) a2);
    a2 = (*(volatile u16 *) (u32) (a2 + 2));
    a2 = (s32) ((u32) t7 + (u32) a2);
    s0 = (s64) ((u64) a2 << 32);
    s0 = s0 >> 32;
    { s64 m_ = (s64) (u64) (u32) a1 * (s64) (u64) (u32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); t7 = lo; }
    t4 = hi;
    a2 = s0 >> 32;
    { u64 s_ = (u64) t4, t_ = (u64) t7; t4 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_t4 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a1 = (s64) ((u64) a2 + (u64) a1);
    v1 = (*(volatile s64 *) (u32) (a0 + 5824));
    a1 = (s64) ((u64) a1 << 32);
    a1 = (s64) ((u64) a1 + (u64) t4);
    v1 = (s64) ((u64) v1 + (u64) a1);
    (*(volatile u64 *) (u32) (a0 + 5824)) = (u64) v1; goto L_00129340;
L_00129470:;
    goto L_00129570;
L_00129478:;
    v1 = (s32) ((u32) a1 << 1);
L_0012947C:;
    t6 = (s32) ((u32) t6 + 0xfffffffeU);
    a1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (a1 + 2892));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) (a1 + 2892)) = (u16) v1;
    v1 = (*(volatile u16 *) (u32) (a1 + 2894));
    v1 = (s32) ((u32) v1 + 0x2U);
    (*(volatile u16 *) (u32) (a1 + 2894)) = (u16) v1;
    v1 = (*(volatile u16 *) (u32) a5);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { s32 c_ = t6 > 0; (*(volatile u16 *) (u32) a5) = (u16) v1; if (c_) goto L_00129370; }
    if (t9 == 0) goto L_00129518;
L_001294B4:;
    a2 = (*(volatile u16 *) (u32) (a3 + 2892));
    if (a2 == 0) goto L_00129508;
    a1 = (s64) ((u64) t9 << 32);
    a1 = a1 >> 32;
L_001294C8:;
    t8 = (s32) ((u32) t8 + 0xffffffffU);
    v1 = (s32) ((u32) t8 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 2924));
    at = a6 < v1;
    if (at != 0) goto L_00129500;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a7 + (u32) v1);
    a4 = (*(volatile u16 *) (u32) (v1 + 2));
    if (t9 != a4) { s0 = (s64) ((u64) a1 - (u64) a4); goto L_00129520; }
L_001294F8:;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
L_00129500:;
    if (a2 != 0) goto L_001294C8;
L_00129508:;
    t9 = (s32) ((u32) t9 + 0xffffffffU);
    { s32 c_ = t9 != 0; a3 = (s32) ((u32) a3 + 0xfffffffeU); if (c_) goto L_001294B4; }
L_00129518:;
    goto L_00129570;
L_00129520:;
    a4 = (*(volatile u16 *) (u32) v1);
    t7 = (s64) ((u64) s0 << 32);
    t7 = t7 >> 32;
    t6 = (s64) ((u64) a4 << 32);
    t6 = t6 >> 32;
    { s64 m_ = (s64) (u64) (u32) t7 * (s64) (u64) (u32) t6; lo = (s32) m_; hi = (s32) (m_ >> 32); t4 = lo; }
    a5 = hi;
    a4 = a4 >> 32;
    { u64 s_ = (u64) a5, t_ = (u64) t4; t5 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_t5 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) t7; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); t4 = lo1; }
    a4 = s0 >> 32;
    { s64 m_ = (s64) (s32) t6 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); a5 = lo; }
    a4 = (*(volatile s64 *) (u32) (a0 + 5816));
    a5 = (s64) ((u64) t4 + (u64) a5);
    a5 = (s64) ((u64) a5 << 32);
    a5 = (s64) ((u64) a5 + (u64) t5);
    a4 = (s64) ((u64) a4 + (u64) a5);
    (*(volatile u64 *) (u32) (a0 + 5816)) = (u64) a4;
    (*(volatile u16 *) (u32) (v1 + 2)) = (u16) t9; goto L_001294F8;
L_00129570:;
    return;
}
