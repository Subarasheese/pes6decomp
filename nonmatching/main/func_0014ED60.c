/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Texture_GetCacheKey(s64);
s64 Pes6Texture_GetClut(s64);
s64 Pes6Texture_GetPixels(s64);
s64 Pes6Texture_GetPsm(s64);
void func_001453E0(s64);
s64 func_001454A0(s64);
s64 func_001454B0(s64);

void func_0014ED60(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[166];
    s64 sp = (s32) (u32) frame;

    s5 = a1;
    s4 = a4;
    (*(volatile u32 *) (u32) (sp + 300)) = (u32) a0;
    a0 = s5;
    (*(volatile u16 *) (u32) (sp + 272)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 256)) = (u16) a3;
    v0 = Pes6Texture_GetPixels(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    s2 = v0; v0 = Pes6Texture_GetPixels(a0);
    s3 = v0;
    a0 = (*(volatile u16 *) (u32) (s5 + 46));
    v0 = (*(volatile s32 *) (u32) (sp + 300));
    v1 = (*(volatile u16 *) (u32) (v0 + 46));
    v0 = (s32) a0 >> 12;
    v1 = (s32) v1 >> 12;
    at = v1 < v0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0; if (c_) goto L_0014EFC8; }
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v1; goto L_0014EFC8;
L_0014EDE0:;
    v0 = 16; goto L_0014EDF0;
L_0014EDE8:;
    v0 = 256; goto L_0014EDF0;
L_0014EDF0:;
    s7 = (s32) ((u32) v0 + 0xffffffffU);
    if (s7 >= 0) { v0 = (s32) ((u32) s7 << 2); goto L_0014F040; }
    v0 = (*(volatile s32 *) (u32) (sp + 208));
L_0014EE00:;
    at = v0 < 0;
    { s32 c_ = at != 0; t9 = 0; if (c_) goto L_0014F298; }
    v0 = 20;
L_0014EE10:;
    v1 = (*(volatile s16 *) (u32) (sp + 240));
    a6 = v1;
    at = 0 < a6;
    { s32 c_ = at == 0; t7 = 0; if (c_) goto L_0014F2B0; }
    v1 = (*(volatile s16 *) (u32) (sp + 256));
    a5 = (s64) ((u64) s6 << 48);
    a2 = (s64) ((u64) fp << 48);
    a5 = a5 >> 48;
    t4 = 0;
    a2 = a2 >> 48;
    t5 = v1;
    v1 = (*(volatile s16 *) (u32) (sp + 224));
    a4 = v1;
    v1 = (*(volatile s16 *) (u32) (sp + 272));
    a3 = v1;
L_0014EE50:;
    a0 = (s64) ((u64) t5 << 48);
    a0 = a0 >> 48;
    if (a0 < 0) goto L_0014F120;
    at = a0 < a4;
    if (at == 0) goto L_0014F120;
    at = 0 < a5;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_0014F120; }
    a7 = (s32) ((u32) s2 + (u32) t4);
    { s32 c_ = t4 >= 0; v1 = (s32) t4 >> 1; if (c_) goto L_0014EE8C; }
    v1 = (s32) ((u32) t4 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0014EE8C:;
    a1 = (s32) ((u32) s2 + (u32) v1);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_0014EEA4; }
    a0 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014EEA4:;
    a0 = (s32) ((u32) s3 + (u32) a0);
    v1 = (s32) ((u32) s3 + (u32) v1);
L_0014EEB0:;
    t6 = (s64) ((u64) s5 << 48);
    t6 = t6 >> 48;
    s7 = (s32) ((u32) a3 + (u32) t6);
    s7 = (s64) ((u64) s7 << 48);
    s7 = s7 >> 48;
    if (s7 < 0) goto L_0014F108;
    at = s7 < a2;
    if (at == 0) goto L_0014F108;
    if (s1 != v0) goto L_0014EF30;
    t8 = t6 & 0x1;
    if (t8 == 0) goto L_0014EF10;
    { s32 c_ = t6 >= 0; t8 = (s32) t6 >> 1; if (c_) goto L_0014EEFC; }
    t6 = (s32) ((u32) t6 + 0x1U);
    t8 = (s32) t6 >> 1;
L_0014EEFC:;
    t6 = (s32) ((u32) a1 + (u32) t8);
    t6 = (*(volatile u8 *) (u32) t6);
    t6 = (s32) t6 >> 4; goto L_0014EF38;
L_0014EF10:;
    { s32 c_ = t6 >= 0; t8 = (s32) t6 >> 1; if (c_) goto L_0014EF20; }
    t6 = (s32) ((u32) t6 + 0x1U);
    t8 = (s32) t6 >> 1;
L_0014EF20:;
    t6 = (s32) ((u32) a1 + (u32) t8);
    t6 = (*(volatile u8 *) (u32) t6);
    t6 = t6 & 0xf; goto L_0014EF38;
L_0014EF30:;
    t6 = (*(volatile u8 *) (u32) a7);
L_0014EF38:;
    at = s4 < 0;
    if (at != 0) goto L_0014EF60;
    t8 = (s32) ((u32) t6 << 2);
    t8 = (s32) ((u32) t8 + (u32) sp);
    t8 = (*(volatile s32 *) (u32) (t8 + 304));
    t8 = (*(volatile u8 *) (u32) (t8 + 3));
    if (t8 == 0) goto L_0014F108;
    t6 = (s32) ((u32) t6 + (u32) s4);
L_0014EF60:;
    if (s0 != v0) { s7 = (s32) ((u32) v1 + (u32) s7); goto L_0014F100; }
    t8 = s7 & 0x1;
    if (t8 == 0) goto L_0014EFA0;
    { s32 c_ = s7 >= 0; t8 = (s32) s7 >> 1; if (c_) goto L_0014EF84; }
    s7 = (s32) ((u32) s7 + 0x1U);
    t8 = (s32) s7 >> 1;
L_0014EF84:;
    s7 = (s32) ((u32) a0 + (u32) t8);
    t6 = (s32) ((u32) t6 << 4);
    t8 = (*(volatile u8 *) (u32) s7);
    t8 = t8 & 0xf;
    t6 = t6 | t8;
    (*(volatile u8 *) (u32) s7) = (u8) t6; goto L_0014F108;
L_0014EFA0:;
    { s32 c_ = s7 >= 0; t8 = (s32) s7 >> 1; if (c_) goto L_0014EFB0; }
    s7 = (s32) ((u32) s7 + 0x1U);
    t8 = (s32) s7 >> 1;
L_0014EFB0:;
    s7 = (s32) ((u32) a0 + (u32) t8);
    t8 = (*(volatile u8 *) (u32) s7);
    t8 = t8 & 0xf0;
    t6 = t6 | t8;
    (*(volatile u8 *) (u32) s7) = (u8) t6; goto L_0014F108;
L_0014EFC8:;
    a0 = s5; v0 = func_001454B0(a0);
    s6 = (s64) ((u64) v0 << 48);
    a0 = s5;
    s6 = s6 >> 48; v0 = func_001454A0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    (*(volatile u16 *) (u32) (sp + 240)) = (u16) v0; v0 = func_001454B0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    fp = (s64) ((u64) v0 << 48);
    fp = fp >> 48; v0 = func_001454A0(a0);
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 300));
    s1 = v0; v0 = Pes6Texture_GetPsm(a0);
    s0 = v0;
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 19;
    if (v0 == v1) goto L_0014EDE8;
    v1 = 20;
    if (v0 == v1) goto L_0014EDE0;
    v0 = 0; goto L_0014EDF0;
L_0014F040:;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (s32) ((u32) v0 + 0x130U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
L_0014F050:;
    a0 = s5; v0 = Pes6Texture_GetClut(a0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s5; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) goto L_0014F0B8;
    v1 = 19;
    if (v0 == v1) goto L_0014F088;
    goto L_0014F0C8;
L_0014F088:;
    v1 = (s32) 0x370000U;
    a0 = s7 & 0x1f;
    v1 = (s32) ((u32) v1 + 0x6a50U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = -32;
    v1 = (*(volatile s8 *) (u32) v1);
    v0 = s7 & v0;
    v0 = v0 | v1;
    v1 = (s32) ((u32) v0 << 2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v0 + (u32) v1); goto L_0014F0D0;
L_0014F0B8:;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    v1 = (s32) ((u32) v1 + (u32) v0); goto L_0014F0D0;
L_0014F0C8:;
    v1 = 0;
L_0014F0D0:;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    s7 = (s32) ((u32) s7 + 0xffffffffU);
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    v0 = (s32) ((u32) v0 + 0xfffffffcU);
    { s32 c_ = s7 >= 0; (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0; if (c_) goto L_0014F050; }
    v0 = (*(volatile s32 *) (u32) (sp + 208)); goto L_0014EE00;
L_0014F100:;
    (*(volatile u8 *) (u32) s7) = (u8) t6;
L_0014F108:;
    t6 = (s32) ((u32) s5 + 0x1U);
    s5 = (s64) ((u64) t6 << 48);
    s5 = s5 >> 48;
    t6 = s5 < a5;
    { s32 c_ = t6 != 0; a7 = (s32) ((u32) a7 + 0x1U); if (c_) goto L_0014EEB0; }
L_0014F120:;
    v1 = (s32) ((u32) t7 + 0x1U);
    t7 = (s64) ((u64) v1 << 48);
    t5 = (s32) ((u32) t5 + 0x1U);
    t7 = t7 >> 48;
    v1 = t7 < a6;
    { s32 c_ = v1 != 0; t4 = (s32) ((u32) t4 + (u32) a5); if (c_) goto L_0014EE50; }
    goto L_0014F2B0;
L_0014F148:;
    v1 = (s64) ((u64) s6 << 48);
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a6; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_0014F164; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0014F164:;
    s2 = (s32) ((u32) s2 + (u32) v1); goto L_0014F180;
L_0014F170:;
    v1 = (s64) ((u64) s6 << 48);
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a6; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s2 = (s32) ((u32) s2 + (u32) v1);
L_0014F180:;
    if (s0 != v0) goto L_0014F1B8;
    v1 = (*(volatile s16 *) (u32) (sp + 224));
    a0 = (s64) ((u64) fp << 48);
    a0 = a0 >> 48;
    v1 = v1;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_0014F1AC; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0014F1AC:;
    s3 = (s32) ((u32) s3 + (u32) v1); goto L_0014F1D0;
L_0014F1B8:;
    v1 = (*(volatile s16 *) (u32) (sp + 224));
    a0 = (s64) ((u64) fp << 48);
    a0 = a0 >> 48;
    v1 = v1;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    s3 = (s32) ((u32) s3 + (u32) v1);
L_0014F1D0:;
    { s32 c_ = s6 >= 0; v1 = (s32) s6 >> 1; if (c_) goto L_0014F1E0; }
    v1 = (s32) ((u32) s6 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0014F1E0:;
    s6 = (s64) ((u64) v1 << 48);
    v1 = (*(volatile s16 *) (u32) (sp + 240));
    s6 = s6 >> 48;
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_0014F1FC; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_0014F1FC:;
    v1 = (s64) ((u64) a0 << 48);
    v1 = v1 >> 48;
    (*(volatile u16 *) (u32) (sp + 240)) = (u16) v1;
    { s32 c_ = fp >= 0; v1 = (s32) fp >> 1; if (c_) goto L_0014F218; }
    v1 = (s32) ((u32) fp + 0x1U);
    v1 = (s32) v1 >> 1;
L_0014F218:;
    fp = (s64) ((u64) v1 << 48);
    v1 = (*(volatile s16 *) (u32) (sp + 224));
    fp = fp >> 48;
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_0014F234; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_0014F234:;
    v1 = (s64) ((u64) a0 << 48);
    v1 = v1 >> 48;
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (sp + 272));
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_0014F254; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_0014F254:;
    v1 = (s64) ((u64) a0 << 48);
    v1 = v1 >> 48;
    (*(volatile u16 *) (u32) (sp + 272)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (sp + 256));
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_0014F274; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_0014F274:;
    v1 = (s64) ((u64) a0 << 48);
    t9 = (s32) ((u32) t9 + 0x1U);
    v1 = v1 >> 48;
    (*(volatile u16 *) (u32) (sp + 256)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    at = v1 < t9;
    if (at == 0) goto L_0014EE10;
L_0014F298:;
    a0 = (*(volatile s32 *) (u32) (sp + 300)); v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; func_001453E0(a0);
    goto L_0014F2C0;
L_0014F2B0:;
    if (s1 != v0) goto L_0014F170;
    goto L_0014F148;
L_0014F2C0:;
    return;
}
