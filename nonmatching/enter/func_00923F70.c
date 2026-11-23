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
void func_002D5930(s64, s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);

s64 func_00923F70(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_00924088; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00923FF8; }
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_00923FBC:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_00923FBC; }
L_00923FF8:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_0092404C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00924040; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00924040:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_0092404C:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0092407C; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0092407C:;
    a1 = 1; func_001DF4F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_00924088:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_00924174; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_009240F8; }
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_009240C0:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19852)); goto L_009240C0; }
L_009240F8:;
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0092412C; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0092412C:;
    a1 = 0; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00924168; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00924168:;
    a1 = 0; func_001DF420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19852));
L_00924174:;
    v0 = (s32) ((u32) gp + 0xffffb278U);
    a1 = 255;
    a2 = 15;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); func_002D5930(a0, a1, a2);
    v0 = 1;
    return v0;
}
