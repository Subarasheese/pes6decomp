/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001E6E10(s64);
void func_001EE5D0(s64, s64);
void func_001EE630(s64, s64);
void func_001EEAC0(s64, s64);
void func_001EEE60(s64, s64);
void func_001EF1E0(s64, s64);
void func_001EF370(s64, s64);
void func_001EF860(s64, s64);
void func_001EF900(s64, s64);
void func_001F23E0(s64, s64, s64, s64);
s64 func_001F2410(s64, s64, s64, s64);
s64 func_00292F00(s64);
void func_008BB2A0(s64, s64, s64);
void func_008BB3F0(s64, s64, s64, s64);
s64 func_008BB4D0(s64, s64, s64, s64);

void func_008E47A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (a0 + 484));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s32 *) (u32) (a0 + 1792));
    { s32 c_ = v1 == 0; s4 = a0; if (c_) goto L_008E4A68; }
    a0 = 20188; v0 = func_001E6E10(a0);
    s7 = v0;
    s3 = 0;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) s4;
    s5 = s4;
    fp = s4;
L_008E4804:;
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a1 = (*(volatile s32 *) (u32) (v0 + 1796));
    a0 = (*(volatile s32 *) (u32) (s4 + 1792)); func_001F23E0(a0, a1, a2, a3);
    s1 = 0;
    s0 = s5;
L_008E4820:;
    a1 = (*(volatile s32 *) (u32) (s0 + 1840));
    a0 = (*(volatile s32 *) (u32) (s4 + 1792)); func_001F23E0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 1840)) = (u32) 0;
    v1 = s1 < 8;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E4820; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    if (v1 == 0) goto L_008E4A48;
    a0 = (*(volatile u16 *) (u32) v1);
    v1 = 0xffff;
    if (a0 == v1) goto L_008E4A48;
    a0 = (*(volatile s32 *) (u32) (s4 + 1792));
    a1 = (s32) ((u32) fp + 0x4U);
    a2 = 1; v0 = func_008BB4D0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    s1 = v0;
    { s32 c_ = s4 == 0; (*(volatile u32 *) (u32) (v1 + 1796)) = (u32) v0; if (c_) goto L_008E48D0; }
    v1 = (*(volatile s32 *) (u32) (s4 + 484));
    if (v1 == 0) goto L_008E48D0;
    if (v0 == 0) goto L_008E48D0;
    at = s3 < 11;
    if (at == 0) goto L_008E48D0;
    s0 = (s32) ((u32) v1 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) (s0 + 37)); v0 = func_00292F00(a0);
    a1 = v0;
    a3 = (*(volatile u8 *) (u32) (s0 + 158));
    v0 = s3 & 0xff;
    a0 = (s32) ((u32) sp + 0x10cU);
    v0 = v0 < 11;
    a2 = v0 ^ 0x1; func_008BB3F0(a0, a1, a2, a3);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x10cU); func_001EEE60(a0, a1);
L_008E48D0:;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = (s32) 0x8f0000U;
    s0 = 0;
    f20.f = (*(volatile f32 *) (u32) (fp + 4));
    s6 = (s32) ((u32) s6 + 0xffffc5c0U);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (s32) ((u32) v0 + 0x87U);
    f21.f = (*(volatile f32 *) (u32) (fp + 8));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_008E48F8:;
    v0 = (*(volatile u8 *) (u32) (s4 + 1));
    { s32 c_ = v0 == 0; s2 = s0; if (c_) goto L_008E4920; }
    v0 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v0 >= 0; s2 = v0 & 0x7; if (c_) goto L_008E491C; }
    if (s2 == 0) goto L_008E491C;
    s2 = (s32) ((u32) s2 + 0xfffffff8U);
L_008E491C:;
L_008E4920:;
    a0 = (*(volatile s32 *) (u32) (s4 + 1792)); v0 = func_001F2410(a0, a1, a2, a3);
    s1 = v0;
    a1 = s6;
    v0 = (s32) ((u32) s2 << 2);
    a0 = s1;
    v0 = (s32) ((u32) s5 + (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 1840)) = (u32) s1; func_001EF370(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0xe0U); func_001EE5D0(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0xe0U);
    (*(volatile f32 *) (u32) (sp + 224)) = f20.f;
    (*(volatile f32 *) (u32) (sp + 228)) = f21.f; func_001EF860(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s4 + 483));
    if (v1 == 0) goto L_008E4990;
    v0 = (s32) 0xbfc90000U;
    a0 = s1;
    v0 = v0 | 0xfdb;
    a1 = (s32) ((u32) sp + 0xf0U);
    (*(volatile u32 *) (u32) (sp + 248)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 244)) = (u32) 0; func_001EF1E0(a0, a1);
L_008E4990:;
    if (s7 == 0) goto L_008E4A38;
    a0 = s1;
    a1 = s7; func_001EEAC0(a0, a1);
    a0 = (s32) ((u32) sp + 0x100U);
    a1 = s0;
    a2 = 0; func_008BB2A0(a0, a1, a2);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x100U); func_001EE630(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s4 + 474));
    if (v0 != s3) goto L_008E49F0;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) (v0 + 146));
    if (v0 != s2) goto L_008E49F0;
    a0 = s1;
    a1 = 1; func_001EF900(a0, a1);
    goto L_008E4A38;
L_008E49F0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = 1;
    v1 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a1 << (s2 & 31));
    v0 = v1 & v0;
    if (v0 == 0) goto L_008E4A28;
    a0 = s1; func_001EF900(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) gp + 0xffff85dcU); func_001EEE60(a0, a1);
    goto L_008E4A38;
L_008E4A28:;
    a0 = s1;
    a1 = 0; func_001EF900(a0, a1);
L_008E4A38:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 8;
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x10U); if (c_) goto L_008E48F8; }
L_008E4A48:;
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    s3 = (s32) ((u32) s3 + 0x1U);
    s5 = (s32) ((u32) s5 + 0x20U);
    v1 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v1;
    v1 = s3 < 11;
    { s32 c_ = v1 != 0; fp = (s32) ((u32) fp + 0x8U); if (c_) goto L_008E4804; }
L_008E4A68:;
    return;
}
