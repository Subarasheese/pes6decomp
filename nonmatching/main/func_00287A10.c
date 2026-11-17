/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00277210(s64);
s64 func_00277360(s64);
s64 func_00288580(void);
s64 func_002886B0(s64, s64, s64, s64, s64, s64);
s64 func_00292BD0(void);
s64 func_00292BF0(void);

s64 func_00287A10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 hi = 0, lo = 0;

    v1 = (s32) ((u32) a1 << 4);
    a2 = (s32) ((u32) v1 - (u32) a1);
    v0 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v1 = (s32) 0x590000U;
    s0 = (s32) ((u32) v0 << 8);
    s1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + 0x2995U);
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile u8 *) (u32) (v0 + 7100));
    v0 = (s32) ((u32) s1 + (u32) a1);
    at = v1 < 2;
    s2 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00287B64; }
    a1 = (s32) 0x590000U;
    a3 = 0;
    a2 = 0;
    a4 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
L_00287A90:;
    v0 = (*(volatile u8 *) (u32) a1);
    at = v0 < 8;
    if (at == 0) goto L_00287AB0;
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    { s32 c_ = a0 != v0; a3 = (s32) ((u32) a3 + 0x1U); if (c_) goto L_00287AB0; }
    a2 = (s32) ((u32) a2 + 0x1U);
L_00287AB0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_00287A90; }
    if (a3 == 0) goto L_00287B64;
    if (a2 != 0) goto L_00287B64;
    if (v1 == 0) goto L_00287AE4;
    v0 = 1;
    if (v1 == v0) { s2 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00287B64; }
L_00287AE4:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_00287B64;
L_00287AEC:;
    v0 = func_00292BD0();
    if (v0 == 0) goto L_00287B00;
    s3 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00287B00:;
    v0 = func_00288580();
    if (v0 != 0) goto L_00287B78;
L_00287B10:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x2980U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    s4 = (s32) ((u32) s1 + (u32) v0);
    s0 = (s32) ((u32) s4 + 0xf0U);
    a0 = s0; v0 = func_00277360(a0);
    a0 = s0;
    s1 = v0; v0 = func_00277210(a0);
    s0 = v0; v0 = func_00292BF0();
    a0 = (s32) ((u32) s4 + 0x68U);
    a1 = s2;
    a2 = s1;
    a3 = s0;
    a4 = s3;
    a5 = v0 & 0xff; v0 = func_002886B0(a0, a1, a2, a3, a4, a5);
    goto L_00287BDC;
L_00287B64:;
    v0 = 1;
    if (a0 != v0) goto L_00287B00;
    goto L_00287AEC;
L_00287B78:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 + 0x2980U);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a3 = (s32) ((u32) s1 + (u32) v1);
    a2 = (*(volatile u8 *) (u32) (a3 + 111));
    a1 = a2 & 0x7f;
    v1 = (s32) ((u32) a1 << 3);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v0 = -128;
    v0 = a2 & v0;
    v1 = (s32) v1 >> 5;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) a1 - (u32) v1);
    v1 = v1 & 0x7f;
    v0 = v0 | v1;
    (*(volatile u8 *) (u32) (a3 + 111)) = (u8) v0; goto L_00287B10;
L_00287BDC:;
    return v0;
}
