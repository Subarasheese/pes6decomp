/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0014AAB0(s64, s64, s64, s64);
s64 func_00153FE0(s64, s64);
s64 func_0017FA00(s64, s64, s64, s64, s64);
s64 func_001A64B0(s64, s64, s64, s64);
s64 func_001B05B0(void);
s64 func_001CDAD0(s64);

s64 func_001A66D0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) a0);
    at = v0 < 23;
    { s32 c_ = at == 0; s0 = (*(volatile u8 *) (u32) (a0 + 48)); if (c_) goto L_001A6720; }
    a0 = (*(volatile s32 *) (u32) (gp + -32116));
    v1 = (s32) ((u32) s0 << 3);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (v1 != v0) { a0 = 0; goto L_001A6718; }
    a0 = 2;
    v1 = 3; goto L_001A6728;
L_001A6718:;
    v1 = 2; goto L_001A6728;
L_001A6720:;
    a0 = 3;
    v1 = 4;
L_001A6728:;
    a2 = (s32) 0x520000U;
    at = 0 < v1;
    a2 = (s32) ((u32) a2 + 0x6d0U);
    a3 = 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) a2; if (c_) goto L_001A6788; }
L_001A6740:;
    v0 = (s64) ((u64) a2 << 32);
    v0 = v0 >> 32;
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    if (a1 == 0) goto L_001A6768;
    a1 = (*(volatile u8 *) (u32) v0);
    if (a1 != s0) goto L_001A6768;
    goto L_001A69A8;
L_001A6768:;
    v0 = (s64) ((u64) a2 << 32);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = v0 >> 32;
    a2 = (s32) ((u32) v0 + 0x20U);
    v0 = a3 < v1;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) a2; if (c_) goto L_001A6740; }
L_001A6788:;
    v0 = (s32) 0x520000U;
    a1 = (s32) ((u32) a0 << 5);
    v0 = (s32) ((u32) v0 + 0x6d0U);
    a2 = (s32) ((u32) v0 + (u32) a1);
    at = a0 < v1;
    s1 = a0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) a2; if (c_) goto L_001A67D0; }
L_001A67A8:;
    a1 = (s64) ((u64) a2 << 32);
    a1 = a1 >> 32;
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    if (v0 == 0) goto L_001A67D0;
    s1 = (s32) ((u32) s1 + 0x1U);
    a2 = (s32) ((u32) a1 + 0x20U);
    v0 = s1 < v1;
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) a2; if (c_) goto L_001A67A8; }
L_001A67D0:;
    if (s1 != v1) goto L_001A6854;
    at = a0 < v1;
    { s32 c_ = at == 0; a5 = a0; if (c_) goto L_001A6848; }
    a3 = (s32) 0x520000U;
    a4 = (s32) ((u32) v1 - (u32) a0);
    a1 = 2;
    a3 = (s32) ((u32) a3 + 0x6d0U);
L_001A67F4:;
    v0 = (*(volatile u8 *) (u32) (gp + -23244));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -23244)) = (u8) v0;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 - (u32) a0);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    v0 = hi;
    s1 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) s1 << 5);
    a2 = (s32) ((u32) a3 + (u32) v0);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) a2;
    v0 = (*(volatile u8 *) (u32) (a2 + 2));
    if (v0 != 0) goto L_001A6838;
    v0 = (*(volatile u8 *) (u32) (a2 + 1));
    if (v0 == a1) goto L_001A6848;
L_001A6838:;
    a5 = (s32) ((u32) a5 + 0x1U);
    v0 = a5 < v1;
    if (v0 != 0) goto L_001A67F4;
L_001A6848:;
    a0 = (s64) ((u64) a2 << 32);
    a0 = a0 >> 32; v0 = func_001A64B0(a0, a1, a2, a3);
L_001A6854:;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    v1 = 1;
    a0 = (s32) ((u32) s0 << 3);
    (*(volatile u8 *) (u32) v0) = (u8) s0;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) s1;
    v0 = (*(volatile s32 *) (u32) (gp + -32116));
    v1 = (*(volatile s32 *) (u32) (gp + -23248));
    v0 = (s32) ((u32) v0 + (u32) a0);
    { s32 c_ = v1 == 0; a0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_001A6978; }
    v0 = (*(volatile s32 *) (u32) v1);
    at = s0 < v0;
    if (at == 0) goto L_001A6978;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    a0 = (s32) ((u32) s0 << 2);
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    v1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 60));
    v0 = (*(volatile u8 *) (u32) (v1 + 3));
    at = v0 < 3;
    { s32 c_ = at == 0; s1 = (*(volatile s32 *) (u32) (v1 + 4)); if (c_) goto L_001A68F4; }
    a0 = (*(volatile u8 *) (u32) (v1 + 3));
    v0 = (*(volatile u32 *) (u32) (gp + -23252));
    v1 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 11);
    v0 = (s64) ((u64) v0 + (u64) v1);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32; goto L_001A6908;
L_001A68F4:;
    v0 = func_001B05B0();
    a1 = s1;
    a0 = v0; v0 = func_00153FE0(a0, a1);
L_001A6908:;
    v1 = (*(volatile s32 *) (u32) (sp + 60));
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    a1 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s0; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    s0 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = s0; v0 = func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) s0);
    at = 0 < v0;
    { s32 c_ = at == 0; a0 = 0; if (c_) goto L_001A6994; }
    a1 = 0;
L_001A6944:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = a0 < v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_001A6944; }
    v0 = (*(volatile s32 *) (u32) (sp + 60)); goto L_001A6998;
L_001A6978:;
    a1 = (s32) 0x1a0000U;
    a2 = (s32) ((u32) sp + 0x3cU);
    a1 = (s32) ((u32) a1 + 0x69c0U);
    a3 = 4; v0 = func_0017FA00(a0, a1, a2, a3, a4);
L_001A698C:;
    v0 = (*(volatile s32 *) (u32) (sp + 60)); goto L_001A69A4;
L_001A6994:;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
L_001A6998:;
    v1 = 2;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1; goto L_001A698C;
L_001A69A4:;
L_001A69A8:;
    return v0;
}
