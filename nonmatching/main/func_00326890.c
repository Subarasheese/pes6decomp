/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00326890(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;

    a6 = a1 & 0xff;
    v0 = 0;
    a1 = a2 & 0xff;
    a4 = (s32) ((u32) a6 << 10);
    a2 = (s32) ((u32) a6 << 4);
    a5 = (s32) ((u32) a0 + (u32) a4);
    a2 = (s32) ((u32) a2 - (u32) a6);
    a0 = (s32) ((u32) a2 << 3);
    a6 = a5;
    a0 = (s32) ((u32) a0 - (u32) a2);
    a4 = (s32) ((u32) a0 << 8);
    a2 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 << 4);
    a2 = (s32) ((u32) a2 + 0x2980U);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a2 = (s32) ((u32) a2 + (u32) a4);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) a0 + (u32) a2);
    a1 = (*(volatile u16 *) (u32) (a0 + 70));
L_003268E4:;
    a0 = (*(volatile u16 *) (u32) (a6 + 200));
    if (a0 != a1) { v0 = (s32) ((u32) v0 + 0x1U); goto L_00326910; }
    if (a1 == 0) goto L_0032690C;
    v0 = (s32) ((u32) v0 << 5);
    a0 = 1;
    v0 = (s32) ((u32) a5 + (u32) v0);
    v1 = (s32) ((u32) v0 + 0xc8U); goto L_00326920;
L_0032690C:;
    v0 = (s32) ((u32) v0 + 0x1U);
L_00326910:;
    a0 = v0 < 32;
    { s32 c_ = a0 != 0; a6 = (s32) ((u32) a6 + 0x20U); if (c_) goto L_003268E4; }
    a0 = 0;
L_00326920:;
    if (a0 != 0) { v0 = (*(volatile s32 *) (u32) (v1 + 28)); goto L_00326930; }
    v0 = 0; goto L_00326934;
L_00326930:;
    v0 = v0 & a3;
L_00326934:;
    return v0;
}
