/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001ED2B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;

    if (a0 == 0) goto L_001ED37C;
    if (a1 == 0) goto L_001ED37C;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    at = 0 < v1;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_001ED37C; }
    a2 = 0;
    v1 = 0;
    a7 = 128;
    a5 = (s32) 0x3f800000U;
    t4 = 255;
L_001ED2E4:;
    t7 = (*(volatile s32 *) (u32) (a0 + 48));
    t6 = (*(volatile u8 *) (u32) a1);
    t5 = (*(volatile u8 *) (u32) (a1 + 1));
    a6 = (*(volatile u8 *) (u32) (a1 + 2));
    a4 = (*(volatile u8 *) (u32) (a1 + 3));
    t7 = (s32) ((u32) t7 + (u32) a2);
    (*(volatile u8 *) (u32) t7) = (u8) t6;
    (*(volatile u8 *) (u32) (t7 + 1)) = (u8) t5;
    (*(volatile u8 *) (u32) (t7 + 2)) = (u8) a6;
    (*(volatile u8 *) (u32) (t7 + 3)) = (u8) a4;
    a4 = (*(volatile s32 *) (u32) (a0 + 44));
    a6 = (*(volatile u8 *) (u32) a1);
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u8 *) (u32) a4) = (u8) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 44));
    a6 = (*(volatile u8 *) (u32) (a1 + 1));
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 44));
    a6 = (*(volatile u8 *) (u32) (a1 + 2));
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u8 *) (u32) (a4 + 2)) = (u8) a6;
    a4 = (*(volatile u8 *) (u32) (a1 + 3));
    if (a4 != t4) { a6 = (s32) a4 >> 1; goto L_001ED34C; }
    a6 = a7;
L_001ED34C:;
    a4 = (*(volatile s32 *) (u32) (a0 + 44));
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = (s32) ((u32) a2 + 0x4U);
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u8 *) (u32) (a4 + 3)) = (u8) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 44));
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u32 *) (u32) (a4 + 4)) = (u32) a5;
    a4 = (*(volatile s32 *) (u32) (a0 + 8));
    a4 = a3 < a4;
    { s32 c_ = a4 != 0; v1 = (s32) ((u32) v1 + 0x8U); if (c_) goto L_001ED2E4; }
L_001ED37C:;
    return;
}
