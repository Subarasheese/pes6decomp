/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0090D980(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4080)) = (u32) 0;
    a1 = 0;
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff010U);
    (*(volatile u32 *) (u32) (v1 + -4076)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4072)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4068)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4064)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4060)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4056)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4052)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4048)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4044)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4040)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4036)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -4032)) = (u8) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -4031)) = (u8) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -4030)) = (u8) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -4029)) = (u8) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v1 + -4028)) = (u8) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4024)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4020)) = (u32) 0;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4016)) = (u32) 0;
L_0090DA2C:;
    (*(volatile u32 *) (u32) (a0 + 68)) = (u32) 0;
    a1 = (s32) ((u32) a1 + 0x8U);
    (*(volatile u32 *) (u32) (a0 + 72)) = (u32) 0;
    v1 = a1 < 9;
    (*(volatile u32 *) (u32) (a0 + 76)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 88)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 96)) = (u32) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_0090DA2C; }
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xfffff054U);
    a1 = 2;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    a0 = 1;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -4012)) = (u32) a0;
    v1 = (s32) 0x930000U;
    a0 = 4;
    (*(volatile u32 *) (u32) (v1 + -4008)) = (u32) a1;
    v1 = (s32) 0x930000U;
    a1 = 32;
    (*(volatile u32 *) (u32) (v1 + -4004)) = (u32) a0;
    v1 = (s32) 0x930000U;
    a0 = 8;
    (*(volatile u32 *) (u32) (v1 + -4000)) = (u32) a1;
    v1 = (s32) 0x930000U;
    a1 = 64;
    (*(volatile u32 *) (u32) (v1 + -3996)) = (u32) a0;
    v1 = (s32) 0x930000U;
    a0 = 16;
    (*(volatile u32 *) (u32) (v1 + -3992)) = (u32) a1;
    v1 = (s32) 0x930000U;
    a1 = 128;
    (*(volatile u32 *) (u32) (v1 + -3988)) = (u32) a0;
    v1 = (s32) 0x930000U;
    a0 = 256;
    (*(volatile u32 *) (u32) (v1 + -3984)) = (u32) a1;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3980)) = (u32) a0;
    a0 = 512;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v1 + -3976)) = (u32) a0; return;
}
