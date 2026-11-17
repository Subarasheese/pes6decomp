/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00149260(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) ((u32) a1 << 5);
    a2 = (s32) ((u32) a0 << 4);
    a1 = (s32) 0x510000U;
    a0 = (s32) ((u32) a2 + (u32) a0);
    a1 = (s32) ((u32) a1 + 0xffffad90U);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) v1 + 0x18U);
    v1 = (*(volatile s32 *) (u32) (v1 + 36));
    if (v1 == 0) goto L_00149398;
    a3 = (*(volatile s32 *) (u32) a1);
L_00149294:;
    v1 = (*(volatile s32 *) (u32) (a3 + 28));
    if (v1 != 0) goto L_001493D8;
    a2 = (*(volatile s32 *) (u32) (a3 + 4));
    if (a2 == 0) goto L_00149358;
L_001492B0:;
    v1 = (*(volatile s32 *) (u32) (a2 + 28));
    v1 = (u64) 0 < (u64) v1;
    v1 = v1 ^ 0x1;
    if (v1 == 0) goto L_00149358;
    v1 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) (a3 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    if (v1 == 0) { (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a3; goto L_001492E0; }
    (*(volatile u32 *) (u32) v1) = (u32) a3;
L_001492E0:;
    a0 = (*(volatile u8 *) (u32) (a3 + 105));
    v1 = (*(volatile u8 *) (u32) (a2 + 105));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (a3 + 105)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (a2 + 8));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (a2 + 12)); if (c_) goto L_001493A0; }
L_00149300:;
    if (a0 == 0) goto L_001493B0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) v1;
L_00149310:;
    if (v1 == 0) goto L_00149320;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) a0;
L_00149320:;
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 12)) = (u32) 0;
L_00149328:;
    v1 = (*(volatile s32 *) (u32) (a1 + 16));
    if (v1 == 0) goto L_001493B8;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a2 + 4));
    (*(volatile u32 *) (u32) v1) = (u32) a2;
L_00149340:;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) a2;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 28)) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) (a3 + 4));
    if (a2 != 0) goto L_001492B0;
L_00149358:;
    a0 = (*(volatile s32 *) (u32) (a3 + 8));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (a3 + 12)); if (c_) goto L_001493C0; }
L_00149368:;
    if (a0 == 0) goto L_001493D0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) v1;
L_00149378:;
    if (v1 == 0) goto L_00149388;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) a0;
L_00149388:;
    (*(volatile u32 *) (u32) (a3 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a3 + 12)) = (u32) 0; goto L_001493D8;
L_00149398:;
    goto L_001493E4;
L_001493A0:;
    if (v1 == 0) goto L_00149328;
    goto L_00149300;
L_001493B0:;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) v1; goto L_00149310;
L_001493B8:;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) 0; goto L_00149340;
L_001493C0:;
    if (v1 == 0) goto L_001493D8;
    goto L_00149368;
L_001493D0:;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) v1; goto L_00149378;
L_001493D8:;
    a3 = (*(volatile s32 *) (u32) (a3 + 4));
    if (a3 != 0) goto L_00149294;
L_001493E4:;
    return;
}
