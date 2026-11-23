/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);

void func_0014F770(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    s6 = (s32) ((u32) a2 + (u32) a3);
    at = a2 < s6;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    if (at == 0) goto L_0014F8B8;
    s1 = (s32) ((u32) a2 << 2);
L_0014F7B0:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014F818;
    v1 = 19;
    if (v0 == v1) goto L_0014F7E8;
    goto L_0014F820;
L_0014F7E8:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    s2 = (s32) ((u32) s0 + (u32) v0); goto L_0014F828;
L_0014F818:;
    s2 = (s32) ((u32) s0 + (u32) s1); goto L_0014F828;
L_0014F820:;
    s2 = 0;
L_0014F828:;
    a0 = s4; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s4; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014F890;
    v1 = 19;
    if (v0 == v1) goto L_0014F860;
    goto L_0014F898;
L_0014F860:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s0 + (u32) v0); goto L_0014F8A0;
L_0014F890:;
    v0 = (s32) ((u32) s0 + (u32) s1); goto L_0014F8A0;
L_0014F898:;
    v0 = 0;
L_0014F8A0:;
    v1 = (*(volatile u8 *) (u32) (v0 + 3));
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s3 < s6;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v1; if (c_) goto L_0014F7B0; }
L_0014F8B8:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; Pes6TextureCache_Invalidate(a0);
    return;
}
