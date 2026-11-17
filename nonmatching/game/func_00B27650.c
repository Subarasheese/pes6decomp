/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B27650(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0;

    a2 = 2;
    v1 = 1;
    a1 = a2;
    if (a0 != 0) a1 = v1;
    { s32 c_ = a1 == 0; v0 = 0; if (c_) goto L_00B27674; }
    v1 = 13;
    if (a0 != 0) a2 = v1; goto L_00B27678;
L_00B27674:;
    a2 = v1;
L_00B27678:;
    a0 = (s32) ((u32) a2 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    a2 = 1;
    a1 = (s32) ((u32) v1 + (u32) a0);
    a0 = 255;
L_00B27698:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v1 == 0) goto L_00B276B8;
    v1 = (*(volatile u8 *) (u32) (a1 + 22));
    if (v1 == a0) goto L_00B276B8;
    v0 = (s32) ((u32) v0 + 0x1U);
L_00B276B8:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 11;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x240U); if (c_) goto L_00B27698; }
    return v0;
}
