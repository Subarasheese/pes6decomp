/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0012AD50(s32);
s32 func_0012ADE0(s32);
s32 func_00146C70(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00145750(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    s3 = a0;
    s2 = (*(volatile s32 *) (u32) (a0 + 12));
    { s32 c_ = s2 == 0; s0 = s2 & 0x7f; if (c_) goto L_00145814; }
    v0 = (*(volatile s32 *) (u32) (gp + -32552));
    if (v0 != 0) goto L_0014582C;
L_00145784:;
    v0 = (s32) 0x500000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0x7884U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = a1 == 0; a0 = 0; if (c_) goto L_001457E0; }
L_001457A0:;
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    if (v0 != s2) { a0 = a1; goto L_001457D0; }
    if (a0 == 0) goto L_001457C8;
    v0 = (*(volatile s32 *) (u32) a1);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    (*(volatile u32 *) (u32) v1) = (u32) a1;
L_001457C8:;
    s1 = (*(volatile s32 *) (u32) (a1 + 8)); goto L_001457E4;
L_001457D0:;
    a1 = (*(volatile s32 *) (u32) a1);
    if (a1 != 0) goto L_001457A0;
L_001457E0:;
    s1 = 0;
L_001457E4:;
    v0 = (*(volatile s32 *) (u32) (gp + -32552));
    if (v0 != 0) goto L_00145840;
L_001457F0:;
    if (s1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32552)); goto L_00145854; }
    a0 = (s32) 0x3c0000U;
    a1 = s3;
    a2 = s2;
    a0 = (s32) ((u32) a0 + 0x69f0U); v0 = func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1; goto L_001458D8;
L_00145814:;
    a0 = (s32) 0x3c0000U;
    a1 = s3;
    a0 = (s32) ((u32) a0 + 0x6a20U); v0 = func_00146C70(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1; goto L_001458D8;
L_0014582C:;
    v0 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31368)); v0 = func_0012AD50(a0);
    goto L_00145784;
L_00145840:;
    v0 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31368)); v0 = func_0012ADE0(a0);
    goto L_001457F0;
L_00145854:;
    if (v0 != 0) goto L_001458B0;
L_0014585C:;
    v0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 30848));
    a0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0x7884U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) a1);
    v0 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (v0 + 30848)) = (u32) a0;
    v0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) s2;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) s3;
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    (*(volatile u16 *) (u32) (s3 + 60)) = (u16) 0;
    (*(volatile u16 *) (u32) (s3 + 62)) = (u16) 0;
    v0 = (*(volatile s32 *) (u32) (gp + -32552));
    if (v0 != 0) goto L_001458C4;
L_001458A8:;
    v0 = 0; goto L_001458D8;
L_001458B0:;
    v0 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31368)); v0 = func_0012AD50(a0);
    goto L_0014585C;
L_001458C4:;
    v0 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 31368)); v0 = func_0012ADE0(a0);
    goto L_001458A8;
L_001458D8:;
    return v0;
}
