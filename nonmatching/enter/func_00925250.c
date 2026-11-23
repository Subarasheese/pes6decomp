/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s32, s32);
void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
void func_001DF420(s32, s32);
void func_001DF4F0(s32, s32);
void func_002D5930(s32, s32, s32);
s32 func_002F9630(s32);
s32 func_002F96F0(s32, s32);

s32 func_00925250(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a1 = (*(volatile s16 *) (u32) (s0 + 44));
    a0 = v0; func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00925358;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00925300; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_009252C8:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_009252C8; }
L_00925300:;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00925308:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00925338;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_00925338:;
    a0 = s0;
    a1 = 1; func_001DF4F0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00925308; }
L_00925358:;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 40));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00925428;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_009253D0; }
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_00925394:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_00925394; }
L_009253D0:;
    s1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
L_009253D8:;
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = s1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00925408;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_00925408:;
    a0 = s0;
    a1 = 0; func_001DF420(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < 6;
    if (at != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19844)); goto L_009253D8; }
L_00925428:;
    v1 = (*(volatile s32 *) (u32) (gp + -19844));
    v0 = (s32) ((u32) gp + 0xffffb280U);
    a1 = 255;
    a2 = 15;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); func_002D5930(a0, a1, a2);
    v0 = 1;
    return v0;
}
