/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B789A0(void) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7092));
    at = (u64) v0 < (u64) (s64) 37;
    if (at == 0) goto L_00B789E0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe650U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb789d0U) goto L_00B789D0; if (t_ == 0xb789d8U) goto L_00B789D8; }
L_00B789D0:;
    v0 = 1; goto L_00B789E4;
L_00B789D8:;
    v0 = 0; goto L_00B789E4;
L_00B789E0:;
    v0 = 0;
L_00B789E4:;
    return v0;
}
