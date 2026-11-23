/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
s32 func_001F08B0(s32);
void func_00634BD0(s32);
void func_0063ABF0(s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
s32 func_0063AD90(s32, s32, s32, s32);
s32 func_00645820(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00634810(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    s6 = a1;
    s5 = a0;
    s4 = (s32) ((u32) s6 + 0x2acU);
    s2 = 0;
    s1 = s4;
    s7 = (*(volatile s32 *) (u32) (a1 + 4));
    s0 = (s32) 0x650000U;
    s0 = (s32) ((u32) s0 + 0x7ce0U);
    s3 = (*(volatile s32 *) (u32) (s7 + 76));
L_0063485C:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00634880;
    a2 = (*(volatile s32 *) (u32) s0);
    a0 = s3;
    a1 = s1;
    a3 = (s32) ((u32) gp + 0xffff83acU); v0 = func_0063AD90(a0, a1, a2, a3);
L_00634880:;
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) s1);
    a0 = s3; func_0063ABF0(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0063485C; }
    a0 = s3;
    a1 = 1; func_001D7D60(a0, a1);
    a0 = s6; func_00634BD0(a0);
    s1 = 0;
    s0 = s4;
L_006348C0:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) gp + 0xffff83acU); func_0063AD20(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 21;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_006348C0; }
    a0 = 131; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 20));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s5 + 44));
    v0 = 1;
    if (v1 != v0) { a0 = 144; goto L_00634904; }
    a0 = 143;
L_00634904:;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 140; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 28));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a2 = (*(volatile s8 *) (u32) (s5 + 47));
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) gp + 0xffff83d0U);
    a1 = (s32) ((u32) a1 + 0xffffaf80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 24));
    a1 = (s32) ((u32) gp + 0xffff83d0U); func_0063AD20(a0, a1, a2, a3);
    a0 = 137; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 36));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s5 + 46));
    v0 = 1;
    if (v1 != v0) { a0 = 135; goto L_00634974; }
    a0 = 136;
L_00634974:;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 32));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = 134; v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 44));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v1 = (*(volatile s8 *) (u32) (s5 + 45));
    v0 = 1;
    if (v1 != v0) { a0 = 138; goto L_006349B0; }
    a0 = 139;
L_006349B0:;
    v0 = func_00645820(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 40));
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x38; v0 = func_001F08B0(a0);
    a2 = (*(volatile s32 *) (u32) (s5 + 48));
    at = (s32) 0x980000U;
    at = at | 0x9680;
    at = a2 < at;
    if (at != 0) goto L_006349F4;
    v1 = (s32) 0x980000U;
    a2 = v1 | 0x967f; goto L_00634A00;
L_006349F4:;
    if (a2 >= 0) { a4 = (*(volatile u16 *) (u32) (s5 + 52)); goto L_00634A04; }
    a2 = 0;
L_00634A00:;
    a4 = (*(volatile u16 *) (u32) (s5 + 52));
L_00634A04:;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a3 = v0;
    a0 = (s32) ((u32) a0 + 0xffff80e0U);
    a1 = (s32) ((u32) a1 + 0xffffaff0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s4 + 48));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80e0U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s7 + 76));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
