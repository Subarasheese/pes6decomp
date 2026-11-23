/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_002C7A90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) ((u32) a0 << 4);
    a5 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    a5 = (s32) ((u32) a5 + 0x3610U);
    a7 = (s32) ((u32) v1 << 4);
    a0 = -4;
    a6 = (s32) ((u32) a5 + (u32) a7);
    v1 = (s32) 0x5e0000U;
    a5 = (*(volatile u8 *) (u32) (a6 + 3));
    v1 = (s32) ((u32) v1 + 0x3612U);
    a1 = a1 & 0x3;
    v1 = (s32) ((u32) v1 + (u32) a7);
    a0 = a5 & a0;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (a6 + 3)) = (u8) a0;
    { s32 c_ = a3 == 0; (*(volatile u8 *) (u32) v1) = (u8) a2; if (c_) goto L_002C7AF0; }
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x3611U);
    a0 = (s32) ((u32) v1 + (u32) a7);
    v1 = (*(volatile u8 *) (u32) a0);
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_002C7B08;
L_002C7AF0:;
    v1 = (s32) 0x5e0000U;
    v1 = (s32) ((u32) v1 + 0x3611U);
    a0 = (s32) ((u32) v1 + (u32) a7);
    v1 = (*(volatile u8 *) (u32) a0);
    v1 = v1 & 0xfd;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_002C7B08:;
    if (a4 == 0) { v1 = (*(volatile u8 *) (u32) a0); goto L_002C7B20; }
    v1 = (*(volatile u8 *) (u32) a0);
    v1 = v1 | 0x4;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_002C7B28;
L_002C7B20:;
    v1 = v1 & 0xfb;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_002C7B28:;
    return;
}
