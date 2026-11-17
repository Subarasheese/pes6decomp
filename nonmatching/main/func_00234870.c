/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00226710(void);
s32 func_00229460(void);

void func_00234870(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    s7 = a2;
    s5 = a1;
    s4 = a0;
    s0 = a3; v0 = func_00229460();
    s2 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_002348C8;
    v0 = 0; goto L_00234BE0;
L_002348C8:;
    if (s2 != 0) { s1 = s0 & 0xff; goto L_002348D8; }
    v0 = 0; goto L_00234BE0;
L_002348D8:;
    a0 = 0;
    v0 = (s32) ((u32) s1 << 1);
    s3 = 0;
    v0 = (s32) ((u32) v0 + (u32) s1);
    s0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) s2);
    s6 = (*(volatile u8 *) (u32) (v0 + 19131));
    v1 = s2; goto L_00234908;
L_002348FC:;
    a0 = (s32) ((u32) a0 + 0x1U);
    s3 = (s32) ((u32) s3 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xcU);
L_00234908:;
    at = a0 < s1;
    if (at == 0) goto L_00234920;
    v0 = a0 < 20;
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (v1 + 19128)); goto L_002348FC; }
L_00234920:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffff1U);
    at = (u64) v0 < (u64) (s64) 43;
    if (at == 0) { v1 = (s32) ((u32) s0 + (u32) s2); goto L_00234AA0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8750U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x234958U) goto L_00234958; if (t_ == 0x234a9cU) goto L_00234A9C; }
L_00234958:;
    v1 = 0;
    { s32 c_ = s1 <= 0; a1 = 0; if (c_) goto L_00234A70; }
    at = s1 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s1 + 0xfffffff8U); if (c_) goto L_00234A30; }
    { s32 c_ = s1 < 0; a0 = 0; if (c_) goto L_00234990; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s1 < at;
    if (at == 0) goto L_00234990;
    a0 = 1;
L_00234990:;
    if (a0 == 0) goto L_00234A30;
    a0 = s2;
L_0023499C:;
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
    { s32 c_ = a2 != 0; a1 = (s32) ((u32) a3 + (u32) a1); if (c_) goto L_0023499C; }
L_00234A30:;
    at = v1 < s1;
    if (at == 0) goto L_00234A70;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    a3 = (s32) ((u32) s2 + (u32) v0);
L_00234A4C:;
    a2 = (*(volatile u8 *) (u32) (a3 + 19131));
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (*(volatile u8 *) (u32) (a3 + 19129));
    v0 = v1 < s1;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a3 = (s32) ((u32) a3 + 0xcU);
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + (u32) a0); if (c_) goto L_00234A4C; }
L_00234A70:;
    v1 = (s32) ((u32) s0 + (u32) s2);
    s1 = (s32) ((u32) v1 + 0x4ab9U);
    s0 = s4 & 0xff;
    v1 = (*(volatile u8 *) (u32) (v1 + 19129));
    v0 = s5 & 0xff;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v1); hi = (s32) ((s32) s0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s6 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) a1 + (u32) v1);
    s4 = (s32) ((u32) v0 + (u32) v1); goto L_00234AC0;
L_00234A9C:;
    v1 = (s32) ((u32) s0 + (u32) s2);
L_00234AA0:;
    v0 = s5 & 0xff;
    s1 = (s32) ((u32) v1 + 0x4ab9U);
    s0 = s4 & 0xff;
    v1 = (*(volatile u8 *) (u32) (v1 + 19129));
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v1); hi = (s32) ((s32) s0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s6 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s4 = (s32) ((u32) v0 + (u32) v1);
L_00234AC0:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 30;
    if (v1 == v0) { v1 = s7 & 0xff; goto L_00234AF4; }
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 34;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) s1); goto L_00234B34; }
    v1 = s7 & 0xff;
L_00234AF4:;
    if (v1 != 0) { v0 = 1; goto L_00234B14; }
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17950));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234B14:;
    if (v1 != v0) { v0 = 0; goto L_00234BE0; }
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17951));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234B34:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v1 = lo;
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_00234B50; }
    if (v0 == 0) goto L_00234B50;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_00234B50:;
    if (v0 != 0) { v1 = s7 & 0xff; goto L_00234B9C; }
    v1 = s7 & 0xff;
    if (v1 != 0) { v0 = 1; goto L_00234B7C; }
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17950));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234B7C:;
    if (v1 != v0) goto L_00234BDC;
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17951));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234B9C:;
    if (v1 != 0) { v0 = 1; goto L_00234BBC; }
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17951));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234BBC:;
    if (v1 != v0) goto L_00234BDC;
    v0 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 17950));
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = v0 & 0xff; goto L_00234BE0;
L_00234BDC:;
    v0 = 0;
L_00234BE0:;
    return;
}
