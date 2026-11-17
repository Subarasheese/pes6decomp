/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64, s64);
void func_0014AD10(s64, s64, s64, s64);
s64 func_00150190(s64, s64, s64, s64);
void func_00151080(s64, s64);
void memcpy(s64, s64, s64);
void memset(s64, s64, s64);

void func_001E14C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    fp = a2;
    s7 = a0;
    s5 = a3;
    v1 = (*(volatile u8 *) (u32) (a3 + 54));
    v0 = (*(volatile u8 *) (u32) (a1 + 8));
    s1 = (*(volatile s32 *) (u32) (a3 + 8));
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) a4;
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) a5;
    (*(volatile u8 *) (u32) (sp + 183)) = (u8) a6;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a2 = (*(volatile u16 *) (u32) (s1 + 4));
    a0 = (*(volatile u8 *) (u32) (s1 + 8));
    at = (s32) 0x70000000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 9));
    s0 = (s64) ((u64) a4 << 48);
    v0 = -16;
    s0 = s0 >> 48;
    a2 = (s32) ((u32) a2 + 0xfU);
    a2 = a2 & v0;
    s4 = (s32) ((u32) a2 + (u32) at);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v1 = (s32) ((u32) v1 + 0xfU);
    a0 = (*(volatile u8 *) (u32) (a3 + 58));
    a2 = v1 & v0;
    v1 = (*(volatile u8 *) (u32) (a3 + 59));
    s2 = (s32) ((u32) s4 + (u32) a2);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v1 = (*(volatile u8 *) (u32) (a1 + 9));
    a0 = (*(volatile u8 *) (u32) (a3 + 55));
    a1 = (s32) ((u32) a2 + 0xfU);
    a1 = a1 & v0;
    a0 = (s64) ((u64) a0 << 48);
    s3 = (s32) ((u32) s2 + (u32) a1);
    a0 = a0 >> 48;
    s6 = (s32) ((u32) s3 + (u32) a1);
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a0 = (s32) 0x70000000U;
    a1 = 0;
    a2 = (s32) ((u32) a2 + 0xfU);
    v1 = (s32) 0x90000000U;
    v0 = a2 & v0;
    v0 = (s32) ((u32) s6 + (u32) v0);
    a2 = (s32) ((u32) v0 + (u32) v1); memset(a0, a1, a2);
    v0 = (*(volatile u16 *) (u32) (s1 + 4));
    a2 = (*(volatile u8 *) (u32) (s1 + 8));
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = v0 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; a1 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_a1 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v1 = lo1; }
    a0 = (s32) 0x70000000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 + (u64) a1);
    (*(volatile u64 *) (u32) (sp + 192)) = (u64) v0;
    a1 = (*(volatile s32 *) (u32) (s1 + 12));
    a2 = a2 >> 32; memcpy(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) 0x70000000U;
    a1 = s4;
    a3 = (s32) ((u32) sp + 0xc0U); func_0014AD10(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (sp + 183));
    v0 = v0;
    if (v0 == 0) goto L_001E1680;
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_001E17D8; }
L_001E1634:;
    v1 = (*(volatile u8 *) (u32) (s5 + 58));
    v0 = (s32) ((u32) a0 + 0x2U);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a1 = 0;
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    v1 = (s32) ((u32) s2 + (u32) v1);
    at = 0 < v0;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_001E17C0; }
L_001E1658:;
    v0 = (*(volatile u8 *) (u32) s4);
    a1 = (s32) ((u32) a1 + 0x1U);
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    v0 = a1 < v0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_001E1658; }
    v0 = (*(volatile u8 *) (u32) (s1 + 9)); goto L_001E17C4;
L_001E1680:;
    v0 = (*(volatile u8 *) (u32) (s5 + 59));
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001E1710; }
    s2 = 0;
L_001E1694:;
    v1 = (*(volatile s32 *) (u32) (s7 + 40));
    v0 = 2;
    { s32 c_ = v1 == v0; a0 = (s32) ((u32) s6 + (u32) s2); if (c_) goto L_001E1A18; }
    v0 = (*(volatile u8 *) (u32) (s5 + 58));
    at = 0 < v0;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_001E16F0; }
L_001E16B8:;
    v0 = (s32) ((u32) s4 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v0);
    a1 = v1 & 0xf;
    v0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) v1 >> 4;
    a1 = (s32) ((u32) a1 << 4);
    v1 = v1 & 0xf;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a1 | v1;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (s5 + 58));
    v0 = a2 < v0;
    if (v0 != 0) goto L_001E16B8;
L_001E16F0:;
    v0 = (*(volatile u8 *) (u32) (s5 + 59));
    v1 = (*(volatile u8 *) (u32) (s5 + 58));
    s1 = (s32) ((u32) s1 + 0x1U);
    s2 = (s32) ((u32) s2 + (u32) s0);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + (u32) v1); if (c_) goto L_001E1694; }
L_001E1710:;
    a0 = (*(volatile s32 *) (u32) (fp + 16));
    a1 = 0; v0 = func_00150190(a0, a1, a2, a3);
    s2 = v0;
    v0 = (*(volatile u8 *) (u32) (s5 + 59));
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001E17A4; }
    s3 = (s64) ((u64) s0 << 48);
    s3 = s3 >> 48;
L_001E1738:;
    v1 = (*(volatile s32 *) (u32) (s7 + 40));
    v0 = 2;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s7 + 44)); goto L_001E1768; }
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    v1 = (*(volatile u8 *) (u32) (s7 + 44));
    v0 = (s32) ((u32) v0 + (u32) s1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v1 = (s32) ((u32) s2 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    a0 = (s32) ((u32) v1 + (u32) v0); goto L_001E1784;
L_001E1768:;
    v0 = (*(volatile s32 *) (u32) (sp + 184));
    v1 = (s32) ((u32) v1 >> 1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v1 = (s32) ((u32) s2 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (sp + 188));
    a0 = (s32) ((u32) v1 + (u32) v0);
L_001E1784:;
    a1 = s6;
    a2 = s3; memcpy(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s5 + 59));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + (u32) s0); if (c_) goto L_001E1738; }
L_001E17A4:;
    a0 = (*(volatile s32 *) (u32) (fp + 16));
    a1 = s2; func_00151080(a0, a1);
    a0 = s2; Pes6Heap_Free(a0, a1);
    goto L_001E1A30;
L_001E17C0:;
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
L_001E17C4:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < v0;
    if (v0 != 0) goto L_001E1634;
L_001E17D8:;
    a1 = (*(volatile u8 *) (u32) (s5 + 59));
    at = 0 < a1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_001E1958; }
    v0 = (*(volatile u8 *) (u32) (sp + 183));
    a0 = v0;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x28c0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a7 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 + 0x2910U);
L_001E1814:;
    a0 = (*(volatile u8 *) (u32) (s5 + 58));
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_001E1944; }
L_001E1824:;
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    v0 = (s32) ((u32) a1 + (u32) v0);
    a0 = (s32) ((u32) s2 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) a0);
    if (v0 == 0) goto L_001E1930;
    t4 = 0;
    a6 = v1;
L_001E1844:;
    if (t4 == 0) { v0 = (*(volatile u8 *) (u32) a0); goto L_001E1858; }
    v0 = (*(volatile u8 *) (u32) a0);
    v0 = v0 & 0xf; goto L_001E1860;
L_001E1858:;
    v0 = (s32) v0 >> 4;
    v0 = v0 & 0xf;
L_001E1860:;
    if (v0 == 0) goto L_001E1920;
    t5 = 0;
    a5 = a7;
    a4 = a6;
L_001E1874:;
    t6 = 0;
    a3 = a4;
L_001E1880:;
    v0 = (s32) ((u32) a5 + (u32) t6);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_001E18F8;
    t7 = (*(volatile s8 *) (u32) (a3 + 1));
    v0 = (*(volatile u8 *) (u32) (s5 + 58));
    t7 = (s32) ((u32) a2 + (u32) t7);
    t7 = (s64) ((u64) t7 << 48);
    t7 = t7 >> 48;
    { s64 m_ = (s64) (s32) t7 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    s1 = (*(volatile s8 *) (u32) a3);
    t7 = (*(volatile u8 *) (u32) (a3 + 2));
    s1 = (s32) ((u32) a1 + (u32) s1);
    s1 = (s64) ((u64) s1 << 48);
    s1 = s1 >> 48;
    { s32 c_ = t7 != 0; v0 = (s32) ((u32) s1 + (u32) v0); if (c_) goto L_001E18E0; }
    t7 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) t7);
    v0 = v0 & 0xf;
    v0 = v0 | 0x80;
    (*(volatile u8 *) (u32) t7) = (u8) v0; goto L_001E18F8;
L_001E18E0:;
    t7 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) t7);
    v0 = v0 & 0xf0;
    v0 = v0 | 0x8;
    (*(volatile u8 *) (u32) t7) = (u8) v0;
L_001E18F8:;
    t6 = (s32) ((u32) t6 + 0x1U);
    at = t6 < 5;
    { s32 c_ = at != 0; a3 = (s32) ((u32) a3 + 0x3U); if (c_) goto L_001E1880; }
    t5 = (s32) ((u32) t5 + 0x1U);
    a5 = (s32) ((u32) a5 + 0x5U);
    at = t5 < 5;
    { s32 c_ = at != 0; a4 = (s32) ((u32) a4 + 0xfU); if (c_) goto L_001E1874; }
L_001E1920:;
    t4 = (s32) ((u32) t4 + 0x1U);
    v0 = t4 < 2;
    { s32 c_ = v0 != 0; a6 = (s32) ((u32) a6 + 0x4bU); if (c_) goto L_001E1844; }
L_001E1930:;
    a0 = (*(volatile u8 *) (u32) (s5 + 58));
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < a0;
    if (v0 != 0) goto L_001E1824;
L_001E1944:;
    a1 = (*(volatile u8 *) (u32) (s5 + 59));
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a1;
    if (v0 != 0) goto L_001E1814;
L_001E1958:;
    at = 0 < a1;
    v0 = s3;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_001E19E0; }
    a5 = -241;
    a3 = -16;
L_001E1970:;
    a1 = (*(volatile u8 *) (u32) (s5 + 58));
    at = 0 < a1;
    { s32 c_ = at == 0; v1 = 0; if (c_) goto L_001E19C8; }
L_001E1980:;
    a1 = (*(volatile u8 *) (u32) s2);
    a4 = (s64) ((u64) a1 << 56);
    a4 = (s64) ((u64) a4 >> 60);
    a4 = a4 & 0xff;
    { s32 c_ = a4 != 0; a2 = (*(volatile u8 *) (u32) v0); if (c_) goto L_001E19E8; }
L_001E1998:;
    a1 = a1 & 0xf;
    if (a1 != 0) goto L_001E1A00;
L_001E19A8:;
    (*(volatile u8 *) (u32) v0) = (u8) a2;
    a1 = (*(volatile u8 *) (u32) (s5 + 58));
    v1 = (s32) ((u32) v1 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x1U);
    a1 = v1 < a1;
    { s32 c_ = a1 != 0; v0 = (s32) ((u32) v0 + 0x1U); if (c_) goto L_001E1980; }
L_001E19C8:;
    v1 = (*(volatile u8 *) (u32) (s5 + 59));
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = a0 < v1;
    if (v1 != 0) goto L_001E1970;
L_001E19E0:;
    s4 = s3; goto L_001E1680;
L_001E19E8:;
    a4 = a4 & 0xf;
    a2 = a2 & 0xff;
    a4 = (s32) ((u32) a4 << 4);
    a2 = a2 & a5;
    a2 = a2 | a4; goto L_001E1998;
L_001E1A00:;
    a4 = a1 & 0xf;
    a1 = a2 & 0xff;
    a1 = a1 & a3;
    a2 = a1 | a4; goto L_001E19A8;
L_001E1A18:;
    a2 = (*(volatile u8 *) (u32) (s5 + 58));
    a1 = s4; memcpy(a0, a1, a2);
    goto L_001E16F0;
L_001E1A30:;
    return;
}
