/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B0400(s32);

s32 func_001A92C0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = 2;
    a1 = (*(volatile u8 *) (u32) (a0 + 51));
    if (a1 == v0) goto L_001A9320;
    if (a1 == 0) goto L_001A9320;
    v0 = 1;
    if (a1 == v0) goto L_001A92F4;
    a0 = 0; goto L_001A934C;
L_001A92F4:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) v0 + 0xff4U);
    a1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (a0 + 49));
    v1 = (*(volatile u16 *) (u32) (a0 + 64));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + (u32) v1); goto L_001A934C;
L_001A9320:;
    v0 = (*(volatile u8 *) (u32) (a0 + 501));
    if (v0 == 0) goto L_001A9380;
    v1 = (*(volatile s32 *) (u32) (a0 + 12));
    if (v1 == 0) goto L_001A935C;
    v0 = 9;
    if (v1 != v0) goto L_001A9380;
    goto L_001A935C;
L_001A934C:;
    v0 = func_001B0400(a0);
    goto L_001A93B0;
L_001A935C:;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile u16 *) (u32) (a0 + 52));
    v1 = (*(volatile s32 *) (u32) (v0 + 4148));
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4132));
    v1 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) v0 + (u32) v1); goto L_001A934C;
L_001A9380:;
    v0 = a1 & 0xff;
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xff4U);
    v0 = (*(volatile u8 *) (u32) (a0 + 49));
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u16 *) (u32) (a0 + 52));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + (u32) v1); goto L_001A934C;
L_001A93B0:;
    return v0;
}
