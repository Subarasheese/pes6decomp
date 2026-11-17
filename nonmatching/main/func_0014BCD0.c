/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Free(s64, s64);
s64 Pes6Texture_GetClut(s64);
s64 Pes6Texture_GetPixels(s64);
s64 func_001454A0(s64);
s64 func_001454B0(s64);
s64 func_0014D780(s64, s64);
s64 func_00151600(s64, s64, s64, s64, s64, s64, s64);
s64 func_00154070(s64);
s64 memcpy(s64, s64, s64);
s64 memset(s64, s64, s64);

s64 func_0014BCD0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; v0 = func_001454B0(a0);
    s5 = v0;
    a0 = s1; v0 = func_001454A0(a0);
    a0 = s1;
    s4 = v0; v0 = Pes6Texture_GetPixels(a0);
    a1 = s0;
    s3 = v0;
    a0 = 0;
    a2 = 2;
    a3 = s5;
    a4 = s4;
    a5 = 0;
    a6 = 1; v0 = func_00151600(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    a0 = s0; v0 = Pes6Texture_GetPixels(a0);
    s2 = v0;
    a0 = s0; v0 = Pes6Texture_GetClut(a0);
    s1 = v0;
    a1 = 0;
    a0 = s1;
    a2 = 1024; v0 = memset(a0, a1, a2);
    at = 0 < s4;
    t4 = 0;
    { s32 c_ = at == 0; t6 = 0; if (c_) goto L_0014BEA8; }
    a7 = s1;
    a5 = (s32) ((u32) sp + 0x7dU);
    a4 = (s32) ((u32) sp + 0x7eU);
    a3 = (s32) ((u32) sp + 0x7fU);
    v0 = 256;
    a2 = 128;
L_0014BD8C:;
    at = 0 < s5;
    { s32 c_ = at == 0; t7 = 0; if (c_) goto L_0014BE98; }
L_0014BD98:;
    a1 = (*(volatile u8 *) (u32) s3);
    v1 = a2;
    a0 = (*(volatile u16 *) (u32) s3);
    at = 0 < t4;
    a6 = (*(volatile u8 *) (u32) (s3 + 1));
    t5 = 0;
    a1 = a1 & 0x1f;
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s64) ((u64) a0 << 54);
    (*(volatile u8 *) (u32) (sp + 124)) = (u8) a1;
    a0 = (s64) ((u64) a0 >> 59);
    a1 = (s32) ((u32) a0 << 3);
    a0 = (s64) ((u64) a6 << 57);
    (*(volatile u8 *) (u32) a5) = (u8) a1;
    a0 = (s64) ((u64) a0 >> 59);
    a1 = (s32) ((u32) a0 << 3);
    a0 = (s64) ((u64) a6 << 56);
    (*(volatile u8 *) (u32) a4) = (u8) a1;
    a0 = (s64) ((u64) a0 >> 63);
    if (a0 == 0) v1 = 0;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) a3) = (u8) v1; if (c_) goto L_0014BE48; }
    a1 = (*(volatile u8 *) (u32) (sp + 124));
    a6 = s1;
    t9 = (*(volatile u8 *) (u32) a3);
    v1 = (*(volatile u8 *) (u32) a4);
    a0 = (*(volatile u8 *) (u32) a5);
L_0014BE04:;
    t8 = (*(volatile u8 *) (u32) a6);
    if (a1 != t8) goto L_0014BE38;
    t8 = (*(volatile u8 *) (u32) (a6 + 1));
    if (a0 != t8) goto L_0014BE38;
    t8 = (*(volatile u8 *) (u32) (a6 + 2));
    if (v1 != t8) goto L_0014BE38;
    t8 = (*(volatile u8 *) (u32) (a6 + 3));
    if (t9 == t8) goto L_0014BE48;
L_0014BE38:;
    t5 = (s32) ((u32) t5 + 0x1U);
    t8 = t5 < t4;
    { s32 c_ = t8 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_0014BE04; }
L_0014BE48:;
    if (t5 != t4) goto L_0014BE80;
    if (t4 == v0) { a0 = s0; goto L_0014BF08; }
    a6 = (*(volatile u8 *) (u32) (sp + 124));
    t4 = (s32) ((u32) t4 + 0x1U);
    a1 = (*(volatile u8 *) (u32) (sp + 125));
    a0 = (*(volatile u8 *) (u32) (sp + 126));
    v1 = (*(volatile u8 *) (u32) (sp + 127));
    (*(volatile u8 *) (u32) a7) = (u8) a6;
    (*(volatile u8 *) (u32) (a7 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (a7 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (a7 + 3)) = (u8) v1;
    a7 = (s32) ((u32) a7 + 0x4U);
L_0014BE80:;
    t7 = (s32) ((u32) t7 + 0x1U);
    (*(volatile u8 *) (u32) s2) = (u8) t5;
    v1 = t7 < s5;
    s3 = (s32) ((u32) s3 + 0x2U);
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_0014BD98; }
L_0014BE98:;
    t6 = (s32) ((u32) t6 + 0x1U);
    v1 = t6 < s4;
    if (v1 != 0) goto L_0014BD8C;
L_0014BEA8:;
    a1 = 0;
    at = a1 < 5;
    if (at == 0) goto L_0014BEF0;
    a0 = (*(volatile u8 *) (u32) (s0 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_0014BEC4:;
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (a0 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0014BEE0; }
    v0 = 2; goto L_0014BEF8;
L_0014BEE0:;
    v0 = a1 < 5;
    if (v0 != 0) goto L_0014BEC4;
L_0014BEF0:;
    a1 = 0;
    v0 = 2;
L_0014BEF8:;
    if (a1 == v0) { a0 = 1024; goto L_0014BF18; }
L_0014BF00:;
    v0 = s0; goto L_0014BF58;
L_0014BF08:;
    v0 = Pes6Heap_Free(a0, a1);
    v0 = 0; goto L_0014BF58;
L_0014BF18:;
    v0 = func_00154070(a0);
    s1 = v0;
    a0 = s0; v0 = Pes6Texture_GetClut(a0);
    a1 = v0;
    a0 = s1;
    a2 = 1024; v0 = memcpy(a0, a1, a2);
    a0 = s0;
    a1 = s1; v0 = func_0014D780(a0, a1);
    a0 = s1; v0 = Pes6Heap_Free(a0, a1);
    goto L_0014BF00;
L_0014BF58:;
    return v0;
}
