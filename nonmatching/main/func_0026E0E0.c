/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0026E0E0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) ((u32) a0 + 0xffffff9cU);
    at = (u64) v1 < (u64) (s64) 13;
    if (at == 0) goto L_0026E128;
    a1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffff9b20U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26e114U) goto L_0026E114; }
    goto L_0026E128;
L_0026E114:;
    v1 = (s32) 0x590000U;
    a1 = 1;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -10092)) = (u32) a1;
L_0026E128:;
    return v0;
}
