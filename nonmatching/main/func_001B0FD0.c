/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B1180(s32);

s32 func_001B0FD0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    s0 = (*(volatile s32 *) (u32) (gp + -23260));
    if (s0 == 0) goto L_001B10B0;
L_001B0FE8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    if (v1 == 0) goto L_001B10A0;
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    if (a0 == 0) goto L_001B1010;
    v1 = 1;
    if (a0 != v1) goto L_001B10A0;
L_001B1010:;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    if (v1 == 0) goto L_001B10A0;
    a0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x2350U);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 == 0) goto L_001B1070;
    at = a0 < 23;
    if (at == 0) goto L_001B1070;
    if (v1 == 0) goto L_001B1070;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (v1 + 101));
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v1 + 101)) = (u8) v0;
    v0 = v0 & 0xff;
    if (v0 > 0) goto L_001B1070;
    (*(volatile u8 *) (u32) (v1 + 101)) = (u8) 0;
L_001B1070:;
    a0 = s0; v0 = func_001B1180(a0);
    a0 = (*(volatile u8 *) (u32) (v0 + 101));
    v1 = (s32) 0x520000U;
    v1 = (s32) ((u32) v1 + 0x2350U);
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + 101)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) s0);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_001B10A0:;
    s0 = (*(volatile s32 *) (u32) (s0 + 36));
    if (s0 != 0) goto L_001B0FE8;
L_001B10B0:;
    return v0;
}
