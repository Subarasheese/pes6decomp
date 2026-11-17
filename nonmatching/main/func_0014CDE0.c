/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_00151600(s32, s32, s32, s32, s32, s32, s32);

s32 func_0014CDE0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, t8 = 0, t9 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    s0 = a1; v0 = func_001454B0(a0);
    s4 = v0;
    a0 = s1; v0 = func_001454A0(a0);
    s3 = v0;
    a0 = s1; v0 = Pes6Texture_GetPixels(a0);
    a0 = s1;
    s2 = v0; v0 = Pes6Texture_GetClut(a0);
    a1 = s0;
    a0 = 0;
    s0 = v0;
    a2 = 3;
    a3 = s4;
    a4 = s3;
    a5 = 0;
    a6 = 1; v0 = func_00151600(a0, a1, a2, a3, a4, a5, a6);
    s1 = v0;
    a0 = s1; v0 = Pes6Texture_GetPixels(a0);
    at = 0 < s3;
    { s32 c_ = at == 0; a7 = 0; if (c_) goto L_0014CF9C; }
    a3 = (s32) 0x370000U;
    a6 = (s32) ((u32) sp + 0x7dU);
    a5 = (s32) ((u32) sp + 0x7eU);
    a4 = (s32) ((u32) sp + 0x7fU);
    a3 = (s32) ((u32) a3 + 0x6a70U);
    a2 = -32;
    a0 = -993;
    v1 = -125;
    t6 = -129;
L_0014CE90:;
    at = 0 < s4;
    { s32 c_ = at == 0; t4 = 0; if (c_) goto L_0014CF8C; }
L_0014CE9C:;
    a1 = (*(u8 *) (u32) s2);
    s2 = (s32) ((u32) s2 + 0x1U);
    { s32 c_ = a1 >= 0; t7 = a1 & 0x1f; if (c_) goto L_0014CEB8; }
    if (t7 == 0) goto L_0014CEB8;
    t7 = (s32) ((u32) t7 + 0xffffffe0U);
L_0014CEB8:;
    { s32 c_ = t7 >= 0; t5 = (s32) t7 >> 3; if (c_) goto L_0014CEC8; }
    t5 = (s32) ((u32) t7 + 0x7U);
    t5 = (s32) t5 >> 3;
L_0014CEC8:;
    t5 = (s32) ((u32) t5 << 2);
    t7 = (*(u8 *) (u32) v0);
    t5 = (s32) ((u32) a3 + (u32) t5);
    t4 = (s32) ((u32) t4 + 0x1U);
    s5 = (*(s32 *) (u32) t5);
    t9 = t7 & a2;
    a1 = (s32) ((u32) a1 + (u32) s5);
    t5 = t4 < s4;
    a1 = a1 & 0xff;
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) s0 + (u32) a1);
    t8 = (*(u8 *) (u32) a1);
    s5 = (*(u8 *) (u32) (a1 + 1));
    t7 = (*(u8 *) (u32) (a1 + 2));
    (*(u8 *) (u32) (sp + 124)) = (u8) t8;
    (*(u8 *) (u32) (sp + 125)) = (u8) s5;
    s5 = (*(u8 *) (u32) (sp + 124));
    a1 = (*(u8 *) (u32) (a1 + 3));
    (*(u8 *) (u32) (sp + 126)) = (u8) t7;
    t8 = (*(u8 *) (u32) a5);
    s5 = (s32) s5 >> 3;
    (*(u8 *) (u32) (sp + 127)) = (u8) a1;
    s5 = s5 & 0x1f;
    a1 = (*(u8 *) (u32) a6);
    t9 = t9 | s5;
    (*(u8 *) (u32) v0) = (u8) t9;
    t8 = (s32) t8 >> 3;
    t9 = (*(u16 *) (u32) v0);
    t8 = t8 & 0x1f;
    t7 = (*(u8 *) (u32) a4);
    t8 = (s32) ((u32) t8 << 2);
    a1 = (s32) a1 >> 3;
    a1 = a1 & 0x1f;
    a1 = (s32) ((u32) a1 << 5);
    t9 = t9 & a0;
    a1 = t9 | a1;
    t7 = (u64) 0 < (u64) t7;
    (*(u16 *) (u32) v0) = (u16) a1;
    t7 = (s32) ((u32) t7 << 7);
    a1 = (*(u8 *) (u32) (v0 + 1));
    a1 = a1 & v1;
    a1 = a1 | t8;
    (*(u8 *) (u32) (v0 + 1)) = (u8) a1;
    a1 = (*(u8 *) (u32) (v0 + 1));
    a1 = a1 & t6;
    a1 = a1 | t7;
    (*(u8 *) (u32) (v0 + 1)) = (u8) a1;
    { s32 c_ = t5 != 0; v0 = (s32) ((u32) v0 + 0x2U); if (c_) goto L_0014CE9C; }
L_0014CF8C:;
    a7 = (s32) ((u32) a7 + 0x1U);
    a1 = a7 < s3;
    if (a1 != 0) goto L_0014CE90;
L_0014CF9C:;
    v0 = s1;
    return v0;
}
