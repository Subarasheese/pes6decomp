/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BA92A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_00BA92B8; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00BA92B8:;
    v1 = (s32) ((u32) a1 << 3);
    (*(volatile u32 *) (u32) (gp + -19456)) = (u32) 0;
    v1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) v1 << 6);
    a1 = (s32) ((u32) a1 + 0xffffe5b0U);
    a5 = (s32) ((u32) a1 + (u32) a2);
    a3 = (*(volatile u8 *) (u32) (a5 + 18));
    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x295bU);
    a1 = 255;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile u8 *) (u32) a2);
    { s32 c_ = a2 != a1; v1 = 0; if (c_) goto L_00BA9370; }
L_00BA92F4:;
    a6 = (s32) 0x590000U;
    a7 = 0;
    a6 = (s32) ((u32) a6 + 0x2800U);
    a2 = 1;
L_00BA9304:;
    a4 = (*(volatile u8 *) (u32) a6);
    at = a4 < 8;
    if (at == 0) goto L_00BA9348;
    a1 = (*(volatile u8 *) (u32) (a6 + 16));
    if (a0 == a1) { v1 = (s32) ((u32) a7 << 2); goto L_00BA9380; }
    a3 = (*(volatile u8 *) (u32) (a5 + 18));
    a1 = (*(volatile u8 *) (u32) (a6 + 1));
    if (a3 != a1) goto L_00BA9348;
    v1 = (s64) ((u64) v1 << 32);
    a1 = (s32) ((u32) a2 << (a4 & 31));
    v1 = v1 >> 32;
    v1 = v1 | a1;
    (*(volatile u32 *) (u32) (gp + -19456)) = (u32) v1;
L_00BA9348:;
    a7 = (s32) ((u32) a7 + 0x1U);
    a1 = a7 < 8;
    { s32 c_ = a1 != 0; a6 = (s32) ((u32) a6 + 0x28U); if (c_) goto L_00BA9304; }
L_00BA9358:;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    if (v1 == 0) { v1 = 0; goto L_00BA93A8; }
L_00BA9368:;
    goto L_00BA93BC;
L_00BA9370:;
    v1 = 1;
    v1 = (s32) ((u32) v1 << (a2 & 31));
    (*(volatile u32 *) (u32) (gp + -19456)) = (u32) v1; goto L_00BA92F4;
L_00BA9380:;
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a7);
    a0 = (s32) ((u32) a0 + 0x2800U);
    a1 = (s32) ((u32) a1 << 3);
    v1 = 1;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) v1 << (a0 & 31));
    (*(volatile u32 *) (u32) (gp + -19456)) = (u32) v1; goto L_00BA9358;
L_00BA93A8:;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    v1 = v1 | 0xff;
    (*(volatile u32 *) (u32) (gp + -19456)) = (u32) v1; goto L_00BA9368;
L_00BA93BC:;
    return;
}
