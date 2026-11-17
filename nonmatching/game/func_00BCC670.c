/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00277360(s64);
s64 func_00292D50(void);
s64 func_002DCA30(void);

s64 func_00BCC670(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_s3 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    v1 = 139;
    v0 = a0;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a90U);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) a0;
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 << 4);
    a2 = (s32) ((u32) v1 - (u32) v0);
    v0 = (s32) ((u32) a3 + (u32) a4);
    a1 = (s32) ((u32) a2 << 3);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) v0 << 8);
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    v1 = (s32) ((u32) v1 + 0x1e00U);
    s6 = (s32) ((u32) sp + 0xe0U);
    a0 = (s32) ((u32) a0 + 0x2980U);
    { u32 a_ = (u32) (sp + 192) & ~15U; s3 = *(volatile s64 *) a_; qh_s3 = *(volatile u64 *) (a_ + 8); }
    s4 = 0;
    s5 = 0;
    s2 = s6;
    s7 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v1 + 0xf8U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) v1 + 0xf6U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00BCC710:;
    s1 = (*(volatile u8 *) (u32) (s3 + 7));
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    v0 = (s32) ((u32) s1 << 4);
    v1 = (s32) ((u32) v0 - (u32) s1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    s0 = (s32) ((u32) s7 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (s0 + 212));
    { s32 c_ = v0 != 0; fp = (s32) ((u32) s0 + 0xd4U); if (c_) goto L_00BCC7A8; }
    v0 = (*(volatile u8 *) (u32) (s0 + 214));
    if (v0 != 0) goto L_00BCC7A8;
    v0 = (*(volatile u8 *) (u32) (s0 + 213));
    at = v0 < 2;
    if (at == 0) goto L_00BCC7A8;
    a0 = (s32) ((u32) s0 + 0xf0U); v0 = func_00277360(a0);
    a0 = 1;
    if (v0 == a0) goto L_00BCC790;
    if (v0 == 0) goto L_00BCC790;
    v1 = 2;
    if (v0 == v1) goto L_00BCC788;
    goto L_00BCC7A8;
L_00BCC788:;
    (*(volatile u32 *) (u32) s2) = (u32) a0; goto L_00BCC7A8;
L_00BCC790:;
    v0 = (*(volatile u8 *) (u32) (s0 + 248));
    if (v0 == 0) goto L_00BCC7A8;
    v0 = 1;
    (*(volatile u32 *) (u32) s2) = (u32) v0;
L_00BCC7A8:;
    v0 = (*(volatile u8 *) (u32) fp);
    if (v0 == 0) goto L_00BCC7C0;
    s4 = (s32) ((u32) s4 + 0x1U); goto L_00BCC820;
L_00BCC7C0:;
    v0 = (*(volatile s32 *) (u32) s2);
    if (v0 == 0) goto L_00BCC820;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile u8 *) (u32) v0);
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00BCC820; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 << 3);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v0 + (u32) v1);
L_00BCC7F8:;
    v0 = (*(volatile u8 *) (u32) (v1 + 83));
    if (s1 != v0) goto L_00BCC810;
    s4 = (s32) ((u32) s4 + 0x1U); goto L_00BCC820;
L_00BCC810:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < a0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x8U); if (c_) goto L_00BCC7F8; }
L_00BCC820:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 11;
    s3 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00BCC710; }
    v0 = s4 < 7;
    if (v0 != 0) goto L_00BCC848;
    v0 = 0; goto L_00BCC950;
L_00BCC848:;
    v0 = func_002DCA30();
    if (v0 != 0) goto L_00BCC890;
    a0 = 0;
    v1 = 0;
L_00BCC860:;
    v0 = (*(volatile s32 *) (u32) s6);
    if (v0 == 0) goto L_00BCC870;
    a0 = (s32) ((u32) a0 + 0x1U);
L_00BCC870:;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = v1 < 11;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_00BCC860; }
    if (a0 != 0) goto L_00BCC898;
    v0 = 1; goto L_00BCC950;
L_00BCC890:;
    v0 = 1; goto L_00BCC950;
L_00BCC898:;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1ef8U);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7107));
    s0 = 0;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    s1 = (s32) ((u32) v1 - (u32) v0); v0 = func_00292D50();
    a0 = v0 & 0xff;
    at = a0 < 12;
    { s32 c_ = at != 0; a2 = 11; if (c_) goto L_00BCC930; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = (s32) ((u32) v0 + 0xbU);
L_00BCC8D8:;
    v1 = (*(volatile u8 *) (u32) (a1 + 7));
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) s7 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 212));
    if (v0 == 0) goto L_00BCC920;
    v0 = (*(volatile u8 *) (u32) (v1 + 20));
    if (v0 != 0) goto L_00BCC920;
    v0 = (*(volatile u8 *) (u32) (v1 + 215));
    if (v0 != 0) goto L_00BCC920;
    s0 = (s32) ((u32) s0 + 0x1U);
L_00BCC920:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_00BCC8D8; }
L_00BCC930:;
    at = s0 < s1;
    if (at == 0) s0 = s1;
    at = 0 < s0;
    if (at == 0) goto L_00BCC94C;
    v0 = 2; goto L_00BCC950;
L_00BCC94C:;
    v0 = 1;
L_00BCC950:;
    return v0;
}
