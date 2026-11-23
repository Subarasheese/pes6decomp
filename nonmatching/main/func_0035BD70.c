/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001D7D60(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EEDA0(s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);

s32 func_0035BD70(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035BDF0; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035BDB4:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035BDB4; }
L_0035BDF0:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035BEE4; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035BE68; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035BE2C:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035BE2C; }
L_0035BE68:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035BE9C; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035BE9C:;
    a1 = 255; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035BED8; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035BED8:;
    a1 = 255; func_001DF420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035BEE4:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035BF60; }
    s1 = 0;
L_0035BF04:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035BF38;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035BF38:;
    a0 = s2;
    a1 = (s32) ((u32) s1 + 0x3U); v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035BF04; }
L_0035BF60:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035BFE0; }
    s1 = 2;
L_0035BF84:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035BFB8;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035BFB8:;
    a0 = s2;
    a1 = s1; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035BF84; }
L_0035BFE0:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035C060; }
    s1 = 1;
L_0035C004:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035C038;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035C038:;
    a0 = s2;
    a1 = s1; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035C004; }
L_0035C060:;
    v0 = 1;
    return v0;
}
