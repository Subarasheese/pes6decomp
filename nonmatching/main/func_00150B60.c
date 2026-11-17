/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPixels(s32);
s32 Pes6Texture_GetPsm(s32);
s32 func_001453E0(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 memcpy(s32, s32, s32);

s32 func_00150B60(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 hi = 0, lo = 0;

    s4 = a2;
    s1 = a0;
    s0 = a1;
    a0 = s0; v0 = Pes6Texture_GetPixels(a0);
    s5 = v0;
    a0 = s0; v0 = func_001454B0(a0);
    s3 = v0;
    a0 = s0; v0 = func_001454A0(a0);
    s2 = v0;
    a0 = s0; v0 = Pes6Texture_GetPsm(a0);
    at = 0 < s4;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00150C38; }
    a0 = 19;
    a2 = 20;
L_00150BCC:;
    if (v0 != a2) goto L_00150BF0;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    { s32 c_ = a1 >= 0; v1 = (s32) a1 >> 1; if (c_) goto L_00150BE8; }
    v1 = (s32) ((u32) a1 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150BE8:;
    s5 = (s32) ((u32) s5 + (u32) v1);
L_00150BF0:;
    if (v0 != a0) goto L_00150C00;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s5 = (s32) ((u32) s5 + (u32) v1);
L_00150C00:;
    a3 = (s32) ((u32) a3 + 0x1U);
    { s32 c_ = s3 >= 0; v1 = (s32) s3 >> 1; if (c_) goto L_00150C14; }
    v1 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150C14:;
    s3 = v1;
    { s32 c_ = s2 >= 0; v1 = (s32) s2 >> 1; if (c_) goto L_00150C28; }
    v1 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150C28:;
    s2 = v1;
    v1 = a3 < s4;
    if (v1 != 0) goto L_00150BCC;
L_00150C38:;
    v0 = (*(u16 *) (u32) (s1 + 46));
    a0 = s1;
    s3 = (s32) v0 >> 12; v0 = func_001454A0(a0);
    s4 = v0;
    a0 = s1; v0 = func_001454B0(a0);
    a2 = 0;
    at = a2 < 5;
    if (at == 0) goto L_00150C98;
    a1 = (*(u8 *) (u32) (s1 + 25));
    a0 = (s32) 0x370000U;
    a0 = (s32) ((u32) a0 + 0x6a80U);
L_00150C70:;
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(s32 *) (u32) v1);
    if (a1 != v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_00150C8C; }
    s2 = 64; goto L_00150CA0;
L_00150C8C:;
    v1 = a2 < 5;
    if (v1 != 0) goto L_00150C70;
L_00150C98:;
    a2 = 0;
    s2 = 64;
L_00150CA0:;
    if (s3 < 0) goto L_00150D08;
    v1 = (s32) 0x370000U;
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0x68f0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (*(s32 *) (u32) v1);
L_00150CBC:;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_00150CD4; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150CD4:;
    s2 = (s32) ((u32) s2 + (u32) v1);
    s3 = (s32) ((u32) s3 + 0xffffffffU);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_00150CEC; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_00150CEC:;
    v0 = v1;
    { s32 c_ = s4 >= 0; v1 = (s32) s4 >> 1; if (c_) goto L_00150D00; }
    v1 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150D00:;
    { s32 c_ = s3 >= 0; s4 = v1; if (c_) goto L_00150CBC; }
L_00150D08:;
    a0 = s1; v0 = Pes6Texture_GetPixels(a0);
    a2 = (s32) ((u32) s2 + 0xffffffc0U);
    a0 = v0;
    a1 = s5; v0 = memcpy(a0, a1, a2);
    a0 = s1; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; v0 = func_001453E0(a0);
    a0 = s1; v0 = Pes6Texture_GetClut(a0);
    if (v0 == 0) goto L_00150D98;
    a0 = s0; v0 = Pes6Texture_GetClut(a0);
    s2 = v0;
    a0 = s1; v0 = Pes6Texture_GetPsm(a0);
    v1 = 19;
    if (v0 == v1) { s0 = 1024; goto L_00150D70; }
    v1 = 20;
    if (v0 == v1) { s0 = 64; goto L_00150D70; }
    s0 = 0;
L_00150D70:;
    a0 = s1; v0 = Pes6Texture_GetClut(a0);
    a0 = v0;
    a1 = s2;
    a2 = s0; v0 = memcpy(a0, a1, a2);
    a0 = s1; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; v0 = Pes6TextureCache_Invalidate(a0);
L_00150D98:;
    return v0;
}
