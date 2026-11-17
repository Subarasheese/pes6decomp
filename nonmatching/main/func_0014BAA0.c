/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_00151600(s32, s32, s32, s32, s32, s32, s32);
s32 memset(s32, s32, s32);

s32 func_0014BAA0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; v0 = func_001454B0(a0);
    s5 = v0;
    a0 = s1; v0 = func_001454A0(a0);
    a0 = s1;
    s4 = v0; v0 = Pes6Texture_GetPixels(a0);
    a2 = 1;
    a1 = s0;
    s3 = v0;
    a0 = 0;
    a3 = s5;
    a4 = s4;
    a5 = 0;
    a6 = a2; v0 = func_00151600(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    a0 = s0; v0 = Pes6Texture_GetPixels(a0);
    s2 = v0;
    a0 = s0; v0 = Pes6Texture_GetClut(a0);
    s1 = v0;
    a1 = 0;
    a0 = s1;
    a2 = 64; v0 = memset(a0, a1, a2);
    at = 0 < s4;
    t4 = 0;
    { s32 c_ = at == 0; t6 = 0; if (c_) goto L_0014BC74; }
    a7 = s1;
    a5 = (s32) ((u32) sp + 0x7dU);
    a4 = (s32) ((u32) sp + 0x7eU);
    a3 = (s32) ((u32) sp + 0x7fU);
    v0 = 16;
    a2 = 128;
L_0014BB5C:;
    at = 0 < s5;
    { s32 c_ = at == 0; t7 = 0; if (c_) goto L_0014BC64; }
L_0014BB68:;
    t8 = (*(u8 *) (u32) s3);
    v1 = a2;
    a6 = (*(u8 *) (u32) (s3 + 1));
    at = 0 < t4;
    a1 = (*(u8 *) (u32) (s3 + 2));
    t5 = 0;
    a0 = (*(u8 *) (u32) (s3 + 3));
    t8 = (s32) ((u32) t8 << 3);
    a6 = (s32) ((u32) a6 << 3);
    (*(u8 *) (u32) (sp + 124)) = (u8) t8;
    a1 = (s32) ((u32) a1 << 3);
    (*(u8 *) (u32) a5) = (u8) a6;
    if (a0 == 0) v1 = 0;
    (*(u8 *) (u32) a4) = (u8) a1;
    { s32 c_ = at == 0; (*(u8 *) (u32) a3) = (u8) v1; if (c_) goto L_0014BC00; }
    a1 = (*(u8 *) (u32) (sp + 124));
    a6 = s1;
    t9 = (*(u8 *) (u32) a3);
    v1 = (*(u8 *) (u32) a4);
    a0 = (*(u8 *) (u32) a5);
L_0014BBBC:;
    t8 = (*(u8 *) (u32) a6);
    if (a1 != t8) goto L_0014BBF0;
    t8 = (*(u8 *) (u32) (a6 + 1));
    if (a0 != t8) goto L_0014BBF0;
    t8 = (*(u8 *) (u32) (a6 + 2));
    if (v1 != t8) goto L_0014BBF0;
    t8 = (*(u8 *) (u32) (a6 + 3));
    if (t9 == t8) goto L_0014BC00;
L_0014BBF0:;
    t5 = (s32) ((u32) t5 + 0x1U);
    t8 = t5 < t4;
    { s32 c_ = t8 != 0; a6 = (s32) ((u32) a6 + 0x4U); if (c_) goto L_0014BBBC; }
L_0014BC00:;
    if (t5 != t4) goto L_0014BC8C;
    if (t4 == v0) { a0 = s0; goto L_0014BC7C; }
    a6 = (*(u8 *) (u32) (sp + 124));
    t4 = (s32) ((u32) t4 + 0x1U);
    a1 = (*(u8 *) (u32) (sp + 125));
    a0 = (*(u8 *) (u32) (sp + 126));
    v1 = (*(u8 *) (u32) (sp + 127));
    (*(u8 *) (u32) a7) = (u8) a6;
    (*(u8 *) (u32) (a7 + 1)) = (u8) a1;
    (*(u8 *) (u32) (a7 + 2)) = (u8) a0;
    (*(u8 *) (u32) (a7 + 3)) = (u8) v1;
    a7 = (s32) ((u32) a7 + 0x4U); goto L_0014BC8C;
L_0014BC3C:;
    a0 = (s32) ((u32) t5 << 4);
    a0 = a0 & 0xff;
    v1 = v1 | a0;
    (*(u8 *) (u32) s2) = (u8) v1;
    s2 = (s32) ((u32) s2 + 0x1U); goto L_0014BC54;
L_0014BC54:;
    t7 = (s32) ((u32) t7 + 0x1U);
    v1 = t7 < s5;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x2U); if (c_) goto L_0014BB68; }
L_0014BC64:;
    t6 = (s32) ((u32) t6 + 0x1U);
    v1 = t6 < s4;
    if (v1 != 0) goto L_0014BB5C;
L_0014BC74:;
    v0 = s0; goto L_0014BCA0;
L_0014BC7C:;
    v0 = Pes6Heap_Free(a0, a1);
    v0 = 0; goto L_0014BCA0;
L_0014BC8C:;
    v1 = t7 & 0x1;
    if (v1 == 0) { (*(u8 *) (u32) s2) = (u8) t5; goto L_0014BC54; }
    v1 = (*(u8 *) (u32) s2); goto L_0014BC3C;
L_0014BCA0:;
    return v0;
}
