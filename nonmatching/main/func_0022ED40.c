/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
void memset(s64, s64, s64);

s64 func_0022ED40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) { s7 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_0022ED80; }
    s7 = 0;
L_0022ED80:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_0022EDA0; }
    s0 = 0; goto L_0022EDA4;
L_0022EDA0:;
    s0 = (s32) ((u32) v0 + 0xcU);
L_0022EDA4:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    a0 = (u64) 0 < (u64) v0;
    v1 = 1;
    if (a0 == v1) { ; goto L_0022EF58; }
    if (s7 == 0) goto L_0022EF54;
    (*(volatile u8 *) (u32) (s0 + 40)) = (u8) 0;
    s1 = 0;
    v0 = s1 & 0xff;
L_0022EDD0:;
    a2 = 7132;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x80000U;
    at = at | 0xb69c;
    a1 = 0;
    s0 = (s32) ((u32) s7 + (u32) v0);
    s2 = (s32) ((u32) s0 + (u32) at);
    a0 = s2; memset(a0, a1, a2);
    at = (s32) 0x80000U;
    v1 = 255;
    at = at | 0xb69d;
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    a5 = (s32) ((u32) s0 + (u32) at);
    a2 = -4;
    at = (s32) 0x80000U;
    a4 = (*(volatile u8 *) (u32) a5);
    at = at | 0xb69e;
    a3 = 0 & 0x3;
    s5 = (s32) ((u32) s0 + (u32) at);
    a0 = -253;
    at = (s32) 0x80000U;
    a2 = a4 & a2;
    at = at | 0xb6c2;
    a2 = a2 | a3;
    s4 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u8 *) (u32) a5) = (u8) a2;
    at = (s32) 0x80000U;
    a2 = (*(volatile u8 *) (u32) a5);
    at = at | 0xb6c4;
    a1 = (s64) ((u64) 0 + (u64) (s64) 152);
    s3 = (s32) ((u32) s0 + (u32) at);
    v1 = 0;
    at = (s32) 0x80000U;
    a0 = a2 & a0;
    at = at | 0xb6c6;
    a0 = a0 | a1;
    s2 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u8 *) (u32) a5) = (u8) a0;
    at = (s32) 0x80000U;
    at = at | 0xb6c8;
    t9 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0x80000U;
    at = at | 0xb6ca;
    t8 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0x80000U;
    at = at | 0xb6cc;
    s0 = (s32) ((u32) s0 + (u32) at);
L_0022EE90:;
    a1 = v1 & 0xff;
    a0 = (s32) ((u32) a1 << 3);
    s6 = 0;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) a0 << 1);
    a0 = (s32) ((u32) a0 << 2);
    t7 = (s32) ((u32) s5 + (u32) a1);
    t6 = (s32) ((u32) s4 + (u32) a0);
    t5 = (s32) ((u32) s3 + (u32) a0);
    t4 = (s32) ((u32) s2 + (u32) a0);
    a7 = (s32) ((u32) t9 + (u32) a0);
    a6 = (s32) ((u32) t8 + (u32) a0);
    a5 = (s32) ((u32) s0 + (u32) a0);
L_0022EEC8:;
    a0 = s6 & 0xff;
    a3 = (s32) ((u32) a0 << 1);
    a4 = (s32) ((u32) t7 + (u32) a0);
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    a0 = (s32) ((u32) t6 + (u32) a3);
    (*(volatile u16 *) (u32) a0) = (u16) 0;
    a2 = (s32) ((u32) t4 + (u32) a3);
    a0 = (s32) ((u32) t5 + (u32) a3);
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) 0;
    (*(volatile u16 *) (u32) a0) = (u16) 0;
    a1 = (s32) ((u32) a7 + (u32) a3);
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) 0;
    a0 = (s32) ((u32) a6 + (u32) a3);
    (*(volatile u16 *) (u32) a2) = (u16) 0;
    (*(volatile u8 *) (u32) (a4 + 3)) = (u8) 0;
    a2 = (s32) ((u32) a5 + (u32) a3);
    (*(volatile u16 *) (u32) a1) = (u16) 0;
    a3 = (s32) ((u32) s6 + 0x6U);
    (*(volatile u8 *) (u32) (a4 + 4)) = (u8) 0;
    s6 = a3 & 0xff;
    (*(volatile u16 *) (u32) a0) = (u16) 0;
    a1 = s6 < 18;
    (*(volatile u8 *) (u32) (a4 + 5)) = (u8) 0;
    { s32 c_ = a1 != 0; (*(volatile u16 *) (u32) a2) = (u16) 0; if (c_) goto L_0022EEC8; }
    v1 = (s32) ((u32) v1 + 0x1U);
    v1 = v1 & 0xff;
    a0 = v1 < 2;
    if (a0 != 0) goto L_0022EE90;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < 19;
    if (v1 != 0) { v0 = s1 & 0xff; goto L_0022EDD0; }
L_0022EF54:;
L_0022EF58:;
    return v0;
}
