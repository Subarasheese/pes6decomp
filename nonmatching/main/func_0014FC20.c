/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);

s32 func_0014FC20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 hi1 = 0, lo1 = 0;
    s32 hi = 0, lo = 0;

    s7 = (s32) ((u32) a3 + (u32) a4);
    at = a3 < s7;
    s5 = a0;
    s6 = a1;
    s4 = a2;
    s3 = a3;
    if (at == 0) goto L_0014FE20;
    s1 = (s32) ((u32) a3 << 2);
L_0014FC68:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014FCD0;
    v1 = 19;
    if (v0 == v1) goto L_0014FCA0;
    goto L_0014FCD8;
L_0014FCA0:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    s2 = (s32) ((u32) s0 + (u32) v0); goto L_0014FCE0;
L_0014FCD0:;
    s2 = (s32) ((u32) s0 + (u32) s1); goto L_0014FCE0;
L_0014FCD8:;
    s2 = 0;
L_0014FCE0:;
    a0 = s6; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s6; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014FD48;
    v1 = 19;
    if (v0 == v1) goto L_0014FD18;
    goto L_0014FD50;
L_0014FD18:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s0 + (u32) v0); goto L_0014FD58;
L_0014FD48:;
    v1 = (s32) ((u32) s0 + (u32) s1); goto L_0014FD58;
L_0014FD50:;
    v1 = 0;
L_0014FD58:;
    a0 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) s4);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v0 = (s32) 0x80800000U;
    v0 = v0 | 0x8081;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) a0 >> 7;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    a1 = (*(volatile u8 *) (u32) (v1 + 1));
    a0 = (*(volatile u8 *) (u32) (s4 + 1));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a2 = lo1; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) a0 >> 7;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) a0;
    a1 = (*(volatile u8 *) (u32) (v1 + 2));
    a0 = (*(volatile u8 *) (u32) (s4 + 2));
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    a0 = hi;
    a0 = (s32) ((u32) a0 + (u32) a2);
    a0 = (s32) a0 >> 7;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (v1 + 3));
    v1 = (*(volatile u8 *) (u32) (s4 + 3));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a1 = lo1; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a1 >> 31);
    v1 = hi;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s7;
    s1 = (s32) ((u32) s1 + 0x4U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v1; if (c_) goto L_0014FC68; }
L_0014FE20:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; v0 = Pes6TextureCache_Invalidate(a0);
    return v0;
}
