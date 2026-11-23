/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s64, s64);
void func_001DF4F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_001EDC80(s64, s64);
void func_001EF900(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

void func_0091C180(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (a0 + 40));
    v1 = v1 & 0x1;
    if (v1 == 0) goto L_0091C3D8;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s1 = v0;
    { s32 c_ = s1 <= 0; s2 = 0; if (c_) goto L_0091C210; }
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091C1D8:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s2; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D7D60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < s1;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091C1D8; }
L_0091C210:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s2 = 1; goto L_0091C264; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s1; goto L_0091C258; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s1;
L_0091C258:;
    a1 = s0 & 0xff; func_001EDAE0(a0, a1);
    s2 = 1;
L_0091C264:;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091C268:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = s2;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091C298;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091C298:;
    a0 = s1;
    a1 = s0 & 0xff; func_001DF4F0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 4;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091C268; }
    s3 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091C2BC:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 0;
    s2 = (s32) ((u32) s3 + 0x2U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091C2F0;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091C2F0:;
    a0 = s1;
    a1 = s2; v0 = func_001EDC80(a0, a1);
    v1 = (u64) 0 < (u64) s0;
    if (v1 == 0) { a1 = v1 & 0xff; goto L_0091C32C; }
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s8 *) (u32) (v1 + 16));
    v1 = (u64) 0 < (u64) v1;
    a1 = v1 & 0xff;
L_0091C32C:;
    a0 = v0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091C2BC; }
    s3 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -20000));
L_0091C34C:;
    v0 = (s32) ((u32) gp + 0xffffb1e4U);
    a1 = 0;
    s2 = (s32) ((u32) s3 + 0x4U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091C380;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091C380:;
    a0 = s1;
    a1 = s2; v0 = func_001EDC80(a0, a1);
    v1 = (u64) 0 < (u64) s0;
    if (v1 == 0) { a1 = v1 & 0xff; goto L_0091C3BC; }
    a0 = (*(volatile s32 *) (u32) (gp + -20000));
    v1 = (s32) ((u32) gp + 0xffffb1e4U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s8 *) (u32) (v1 + 16));
    v1 = (u64) 0 < (u64) v1;
    a1 = v1 & 0xff;
L_0091C3BC:;
    a0 = v0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 2;
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -20000)); goto L_0091C34C; }
L_0091C3D8:;
    return;
}
