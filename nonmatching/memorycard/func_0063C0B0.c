/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0063C0B0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = a0 < 13;
    if (v0 != 0) goto L_0063C0C4;
    a1 = -1; goto L_0063C10C;
L_0063C0C4:;
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff8b40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C0EC; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C0EC:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C108; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C108:;
    a1 = (s32) ((u32) v0 + 0x4U);
L_0063C10C:;
    v1 = (*(volatile s16 *) (u32) (gp + -21812));
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s16 *) (u32) (gp + -21810));
    v0 = (s32) ((u32) v0 + 0xffffc180U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    at = v0 < a1;
    if (at != 0) { v0 = 0; goto L_0063C140; }
    v0 = 1;
L_0063C140:;
    return v0;
}
