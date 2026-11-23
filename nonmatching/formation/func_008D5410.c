/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292F00(s32);
void func_008D7090(s32, s32, s32);
void func_008D7310(s32, s32, s32, s32);
void func_008D7690(s32, s32, s32);
void func_008D78B0(s32, s32, s32, s32);

void func_008D5410(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    (*(volatile u8 *) (u32) (sp + 167)) = (u8) a1;
    s0 = a0;
    a1 = (*(volatile u8 *) (u32) (gp + -31304));
    a0 = (*(volatile u8 *) (u32) (gp + -31303));
    v1 = (*(volatile u8 *) (u32) (gp + -31302));
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 174)) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) (gp + -31300));
    v1 = (*(volatile u8 *) (u32) (gp + -31299));
    a1 = (*(volatile u8 *) (u32) (gp + -31301));
    (*(volatile u8 *) (u32) (sp + 168)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 169)) = (u8) v1;
    a0 = (*(volatile u8 *) (u32) (gp + -31298));
    v1 = (*(volatile u8 *) (u32) (gp + -31297));
    (*(volatile u8 *) (u32) (sp + 175)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 170)) = (u8) a0;
    { s32 c_ = s0 == 0; (*(volatile u8 *) (u32) (sp + 171)) = (u8) v1; if (c_) goto L_008D5648; }
    v1 = (*(volatile u8 *) (u32) (sp + 167));
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    v1 = v1;
    at = v1 < 11;
    if (at == 0) { ; goto L_008D564C; }
    if (v1 == 0) goto L_008D5648;
    v1 = (*(volatile s32 *) (u32) (s0 + 244));
    if (v1 == 0) goto L_008D5648;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u8 *) (u32) (v0 + 32)); v0 = func_00292F00(a0);
    s7 = v0 & 0xff;
    fp = 0;
    v0 = (s32) 0x8f0000U;
    s5 = 0;
    a1 = (*(volatile s16 *) (u32) (v0 + -9528));
    s2 = (s32) ((u32) sp + 0xacU);
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (s0 + 10)) = (u16) a1;
    a0 = (*(volatile s16 *) (u32) (v0 + -9526));
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (s0 + 12)) = (u16) a0;
    v1 = (*(volatile s16 *) (u32) (v0 + -9524));
    v0 = (s32) 0x8f0000U;
    (*(volatile u16 *) (u32) (s0 + 14)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + -9522));
    (*(volatile u16 *) (u32) (s0 + 16)) = (u16) v0;
L_008D5504:;
    s6 = (*(volatile s32 *) (u32) (s0 + 244));
    s3 = 0;
    s4 = 0;
    s1 = s5 & 0xff;
L_008D5518:;
    v0 = (s32) ((u32) s6 + (u32) s4);
    a0 = (*(volatile u8 *) (u32) (v0 + 32)); v0 = func_00292F00(a0);
    v0 = v0 & 0xff;
    if (s1 != v0) goto L_008D5538;
    v0 = (s32) ((u32) s3 + 0x1U);
    s3 = v0 & 0xff;
L_008D5538:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 11;
    if (v0 != 0) goto L_008D5518;
    v1 = (*(volatile u8 *) (u32) s2);
    a0 = s3 & 0xff;
    v0 = (s32) ((u32) s0 + (u32) s5);
    v1 = a0 < v1;
    { s32 c_ = s5 != s7; (*(volatile u8 *) (u32) (v0 + 5)) = (u8) v1; if (c_) goto L_008D5568; }
    fp = a0;
L_008D5568:;
    s5 = (s32) ((u32) s5 + 0x1U);
    at = s5 < 5;
    { s32 c_ = at != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_008D5504; }
    a0 = s7 & 0xff;
    v1 = fp & 0xff;
    v0 = (s32) ((u32) a0 + (u32) sp);
    v0 = (*(volatile u8 *) (u32) (v0 + 168));
    at = v0 < v1;
    if (at != 0) { v0 = (s32) ((u32) a0 + (u32) s0); goto L_008D55AC; }
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 7)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) 0;
    v0 = (s32) ((u32) a0 + (u32) s0);
L_008D55AC:;
    s1 = 1;
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) s1;
    v0 = (s32) ((u32) s0 + (u32) s1);
L_008D55B8:;
    a1 = s1 & 0xff;
    v0 = (*(volatile u8 *) (u32) (v0 + 5));
    a0 = (s32) ((u32) s0 + 0x15cU);
    a2 = (u64) 0 < (u64) v0; func_008D7690(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) s1); goto L_008D55B8; }
    a1 = (*(volatile u8 *) (u32) (sp + 167));
    a0 = (s32) ((u32) s0 + 0x15cU); func_008D78B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s0 + 244));
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) (v0 + 32));
    a0 = (s32) ((u32) s0 + 0x15cU); func_008D7310(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    a0 = (s32) ((u32) s0 + 0x15cU);
    a1 = (*(volatile s32 *) (u32) (s0 + 244));
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (*(volatile u8 *) (u32) (v1 + 32));
    a2 = (s32) ((u32) v0 + 0x2bU); func_008D7090(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (sp + 167));
    a0 = (*(volatile s32 *) (u32) (s0 + 244));
    v1 = v1;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) (v1 + 43));
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    (*(volatile u8 *) (u32) s0) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
L_008D5648:;
L_008D564C:;
    return;
}
