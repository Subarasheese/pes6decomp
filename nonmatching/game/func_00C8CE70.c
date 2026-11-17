/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D5C40(s32, s32, s32, s32);
void func_001D5EE0(s32, s32);
void func_001F0210(s32, s32, s32, s32);
void func_001F04F0(s32, s32);
s32 func_0021DF90(s32);
s32 func_002DCA30(void);
void func_0084A620(s32, s32, s32, s32);
void func_00C8E380(s32, s32, s32, s32, s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00C8CE70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    v1 = (s32) 0x590000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x1a90U);
    v0 = 10;
    a3 = 11;
L_00C8CE8C:;
    a5 = 0;
L_00C8CE90:;
    a1 = (s32) ((u32) a5 + 0x1U);
    a4 = (s32) ((u32) v1 + (u32) a5);
    a2 = (s32) ((u32) v0 - (u32) a5);
    (*(volatile u8 *) (u32) (a4 + 39)) = (u8) a2;
    a1 = (s32) ((u32) v0 - (u32) a1);
    (*(volatile u8 *) (u32) (a4 + 40)) = (u8) a1;
    a1 = (s32) ((u32) a5 + 0x2U);
    a2 = (s32) ((u32) v0 - (u32) a1);
    a1 = (s32) ((u32) a5 + 0x3U);
    (*(volatile u8 *) (u32) (a4 + 41)) = (u8) a2;
    a1 = (s32) ((u32) v0 - (u32) a1);
    (*(volatile u8 *) (u32) (a4 + 42)) = (u8) a1;
    a1 = (s32) ((u32) a5 + 0x4U);
    a1 = (s32) ((u32) v0 - (u32) a1);
    a5 = (s32) ((u32) a5 + 0x5U);
    (*(volatile u8 *) (u32) (a4 + 43)) = (u8) a1;
    a1 = a5 < 6;
    if (a1 != 0) goto L_00C8CE90;
    a2 = (s32) ((u32) v0 - (u32) a5);
    a1 = (s32) ((u32) v1 + (u32) a5);
    (*(volatile u8 *) (u32) (a1 + 39)) = (u8) a2;
    a4 = a3;
L_00C8CEF0:;
    a2 = (s32) ((u32) v1 + (u32) a4);
    (*(volatile u8 *) (u32) (a2 + 39)) = (u8) a4;
    a1 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u8 *) (u32) (a2 + 40)) = (u8) a1;
    a1 = (s32) ((u32) a4 + 0x2U);
    (*(volatile u8 *) (u32) (a2 + 41)) = (u8) a1;
    a1 = (s32) ((u32) a4 + 0x3U);
    (*(volatile u8 *) (u32) (a2 + 42)) = (u8) a1;
    a1 = (s32) ((u32) a4 + 0x4U);
    (*(volatile u8 *) (u32) (a2 + 43)) = (u8) a1;
    a1 = (s32) ((u32) a4 + 0x5U);
    (*(volatile u8 *) (u32) (a2 + 44)) = (u8) a1;
    a1 = (s32) ((u32) a4 + 0x6U);
    (*(volatile u8 *) (u32) (a2 + 45)) = (u8) a1;
    a4 = (s32) ((u32) a4 + 0x7U);
    a1 = a4 < 32;
    if (a1 != 0) goto L_00C8CEF0;
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = a0 < 2;
    { s32 c_ = a1 != 0; v1 = (s32) ((u32) v1 + 0x8bU); if (c_) goto L_00C8CE8C; }
    func_00C8E380(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0xcd0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -10097));
    if (v0 == 0) goto L_00C8CF7C;
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x24e; func_001D5C40(a0, a1, a2, a3);
    a0 = 13; v0 = func_0021DF90(a0);
    a0 = v0; func_001F0210(a0, a1, a2, a3);
L_00C8CF7C:;
    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd570U);
    a2 = 816; memset(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    a0 = 13;
    v1 = v1 ^ 0x7;
    v1 = (u64) v1 < (u64) (s64) 1;
    (*(volatile u8 *) (u32) (v0 + -10099)) = (u8) v1; v0 = func_0021DF90(a0);
    a1 = (s32) 0xcb0000U;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0xffff8958U); func_001F04F0(a0, a1);
    v0 = (s32) 0x10000U;
    a1 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 + 0xffff8958U);
    a0 = v0 | 0x24e; func_001D5EE0(a0, a1);
    v1 = 1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -10097)) = (u8) v1; v0 = func_002DCA30();
    if (v0 == 0) { ; goto L_00C8CFF8; }
    a0 = 1; func_0084A620(a0, a1, a2, a3);
L_00C8CFF8:;
    return;
}
