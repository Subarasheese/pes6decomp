/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_006396E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a1 + (u32) v0);
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffffd0cfU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); return v0;
}
