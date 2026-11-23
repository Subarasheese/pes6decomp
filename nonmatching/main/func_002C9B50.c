/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002C9B50(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xff;
    v1 = (s32) ((u32) a1 + 0x4U);
    v1 = v1 & 0xff;
    at = v0 < 10;
    { s32 c_ = at == 0; a1 = v1 & 0x3; if (c_) goto L_002C9BD0; }
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffc750U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = a1 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_002C9BC8;
L_002C9B8C:;
    if (a2 == 0) goto L_002C9BA0;
    v0 = (s32) ((u32) a1 + 0xffffffffU);
    a1 = v0 & 0xff; goto L_002C9BA8;
L_002C9BA0:;
    v0 = (s32) ((u32) a1 + 0x1U);
    a1 = v0 & 0xff;
L_002C9BA8:;
    v0 = (s32) ((u32) a1 + 0x4U);
    v0 = v0 & 0xff;
    a1 = v0 & 0x3;
    v0 = (s32) ((u32) v1 + (u32) a1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_002C9B8C;
L_002C9BC8:;
    v0 = a1; goto L_002C9BD4;
L_002C9BD0:;
    v0 = 0;
L_002C9BD4:;
    return v0;
}
