/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
s64 func_00225820(void);
s64 func_0022D350(s64);
s64 func_0022D590(s64);

s64 func_0022D6A0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    s4 = 0;
    s3 = 0;
    s1 = a0;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    s2 = (*(volatile u8 *) (u32) (v0 + 44));
    fp = (*(volatile u8 *) (u32) (v0 + 45));
    s0 = a1; v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_0022D704; }
    s6 = 0; goto L_0022D708;
L_0022D704:;
    s6 = (s32) ((u32) v0 + 0xcU);
L_0022D708:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) goto L_0022D728;
    v0 = 0; goto L_0022D8BC;
L_0022D728:;
    if (s6 != 0) { v0 = s0 & 0xff; goto L_0022D738; }
    v0 = 0; goto L_0022D8BC;
L_0022D738:;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = v0 < 2;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (sp + 192)); goto L_0022D750; }
    v0 = 0; goto L_0022D8BC;
L_0022D750:;
    if (v0 != 0) { a0 = s1; goto L_0022D778; }
    a0 = s1; v0 = func_0022D590(a0);
    a0 = v0 & 0xffff;
    v0 = (u64) s1 < (u64) (s64) 32;
    { s32 c_ = v0 != 0; v1 = (*(volatile u16 *) (u32) (gp + -22872)); if (c_) goto L_0022D798; }
    v0 = 0; goto L_0022D8BC;
L_0022D778:;
    v0 = func_0022D350(a0);
    a0 = v0 & 0xffff;
    v0 = (u64) s1 < (u64) (s64) 32;
    { s32 c_ = v0 != 0; v1 = (*(volatile u16 *) (u32) (gp + -22876)); if (c_) goto L_0022D798; }
    v0 = 0; goto L_0022D8BC;
L_0022D798:;
    v0 = v1 & 0xffff;
    at = (u64) s1 < (u64) v0;
    { s32 c_ = at != 0; { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0022D7B0; }
    v0 = 0; goto L_0022D8BC;
L_0022D7B0:;
    v0 = a0 & 0xffff;
    { s32 c_ = v0 != 0; { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0022D7C4; }
    v0 = 0; goto L_0022D8BC;
L_0022D7C4:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s32 c_ = v0 <= 0; s5 = 0; if (c_) goto L_0022D8B8; }
    s7 = s2 & 0xff;
    s1 = (s32) 0x540000U;
    s2 = (s32) 0x540000U;
    fp = fp & 0xff;
    s2 = (s32) ((u32) s2 + 0xffffa850U);
    s1 = (s32) ((u32) s1 + 0xffffa810U);
L_0022D7E8:;
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    if (v0 != 0) goto L_0022D808;
    v0 = (*(volatile u16 *) (u32) s2);
    v0 = (s32) ((u32) v0 << 3);
    s0 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) (s0 + 5462)); goto L_0022D818;
L_0022D808:;
    v0 = (*(volatile u16 *) (u32) s1);
    v0 = (s32) ((u32) v0 << 3);
    s0 = (s32) ((u32) s6 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) (s0 + 5464));
L_0022D818:;
    v1 = v0 & 0xffff;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    if (v0 != v1) goto L_0022D8A0;
    v0 = (*(volatile u8 *) (u32) (s0 + 5460));
    if (s7 != v0) goto L_0022D860;
    if (s4 != 0) goto L_0022D8A0;
    v0 = func_00225820();
    v0 = v0 & 0xff;
    if (s7 == v0) goto L_0022D858;
    s4 = 1;
L_0022D858:;
    s3 = (*(volatile u16 *) (u32) (s0 + 5458)); goto L_0022D8A0;
L_0022D860:;
    if (fp != v0) goto L_0022D890;
    if (s4 != 0) goto L_0022D8A0;
    v0 = func_00225820();
    v0 = v0 & 0xff;
    if (fp == v0) goto L_0022D888;
    s4 = 1;
L_0022D888:;
    s3 = (*(volatile u16 *) (u32) (s0 + 5458)); goto L_0022D8A0;
L_0022D890:;
    v0 = s3 & 0xffff;
    if (v0 != 0) goto L_0022D8A0;
    s3 = (*(volatile u16 *) (u32) (s0 + 5458));
L_0022D8A0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s5 = (s32) ((u32) s5 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x2U);
    v0 = s5 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_0022D7E8; }
L_0022D8B8:;
    v0 = s3;
L_0022D8BC:;
    return v0;
}
