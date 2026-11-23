/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001DF2F0(s32);
s32 func_001F08B0(s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);

void func_00631770(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    s7 = a0;
    s6 = 0;
    s4 = a1;
    s3 = (s32) 0x660000U;
    s3 = (s32) ((u32) s3 + 0xffffc2b0U);
    s2 = 0;
    s5 = (*(volatile s32 *) (u32) (a0 + 28));
    s0 = (s32) 0x650000U;
    s1 = s4;
    s0 = (s32) ((u32) s0 + 0x7df0U);
L_006317C0:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_006317E8;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s5;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
    s6 = 1;
L_006317E8:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s5; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 26;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006317C0; }
    a0 = s5;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = 0;
    s0 = s4;
L_00631820:;
    v1 = (s32) ((u32) s3 + (u32) s1);
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v1 != v0) goto L_00631840;
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_00631870;
L_00631840:;
    v0 = 4;
    if (v1 != v0) goto L_00631860;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -32216)); v0 = func_001F08B0(a0);
    goto L_00631870;
L_00631860:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -32212)); v0 = func_001F08B0(a0);
L_00631870:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00631820; }
    s0 = 0;
    s1 = s4;
L_00631894:;
    v1 = (s32) ((u32) s3 + (u32) s0);
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v1 != v0) goto L_006318B0;
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_006318C8;
L_006318B0:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8230U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_006318C8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 32));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF2F0(a0);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00631894; }
    v0 = 1;
    if (s6 != v0) goto L_00631938;
    s2 = (s32) 0x660000U;
    s0 = 0;
    s2 = (s32) ((u32) s2 + 0xffff8260U);
    s1 = s4;
L_0063190C:;
    a0 = (*(volatile s32 *) (u32) s2); v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s0 < 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0063190C; }
L_00631938:;
    s0 = 0;
L_0063193C:;
    v1 = (*(volatile u8 *) (u32) (s3 + 8));
    v0 = 1;
    if (v1 != v0) goto L_00631954;
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_0063196C;
L_00631954:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8230U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_0063196C:;
    a0 = (*(volatile s32 *) (u32) (s4 + 96));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 96));
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_001DF2F0(a0);
    s0 = (s32) ((u32) s0 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x4U); if (c_) goto L_0063193C; }
    a0 = (*(volatile s32 *) (u32) (s7 + 28));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
