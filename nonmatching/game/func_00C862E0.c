/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_001B9690(s32, s32, s32, s32, s32);
s32 func_001B9750(s32, s32, s32, s32);
s32 func_00C85ED0(s32, s32, s32, s32);

void func_00C862E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s0 = (*(volatile s32 *) (u32) (gp + -19180));
    { s32 c_ = s0 == 0; s2 = 1; if (c_) goto L_00C86574; }
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
    if (a0 != 0) { v0 = s2; goto L_00C86578; }
    v1 = (*(volatile s32 *) (u32) (s0 + 48));
    v0 = v1 & 0x1;
    if (v0 == 0) { v0 = (s32) ((u32) a0 << 2); goto L_00C8635C; }
    v0 = v1 & 0x8;
    if (v0 != 0) goto L_00C86358;
    v0 = (s32) ((u32) s2 << (a0 & 31));
    v0 = v1 | v0;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; goto L_00C86574;
L_00C86358:;
    v0 = (s32) ((u32) a0 << 2);
L_00C8635C:;
    s1 = 1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    { s32 c_ = v0 == s1; s2 = 0; if (c_) goto L_00C8644C; }
    if (v0 == 0) { v0 = v1 & 0x8; goto L_00C86380; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00C86544;
L_00C86380:;
    if (v0 == 0) goto L_00C863E0;
    a2 = (s32) 0xc80000U;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) a2 + 0x6010U); v0 = func_00C85ED0(a0, a1, a2, a3);
    s3 = v0;
    { s32 c_ = s3 == 0; s1 = (*(volatile s32 *) (u32) (sp + 92)); if (c_) goto L_00C86430; }
    a0 = s3;
    a1 = s1; v0 = func_001B9750(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00C863C8; }
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) s3;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) s1; goto L_00C86430;
L_00C863C8:;
    if (s3 == 0) { v0 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00C86434; }
    a0 = s3; Pes6Heap_Free(a0, a1);
    goto L_00C86430;
L_00C863E0:;
    a2 = (s32) 0xc80000U;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x58U);
    a2 = (s32) ((u32) a2 + 0x6020U); v0 = func_00C85ED0(a0, a1, a2, a3);
    s3 = v0;
    { s32 c_ = s3 == 0; s1 = (*(volatile s32 *) (u32) (sp + 88)); if (c_) goto L_00C86430; }
    a0 = s3;
    a1 = s1; v0 = func_001B9750(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00C86420; }
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) s3;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) s1; goto L_00C86430;
L_00C86420:;
    if (s3 == 0) goto L_00C86430;
    a0 = s3; Pes6Heap_Free(a0, a1);
L_00C86430:;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
L_00C86434:;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0; goto L_00C86574;
L_00C8644C:;
    a0 = (*(volatile s32 *) (u32) s0);
    if (a0 == 0) goto L_00C86520;
    s1 = 0; v0 = func_001B9690(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_00C86520;
    a2 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = a2 == 0; s1 = 1; if (c_) goto L_00C864A8; }
    { s32 c_ = a1 <= 0; a3 = 0; if (c_) goto L_00C864A8; }
    a0 = (*(volatile s32 *) (u32) a2);
    v1 = 4;
L_00C86488:;
    if (a0 != v1) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00C8649C; }
    v0 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0; goto L_00C864A8;
L_00C8649C:;
    v0 = a3 < a1;
    if (v0 != 0) goto L_00C86488;
L_00C864A8:;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    { s32 c_ = a1 == 0; a0 = (*(volatile s32 *) (u32) (s0 + 8)); if (c_) goto L_00C864F8; }
    { s32 c_ = a0 <= 0; a3 = 0; if (c_) goto L_00C864F8; }
    a2 = a1;
    v1 = 5;
L_00C864C4:;
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) { a3 = (s32) ((u32) a3 + 0x1U); goto L_00C864EC; }
    v0 = (s32) ((u32) a3 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u32 *) (u32) (s0 + 56)) = (u32) v0; goto L_00C864F8;
L_00C864EC:;
    v0 = a3 < a0;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0xcU); if (c_) goto L_00C864C4; }
L_00C864F8:;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (a0 == 0) goto L_00C86520;
    if (a0 == 0) { (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0; goto L_00C8651C; }
    Pes6Heap_Free(a0, a1);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) 0;
L_00C8651C:;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
L_00C86520:;
    if (s1 == 0) goto L_00C86574;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v1 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
L_00C86544:;
    s2 = 1;
    v0 = (*(volatile s32 *) (u32) (s0 + 48));
    v1 = (s32) ((u32) s2 << (v1 & 31));
    v0 = v0 | v1;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
L_00C86574:;
    v0 = s2;
L_00C86578:;
    return;
}
