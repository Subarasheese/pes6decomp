/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00166998(s64);
void func_0024EFC0(s64, s64, s64, s64);
s64 func_0024F380(s64, s64, s64, s64);
s64 func_0024F4E0(s64, s64, s64, s64);
s64 func_00251860(s64);
s64 func_00251B60(void);
s64 func_00251BE0(void);
s64 func_00253400(s64, s64, s64, s64);

void func_00252000(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    (*(volatile u32 *) (u32) (gp + -22500)) = (u32) 0;
    a0 = 0;
L_00252018:;
    a0 = (s64) ((u64) a0 << 32);
    v1 = 212;
    a0 = a0 >> 32;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    s0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    if (v1 == 0) goto L_00252418;
    a3 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = a3 == 0; v1 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_00252418; }
    a0 = 21;
    if (a3 == a0) { a0 = (*(volatile s32 *) (u32) (s0 + 152)); goto L_00252354; }
    a0 = 20;
    if (a3 == a0) goto L_00252270;
    a0 = 19;
    if (a3 == a0) { a0 = 1; goto L_0025225C; }
    a0 = 18;
    if (a3 == a0) goto L_002521FC;
    a2 = 17;
    if (a3 == a2) { v1 = (*(volatile s32 *) (u32) (s0 + 72)); goto L_002521B4; }
    a0 = 4;
    if (a3 == a0) { a1 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_0025210C; }
    a0 = 3;
    if (a3 == a0) { a0 = (*(volatile s32 *) (u32) (s0 + 208)); goto L_002520EC; }
    a1 = 2;
    if (a3 == a1) { a0 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_002520D4; }
    a0 = 1;
    if (a3 == a0) { (*(volatile u32 *) (u32) (s0 + 56)) = (u32) a1; goto L_002520C0; }
    v1 = (*(volatile s32 *) (u32) (gp + -22500)); goto L_0025241C;
L_002520C0:;
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) a0; goto L_00252418;
L_002520D4:;
    if (a0 != 0) goto L_00252418;
    a0 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) a0; goto L_00252418;
L_002520EC:;
    if (a0 != 0) { (*(volatile u32 *) (u32) v1) = (u32) a2; goto L_00252418; }
    a1 = (*(volatile s32 *) (u32) (s0 + 204));
    a0 = 1;
    if (a1 != a0) { a0 = (*(volatile s32 *) (u32) s0); goto L_00252434; }
    (*(volatile u32 *) (u32) v1) = (u32) a2; goto L_00252418;
L_0025210C:;
    if (a1 >= 0) { a0 = (s32) ((u32) a1 << 1); goto L_0025211C; }
    v1 = -1; goto L_0025213C;
L_0025211C:;
    v1 = (s32) 0x580000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0x43f0U);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 72));
L_0025213C:;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = v1 < 3;
    if (v1 != 0) goto L_00252418;
    a0 = (*(volatile s32 *) (u32) s0); func_00166998(a0);
    a4 = (*(volatile s32 *) (u32) (gp + -22500));
    a3 = 212;
    a2 = (s32) 0x580000U;
    a1 = (s32) 0x580000U;
    a2 = (s32) ((u32) a2 + 0x50e0U);
    v1 = 17;
    a1 = (s32) ((u32) a1 + 0x43f0U);
    a0 = -1;
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a3 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) (a3 + 16));
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) v1;
    v1 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) a0;
    (*(volatile u32 *) (u32) (v1 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 68)) = (u32) a0;
    (*(volatile u32 *) (u32) (v1 + 72)) = (u32) 0; goto L_00252418;
L_002521B4:;
    if (v1 != 0) goto L_00252418;
    v0 = func_00251BE0();
    if (v0 != 0) goto L_00252418;
    a2 = (*(volatile s32 *) (u32) (gp + -22500));
    a1 = 212;
    a0 = (s32) 0x580000U;
    v1 = (*(volatile s32 *) (u32) (gp + -22524));
    a0 = (s32) ((u32) a0 + 0x50e0U);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (a0 + 188)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v1; goto L_00252418;
L_002521FC:;
    v0 = func_00251BE0();
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -22500)); goto L_00252458; }
L_0025220C:;
    a1 = (*(volatile s32 *) (u32) (gp + -22500));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a3 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) (a3 + 180));
    a2 = (s32) ((u32) a3 + 0xa8U);
    v1 = (*(volatile s32 *) (u32) (a3 + 168));
    at = v1 < a0;
    { s32 c_ = at != 0; a1 = (s32) ((u32) a3 + 0xb4U); if (c_) goto L_00252418; }
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) (a3 + 196)) = (u32) 0;
    (*(volatile u32 *) (u32) (a3 + 188)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (a3 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) v1; goto L_00252418;
L_0025225C:;
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) a0; goto L_00252418;
L_00252270:;
    v0 = func_00251BE0();
    a2 = 1;
    if (v0 == a2) goto L_00252418;
    a1 = (*(volatile s32 *) (u32) (gp + -22500));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 56));
    if (v1 == a2) goto L_00252418;
    a0 = (*(volatile s32 *) (u32) (s1 + 152));
    s0 = (s32) ((u32) s1 + 0xcU); v0 = func_0024F380(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = v1 < 3;
    if (v1 != 0) goto L_00252418;
    a1 = (*(volatile s32 *) (u32) (gp + -22500));
    v1 = 212;
    v0 = (s32) 0x580000U;
    a0 = (*(volatile s32 *) (u32) (s1 + 152));
    v0 = (s32) ((u32) v0 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s1 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) s1 + 0x9cU); v0 = func_0024F4E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s1 + 180));
    v1 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 160)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (s1 + 172));
    if (a0 < 0) { v1 = 1; goto L_002524A8; }
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 + 0xfffff2b8U);
    if (v1 < 0) { v1 = 1; goto L_002524A0; }
    (*(volatile u32 *) (u32) s0) = (u32) v1;
L_00252320:;
    a2 = (*(volatile s32 *) (u32) (gp + -22500));
    a1 = 212;
    a0 = (s32) 0x580000U;
    v1 = (*(volatile s32 *) (u32) (gp + -22524));
    a0 = (s32) ((u32) a0 + 0x50e0U);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (a0 + 164)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 184)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 8)) = (u32) v1; goto L_00252418;
L_00252354:;
    v0 = func_00251860(a0);
    a1 = (*(volatile s32 *) (u32) (gp + -22500));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0; v0 = func_00251BE0();
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -22500)); goto L_002524B0; }
L_00252384:;
    a1 = (*(volatile s32 *) (u32) (gp + -22500));
    a0 = 212;
    v1 = (s32) 0x580000U;
    v1 = (s32) ((u32) v1 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (a0 + 12));
    if (v1 != 0) goto L_00252418;
    a0 = (*(volatile s32 *) (u32) (a0 + 152)); func_0024EFC0(a0, a1, a2, a3);
    a3 = (*(volatile s32 *) (u32) (gp + -22500));
    a2 = 212;
    a1 = (s32) 0x580000U;
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x50e0U);
    v1 = -1;
    a0 = (s32) ((u32) a0 + 0xffff8d90U);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a2 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) (a2 + 152));
    (*(volatile u32 *) (u32) (a2 + 156)) = (u32) 0;
    a1 = (s32) ((u32) a1 << 2);
    (*(volatile u32 *) (u32) (a2 + 160)) = (u32) 0;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 164)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 172)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 180)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 184)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 188)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 192)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 152)) = (u32) v1;
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 68)) = (u32) v1;
L_00252418:;
    v1 = (*(volatile s32 *) (u32) (gp + -22500));
L_0025241C:;
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < 4;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (gp + -22500)) = (u32) a0; if (c_) goto L_00252018; }
    goto L_002524F8;
L_00252434:;
    a1 = (*(volatile s32 *) (u32) (s0 + 84));
    a2 = (*(volatile s32 *) (u32) (s0 + 4));
    a3 = (s32) ((u32) s0 + 0x58U); v0 = func_00253400(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_00252418;
L_00252458:;
    a0 = 212;
    v0 = (s32) 0x580000U;
    v1 = (*(volatile s32 *) (u32) (gp + -22524));
    v0 = (s32) ((u32) v0 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 188));
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 196)) = (u32) v0; v0 = func_00251B60();
    v1 = 24000;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = (*(volatile s32 *) (u32) (s0 + 196));
    a0 = lo;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v1; goto L_0025220C;
L_002524A0:;
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00252320;
L_002524A8:;
    (*(volatile u32 *) (u32) s0) = (u32) v1; goto L_00252320;
L_002524B0:;
    a0 = 212;
    v0 = (s32) 0x580000U;
    v1 = (*(volatile s32 *) (u32) (gp + -22524));
    v0 = (s32) ((u32) v0 + 0x50e0U);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (s0 + 184));
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 192)) = (u32) v0; v0 = func_00251B60();
    v1 = 24000;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = (*(volatile s32 *) (u32) (s0 + 192));
    a0 = lo;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    (*(volatile u32 *) (u32) (s0 + 164)) = (u32) v1; goto L_00252384;
L_002524F8:;
    return;
}
