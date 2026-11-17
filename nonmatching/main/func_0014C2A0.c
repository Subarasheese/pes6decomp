/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_0014D780(s32, s32);
s32 func_00151600(s32, s32, s32, s32, s32, s32, s32);
s32 func_00154070(s32);
s32 memcpy(s32, s32, s32);
s32 memset(s32, s32, s32);

s32 func_0014C2A0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

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
    v1 = 0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_0014C420; }
    v0 = s1;
    a7 = 256;
L_0014C34C:;
    at = 0 < s5;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_0014C410; }
L_0014C358:;
    at = 0 < v1;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_0014C3C0; }
    a5 = (*(u8 *) (u32) s3);
    a6 = s1;
L_0014C370:;
    a3 = (*(u8 *) (u32) a6);
    if (a5 != a3) goto L_0014C3B0;
    a4 = (*(u8 *) (u32) (s3 + 1));
    a3 = (*(u8 *) (u32) (a6 + 1));
    if (a4 != a3) goto L_0014C3B0;
    a4 = (*(u8 *) (u32) (s3 + 2));
    a3 = (*(u8 *) (u32) (a6 + 2));
    if (a4 != a3) goto L_0014C3B0;
    a4 = (*(u8 *) (u32) (s3 + 3));
    a3 = (*(u8 *) (u32) (a6 + 3));
    if (a4 == a3) goto L_0014C3C0;
L_0014C3B0:;
    a0 = (s32) ((u32) a0 + 0x1U);
    a3 = a0 < v1;
    { s32 c_ = a3 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_0014C370; }
L_0014C3C0:;
    if (a0 != v1) goto L_0014C3F8;
    if (v1 == a7) { a0 = s0; goto L_0014C480; }
    a6 = (*(u8 *) (u32) s3);
    v1 = (s32) ((u32) v1 + 0x1U);
    a5 = (*(u8 *) (u32) (s3 + 1));
    a4 = (*(u8 *) (u32) (s3 + 2));
    a3 = (*(u8 *) (u32) (s3 + 3));
    (*(u8 *) (u32) v0) = (u8) a6;
    (*(u8 *) (u32) (v0 + 1)) = (u8) a5;
    (*(u8 *) (u32) (v0 + 2)) = (u8) a4;
    (*(u8 *) (u32) (v0 + 3)) = (u8) a3;
    v0 = (s32) ((u32) v0 + 0x4U);
L_0014C3F8:;
    (*(u8 *) (u32) s2) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    a0 = a2 < s5;
    { s32 c_ = a0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_0014C358; }
L_0014C410:;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = a1 < s4;
    if (a0 != 0) goto L_0014C34C;
L_0014C420:;
    a1 = 0;
    at = a1 < 5;
    if (at == 0) goto L_0014C468;
    a0 = (*(u8 *) (u32) (s0 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_0014C43C:;
    v0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(s32 *) (u32) v0);
    if (a0 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0014C458; }
    v0 = 2; goto L_0014C470;
L_0014C458:;
    v0 = a1 < 5;
    if (v0 != 0) goto L_0014C43C;
L_0014C468:;
    a1 = 0;
    v0 = 2;
L_0014C470:;
    if (a1 == v0) { a0 = 1024; goto L_0014C490; }
L_0014C478:;
    v0 = s0; goto L_0014C4D0;
L_0014C480:;
    v0 = Pes6Heap_Free(a0, a1);
    v0 = 0; goto L_0014C4D0;
L_0014C490:;
    v0 = func_00154070(a0);
    s1 = v0;
    a0 = s0; v0 = Pes6Texture_GetClut(a0);
    a1 = v0;
    a0 = s1;
    a2 = 1024; v0 = memcpy(a0, a1, a2);
    a0 = s0;
    a1 = s1; v0 = func_0014D780(a0, a1);
    a0 = s1; v0 = Pes6Heap_Free(a0, a1);
    goto L_0014C478;
L_0014C4D0:;
    return v0;
}
