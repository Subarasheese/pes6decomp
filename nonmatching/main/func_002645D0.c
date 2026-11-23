/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002645D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    a2 = a2 & 0xff;
    a3 = (s32) ((u32) a2 + (u32) a0);
    v1 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) (a3 + 20));
    a2 = (s32) ((u32) a2 << 1);
    a2 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) a2 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a1;
    v1 = (*(volatile u8 *) (u32) (a3 + 20));
    v1 = (s32) ((u32) v1 + 0x1U);
    a1 = v1 & 0xff;
    at = a1 < 10;
    if (at == 0) goto L_00264688;
    v1 = 10;
    v1 = (s32) ((u32) v1 - (u32) a1);
    at = (u64) v1 < (u64) (s64) 9;
    if (at != 0) goto L_00264660;
    at = (u64) a1 < (u64) (s64) 11;
    if (at == 0) goto L_00264660;
L_0026462C:;
    a0 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) a1 + 0x8U);
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    a1 = v1 & 0xff;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) 0;
    v1 = a1 < 2;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 6)) = (u8) 0;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a0 + 7)) = (u8) 0; if (c_) goto L_0026462C; }
L_00264660:;
    at = a1 < 10;
    if (at == 0) goto L_00264688;
L_0026466C:;
    a0 = (s32) ((u32) a2 + (u32) a1);
    v1 = (s32) ((u32) a1 + 0x1U);
    a1 = v1 & 0xff;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = a1 < 10;
    if (v1 != 0) goto L_0026466C;
L_00264688:;
    return v0;
}
