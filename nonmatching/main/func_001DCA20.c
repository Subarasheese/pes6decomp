/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FD0(s32, s32, s32, s32);

s32 func_001DCA20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x530000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -21512));
    a2 = (s32) 0x530000U;
    v0 = 26999;
    v1 = 26500;
    a2 = (s32) ((u32) a2 + 0xffffabf0U);
    a1 = (s32) ((u32) s0 + 0xffff987cU);
L_001DCA48:;
    a1 = (s32) ((u32) a2 + (u32) a1);
    a3 = (s32) ((u32) a1 + 0xcU);
    a1 = (*(volatile u8 *) (u32) (a1 + 12));
    a1 = a1 & 0x1;
    a1 = (u64) 0 < (u64) a1;
    if (a1 == 0) { v1 = (s32) ((u32) s0 + 0x1U); goto L_001DCA94; }
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 27000;
    if (at != 0) { at = s0 < 26500; goto L_001DCA7C; }
    s0 = v1; goto L_001DCA8C;
L_001DCA7C:;
    if (at == 0) goto L_001DCA8C;
    s0 = v0; goto L_001DCA8C;
L_001DCA8C:;
    a1 = (s32) ((u32) s0 + 0xffff987cU); goto L_001DCA48;
L_001DCA94:;
    at = v1 < 27000;
    if (at != 0) { at = v1 < 26500; goto L_001DCAA8; }
    v1 = 26500; goto L_001DCAB8;
L_001DCAA8:;
    if (at == 0) goto L_001DCAB8;
    v1 = 26999; goto L_001DCAB8;
L_001DCAB8:;
    v0 = (s32) 0x530000U;
    a1 = 1;
    (*(volatile u32 *) (u32) (v0 + -21512)) = (u32) v1;
    a2 = 100;
    v0 = (*(volatile u8 *) (u32) a3);
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) a3) = (u8) v0; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) s0;
    v1 = (s32) 0x530000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -21520));
    if (v1 == 0) goto L_001DCB14;
    a0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -21516));
    (*(volatile u32 *) (u32) (a0 + 96)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (v1 + -21516));
    (*(volatile u32 *) (u32) (v0 + 92)) = (u32) v1;
L_001DCB04:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -21516)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 96)) = (u32) 0; goto L_001DCB24;
L_001DCB14:;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -21520)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 92)) = (u32) 0; goto L_001DCB04;
L_001DCB24:;
    return v0;
}
