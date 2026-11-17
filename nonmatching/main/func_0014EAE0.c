/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Texture_GetCacheKey(s64);
s64 Pes6Texture_GetPixels(s64);
s64 Pes6Texture_GetPsm(s64);
void func_001453E0(s64);
s64 func_001454A0(s64);
s64 func_001454B0(s64);

void func_0014EAE0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, t8 = 0;
    s64 hi = 0, lo = 0;

    s5 = a0;
    s4 = a1;
    v0 = Pes6Texture_GetPixels(a0);
    s3 = v0;
    a0 = s4; v0 = Pes6Texture_GetPixels(a0);
    s2 = v0;
    a0 = s5; v0 = func_001454B0(a0);
    s1 = (s64) ((u64) v0 << 48);
    a0 = s5;
    s1 = s1 >> 48; v0 = func_001454A0(a0);
    s0 = (s64) ((u64) v0 << 48);
    a0 = s4;
    s0 = s0 >> 48; v0 = func_001454B0(a0);
    s6 = (s64) ((u64) v0 << 48);
    a0 = s4;
    s6 = s6 >> 48; v0 = func_001454A0(a0);
    a0 = s4; v0 = Pes6Texture_GetPsm(a0);
    a5 = (s64) ((u64) s1 << 48);
    a7 = (s64) ((u64) s6 << 48);
    a5 = a5 >> 48;
    a7 = a7 >> 48;
    if ((s32) a5 != 0) { s64 q_ = (s32) ((s32) a7 / (s32) a5); hi = (s32) ((s32) a7 % (s32) a5); lo = q_; }
    a6 = (s64) ((u64) s0 << 48);
    a6 = a6 >> 48;
    at = 0 < a6;
    a4 = lo;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_0014ED08; }
    t7 = 0;
    t6 = 0;
    { s32 c_ = a4 >= 0; a3 = (s32) a4 >> 1; if (c_) goto L_0014EBA4; }
    v1 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) v1 >> 1;
L_0014EBA4:;
    v1 = 20;
L_0014EBA8:;
    at = 0 < a5;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_0014ECE8; }
    a0 = (s64) ((u64) t7 << 48);
    at = 0 < a5;
    { s32 c_ = at == 0; a0 = a0 >> 48; if (c_) goto L_0014ECE8; }
    a0 = (s64) ((u64) a0 << 48);
    t5 = 0;
    a0 = a0 >> 48;
    t4 = (s32) ((u32) s3 + (u32) t6);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); s4 = lo; }
    { s32 c_ = s4 >= 0; a0 = (s32) s4 >> 1; if (c_) goto L_0014EBE8; }
    a0 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014EBE8:;
    a2 = (s32) ((u32) s2 + (u32) a0);
    { s32 c_ = t6 >= 0; a0 = (s32) t6 >> 1; if (c_) goto L_0014EBFC; }
    a0 = (s32) ((u32) t6 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014EBFC:;
    a1 = (s32) ((u32) s3 + (u32) a0);
    a0 = (s32) ((u32) s2 + (u32) s4);
L_0014EC08:;
    s4 = (s32) ((u32) a3 + (u32) t5);
    t8 = (s64) ((u64) s4 << 48);
    { s32 c_ = v0 != v1; t8 = t8 >> 48; if (c_) goto L_0014ED20; }
    s4 = (s64) ((u64) s1 << 48);
    s4 = s4 >> 48;
    s6 = s4 & 0x1;
    if (s6 == 0) goto L_0014EC80;
    t8 = (s64) ((u64) t8 << 48);
    t8 = t8 >> 48;
    { s32 c_ = t8 >= 0; s6 = (s32) t8 >> 1; if (c_) goto L_0014EC44; }
    s6 = (s32) ((u32) t8 + 0x1U);
    s6 = (s32) s6 >> 1;
L_0014EC44:;
    s6 = (s32) ((u32) a2 + (u32) s6);
    t8 = (s32) s4 >> 1;
    s6 = (*(volatile u8 *) (u32) s6);
    { s32 c_ = s4 >= 0; s6 = (s32) s6 >> 4; if (c_) goto L_0014EC60; }
    s4 = (s32) ((u32) s4 + 0x1U);
    t8 = (s32) s4 >> 1;
L_0014EC60:;
    s4 = (s32) ((u32) a1 + (u32) t8);
    t8 = (s32) ((u32) s6 << 4);
    s6 = (*(volatile u8 *) (u32) s4);
    s6 = s6 & 0xf;
    s6 = t8 | s6;
    (*(volatile u8 *) (u32) s4) = (u8) s6; goto L_0014ECC8;
L_0014EC80:;
    t8 = (s64) ((u64) t8 << 48);
    t8 = t8 >> 48;
    { s32 c_ = t8 >= 0; s6 = (s32) t8 >> 1; if (c_) goto L_0014EC98; }
    s6 = (s32) ((u32) t8 + 0x1U);
    s6 = (s32) s6 >> 1;
L_0014EC98:;
    s6 = (s32) ((u32) a2 + (u32) s6);
    t8 = (s32) s4 >> 1;
    s6 = (*(volatile u8 *) (u32) s6);
    { s32 c_ = s4 >= 0; s6 = s6 & 0xf; if (c_) goto L_0014ECB4; }
    s4 = (s32) ((u32) s4 + 0x1U);
    t8 = (s32) s4 >> 1;
L_0014ECB4:;
    s4 = (s32) ((u32) a1 + (u32) t8);
    t8 = (*(volatile u8 *) (u32) s4);
    t8 = t8 & 0xf0;
    s6 = s6 | t8;
    (*(volatile u8 *) (u32) s4) = (u8) s6;
L_0014ECC8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    s1 = (s64) ((u64) s1 << 48);
    t5 = (s32) ((u32) t5 + (u32) a4);
    s1 = s1 >> 48;
    s4 = s1 < a5;
    { s32 c_ = s4 != 0; t4 = (s32) ((u32) t4 + 0x1U); if (c_) goto L_0014EC08; }
L_0014ECE8:;
    a0 = (s32) ((u32) s0 + 0x1U);
    s0 = (s64) ((u64) a0 << 48);
    t7 = (s32) ((u32) t7 + (u32) a4);
    s0 = s0 >> 48;
    a0 = s0 < a6;
    { s32 c_ = a0 != 0; t6 = (s32) ((u32) t6 + (u32) a5); if (c_) goto L_0014EBA8; }
L_0014ED08:;
    a0 = s5; v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; func_001453E0(a0);
    goto L_0014ED38;
L_0014ED20:;
    s4 = (s64) ((u64) t8 << 48);
    s4 = s4 >> 48;
    s4 = (s32) ((u32) a0 + (u32) s4);
    s4 = (*(volatile u8 *) (u32) s4);
    (*(volatile u8 *) (u32) t4) = (u8) s4; goto L_0014ECC8;
L_0014ED38:;
    return;
}
