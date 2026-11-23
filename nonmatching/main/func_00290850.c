/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00277360(s32);
void func_0028FE70(s32);
s32 func_00292D10(void);
s32 func_00292D30(void);
s32 func_00292D50(void);
void memset(s32, s32, s32);

void func_00290850(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[68];
    s32 sp = (s32) (u32) frame;

    a1 = 0;
    a2 = 392;
    s7 = a0;
    a0 = (s32) ((u32) sp + 0x90U);
    memset(a0, a1, a2);
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 144)) = (u8) v0; v0 = func_00292D50();
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (sp + 146)) = (u8) v0;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x2800U);
L_002908A8:;
    v0 = (*(volatile u8 *) (u32) v1);
    at = v0 < 8;
    if (at == 0) goto L_002908C8;
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    if (s7 != v0) goto L_002908C8;
    (*(volatile u8 *) (u32) (sp + 144)) = (u8) 0;
L_002908C8:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x28U); if (c_) goto L_002908A8; }
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x295bU);
    v0 = (s32) ((u32) v0 + (u32) s7);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 < 8;
    if (v0 != 0) { (*(volatile u8 *) (u32) (sp + 144)) = (u8) 0; goto L_002908F4; }
L_002908F4:;
    v0 = 139;
    s5 = (s32) ((u32) sp + 0x90U);
    { s64 m_ = (s64) (s32) s7 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1a90U);
    s6 = 0;
    s2 = s5;
    s0 = s5;
    v0 = (s32) ((u32) s7 << 4);
    s4 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) v0 - (u32) s7);
    s3 = s4;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2980U);
    v1 = (s32) ((u32) v1 << 8);
    s1 = (s32) ((u32) v0 + (u32) v1);
L_0029093C:;
    v1 = (*(volatile u8 *) (u32) (s3 + 7));
    a0 = (s32) ((u32) s1 + 0xf0U);
    v0 = (*(volatile u8 *) (u32) (s1 + 212));
    (*(volatile u8 *) (u32) (s2 + 5)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 37)) = (u8) v0; v0 = func_00277360(a0);
    v1 = 1;
    if (v0 != v1) goto L_00290968;
    (*(volatile u8 *) (u32) (s2 + 69)) = (u8) v1; goto L_00290970;
L_00290968:;
    (*(volatile u8 *) (u32) (s2 + 69)) = (u8) 0;
L_00290970:;
    a1 = (*(volatile u8 *) (u32) (s1 + 20));
    v0 = (*(volatile u8 *) (u32) (s1 + 196));
    a0 = (s32) ((u32) s1 + 0x68U);
    v1 = (*(volatile s32 *) (u32) (s1 + 24));
    (*(volatile u8 *) (u32) (s2 + 101)) = (u8) a1;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) a0;
    { s32 c_ = v1 == 0; (*(volatile u8 *) (u32) (s2 + 133)) = (u8) v0; if (c_) goto L_00290B10; }
    v0 = (s32) 0x51eb0000U;
    a0 = (*(volatile s32 *) (u32) (s1 + 216));
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (s1 + 197));
    v1 = lo;
    (*(volatile u8 *) (u32) (s2 + 327)) = (u8) v1;
    (*(volatile u8 *) (u32) (s2 + 359)) = (u8) v0;
L_002909D0:;
    s6 = (s32) ((u32) s6 + 0x1U);
    v0 = s6 < 32;
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x348U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0029093C; }
    v0 = (s32) ((u32) s7 << 4);
    a2 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) v0 - (u32) s7);
    v1 = 0;
    a0 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x5a0000U;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 + 0x2020U);
    a3 = (s32) ((u32) a0 << 3);
    a1 = 0;
    v0 = (s32) ((u32) v0 + (u32) a3);
    a0 = a2;
    a4 = (*(volatile u8 *) (u32) (v0 + 1));
    a5 = (s32) ((u32) v0 + 0x1U);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 1);
    a6 = (s32) ((u32) v0 + (u32) a3);
L_00290A3C:;
    a3 = (*(volatile u8 *) (u32) (a6 + 28));
    { s32 c_ = v1 <= 0; (*(volatile u8 *) (u32) (a2 + 296)) = (u8) a3; if (c_) goto L_00290A78; }
    a4 = (*(volatile u8 *) (u32) a5);
    a3 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 1);
    a3 = (s32) ((u32) v0 + (u32) a3);
    a3 = (s32) ((u32) a3 + (u32) a1);
    a4 = (*(volatile u8 *) (u32) (a3 + 6));
    a3 = (*(volatile u8 *) (u32) (a3 + 7));
    (*(volatile u8 *) (u32) (a0 + 305)) = (u8) a4;
    (*(volatile u8 *) (u32) (a0 + 306)) = (u8) a3;
L_00290A78:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a3 = v1 < 11;
    a6 = (s32) ((u32) a6 + 0x1U);
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x2U);
    { s32 c_ = a3 != 0; a0 = (s32) ((u32) a0 + 0x2U); if (c_) goto L_00290A3C; }
    v0 = func_00292D30();
    (*(volatile u8 *) (u32) (sp + 147)) = (u8) v0; v0 = func_00292D10();
    (*(volatile u8 *) (u32) (sp + 148)) = (u8) v0;
    a0 = (s32) ((u32) sp + 0x90U); func_0028FE70(a0);
    a6 = 0;
L_00290AB4:;
    a5 = (*(volatile u8 *) (u32) (s5 + 5));
    a6 = (s32) ((u32) a6 + 0x8U);
    a4 = (*(volatile u8 *) (u32) (s5 + 6));
    v1 = a6 < 32;
    a3 = (*(volatile u8 *) (u32) (s5 + 7));
    a2 = (*(volatile u8 *) (u32) (s5 + 8));
    a1 = (*(volatile u8 *) (u32) (s5 + 9));
    a0 = (*(volatile u8 *) (u32) (s5 + 10));
    (*(volatile u8 *) (u32) (s4 + 7)) = (u8) a5;
    (*(volatile u8 *) (u32) (s4 + 8)) = (u8) a4;
    (*(volatile u8 *) (u32) (s4 + 9)) = (u8) a3;
    (*(volatile u8 *) (u32) (s4 + 10)) = (u8) a2;
    (*(volatile u8 *) (u32) (s4 + 11)) = (u8) a1;
    (*(volatile u8 *) (u32) (s4 + 12)) = (u8) a0;
    a1 = (*(volatile u8 *) (u32) (s5 + 11));
    a0 = (*(volatile u8 *) (u32) (s5 + 12));
    (*(volatile u8 *) (u32) (s4 + 13)) = (u8) a1;
    (*(volatile u8 *) (u32) (s4 + 14)) = (u8) a0;
    s5 = (s32) ((u32) s5 + 0x8U);
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x8U); if (c_) goto L_00290AB4; }
    goto L_00290B20;
L_00290B10:;
    v0 = 100;
    (*(volatile u8 *) (u32) (s2 + 327)) = (u8) v0;
    (*(volatile u8 *) (u32) (s2 + 359)) = (u8) 0; goto L_002909D0;
L_00290B20:;
    return;
}
