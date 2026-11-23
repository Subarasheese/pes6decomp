/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00650900(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a2 = (*(volatile u8 *) (u32) (a1 + 7));
    a3 = (*(volatile u8 *) (u32) (a1 + 6));
    a5 = (*(volatile u8 *) (u32) (a1 + 5));
    v0 = a2 & 0xf0;
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 4; if (c_) goto L_00650920; }
    v0 = (s32) ((u32) v0 + 0xfU);
    v1 = (s32) v0 >> 4;
L_00650920:;
    v0 = (s32) ((u32) v1 << 2);
    a1 = a2 & 0xf;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) v1 << 1);
    v0 = a3 & 0xf0;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) v0 >> 4;
    { s32 c_ = v0 >= 0; a4 = (s32) ((u32) a1 + 0x7d0U); if (c_) goto L_0065094C; }
    v0 = (s32) ((u32) v0 + 0xfU);
    v1 = (s32) v0 >> 4;
L_0065094C:;
    v0 = (s32) ((u32) v1 << 2);
    a1 = a3 & 0xf;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) v1 << 1);
    v0 = a5 & 0xf0;
    v1 = (s32) v0 >> 4;
    { s32 c_ = v0 >= 0; a3 = (s32) ((u32) a1 + (u32) a2); if (c_) goto L_00650974; }
    v0 = (s32) ((u32) v0 + 0xfU);
    v1 = (s32) v0 >> 4;
L_00650974:;
    v0 = (s32) ((u32) v1 << 2);
    a1 = a5 & 0xf;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) v0 << 1);
    v1 = 100;
    a2 = (s32) ((u32) a1 + (u32) a2);
    v0 = 10000;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    a1 = (s32) 0x660000U;
    a2 = hi;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a3 / (s32) v1); hi = (s32) ((s32) a3 % (s32) v1); lo = q_; }
    a3 = hi;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) v0); hi = (s32) ((s32) a4 % (s32) v0); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffbb28U); v0 = sprintf(a0, a1, a2, a3, a4, a5, a6, a7); return;
}
