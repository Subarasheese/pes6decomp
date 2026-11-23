/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001C6158(s32, s32, s32, s32);
void func_0036D060(s32, s32, s32);
s32 func_008E0A20(s32, s32, s32, s32);

void func_0036CC40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[114];
    s32 sp = (s32) (u32) frame;

    s6 = a0;
    s5 = a1;
    a0 = (s32) ((u32) s6 + 0x26dcU);
    s4 = 0;
    s3 = 0;
    s2 = 0;
    (*(volatile u8 *) (u32) (sp + 911)) = (u8) 0;
    s1 = 0;
    s0 = 0; v0 = func_008E0A20(a0, a1, a2, a3);
    a3 = 0;
L_0036CC90:;
    a2 = (s32) ((u32) v0 + (u32) a3);
    a1 = (s32) ((u32) s5 + (u32) a3);
    a0 = (*(volatile u8 *) (u32) a2);
    a3 = (s32) ((u32) a3 + 0x7U);
    v1 = a3 < 14;
    (*(volatile u8 *) (u32) a1) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 2));
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 3));
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 4));
    (*(volatile u8 *) (u32) (a1 + 4)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 5));
    (*(volatile u8 *) (u32) (a1 + 5)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a2 + 6));
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a1 + 6)) = (u8) a0; if (c_) goto L_0036CC90; }
    (*(volatile u8 *) (u32) (s5 + 6)) = (u8) 0;
    a0 = (s32) ((u32) s6 + 0x208U);
    a1 = 32;
    a2 = (s32) ((u32) sp + 0x80U);
    a3 = (s32) ((u32) sp + 0x38fU);
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) 0; func_0036D060(a0, a1, a2);
    a3 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 32;
    a2 = 24;
    a3 = (s32) ((u32) a3 + 0xffffdfb0U); func_001C6158(a0, a1, a2, a3);
    a2 = 0;
    a1 = 0;
    v1 = 0;
    a0 = (s32) ((u32) sp + 0x80U);
L_0036CD20:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    if (v0 == 0) goto L_0036CD38;
    goto L_0036CD60;
L_0036CD38:;
    if (a2 != 0) goto L_0036CD58;
    at = a1 < 5;
    if (at == 0) goto L_0036CD58;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) ((u32) a1 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) v0);
L_0036CD58:;
    a2 = (s32) ((u32) a2 + 0x1U); goto L_0036CDA8;
L_0036CD60:;
    at = a1 < 5;
    if (at == 0) goto L_0036CDA8;
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    if (v0 == 0) goto L_0036CD80;
    v0 = (s32) ((u32) s3 + 0x1U);
    s3 = v0 & 0xff;
L_0036CD80:;
    v0 = (*(volatile u8 *) (u32) (a0 + 20));
    if (v0 == 0) goto L_0036CD98;
    v0 = (s32) ((u32) s4 + 0x1U);
    s4 = v0 & 0xff;
L_0036CD98:;
    v0 = (*(volatile s32 *) (u32) a0);
    a1 = (s32) ((u32) a1 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) v0);
L_0036CDA8:;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = v1 < 32;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x18U); if (c_) goto L_0036CD20; }
    a3 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 32;
    a2 = 24;
    a3 = (s32) ((u32) a3 + 0xffffdfa0U); func_001C6158(a0, a1, a2, a3);
    a0 = 0;
    v1 = 0;
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x80U);
L_0036CDE0:;
    v0 = (*(volatile u8 *) (u32) (a2 + 16));
    if (v0 == 0) goto L_0036CDF8;
    goto L_0036CE20;
L_0036CDF8:;
    if (a0 != 0) goto L_0036CE18;
    at = v1 < 5;
    if (at == 0) goto L_0036CE18;
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    s1 = (s32) ((u32) s1 + (u32) v0);
L_0036CE18:;
    a0 = (s32) ((u32) a0 + 0x1U); goto L_0036CE38;
L_0036CE20:;
    at = v1 < 5;
    if (at == 0) goto L_0036CE38;
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    v1 = (s32) ((u32) v1 + 0x1U);
    s1 = (s32) ((u32) s1 + (u32) v0);
L_0036CE38:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 32;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x18U); if (c_) goto L_0036CDE0; }
    a3 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = 32;
    a2 = 24;
    a3 = (s32) ((u32) a3 + 0xffffdf90U); func_001C6158(a0, a1, a2, a3);
    a3 = 0;
    a4 = 0;
    a5 = (s32) ((u32) sp + 0x80U);
    a0 = 9;
    a1 = 11;
    a2 = 12;
L_0036CE78:;
    v1 = (*(volatile u8 *) (u32) (a5 + 16));
    if (v1 == a2) goto L_0036CEA0;
    if (v1 == a1) goto L_0036CEA0;
    if (v1 == a0) goto L_0036CEA0;
    goto L_0036CEC0;
L_0036CEA0:;
    at = a3 < 3;
    if (at == 0) goto L_0036CEB8;
    v1 = (*(volatile s32 *) (u32) (a5 + 8));
    s0 = (s32) ((u32) s0 + (u32) v1);
L_0036CEB8:;
    a3 = (s32) ((u32) a3 + 0x1U);
L_0036CEC0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 32;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x18U); if (c_) goto L_0036CE78; }
    v1 = (s32) 0x66660000U;
    (*(volatile u8 *) (u32) s5) = (u8) 0;
    a2 = v1 | 0x6667;
    (*(volatile u8 *) (u32) (s5 + 1)) = (u8) 0;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    (*(volatile u8 *) (u32) (s5 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s5 + 4)) = (u8) 0;
    a0 = (s32) ((u32) s2 >> 31);
    (*(volatile u8 *) (u32) (s5 + 3)) = (u8) 0;
    v1 = hi;
    v1 = (s32) v1 >> 1;
    a1 = (s32) ((u32) v1 + (u32) a0);
    at = a1 < 86;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (s5 + 2)) = (u8) 0; if (c_) goto L_0036CF50; }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) s1 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v1 < 81;
    if (at != 0) { at = a1 < 86; goto L_0036CF54; }
    a0 = 1;
    (*(volatile u8 *) (u32) s5) = (u8) a0;
    (*(volatile u8 *) (u32) (s5 + 1)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (sp + 911));
    if (v1 <= 0) { v1 = (s32) 0x55550000U; goto L_0036CFBC; }
    (*(volatile u8 *) (u32) (s5 + 5)) = (u8) a0; goto L_0036CFB8;
L_0036CF50:;
    at = a1 < 86;
L_0036CF54:;
    if (at != 0) { at = a1 < 86; goto L_0036CF7C; }
    a0 = 1;
    (*(volatile u8 *) (u32) s5) = (u8) a0;
    (*(volatile u8 *) (u32) (s5 + 1)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (sp + 911));
    if (v1 <= 0) goto L_0036CFB8;
    (*(volatile u8 *) (u32) (s5 + 5)) = (u8) a0; goto L_0036CFB8;
L_0036CF7C:;
    if (at == 0) goto L_0036CFB8;
    v1 = (s32) 0x66660000U;
    a0 = (s32) ((u32) s1 >> 31);
    v1 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = hi;
    v1 = (s32) v1 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v1 < 81;
    if (at == 0) goto L_0036CFB8;
    (*(volatile u8 *) (u32) s5) = (u8) 0;
    v1 = 1;
    (*(volatile u8 *) (u32) (s5 + 1)) = (u8) v1;
L_0036CFB8:;
    v1 = (s32) 0x55550000U;
L_0036CFBC:;
    a0 = (s32) ((u32) s0 >> 31);
    v1 = v1 | 0x5556;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = v1 < 81;
    if (at != 0) { a0 = s4 & 0xff; goto L_0036CFE8; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s5 + 4)) = (u8) v1;
    a0 = s4 & 0xff;
L_0036CFE8:;
    at = a0 < 2;
    if (at != 0) { v1 = s3 & 0xff; goto L_0036D014; }
    v1 = s3 & 0xff;
    at = v1 < 2;
    if (at != 0) goto L_0036D010;
    v1 = 1;
    (*(volatile u8 *) (u32) (s5 + 3)) = (u8) v1; goto L_0036D02C;
L_0036D010:;
    v1 = s3 & 0xff;
L_0036D014:;
    v1 = (s32) ((u32) a0 + (u32) v1);
    at = v1 < 3;
    if (at == 0) { ; goto L_0036D030; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s5 + 2)) = (u8) v1;
L_0036D02C:;
L_0036D030:;
    return;
}
