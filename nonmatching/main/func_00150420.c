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

void func_00150420(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[40];
    s64 sp = (s32) (u32) frame;

    fp = a4;
    s7 = a1;
    s5 = a2;
    s4 = a3;
    v1 = (*(volatile s16 *) (u32) (a5 + 4));
    v0 = (*(volatile s16 *) (u32) (a5 + 6));
    (*(volatile u32 *) (u32) (sp + 308)) = (u32) a0;
    a1 = (*(volatile s16 *) (u32) a5);
    a0 = (*(volatile s16 *) (u32) (a5 + 2));
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) a5;
    (*(volatile u16 *) (u32) (sp + 316)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 318)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (sp + 316));
    (*(volatile u16 *) (u32) (sp + 312)) = (u16) a1;
    { s32 c_ = v0 <= 0; (*(volatile u16 *) (u32) (sp + 314)) = (u16) a0; if (c_) goto L_00150494; }
    s0 = (s64) ((u64) v0 << 48); goto L_0015049C;
L_00150494:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    s0 = (s64) ((u64) v0 << 48);
L_0015049C:;
    a0 = s7;
    s0 = s0 >> 48; v0 = Pes6Texture_GetPixels(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 308));
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v0; v0 = Pes6Texture_GetPixels(a0);
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v0;
    a0 = s7;
    v0 = (*(volatile u16 *) (u32) (s7 + 46));
    v0 = (s32) v0 >> 12;
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_001454B0(a0);
    s6 = (s64) ((u64) v0 << 48);
    a0 = s7;
    s6 = s6 >> 48;
    s3 = s6; v0 = func_001454A0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 308));
    s2 = (s64) ((u64) v0 << 48);
    s2 = s2 >> 48; v0 = func_001454B0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 308));
    s1 = (s64) ((u64) v0 << 48);
    s1 = s1 >> 48; v0 = func_001454A0(a0);
    a0 = s7;
    s7 = (s64) ((u64) v0 << 48);
    s7 = s7 >> 48; v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { v1 = (s32) s3 >> 1; goto L_001508BC; }
L_0015051C:;
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = v1 < 0;
    { s32 c_ = at != 0; t4 = 0; if (c_) goto L_001508A4; }
    a6 = (s32) ((u32) s5 << 4);
L_00150530:;
    v1 = (s32) ((u32) sp + 0x13eU);
    a5 = (*(volatile s16 *) (u32) v1);
    at = 0 < a5;
    { s32 c_ = at == 0; t5 = 0; if (c_) goto L_00150738; }
    v1 = (s64) ((u64) s2 << 48);
    a7 = (s64) ((u64) fp << 48);
    v1 = v1 >> 48;
    a4 = (s64) ((u64) s4 << 48);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a3 = (s64) ((u64) s1 << 48);
    v1 = (s64) ((u64) s7 << 48);
    a2 = (s64) ((u64) s0 << 48);
    v1 = v1 >> 48;
    a7 = a7 >> 48;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a4 = a4 >> 48;
    v1 = (s64) ((u64) s6 << 48);
    a3 = a3 >> 48;
    v1 = v1 >> 48;
    a2 = a2 >> 48;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (s64) ((u64) s3 << 48);
    v1 = v1 >> 48;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s16 *) (u32) (sp + 312));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (s32) ((u32) sp + 0x13aU);
    v1 = (*(volatile s16 *) (u32) v1);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
L_001505A8:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (s64) ((u64) a7 << 48);
    v1 = (s32) ((u32) t5 + (u32) v1);
    a0 = (s64) ((u64) v1 << 48);
    a0 = a0 >> 48;
    { s32 c_ = a0 < 0; a1 = a1 >> 48; if (c_) goto L_00150728; }
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = a0 < v1;
    if (at == 0) goto L_00150728;
    v1 = (s64) ((u64) a1 << 48);
    v1 = v1 >> 48;
    if (v1 < 0) goto L_00150728;
    { u32 a_ = (u32) (sp + 224) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    at = v1 < a1;
    if (at == 0) goto L_00150728;
    at = 0 < a2;
    { s32 c_ = at == 0; t6 = 0; if (c_) goto L_00150728; }
    { u32 a_ = (u32) (sp + 192) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); t8 = lo; }
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); t9 = lo1; }
L_0015060C:;
    a0 = (*(volatile s32 *) (u32) (sp + 304));
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s16 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) t6 + (u32) v1);
    v1 = (s64) ((u64) v1 << 48);
    { s32 c_ = a0 >= 0; v1 = v1 >> 48; if (c_) goto L_0015063C; }
    a0 = (s32) ((u32) a4 - (u32) t6);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48; goto L_00150648;
L_0015063C:;
    a0 = (s32) ((u32) a4 + (u32) t6);
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
L_00150648:;
    a1 = (s64) ((u64) a0 << 48);
    a0 = (s64) ((u64) v1 << 48);
    a0 = a0 >> 48;
    { s32 c_ = a0 < 0; a1 = a1 >> 48; if (c_) goto L_0015095C; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = a0 < v1;
    if (at == 0) goto L_0015095C;
    v1 = (s64) ((u64) a1 << 48);
    v1 = v1 >> 48;
    if (v1 < 0) goto L_0015095C;
    at = v1 < a3;
    if (at == 0) goto L_0015095C;
    a1 = (s32) ((u32) a0 + (u32) t8);
    v1 = (s32) ((u32) v1 + (u32) t9);
    a0 = (*(volatile s32 *) (u32) (sp + 272));
    a1 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) (sp + 288));
    a0 = (s32) ((u32) a0 + (u32) v1);
    v1 = 20;
    if (v0 != v1) { v1 = (*(volatile u8 *) (u32) a1); goto L_00150708; }
    v1 = (*(volatile u8 *) (u32) a1);
    at = s5 < 0;
    { s32 c_ = at != 0; v1 = v1 & 0xf; if (c_) goto L_00150938; }
    if (v1 == 0) goto L_001506D8;
    t7 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) s5);
    t7 = t7 & 0xf0;
    v1 = t7 | v1;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_001506D8:;
    v1 = (*(volatile u8 *) (u32) a1);
    at = s5 < 0;
    { s32 c_ = at != 0; v1 = v1 & 0xf0; if (c_) goto L_0015094C; }
    if (v1 == 0) goto L_0015095C;
    a1 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a6);
    a1 = a1 & 0xf;
    v1 = a1 | v1;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_0015095C;
L_00150708:;
    at = s5 < 0;
    if (at != 0) { (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_0015095C; }
    if (v1 == 0) goto L_0015095C;
    v1 = (s32) ((u32) v1 + (u32) s5);
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_0015095C;
L_00150728:;
    t5 = (s32) ((u32) t5 + 0x1U);
L_0015072C:;
    v1 = t5 < a5;
    { s32 c_ = v1 != 0; a7 = (s32) ((u32) a7 + 0x1U); if (c_) goto L_001505A8; }
L_00150738:;
    a0 = (s64) ((u64) s3 << 48);
    v1 = (s64) ((u64) s2 << 48);
    a0 = a0 >> 48;
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a1 = (s64) ((u64) s1 << 48);
    a1 = a1 >> 48;
    v1 = (*(volatile s32 *) (u32) (sp + 272));
    a0 = (s64) ((u64) s7 << 48);
    a0 = a0 >> 48;
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); a0 = lo1; }
    v1 = (*(volatile s32 *) (u32) (sp + 288));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v1;
    { s32 c_ = s6 >= 0; v1 = (s32) s6 >> 1; if (c_) goto L_00150788; }
    v1 = (s32) ((u32) s6 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150788:;
    s6 = (s64) ((u64) v1 << 48);
    s6 = s6 >> 48;
    { s32 c_ = s3 >= 0; v1 = (s32) s3 >> 1; if (c_) goto L_001507A0; }
    v1 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001507A0:;
    s3 = (s64) ((u64) v1 << 48);
    s3 = s3 >> 48;
    { s32 c_ = s2 >= 0; v1 = (s32) s2 >> 1; if (c_) goto L_001507B8; }
    v1 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001507B8:;
    s2 = (s64) ((u64) v1 << 48);
    s2 = s2 >> 48;
    { s32 c_ = s1 >= 0; v1 = (s32) s1 >> 1; if (c_) goto L_001507D0; }
    v1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001507D0:;
    s1 = (s64) ((u64) v1 << 48);
    s1 = s1 >> 48;
    { s32 c_ = s7 >= 0; v1 = (s32) s7 >> 1; if (c_) goto L_001507E8; }
    v1 = (s32) ((u32) s7 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001507E8:;
    s7 = (s64) ((u64) v1 << 48);
    s7 = s7 >> 48;
    { s32 c_ = s4 >= 0; v1 = (s32) s4 >> 1; if (c_) goto L_00150800; }
    v1 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150800:;
    s4 = (s64) ((u64) v1 << 48);
    s4 = s4 >> 48;
    { s32 c_ = fp >= 0; v1 = (s32) fp >> 1; if (c_) goto L_00150818; }
    v1 = (s32) ((u32) fp + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150818:;
    a0 = (*(volatile s16 *) (u32) (sp + 312));
    fp = (s64) ((u64) v1 << 48);
    fp = fp >> 48;
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_00150834; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150834:;
    (*(volatile u16 *) (u32) (sp + 312)) = (u16) v1;
    v1 = (s32) ((u32) sp + 0x13aU);
    v1 = (*(volatile s16 *) (u32) v1);
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_00150850; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_00150850:;
    v1 = (s32) ((u32) sp + 0x13aU);
    (*(volatile u16 *) (u32) v1) = (u16) a0;
    { s32 c_ = s0 >= 0; v1 = (s32) s0 >> 1; if (c_) goto L_00150868; }
    v1 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150868:;
    s0 = (s64) ((u64) v1 << 48);
    v1 = (s32) ((u32) sp + 0x13eU);
    s0 = s0 >> 48;
    v1 = (*(volatile s16 *) (u32) v1);
    { s32 c_ = v1 >= 0; a0 = (s32) v1 >> 1; if (c_) goto L_00150888; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) v1 >> 1;
L_00150888:;
    v1 = (s32) ((u32) sp + 0x13eU);
    t4 = (s32) ((u32) t4 + 0x1U);
    (*(volatile u16 *) (u32) v1) = (u16) a0;
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    at = v1 < t4;
    if (at == 0) goto L_00150530;
L_001508A4:;
    a0 = (*(volatile s32 *) (u32) (sp + 308)); v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; func_001453E0(a0);
    goto L_00150974;
L_001508BC:;
    if (s3 >= 0) goto L_001508CC;
    v1 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001508CC:;
    a0 = (*(volatile s16 *) (u32) (sp + 312));
    s3 = (s64) ((u64) v1 << 48);
    s3 = s3 >> 48;
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_001508E8; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001508E8:;
    (*(volatile u16 *) (u32) (sp + 312)) = (u16) v1;
    { s32 c_ = s0 >= 0; v1 = (s32) s0 >> 1; if (c_) goto L_001508FC; }
    v1 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_001508FC:;
    s0 = (s64) ((u64) v1 << 48);
    s0 = s0 >> 48;
    { s32 c_ = s4 >= 0; v1 = (s32) s4 >> 1; if (c_) goto L_00150914; }
    v1 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00150914:;
    s4 = (s64) ((u64) v1 << 48);
    s4 = s4 >> 48;
    { s32 c_ = s1 >= 0; v1 = (s32) s1 >> 1; if (c_) goto L_0015092C; }
    v1 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) v1 >> 1;
L_0015092C:;
    s1 = (s64) ((u64) v1 << 48);
    s1 = s1 >> 48; goto L_0015051C;
L_00150938:;
    t7 = (*(volatile u8 *) (u32) a0);
    t7 = t7 & 0xf0;
    v1 = t7 | v1;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_001506D8;
L_0015094C:;
    a1 = (*(volatile u8 *) (u32) a0);
    a1 = a1 & 0xf;
    v1 = a1 | v1;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_0015095C:;
    t6 = (s32) ((u32) t6 + 0x1U);
    v1 = t6 < a2;
    if (v1 != 0) goto L_0015060C;
    t5 = (s32) ((u32) t5 + 0x1U); goto L_0015072C;
L_00150974:;
    return;
}
