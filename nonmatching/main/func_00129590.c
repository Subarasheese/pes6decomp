/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00129590(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0;

    v1 = (s32) ((u32) a2 << 2);
    a6 = (*(volatile s32 *) (u32) (a0 + 5216));
    v1 = (s32) ((u32) v1 + (u32) a0);
    a5 = (s32) ((u32) a2 << 1);
    at = a6 < a5;
    { s32 c_ = at != 0; a4 = (*(volatile s32 *) (u32) (v1 + 2924)); if (c_) goto L_00129698; }
    a3 = (s32) ((u32) a4 << 2);
    v1 = (s32) ((u32) a0 + (u32) a4);
    a3 = (s32) ((u32) a1 + (u32) a3);
    v1 = (s32) ((u32) v1 + 0x1468U);
L_001295BC:;
    at = a5 < a6;
    if (at == 0) goto L_00129628;
    a6 = (s32) ((u32) a5 << 2);
    a6 = (s32) ((u32) a0 + (u32) a6);
    t6 = (*(volatile s32 *) (u32) (a6 + 2924));
    t4 = (*(volatile s32 *) (u32) (a6 + 2928));
    a6 = (s32) ((u32) t6 << 2);
    a7 = (s32) ((u32) a1 + (u32) a6);
    t5 = (*(volatile u16 *) (u32) a7);
    a6 = (s32) ((u32) t4 << 2);
    a6 = (s32) ((u32) a1 + (u32) a6);
    a7 = (*(volatile u16 *) (u32) a6);
    a6 = a7 < t5;
    if (a6 != 0) goto L_00129620;
    if (a7 != t5) goto L_00129628;
    a7 = (s32) ((u32) a0 + (u32) t4);
    a6 = (s32) ((u32) a0 + (u32) t6);
    a7 = (*(volatile u8 *) (u32) (a7 + 5224));
    a6 = (*(volatile u8 *) (u32) (a6 + 5224));
    at = a6 < a7;
    if (at != 0) goto L_00129628;
L_00129620:;
    a5 = (s32) ((u32) a5 + 0x1U);
L_00129628:;
    a6 = (s32) ((u32) a5 << 2);
    a6 = (s32) ((u32) a0 + (u32) a6);
    t4 = (*(volatile u16 *) (u32) a3);
    t5 = (*(volatile s32 *) (u32) (a6 + 2924));
    a6 = (s32) ((u32) t5 << 2);
    a6 = (s32) ((u32) a1 + (u32) a6);
    a7 = (*(volatile u16 *) (u32) a6);
    a6 = t4 < a7;
    if (a6 != 0) goto L_00129698;
    if (t4 != a7) goto L_00129670;
    a6 = (s32) ((u32) a0 + (u32) t5);
    a7 = (*(volatile u8 *) (u32) v1);
    a6 = (*(volatile u8 *) (u32) (a6 + 5224));
    at = a6 < a7;
    if (at == 0) goto L_00129698;
L_00129670:;
    a2 = (s32) ((u32) a2 << 2);
    a6 = (s32) ((u32) a0 + (u32) a2);
    (*(volatile u32 *) (u32) (a6 + 2924)) = (u32) t5;
    a2 = a5;
    a6 = (*(volatile s32 *) (u32) (a0 + 5216));
    a5 = (s32) ((u32) a5 << 1);
    at = a6 < a5;
    if (at == 0) goto L_001295BC;
L_00129698:;
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 2924)) = (u32) a4; return;
}
