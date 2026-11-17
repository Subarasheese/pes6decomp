/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);

s32 func_0014F8F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s1 = (s32) ((u32) a2 + (u32) a3);
    at = a2 < s1;
    if (at == 0) goto L_0014F9D0;
    s2 = (s32) ((u32) a2 << 2);
L_0014F92C:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014F990;
    v1 = 19;
    if (v0 == v1) goto L_0014F960;
    goto L_0014F998;
L_0014F960:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    a3 = (s32) ((u32) s0 + (u32) v0); goto L_0014F9A0;
L_0014F990:;
    a3 = (s32) ((u32) s0 + (u32) s2); goto L_0014F9A0;
L_0014F998:;
    a3 = 0;
L_0014F9A0:;
    a2 = (*(u8 *) (u32) s4);
    a1 = (*(u8 *) (u32) (s4 + 1));
    s3 = (s32) ((u32) s3 + 0x1U);
    a0 = (*(u8 *) (u32) (s4 + 2));
    v0 = s3 < s1;
    v1 = (*(u8 *) (u32) (s4 + 3));
    s2 = (s32) ((u32) s2 + 0x4U);
    (*(u8 *) (u32) a3) = (u8) a2;
    (*(u8 *) (u32) (a3 + 1)) = (u8) a1;
    (*(u8 *) (u32) (a3 + 2)) = (u8) a0;
    { s32 c_ = v0 != 0; (*(u8 *) (u32) (a3 + 3)) = (u8) v1; if (c_) goto L_0014F92C; }
L_0014F9D0:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; v0 = Pes6TextureCache_Invalidate(a0);
    return v0;
}
