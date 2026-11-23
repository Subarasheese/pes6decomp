/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00180B50(s32);
s32 func_00180BA0(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
void strcpy(s32, s32);

void func_001803A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) a0 >> 16;
    s5 = a2;
    s4 = a1;
    s1 = v0 & 0x7;
    s0 = a0 & 0xffff;
    a0 = s1; v0 = func_00180BA0(a0);
    a0 = s1;
    s3 = v0; v0 = func_00180B50(a0);
    v1 = (s32) 0x3000000U;
    a0 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0x200U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s2 = (*(volatile s32 *) (u32) v1);
    if (s2 == 0) goto L_00180518;
    s1 = (*(volatile s32 *) (u32) (s2 + 8));
    s7 = (*(volatile s32 *) (u32) (s1 + 4));
    { s32 c_ = s3 != 0; s6 = (*(volatile s32 *) (u32) (s2 + 4)); if (c_) goto L_00180448; }
    v1 = (*(volatile s32 *) (u32) (gp + -23280));
    v0 = 1;
    if (v1 == v0) goto L_0018043C;
    a2 = (*(volatile s32 *) (u32) s2); goto L_0018044C;
L_0018043C:;
    a2 = (s32) 0x3d0000U;
    a2 = (s32) ((u32) a2 + 0xffffca60U); goto L_0018044C;
L_00180448:;
    a2 = (*(volatile s32 *) (u32) s2);
L_0018044C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    s0 = (s32) ((u32) s0 << 3);
    v0 = (*(volatile s32 *) (u32) (s6 + 4));
    a1 = (*(volatile s32 *) (u32) (gp + -32524));
    a3 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a3);
    a4 = (*(volatile s32 *) (u32) (a3 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a0 = s5; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -23288));
    if (v1 == 0) goto L_00180504;
    v0 = (s32) ((u32) s7 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) v0);
    if (v0 == 0) goto L_00180504;
    if (s3 != 0) goto L_001804CC;
    v1 = (*(volatile s32 *) (u32) (gp + -23284));
    v0 = 1;
    if (v1 == v0) goto L_001804C0;
    a2 = (*(volatile s32 *) (u32) s2); goto L_001804D0;
L_001804C0:;
    a2 = (s32) 0x3d0000U;
    a2 = (s32) ((u32) a2 + 0xffffca60U); goto L_001804D0;
L_001804CC:;
    a2 = (*(volatile s32 *) (u32) s2);
L_001804D0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (*(volatile s32 *) (u32) (s6 + 4));
    a1 = (*(volatile s32 *) (u32) (gp + -32528));
    a3 = (s32) ((u32) v1 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) a3);
    a4 = (*(volatile s32 *) (u32) (a3 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0);
    a0 = s4; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_001804FC:;
    goto L_0018051C;
L_00180504:;
    a0 = s4;
    a1 = s5; strcpy(a0, a1);
    goto L_001804FC;
L_00180518:;
L_0018051C:;
    return;
}
