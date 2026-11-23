/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
s32 func_00246550(s32);
s32 func_0062FD90(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00634BD0(s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);
s32 func_00645820(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00633A60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s6 = a1;
    s5 = a0;
    s4 = (s32) ((u32) s6 + 0x2acU);
    s2 = 0;
    s1 = s4;
    s7 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = (s32) 0x650000U;
    s0 = (s32) ((u32) s0 + 0x7ce0U);
    s3 = (*(volatile s32 *) (u32) (s7 + 76));
L_00633AAC:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00633AD0;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_00633AD0:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s3; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00633AAC; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s6; func_00634BD0(a0);
    s1 = 0;
    s0 = s4;
L_00633B10:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) gp + 0xffff83acU); func_0063AD20(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00633B10; }
    a0 = 40; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 57));
    a0 = (s32) ((u32) v0 + 0x2cU); v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) s4);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 41; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 170; v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) { s0 = 0; goto L_00633B84; }
    s0 = 11;
L_00633B84:;
    a0 = (*(volatile u8 *) (u32) (s5 + 56));
    v1 = 6;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffa260U);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    s0 = (s32) ((u32) s0 + (u32) v1);
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 8));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 42; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 20));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s5 + 100));
    a0 = (s32) ((u32) v0 + 0x38U); v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s5 + 52));
    v1 = 8;
    { s32 c_ = a0 == v1; v0 = 0; if (c_) goto L_00633C8C; }
    v1 = 10;
    if (a0 == v1) { s0 = 3; goto L_00633C90; }
    v1 = 9;
    if (a0 == v1) goto L_00633C8C;
    v1 = 7;
    if (a0 == v1) { s0 = 2; goto L_00633C90; }
    v1 = 1;
    if (a0 == v1) goto L_00633C80;
    if (a0 == 0) goto L_00633C80;
    v1 = 4;
    if (a0 == v1) { s0 = 4; goto L_00633C90; }
    v1 = 3;
    if (a0 == v1) goto L_00633C74;
    v1 = 2;
    if (a0 == v1) goto L_00633C74;
    v1 = 5;
    if (a0 == v1) goto L_00633C74;
    v1 = 58;
    if (a0 == v1) goto L_00633C74;
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_00633C90;
L_00633C74:;
    s0 = 4;
    goto L_00633C90;
L_00633C80:;
    s0 = 2;
    goto L_00633C90;
L_00633C8C:;
    s0 = 3;
L_00633C90:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s4 + 24)); goto L_00633CB4; }
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa1f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 24));
L_00633CB4:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x470000U;
    a0 = v0 | 0x1f; v0 = func_001F08B0(a0);
    a2 = (*(volatile u8 *) (u32) (s5 + 99));
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a3 = (*(volatile u8 *) (u32) (s5 + 54));
    s0 = v0;
    a0 = (s32) ((u32) a0 + 0xffff8178U);
    a1 = (s32) ((u32) a1 + 0xffffaf58U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 36));
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s4 + 32));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8178U); func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s5 + 52));
    v0 = 5;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s5 + 55)); goto L_00633D48; }
    v0 = 2;
    if (v1 == v0) goto L_00633D44;
    v0 = 3;
    if (v1 == v0) goto L_00633D44;
    v0 = 4;
    if (v1 == v0) goto L_00633D44;
    v0 = 58;
    if (v1 != v0) { s1 = (s32) ((u32) gp + 0xffff83acU); goto L_00633D74; }
L_00633D44:;
    v1 = (*(volatile u8 *) (u32) (s5 + 55));
L_00633D48:;
    v0 = 1;
    if (v1 != v0) { s0 = 56; goto L_00633D58; }
    s0 = 57;
L_00633D58:;
    a0 = 84; v0 = func_00645820(a0);
    a0 = s0;
    s0 = v0; v0 = func_00645820(a0);
    s1 = v0; goto L_00633D78;
L_00633D74:;
    s0 = s1;
L_00633D78:;
    a0 = (*(volatile s32 *) (u32) (s4 + 44));
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s4 + 40));
    a1 = s1; func_0063AD20(a0, a1, a2, a3);
    a0 = s5; v0 = func_0062FD90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 48));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s7 + 76));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
