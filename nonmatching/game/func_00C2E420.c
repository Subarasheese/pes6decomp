/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00C30C10(s64, s64, s64, s64);
void func_00C31B90(s64, s64, s64);

s64 func_00C2E420(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    v1 = (*(volatile u8 *) (u32) (a1 + 14));
    s6 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = v1 < 0; s1 = 0; if (c_) goto L_00C2E628; }
    v0 = v1 < 5;
    if (v0 != 0) goto L_00C2E478;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4);
L_00C2E478:;
    v0 = (s32) 0xcb0000U;
    v1 = v1 & 0xff;
    v0 = (s32) ((u32) v0 + 0x37f0U);
    a0 = s5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = s4;
    s0 = (*(volatile u8 *) (u32) v0);
    a2 = (s32) ((u32) sp + 0xa0U); func_00C31B90(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef6U);
    v0 = (s32) ((u32) v0 + 0x1ef8U);
    a0 = (s32) ((u32) v1 + (u32) s6);
    v1 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 7107));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = s3 < v0;
    if (at == 0) goto L_00C2E618;
    v0 = (s32) ((u32) s6 << 4);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 - (u32) s6);
    v1 = (s32) ((u32) v1 + 0x2980U);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + 0x1e00U);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (s32) ((u32) a0 << 8);
    s7 = (s32) ((u32) v0 + 0xf8U);
    fp = (s32) ((u32) v0 + 0xf6U);
    s6 = (s32) ((u32) v1 + (u32) a0);
L_00C2E50C:;
    a0 = 100;
    a1 = 0;
    v1 = (s32) ((u32) sp + 0xa0U);
L_00C2E518:;
    v0 = (*(volatile s32 *) (u32) v1);
    at = v0 < a0;
    if (at == 0) goto L_00C2E530;
    a0 = v0;
    s2 = a1;
L_00C2E530:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 11;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_00C2E518; }
    at = s0 < a0;
    if (at != 0) goto L_00C2E618;
    v0 = (s32) ((u32) s5 + (u32) s2);
    v1 = (*(volatile u8 *) (u32) (v0 + 140));
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    a1 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (a1 + 197));
    at = v0 < 31;
    if (at != 0) { a3 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00C2E5C8; }
    v1 = (*(volatile s32 *) (u32) (a1 + 24));
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) (a1 + 216));
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v0 = lo;
    at = v0 < 20;
    if (at == 0) goto L_00C2E5C0;
    a3 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00C2E5C8;
L_00C2E5C0:;
    a3 = (s64) ((u64) 0 + (u64) (s64) 2);
L_00C2E5C8:;
    a0 = s5;
    a1 = s4;
    a2 = s2; v0 = func_00C30C10(a0, a1, a2, a3);
    if (v0 != 0) goto L_00C2E630;
L_00C2E5E0:;
    v0 = (s32) ((u32) s2 << 2);
    a1 = 100;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 160)) = (u32) a1;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) fp);
    v1 = (*(volatile u8 *) (u32) s7);
    v0 = (*(volatile u8 *) (u32) (v0 + 7107));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = s3 < v0;
    if (at != 0) goto L_00C2E50C;
L_00C2E618:;
    if (s1 != 0) goto L_00C2E650;
L_00C2E620:;
    v0 = s1; goto L_00C2E65C;
L_00C2E628:;
    v1 = 0; goto L_00C2E478;
L_00C2E630:;
    a0 = s5;
    a1 = s4;
    a2 = (s32) ((u32) sp + 0xa0U);
    s1 = 1; func_00C31B90(a0, a1, a2);
    goto L_00C2E5E0;
L_00C2E650:;
    v0 = 3;
    (*(volatile u32 *) (u32) (s5 + 16)) = (u32) v0; goto L_00C2E620;
L_00C2E65C:;
    return v0;
}
