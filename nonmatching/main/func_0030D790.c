/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0030D790(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    if (a1 < 0) { (*(volatile u32 *) (u32) a0) = (u32) 0; goto L_0030D7BC; }
    if (a2 < 0) goto L_0030D7B8;
    at = a1 < 2;
    if (at == 0) goto L_0030D7B8;
    v0 = a2 < 32;
    if (v0 != 0) goto L_0030D7C4;
L_0030D7B8:;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
L_0030D7BC:;
    v0 = 0; goto L_0030D874;
L_0030D7C4:;
    if (a1 < 0) { a4 = 0; goto L_0030D82C; }
    if (a2 < 0) goto L_0030D7E8;
    at = a1 < 2;
    if (at == 0) goto L_0030D7E8;
    if (v0 != 0) { v0 = (s32) ((u32) a1 << 4); goto L_0030D7F4; }
L_0030D7E8:;
    a4 = 0;
    goto L_0030D82C;
L_0030D7F4:;
    a3 = (s32) 0x590000U;
    a4 = (s32) ((u32) v0 - (u32) a1);
    a3 = (s32) ((u32) a3 + 0x2a55U);
    v0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) a4 << 3);
    a4 = (s32) ((u32) v0 - (u32) a4);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a4 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a4 = (*(volatile u8 *) (u32) v0);
L_0030D82C:;
    v0 = (s32) ((u32) a1 << 4);
    a3 = (s32) 0x590000U;
    a1 = (s32) ((u32) v0 - (u32) a1);
    a3 = (s32) ((u32) a3 + 0x29c0U);
    v0 = (s32) ((u32) a2 << 4);
    v1 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a3 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = 1;
    v1 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u32 *) (u32) a0) = (u32) v1;
L_0030D874:;
    return v0;
}
