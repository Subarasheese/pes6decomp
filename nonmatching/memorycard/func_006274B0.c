/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_006274B0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = a0 & 0xffff;
    v0 = 0xffff;
    if (v1 != v0) { v0 = (s32) ((u32) a1 + 0xfffffffdU); goto L_006274C8; }
    v0 = 0; goto L_00627500;
L_006274C8:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_00627500; }
    at = v1 < 202;
    if (at == 0) goto L_006274FC;
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0xffff9e70U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1; goto L_00627500;
L_006274FC:;
    v0 = 0;
L_00627500:;
    return v0;
}
