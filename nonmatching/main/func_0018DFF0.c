/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0018DFF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 528));
    if (v1 == 0) goto L_0018E078;
    t4 = 0;
    a7 = 0;
    a4 = (s32) 0x520000U;
    a3 = (s32) 0x520000U;
    a2 = (s32) 0x520000U;
    a1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
L_0018E020:;
    a6 = (*(volatile s32 *) (u32) (a4 + 528));
    t4 = (s32) ((u32) t4 + 0x6U);
    a5 = t4 < 12;
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 12)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (a3 + 528));
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 412)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (a2 + 528));
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 812)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (a1 + 528));
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 1212)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (a0 + 528));
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 1612)) = (u32) 0;
    a6 = (*(volatile s32 *) (u32) (v1 + 528));
    a6 = (s32) ((u32) a6 + (u32) a7);
    (*(volatile u32 *) (u32) (a6 + 2012)) = (u32) 0;
    { s32 c_ = a5 != 0; a7 = (s32) ((u32) a7 + 0x960U); if (c_) goto L_0018E020; }
L_0018E078:;
    return;
}
