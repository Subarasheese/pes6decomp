/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001DF420(s32, s32);
void func_001ED8F0(s32, s32);
s32 func_001EDC80(s32, s32);
void func_001EEDA0(s32, s32);
s32 func_002D5870(s32);
s32 func_002D58A0(s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);

s32 func_0035C080(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffac54U);
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x10U); v0 = func_002D5870(a0);
    if (v0 == 0) { s1 = 1; goto L_0035C350; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x10U); v0 = func_002D58A0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 628));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C1D4; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s2 = v0;
    { s32 c_ = s2 <= 0; s3 = 0; if (c_) goto L_0035C158; }
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C120:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21424)); goto L_0035C120; }
L_0035C158:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_0035C18C; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_0035C18C:;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = s0 & 0xff; goto L_0035C1C8; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0 & 0xff;
L_0035C1C8:;
    a0 = s2; func_001DF420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
L_0035C1D4:;
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s4 = 0; if (c_) goto L_0035C250; }
    s2 = 0;
L_0035C1F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s3 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035C228;
    s3 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035C228:;
    a0 = s3;
    a1 = (s32) ((u32) s2 + 0x3U); v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x3U); if (c_) goto L_0035C1F4; }
L_0035C250:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s4 = 0; if (c_) goto L_0035C2D0; }
    s2 = 2;
L_0035C274:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s3 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035C2A8;
    s3 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035C2A8:;
    a0 = s3;
    a1 = s2; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x3U); if (c_) goto L_0035C274; }
L_0035C2D0:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s4 = 0; if (c_) goto L_0035C350; }
    s2 = 1;
L_0035C2F4:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s3 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035C328;
    s3 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035C328:;
    a0 = s3;
    a1 = s2; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EEDA0(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x3U); if (c_) goto L_0035C2F4; }
L_0035C350:;
    v0 = s1;
    return v0;
}
