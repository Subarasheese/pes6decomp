/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00C13510(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = -1;
    if (a0 == v0) goto L_00C13598;
    if (a1 == 0) goto L_00C13598;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0x10000U;
    v1 = (s32) ((u32) v1 + 0xfffffaa0U);
    a0 = (s32) ((u32) a0 + 0x4U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) (v0 + -19934));
    v0 = (s32) ((u32) v0 << 2);
    a3 = (s32) ((u32) v1 + (u32) v0);
    at = (u64) a0 < (u64) a3;
    if (at == 0) goto L_00C13598;
L_00C13550:;
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    { s32 c_ = a2 == 0; a4 = a2; if (c_) goto L_00C13580; }
    v1 = v0 & 0xff;
L_00C13560:;
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    v0 = (s32) ((u32) a1 + (u32) a4);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) { a0 = (s32) ((u32) a0 + 0x4U); goto L_00C13588; }
    if (a4 != 0) goto L_00C13560;
L_00C13580:;
    v0 = a0; goto L_00C1359C;
L_00C13588:;
    v0 = (u64) a0 < (u64) a3;
    if (v0 != 0) goto L_00C13550;
L_00C13598:;
    v0 = -1;
L_00C1359C:;
    return v0;
}
