/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001DF420(s64, s64);
void func_001ED8F0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

void func_00918570(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1d0U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -20020));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_00918758;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_00918608; }
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_009185CC:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_009185CC; }
L_00918608:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00918690;
    s3 = 0;
    s1 = 0;
L_00918638:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00918670;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_00918670:;
    a0 = s2;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s3 < 2;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00918638; }
L_00918690:;
    s4 = 0;
    s1 = 0;
L_00918698:;
    s3 = 1;
L_009186A0:;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = s3;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_009186D8;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_009186D8:;
    a0 = s2;
    a1 = s0 & 0xff; func_001DF420(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s3 < 10;
    if (at != 0) goto L_009186A0;
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s4 < 2;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00918698; }
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20020));
L_0091870C:;
    v0 = (s32) ((u32) gp + 0xffffb1d0U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00918738;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_00918738:;
    a0 = s2;
    a1 = s0 & 0xff; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 8;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20020)); goto L_0091870C; }
L_00918758:;
    return;
}
