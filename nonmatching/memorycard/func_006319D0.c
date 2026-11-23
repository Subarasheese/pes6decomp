/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001DF460(s32, s32);
s32 func_001F08B0(s32);
void func_0020E310(s32, s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);

void func_006319D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s7 = a0;
    s6 = (s32) 0x660000U;
    s6 = (s32) ((u32) s6 + 0xffffc2b0U);
    s4 = a1;
    s5 = 0;
    s2 = 0;
    s1 = s4;
    s3 = (*(volatile s32 *) (u32) (a0 + 24));
    s0 = (s32) 0x660000U;
    s0 = (s32) ((u32) s0 + 0xffff8210U);
L_00631A20:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00631A48;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
    s5 = 1;
L_00631A48:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s3; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00631A20; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 1;
    if (s5 != v0) { v1 = (*(volatile u8 *) (u32) (s6 + 16)); goto L_00631AD0; }
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x3b; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) s4);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x20; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x1d; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s6 + 16));
L_00631AD0:;
    v0 = 3;
    if (v1 == v0) { v0 = (s32) 0x640000U; goto L_00631AEC; }
    v0 = 1;
    if (v1 != v0) { v0 = (s32) 0x640000U; goto L_00631AFC; }
    v0 = (s32) 0x640000U;
L_00631AEC:;
    a0 = v0 | 0x80; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_00631B08;
L_00631AFC:;
    a0 = v0 | 0x5d; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
L_00631B08:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (s6 + 16));
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = (s32) 0x640000U; goto L_00631B38; }
    v0 = (s32) 0x640000U;
    a0 = v0 | 0x80; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 8)); goto L_00631B44;
L_00631B38:;
    a0 = v0 | 0x5e; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 8));
L_00631B44:;
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x9cU); func_0020E310(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x98U); func_0020E310(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s6 + 7));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_00631B84; }
    v1 = (*(volatile u8 *) (u32) (s6 + 19));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s6 + 6)); goto L_00631BA8; }
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
L_00631B84:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x9cU); func_001DF460(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x9cU); func_001DF460(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s7 + 24)); goto L_00631BF8;
L_00631BA8:;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_00631BD8; }
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x98U); func_001DF460(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x9cU); func_001DF460(a0, a1);
    goto L_00631BF4;
L_00631BD8:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x9cU); func_001DF460(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s4 + 16));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0x98U); func_001DF460(a0, a1);
L_00631BF4:;
    a0 = (*(volatile s32 *) (u32) (s7 + 24));
L_00631BF8:;
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
