/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00226710(void);
s32 func_00229460(void);
s32 func_00234E00(s32);

void func_00234580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    s5 = a0;
    s4 = a1;
    v0 = func_00229460();
    s2 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_002345CC;
    v0 = 254; goto L_0023483C;
L_002345CC:;
    if (s2 != 0) { a0 = s4; goto L_002345DC; }
    v0 = 254; goto L_0023483C;
L_002345DC:;
    v0 = func_00234E00(a0);
    s1 = v0 & 0xff;
    a0 = 0;
    v0 = (s32) ((u32) s1 << 1);
    s3 = 0;
    v0 = (s32) ((u32) v0 + (u32) s1);
    v1 = s2;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    s6 = (*(volatile u8 *) (u32) (v0 + 19131));
    s0 = (s32) ((u32) v0 + 0x4abbU); goto L_00234620;
L_00234610:;
    a0 = (s32) ((u32) a0 + 0x1U);
    s3 = (s32) ((u32) s3 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xcU);
L_00234620:;
    at = a0 < s1;
    if (at == 0) goto L_00234638;
    v0 = a0 < 20;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (v1 + 19128)); goto L_00234610; }
L_00234638:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffff5U);
    at = (u64) v0 < (u64) (s64) 47;
    if (at == 0) { a1 = 0; goto L_00234790; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8690U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x234670U) goto L_00234670; }
L_00234670:;
    v1 = 0;
    { s32 c_ = s1 <= 0; a1 = 0; if (c_) goto L_00234790; }
    at = s1 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s1 + 0xfffffff8U); if (c_) goto L_00234748; }
    { s32 c_ = s1 < 0; a0 = 0; if (c_) goto L_002346A8; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s1 < at;
    if (at == 0) goto L_002346A8;
    a0 = 1;
L_002346A8:;
    if (a0 == 0) goto L_00234748;
    a0 = s2;
L_002346B4:;
    a6 = (*(volatile u8 *) (u32) (a0 + 19131));
    v1 = (s32) ((u32) v1 + 0x8U);
    a5 = (*(volatile u8 *) (u32) (a0 + 19129));
    a2 = v1 < v0;
    a4 = (*(volatile u8 *) (u32) (a0 + 19143));
    a3 = (*(volatile u8 *) (u32) (a0 + 19141));
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); t5 = lo; }
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); t4 = lo1; }
    a4 = (*(volatile u8 *) (u32) (a0 + 19167));
    a6 = (*(volatile u8 *) (u32) (a0 + 19155));
    a1 = (s32) ((u32) a1 + (u32) t5);
    a5 = (*(volatile u8 *) (u32) (a0 + 19153));
    a1 = (s32) ((u32) a1 + (u32) t4);
    a3 = (*(volatile u8 *) (u32) (a0 + 19165));
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a7 = lo; }
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a5 = lo1; }
    a7 = (s32) ((u32) a1 + (u32) a7);
    t4 = (s32) ((u32) a7 + (u32) a5);
    a6 = (*(volatile u8 *) (u32) (a0 + 19179));
    a4 = (*(volatile u8 *) (u32) (a0 + 19177));
    a3 = (*(volatile u8 *) (u32) (a0 + 19191));
    a1 = (*(volatile u8 *) (u32) (a0 + 19189));
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); a7 = lo; }
    a5 = (*(volatile u8 *) (u32) (a0 + 19203));
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a6 = lo1; }
    a4 = (*(volatile u8 *) (u32) (a0 + 19201));
    a3 = (*(volatile u8 *) (u32) (a0 + 19215));
    a7 = (s32) ((u32) t4 + (u32) a7);
    a1 = (*(volatile u8 *) (u32) (a0 + 19213));
    a6 = (s32) ((u32) a7 + (u32) a6);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    a0 = (s32) ((u32) a0 + 0x60U);
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a3 = (s32) ((u32) a6 + (u32) a3);
    { s32 c_ = a2 != 0; a1 = (s32) ((u32) a3 + (u32) a1); if (c_) goto L_002346B4; }
L_00234748:;
    at = v1 < s1;
    if (at == 0) { v0 = (s32) ((u32) s1 << 1); goto L_00234794; }
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    a3 = (s32) ((u32) s2 + (u32) v0);
L_00234764:;
    a2 = (*(volatile u8 *) (u32) (a3 + 19131));
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (*(volatile u8 *) (u32) (a3 + 19129));
    v0 = v1 < s1;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a3 = (s32) ((u32) a3 + 0xcU);
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + (u32) a0); if (c_) goto L_00234764; }
    goto L_00234790;
    a1 = 0;
L_00234790:;
    v0 = (s32) ((u32) s1 << 1);
L_00234794:;
    a0 = s5 & 0xff;
    v1 = (s32) ((u32) v0 + (u32) s1);
    a3 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = s3 & 0xff;
    a2 = (s32) ((u32) v1 + (u32) s2);
    v0 = (s32) ((u32) s4 - (u32) v0);
    a2 = (*(volatile u8 *) (u32) (a2 + 19129));
    v1 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) s0);
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a2); hi = (s32) ((s32) a0 % (s32) a2); lo = q_; }
    a0 = hi;
    { s64 m_ = (s64) (s32) s6 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = v0 <= 0; a0 = (s32) ((u32) a1 + (u32) a0); if (c_) goto L_00234838; }
    v0 = (s32) ((u32) a0 << 1);
    v1 = v1 & 0xff;
    a1 = (s32) ((u32) s2 + (u32) v0);
L_002347DC:;
    v0 = (*(volatile u8 *) (u32) (a1 + 17950));
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (a1 + 17951)); goto L_00234804; }
    v0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17951));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_0023483C;
L_00234804:;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) s0); goto L_00234828; }
    v0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17950));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_0023483C;
L_00234828:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_002347DC; }
L_00234838:;
    v0 = 254;
L_0023483C:;
    return;
}
