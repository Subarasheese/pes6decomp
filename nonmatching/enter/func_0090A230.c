/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001AAF40(s32, s32);
void func_001AAF50(s32, s32, s32, s32);
s32 func_009177C0(s32);

void func_0090A230(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s2 = a1;
    a1 = (*(volatile u8 *) (u32) (gp + -31244));
    a0 = (*(volatile u8 *) (u32) (gp + -31243));
    v1 = (*(volatile u8 *) (u32) (gp + -31242));
    (*(volatile u8 *) (u32) (sp + 108)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 109)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 110)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (gp + -31241));
    { s32 c_ = s3 == 0; (*(volatile u8 *) (u32) (sp + 111)) = (u8) v1; if (c_) goto L_0090A2F0; }
    s1 = 0;
    s4 = s1 & 0xff;
L_0090A280:;
    a0 = s4; v0 = func_009177C0(a0);
    s0 = v0;
    if (s0 == 0) goto L_0090A2D8;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_0090A2D8;
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_0090A2D8;
    v0 = (*(volatile s32 *) (u32) s3);
    v1 = (s32) ((u32) s4 << 1);
    v0 = (s32) ((u32) v0 >> (v1 & 31));
    v0 = v0 & 0x3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v0 + 108)); func_001AAF50(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001AAF40(a0, a1);
L_0090A2D8:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < 11;
    if (v1 != 0) { s4 = s1 & 0xff; goto L_0090A280; }
L_0090A2F0:;
    if (s2 == 0) goto L_0090A370;
    s1 = 0;
    s3 = s1 & 0xff;
L_0090A300:;
    a0 = (s32) ((u32) s3 + 0xbU); v0 = func_009177C0(a0);
    s0 = v0;
    if (s0 == 0) goto L_0090A358;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    if (v1 == 0) goto L_0090A358;
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_0090A358;
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = (s32) ((u32) s3 << 1);
    v0 = (s32) ((u32) v0 >> (v1 & 31));
    v0 = v0 & 0x3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v0 + 108)); func_001AAF50(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001AAF40(a0, a1);
L_0090A358:;
    v1 = (s32) ((u32) s1 + 0x1U);
    s1 = v1 & 0xff;
    v1 = s1 < 11;
    if (v1 != 0) { s3 = s1 & 0xff; goto L_0090A300; }
L_0090A370:;
    return;
}
