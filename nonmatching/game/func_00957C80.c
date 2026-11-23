/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00957C80(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 480));
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00957CB4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9af0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x957cacU) goto L_00957CAC; if (t_ == 0x957cb4U) goto L_00957CB4; }
L_00957CAC:;
    v0 = 1; goto L_00957CB8;
L_00957CB4:;
    v0 = 0;
L_00957CB8:;
    return v0;
}
