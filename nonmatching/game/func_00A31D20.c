/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_002AE670(s64);
s64 func_009B30B0(s64, s64);

s64 func_00A31D20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    s4 = (*(volatile u16 *) (u32) (a0 + 268));
    s0 = a0;
    s3 = (*(volatile s32 *) (u32) (a0 + 272));
    a0 = (*(volatile u16 *) (u32) (a0 + 38));
    a1 = s4; v0 = func_009B30B0(a0, a1);
    s2 = v0 & 0xffff;
    at = s2 < 41;
    if (at == 0) goto L_00A31D98;
    v0 = (s64) ((u64) s3 << 32);
    at = (s32) 0x10000U;
    v0 = v0 >> 32;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00A31D98;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    at = v0 < 4352;
    if (at == 0) goto L_00A31D98;
    v0 = 4; goto L_00A321E4;
L_00A31D98:;
    v0 = (*(volatile u8 *) (u32) (s0 + 92));
    a0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a1 = 20;
    v0 = (s32) ((u32) v0 >> 2);
    a4 = (s32) ((u32) v0 + 0x2U);
    v0 = (s32) ((u32) a2 << 4);
    s1 = a4 & 0xff;
    a3 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    a2 = (s32) ((u32) a3 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a2 = (s32) ((u32) a2 - (u32) a3);
    v0 = (s32) ((u32) v1 << 3);
    a2 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 99;
    v1 = (s32) 0x66660000U;
    a0 = (s32) ((u32) a0 - (u32) v0);
    v0 = v1 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a0 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = (s32) v1 >> 3;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) s1 + (u32) v1);
    at = v0 < 4353;
    { s32 c_ = at != 0; s1 = v1 & 0xff; if (c_) goto L_00A31E68; }
    v1 = (s32) ((u32) v0 + 0xffffef00U);
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s1 + (u32) v0);
    s1 = v0 & 0xff;
L_00A31E68:;
    at = s2 < 80;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A3212C; }
L_00A31E74:;
    v0 = (*(volatile u8 *) (u32) (s0 + 36));
    if (v0 == 0) goto L_00A31FC0;
    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7100));
    if (a0 == v1) { a0 = s1 & 0xff; goto L_00A31F90; }
    v0 = 4;
    if (a0 == v0) { a0 = s1 & 0xff; goto L_00A31F60; }
    v0 = 3;
    if (a0 == v0) { a0 = s1 & 0xff; goto L_00A31F30; }
    v0 = 1;
    if (a0 == v0) { v1 = s1 & 0xff; goto L_00A31F00; }
    if (a0 == 0) { a0 = s1 & 0xff; goto L_00A31EC8; }
    v0 = (s64) ((u64) s3 << 32); goto L_00A31FC4;
L_00A31EC8:;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x8U);
    s1 = v0 & 0xff; goto L_00A31FC0;
L_00A31F00:;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) v1 << 4);
    v0 = v0 | 0x6667;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0x5U);
    s1 = v0 & 0xff; goto L_00A31FC0;
L_00A31F30:;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xff; goto L_00A31FC0;
L_00A31F60:;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 3);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xff; goto L_00A31FC0;
L_00A31F90:;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xff;
L_00A31FC0:;
    v0 = (s64) ((u64) s3 << 32);
L_00A31FC4:;
    at = (s32) 0x100000U;
    v0 = v0 >> 32;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00A3206C;
    at = s2 < 65;
    if (at == 0) goto L_00A3206C;
    a2 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 200;
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) a0 - (u32) v0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xff;
L_00A3206C:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = s4; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 49;
    if (at != 0) { a2 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_00A32150; }
L_00A3208C:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = 302;
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00A320E0;
    v0 = 421;
    if (v1 == v0) goto L_00A320E0;
    v0 = 422;
    if (v1 == v0) goto L_00A320E0;
    v0 = 420;
    if (v1 == v0) goto L_00A320E0;
    v0 = 276;
    if (v1 == v0) goto L_00A320E0;
    if (v1 == 0) goto L_00A320E0;
    a0 = s1 & 0xff; goto L_00A321D8;
L_00A320E0:;
    a0 = s1 & 0xff;
    v0 = (s32) 0x66660000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = v0 | 0x6667;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 2;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = v0 & 0xff;
    at = v0 < 5;
    if (at != 0) { s1 = 0; goto L_00A321D4; }
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
    s1 = v0 & 0xff; goto L_00A321D4;
L_00A3212C:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s0 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) v0 >> 4);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s1 + (u32) v0);
    s1 = v0 & 0xff; goto L_00A31E74;
L_00A32150:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 20;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 107));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a0 = 200;
    v1 = s1 & 0xff;
    v0 = (s32) ((u32) a0 - (u32) v0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = v0 & 0xff; goto L_00A3208C;
L_00A321D4:;
    a0 = s1 & 0xff;
L_00A321D8:;
    v0 = func_002AE670(a0);
    v0 = v0 & 0xff;
L_00A321E4:;
    return v0;
}
