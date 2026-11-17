/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6TextureCache_Invalidate(s32);
s32 Pes6Texture_GetCacheKey(s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);

s32 func_001509A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a4;
    at = (u64) 0 < (u64) s7;
    s5 = a0;
    s4 = a1;
    s3 = a2;
    s6 = a3;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_00150B18; }
L_001509E8:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_00150A50;
    v1 = 19;
    if (v0 == v1) goto L_00150A20;
    goto L_00150A60;
L_00150A20:;
    a0 = (s32) ((u32) s4 + (u32) s2);
    v0 = (s32) 0x370000U;
    v1 = a0 & 0x1f;
    v0 = (s32) ((u32) v0 + 0x6a50U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = -32;
    v0 = a0 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    s1 = (s32) ((u32) s0 + (u32) v0); goto L_00150A68;
L_00150A50:;
    v0 = (s32) ((u32) s4 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    s1 = (s32) ((u32) s0 + (u32) v0); goto L_00150A68;
L_00150A60:;
    s1 = 0;
L_00150A68:;
    a0 = s3; v0 = Pes6Texture_GetClut(a0);
    s0 = v0;
    a0 = s3; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_00150AD0;
    v1 = 19;
    if (v0 == v1) goto L_00150AA0;
    goto L_00150AE0;
L_00150AA0:;
    a0 = (s32) ((u32) s6 + (u32) s2);
    v0 = (s32) 0x370000U;
    v1 = a0 & 0x1f;
    v0 = (s32) ((u32) v0 + 0x6a50U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = -32;
    v0 = a0 & v0;
    v0 = v0 | v1;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s0 + (u32) v0); goto L_00150AE8;
L_00150AD0:;
    v0 = (s32) ((u32) s6 + (u32) s2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s0 + (u32) v0); goto L_00150AE8;
L_00150AE0:;
    v1 = 0;
L_00150AE8:;
    a2 = (*(volatile u8 *) (u32) v1);
    a1 = (*(volatile u8 *) (u32) (v1 + 1));
    s2 = (s32) ((u32) s2 + 0x1U);
    a0 = (*(volatile u8 *) (u32) (v1 + 2));
    v0 = (u64) s2 < (u64) s7;
    v1 = (*(volatile u8 *) (u32) (v1 + 3));
    (*(volatile u8 *) (u32) s1) = (u8) a2;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) a0;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (s1 + 3)) = (u8) v1; if (c_) goto L_001509E8; }
L_00150B18:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; v0 = Pes6TextureCache_Invalidate(a0);
    return v0;
}
