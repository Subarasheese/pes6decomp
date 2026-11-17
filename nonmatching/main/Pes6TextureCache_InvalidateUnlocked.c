/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void Pes6TextureCache_InvalidateUnlocked(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x500000U;
    a1 = (s32) 0x500000U;
    a4 = (*(volatile s32 *) (u32) (v1 + 31380));
    a1 = (s32) ((u32) a1 + 0x7a90U);
    if (a4 == a1) goto L_00145D68;
L_00145D08:;
    v1 = (*(volatile s32 *) (u32) (a4 + 8));
    if (v1 != a0) { a4 = (*(volatile s32 *) (u32) (a4 + 4)); goto L_00145D5C; }
    a3 = (*(volatile s32 *) (u32) (a4 + 4));
    a2 = (s32) 0x500000U;
    a2 = (s32) ((u32) a2 + 0x7a90U);
    if (a3 == a2) goto L_00145D54;
    a1 = (*(volatile s32 *) (u32) a4);
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) a3;
    (*(volatile u32 *) (u32) a3) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (a0 + 31376));
    (*(volatile u32 *) (u32) a4) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) a4);
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) a4;
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a2;
    (*(volatile u32 *) (u32) (v1 + 31376)) = (u32) a4;
L_00145D54:;
    (*(volatile u32 *) (u32) (a4 + 8)) = (u32) 0; goto L_00145D68;
L_00145D5C:;
    if (a4 != a1) goto L_00145D08;
L_00145D68:;
    return;
}
