/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);

void func_0014FA10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = (s32) ((u32) a3 + (u32) a4);
    at = a3 < s7;
    s5 = a0;
    s6 = a1;
    s4 = a2;
    s3 = a3;
    if (at == 0) goto L_0014FBB8;
    s1 = (s32) ((u32) a3 << 2);
L_0014FA58:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014FAC0;
    v1 = 19;
    if (v0 == v1) goto L_0014FA90;
    goto L_0014FAC8;
L_0014FA90:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    s2 = (s32) ((u32) s0 + (u32) v0); goto L_0014FAD0;
L_0014FAC0:;
    s2 = (s32) ((u32) s0 + (u32) s1); goto L_0014FAD0;
L_0014FAC8:;
    s2 = 0;
L_0014FAD0:;
    a0 = s6; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s6; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014FB38;
    v1 = 19;
    if (v0 == v1) goto L_0014FB08;
    goto L_0014FB40;
L_0014FB08:;
    v1 = (s32) 0x370000U;
    a0 = s3 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s3 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) s0 + (u32) v0); goto L_0014FB48;
L_0014FB38:;
    a0 = (s32) ((u32) s0 + (u32) s1); goto L_0014FB48;
L_0014FB40:;
    a0 = 0;
L_0014FB48:;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) s4);
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 < 0) { (*(volatile u8 *) (u32) s2) = (u8) 0; goto L_0014FB60; }
    (*(volatile u8 *) (u32) s2) = (u8) v0;
L_0014FB60:;
    v1 = (*(volatile u8 *) (u32) (a0 + 1));
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 < 0) goto L_0014FBD0;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v0;
L_0014FB78:;
    v1 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = (*(volatile u8 *) (u32) (s4 + 2));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 < 0) goto L_0014FBD8;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
L_0014FB90:;
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v0 = (*(volatile u8 *) (u32) (s4 + 3));
    v0 = (s32) ((u32) v1 - (u32) v0);
    if (v0 < 0) goto L_0014FBE0;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v0;
L_0014FBA8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s7;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0014FA58; }
L_0014FBB8:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; Pes6TextureCache_Invalidate(a0);
    goto L_0014FBE8;
L_0014FBD0:;
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) 0; goto L_0014FB78;
L_0014FBD8:;
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) 0; goto L_0014FB90;
L_0014FBE0:;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) 0; goto L_0014FBA8;
L_0014FBE8:;
    return;
}
