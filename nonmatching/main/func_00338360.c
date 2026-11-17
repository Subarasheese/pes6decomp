/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00341910(s32, s32, s32, s32, s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00338360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = 4;
    { s32 c_ = a1 == v0; s0 = a0; if (c_) goto L_00338444; }
    v0 = 2;
    if (a1 == v0) { v1 = 255; goto L_0033840C; }
    v0 = 1;
    if (a1 == v0) { a1 = 0; goto L_00338398; }
    goto L_00338478;
L_00338398:;
    a2 = 92; memset(a0, a1, a2);
    a0 = 0;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) { v1 = (s32) 0x453c0000U; goto L_003383E4; }
    v1 = (s32) 0x450c0000U;
    v0 = (s32) 0x44880000U;
    v1 = v1 | 0x3000;
    v0 = v0 | 0x6000;
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) v0;
    v1 = (s32) 0x44f10000U;
    v0 = (s32) 0x44420000U;
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0; goto L_00338408;
L_003383E4:;
    v0 = (s32) 0x44d80000U;
    v1 = v1 | 0x3000;
    v0 = v0 | 0x6000;
    (*(volatile u32 *) (u32) (s0 + 76)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) v0;
    v1 = (s32) 0x44910000U;
    v0 = (s32) 0x44620000U;
    (*(volatile u32 *) (u32) (s0 + 84)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0;
L_00338408:;
    v1 = 255;
L_0033840C:;
    v0 = (s32) 0x8f8f0000U;
    (*(volatile u8 *) (u32) (s0 + 52)) = (u8) v1;
    a0 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u8 *) (u32) (s0 + 54)) = (u8) v1;
    a1 = v0 | 0x8f8f;
    (*(volatile u8 *) (u32) (s0 + 55)) = (u8) v1;
    a2 = 16;
    (*(volatile u8 *) (u32) (s0 + 58)) = (u8) 0; memset(a0, a1, a2);
    a0 = (s32) 0x5f0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x1c80U);
    a2 = 64; memset(a0, a1, a2);
L_00338444:;
    v0 = (s32) 0x8f8f0000U;
    a0 = s0;
    a1 = v0 | 0x8f8f;
    a2 = 16;
    (*(volatile u8 *) (u32) (gp + -21564)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -21560)) = (u8) 0; memset(a0, a1, a2);
    v0 = (s32) 0x8f8f0000U;
    a0 = (s32) ((u32) s0 + 0x24U);
    a1 = v0 | 0x8f8f;
    a2 = 16; memset(a0, a1, a2);
L_00338478:;
    v0 = 1;
    return;
}
