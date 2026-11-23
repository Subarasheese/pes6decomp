/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001D7D60(s64, s64);
void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

s64 func_0091D6F0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091D820;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0091D778; }
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D73C:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D73C; }
L_0091D778:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 1; goto L_0091D7CC; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0091D7C0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0091D7C0:;
    a1 = 1; func_001EDAE0(a0, a1);
    s1 = 1;
L_0091D7CC:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D7D0:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091D800;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091D800:;
    a0 = s0;
    a1 = 1; func_001DF4F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 53;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D7D0; }
L_0091D820:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 288));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0091D928;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0091D898; }
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D85C:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 255; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D85C; }
L_0091D898:;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0091D8CC; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0091D8CC:;
    a1 = 255; func_001ED8F0(a0, a1);
    s1 = 1;
    v1 = (*(volatile s32 *) (u32) (gp + -19876));
L_0091D8DC:;
    v0 = (s32) ((u32) gp + 0xffffb260U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0091D908;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0091D908:;
    a0 = s0;
    a1 = 255; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 53;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19876)); goto L_0091D8DC; }
L_0091D928:;
    v0 = 1;
    return v0;
}
