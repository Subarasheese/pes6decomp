/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0028DFE0(s64, s64, s64, s64, s64, s64, s64);
s64 func_0028E4E0(s64, s64, s64, s64);
s64 func_0028F230(s64, s64, s64, s64, s64);
s64 memcpy(s64, s64, s64);

s64 func_0028DD70(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[30];
    s64 sp = (s32) (u32) frame;

    s7 = a5;
    s6 = a6;
    s5 = a0;
    s4 = a1;
    s3 = a7;
    s2 = a4;
    a0 = a3 & 0xff;
    s0 = 0;
L_0028DDB8:;
    v1 = (s32) ((u32) s4 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v1 + 296));
    if (v1 != a0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_0028DF94; }
    v1 = (s32) ((u32) s0 + (u32) s6);
    v1 = (*(volatile u8 *) (u32) (v1 + 64));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (v1 + 168));
    if (v1 == 0) goto L_0028DFA0;
    a0 = (*(volatile u8 *) (u32) (v1 + 29));
    a0 = (s64) ((u64) a0 << 56);
    v1 = 2;
    a0 = (s64) ((u64) a0 >> 62);
    if (a0 == v1) goto L_0028DFA0;
    a1 = a2;
    a0 = s4;
    a2 = (s32) ((u32) sp + 0x90U);
    a3 = s3; v0 = func_0028E4E0(a0, a1, a2, a3);
    s1 = (s32) ((u32) sp + 0x90U);
    a0 = 0;
    v1 = s1;
L_0028DE1C:;
    v0 = (s32) ((u32) s3 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 132));
    if (v0 != 0) { (*(volatile u8 *) (u32) (v1 + 32)) = (u8) 0; goto L_0028DE30; }
L_0028DE30:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < 32;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_0028DE1C; }
    v1 = (s32) ((u32) s2 + (u32) s6);
    v0 = s0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v1 + 64));
    a4 = (s32) ((u32) sp + 0xd0U);
    a3 = 1;
    a2 = (s32) ((u32) sp + 0xb0U);
    v1 = (s32) ((u32) a4 + (u32) v0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    v1 = (s32) ((u32) a0 + (u32) sp);
    (*(volatile u8 *) (u32) (v1 + 144)) = (u8) a3;
    v1 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 164)) = (u8) a3;
    a1 = (*(volatile u8 *) (u32) (s3 + 189));
    at = a1 < 32;
    if (at == 0) goto L_0028DEB8;
    a0 = (*(volatile u8 *) (u32) (s3 + 190));
    at = a0 < 11;
    if (at == 0) goto L_0028DEB8;
    v0 = (s32) ((u32) a4 + (u32) a0);
    v1 = (s32) ((u32) a2 + (u32) a1);
    (*(volatile u8 *) (u32) v0) = (u8) a1;
    v0 = (s32) ((u32) a1 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 144)) = (u8) a3;
    v0 = (s32) ((u32) a0 + (u32) s3);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    (*(volatile u8 *) (u32) (v0 + 164)) = (u8) a3;
L_0028DEB8:;
    a0 = s5;
    a1 = s4;
    a2 = (s32) ((u32) sp + 0x90U);
    a3 = s3; v0 = func_0028DFE0(a0, a1, a2, a3, a4, a5, a6);
    s2 = 0;
    s0 = 0;
L_0028DED4:;
    a0 = (*(volatile u8 *) (u32) (s1 + 64));
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) s4 + (u32) v1);
    { s32 c_ = v0 == 0; a1 = (*(volatile s32 *) (u32) (v1 + 168)); if (c_) goto L_0028DFA8; }
    a3 = (s32) ((u32) s4 + (u32) a0);
    v0 = (s32) 0x55550000U;
    v1 = (*(volatile u8 *) (u32) (a3 + 359));
    v0 = v0 | 0x5556;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) v1 >> 31);
    a0 = hi;
    v0 = (*(volatile u8 *) (u32) (a3 + 327));
    v1 = 100;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 5;
    a4 = (s32) ((u32) v0 + (u32) v1);
L_0028DF40:;
    v0 = (s32) ((u32) s4 + (u32) s0);
    a2 = (*(volatile u8 *) (u32) (v0 + 296));
    a0 = s5;
    a3 = s3; v0 = func_0028F230(a0, a1, a2, a3, a4);
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) v0);
    v1 = s0 < 11;
    s1 = (s32) ((u32) s1 + 0x1U);
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0xcU); if (c_) goto L_0028DED4; }
    v1 = (*(volatile s32 *) (u32) s7);
    at = v1 < s2;
    if (at == 0) goto L_0028DFA0;
    a0 = s6;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 96; v0 = memcpy(a0, a1, a2);
    (*(volatile u32 *) (u32) s7) = (u32) s2; goto L_0028DFA0;
L_0028DF94:;
    v1 = s0 < 11;
    if (v1 != 0) goto L_0028DDB8;
L_0028DFA0:;
    goto L_0028DFB0;
L_0028DFA8:;
    a4 = 100; goto L_0028DF40;
L_0028DFB0:;
    return v0;
}
