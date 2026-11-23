/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008C5110(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    a5 = (s32) 0x8f0000U;
    a5 = (s32) ((u32) a5 + 0xffffbe00U);
    a4 = (s32) ((u32) sp + 0x18U);
    a3 = 4;
L_008C5124:;
    a2 = (*(volatile s8 *) (u32) a5);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a5 + 1));
    (*(volatile u8 *) (u32) a4) = (u8) a2;
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) v1;
    a5 = (s32) ((u32) a5 + 0x2U);
    { s32 c_ = a3 > 0; a4 = (s32) ((u32) a4 + 0x2U); if (c_) goto L_008C5124; }
    a5 = (s32) 0x8f0000U;
    a4 = (s32) ((u32) sp + 0x0U);
    a5 = (s32) ((u32) a5 + 0xffffbe10U);
    a3 = 8;
L_008C5154:;
    a2 = (*(volatile s8 *) (u32) a5);
    a3 = (s32) ((u32) a3 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a5 + 1));
    (*(volatile u8 *) (u32) a4) = (u8) a2;
    (*(volatile u8 *) (u32) (a4 + 1)) = (u8) v1;
    a5 = (s32) ((u32) a5 + 0x2U);
    { s32 c_ = a3 > 0; a4 = (s32) ((u32) a4 + 0x2U); if (c_) goto L_008C5154; }
    a3 = a0 & 0xff;
    v1 = (s32) ((u32) sp + 0x0U);
    a0 = 0;
    { s32 c_ = a3 >= 0; a2 = a3 & 0x1; if (c_) goto L_008C5194; }
    if (a2 == 0) { a2 = (s32) ((u32) a2 << 2); goto L_008C5198; }
    a2 = (s32) ((u32) a2 + 0xfffffffeU);
L_008C5194:;
    a2 = (s32) ((u32) a2 << 2);
L_008C5198:;
    a2 = (s32) ((u32) a2 + (u32) sp);
    a2 = (s32) ((u32) a2 + 0x18U);
    a4 = (*(volatile u8 *) (u32) a2);
    a3 = (*(volatile u8 *) (u32) (a2 + 1));
    t5 = (s32) ((u32) a4 >> 1);
    a2 = (*(volatile u8 *) (u32) (a2 + 2));
    t4 = (s32) ((u32) a3 >> 1);
    a3 = 160;
    a7 = (s32) ((u32) a2 >> 1);
L_008C51BC:;
    a6 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) a0 + 0x1U);
    a5 = (*(volatile u8 *) (u32) (v1 + 1));
    a2 = a0 < 4;
    a4 = (*(volatile u8 *) (u32) (v1 + 2));
    a6 = (s32) ((u32) a6 >> 1);
    a6 = (s32) ((u32) t5 + (u32) a6);
    a5 = (s32) ((u32) a5 >> 1);
    a4 = (s32) ((u32) a4 >> 1);
    (*(volatile u8 *) (u32) a1) = (u8) a6;
    a5 = (s32) ((u32) t4 + (u32) a5);
    a4 = (s32) ((u32) a7 + (u32) a4);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) a5;
    v1 = (s32) ((u32) v1 + 0x4U);
    (*(volatile u8 *) (u32) (a1 + 2)) = (u8) a4;
    (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a3;
    { s32 c_ = a2 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_008C51BC; }
    return;
}
