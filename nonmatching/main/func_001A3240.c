/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001A3240(void) {
    s32 v0 = 0, v1 = 0, a0 = 0, a1 = 0;

    a0 = (s32) 0x520000U;
    a1 = 1;
    v1 = (s32) 0x520000U;
    (*(u32 *) (u32) (a0 + 868)) = (u32) 0;
    (*(u32 *) (u32) (v1 + 864)) = (u32) a1;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    (*(u16 *) (u32) (a0 + 884)) = (u16) 0;
    (*(u32 *) (u32) (v1 + 872)) = (u32) 0;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a1 = 0;
    (*(u16 *) (u32) (v1 + 886)) = (u16) 0;
    a0 = (s32) ((u32) a0 + 0x360U);
L_001A3278:;
    (*(u32 *) (u32) (a0 + 24)) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(u32 *) (u32) (a0 + 28)) = (u32) 0;
    v1 = a1 < 6;
    (*(u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(u32 *) (u32) (a0 + 36)) = (u32) 0;
    (*(u32 *) (u32) (a0 + 40)) = (u32) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x14U); if (c_) goto L_001A3278; }
    v1 = (s32) 0x520000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x378U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0; return v0;
}
