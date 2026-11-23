/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s64, s64);
void func_001DF4F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

s64 func_0035FB40(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_0035FC70;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_0035FBC8; }
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035FB8C:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035FB8C; }
L_0035FBC8:;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 32));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { s1 = 1; goto L_0035FC1C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0035FC10; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0035FC10:;
    a1 = 0; func_001EDAE0(a0, a1);
    s1 = 1;
L_0035FC1C:;
    v1 = (*(volatile s32 *) (u32) (gp + -21416));
L_0035FC20:;
    v0 = (s32) ((u32) gp + 0xffffac5cU);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035FC50;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035FC50:;
    a0 = s0;
    a1 = 0; func_001DF4F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 5;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -21416)); goto L_0035FC20; }
L_0035FC70:;
    v0 = 1;
    return v0;
}
