/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00997D60(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (a2 == v0) { v0 = 1; goto L_00997E04; }
    a1 = (*(volatile u8 *) (u32) (a0 + 36));
    v0 = 1;
    if (a1 == v0) { a0 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_00997DE8; }
L_00997D84:;
    v0 = 2;
    if (a1 == v0) { v0 = 0; goto L_00997E04; }
    v1 = (s32) 0x590000U;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x2800U);
L_00997D9C:;
    v0 = (*(volatile u8 *) (u32) (v1 + 16));
    if (a2 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00997DD4; }
    v0 = (s32) ((u32) a1 << 2);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0x2803U);
    a1 = (s32) ((u32) v1 << 3);
    v0 = 2;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 != 0) v0 = v1; goto L_00997E04;
L_00997DD4:;
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x28U); if (c_) goto L_00997D9C; }
    v0 = 0; goto L_00997E04;
L_00997DE8:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (a2 != v1) goto L_00997D84;
L_00997E04:;
    return v0;
}
