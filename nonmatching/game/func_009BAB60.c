/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009BAB60(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + 6));
    v0 = (s32) ((u32) v0 + 0xfffffd62U);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_009BABA0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa5f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9bab98U) goto L_009BAB98; }
L_009BAB98:;
    v0 = 1; goto L_009BABA4;
L_009BABA0:;
    v0 = 0;
L_009BABA4:;
    return v0;
}
