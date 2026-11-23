/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00147A30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    a5 = 0;
    v1 = (s32) 0x370000U;
    a3 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) v1 + 0x68b0U);
    a3 = (s32) ((u32) a3 + (u32) a5);
    a4 = (*(volatile u8 *) (u32) (a1 + 104));
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a1 + 0x10U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) v1);
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a6 = lo; }
    a3 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) a3 + (u32) a0);
    a3 = (*(volatile u8 *) (u32) (a1 + 40));
    v1 = (s32) ((u32) a5 << 5);
    a4 = (s32) 0x510000U;
    a5 = (s32) ((u32) a0 << 2);
    a4 = (s32) ((u32) a4 + 0xffffadbcU);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a0 = 0;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (*(volatile s32 *) (u32) v1);
    a4 = (s32) ((u32) v1 + (u32) a6);
    { s32 c_ = a4 >= 0; v1 = (s32) a4 >> 6; if (c_) goto L_00147A9C; }
    v1 = (s32) ((u32) a4 + 0x3fU);
    v1 = (s32) v1 >> 6;
L_00147A9C:;
    a5 = (*(volatile u16 *) (u32) (a2 + 48));
    a3 = (s32) ((u32) a3 + 0x1U);
    a4 = (s32) a3 >> 1;
    { s32 c_ = a3 >= 0; a5 = (s32) ((u32) v1 + (u32) a5); if (c_) goto L_00147AB8; }
    a3 = (s32) ((u32) a3 + 0x1U);
    a4 = (s32) a3 >> 1;
L_00147AB8:;
    a3 = (s32) ((u32) a4 << 14);
    a3 = a5 | a3;
    a4 = (s32) ((u32) a4 + 0x1U);
    a5 = (*(volatile u16 *) (u32) (a2 + 50));
    a6 = (s64) ((u64) a3 << 32);
    a6 = a6 >> 32;
    a3 = (s32) a4 >> 1;
    a6 = a0 | a6;
    { s32 c_ = a4 >= 0; a5 = (s32) ((u32) v1 + (u32) a5); if (c_) goto L_00147AE8; }
    a0 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) a0 >> 1;
L_00147AE8:;
    a4 = (*(volatile u16 *) (u32) (a2 + 52));
    a0 = (s32) ((u32) a3 << 14);
    a0 = a5 | a0;
    a3 = (s32) ((u32) a3 + 0x1U);
    a5 = (s64) ((u64) a0 << 32);
    a5 = a5 >> 32;
    a0 = (s32) a3 >> 1;
    a5 = (s64) ((u64) a5 << 20);
    a5 = a6 | a5;
    { s32 c_ = a3 >= 0; a4 = (s32) ((u32) v1 + (u32) a4); if (c_) goto L_00147B1C; }
    a0 = (s32) ((u32) a3 + 0x1U);
    a0 = (s32) a0 >> 1;
L_00147B1C:;
    a3 = (s32) ((u32) a0 << 14);
    a3 = a4 | a3;
    a0 = 0;
    a3 = (s64) ((u64) a3 << 32);
    a3 = a3 >> 32;
    a3 = (s64) ((u64) a3 << 40);
    a3 = a5 | a3;
    (*(volatile u64 *) (u32) (a1 + 88)) = (u64) a3;
    a4 = (*(volatile u8 *) (u32) (a2 + 24));
    a3 = (*(volatile u16 *) (u32) (a2 + 54));
    a4 = (s32) ((u32) a4 >> 3);
    a5 = (s32) ((u32) v1 + (u32) a3);
    a4 = (s32) ((u32) a4 + 0x1U);
    { s32 c_ = a4 >= 0; a3 = (s32) a4 >> 1; if (c_) goto L_00147B60; }
    a3 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) a3 >> 1;
L_00147B60:;
    a4 = (s32) ((u32) a3 << 14);
    a4 = a5 | a4;
    a3 = (s32) ((u32) a3 + 0x1U);
    a5 = (*(volatile u16 *) (u32) (a2 + 56));
    a6 = (s64) ((u64) a4 << 32);
    a6 = a6 >> 32;
    a4 = (s32) a3 >> 1;
    a6 = a0 | a6;
    { s32 c_ = a3 >= 0; a5 = (s32) ((u32) v1 + (u32) a5); if (c_) goto L_00147B90; }
    a0 = (s32) ((u32) a3 + 0x1U);
    a4 = (s32) a0 >> 1;
L_00147B90:;
    a3 = (*(volatile u16 *) (u32) (a2 + 58));
    a0 = (s32) ((u32) a4 << 14);
    a0 = a5 | a0;
    a2 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) ((u32) v1 + (u32) a3);
    a4 = (s64) ((u64) a0 << 32);
    a4 = a4 >> 32;
    a0 = (s32) a2 >> 1;
    a4 = (s64) ((u64) a4 << 20);
    { s32 c_ = a2 >= 0; a4 = a6 | a4; if (c_) goto L_00147BC4; }
    v1 = (s32) ((u32) a2 + 0x1U);
    a0 = (s32) v1 >> 1;
L_00147BC4:;
    v1 = (s32) ((u32) a0 << 14);
    v1 = a3 | v1;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 40);
    v1 = a4 | v1;
    (*(volatile u64 *) (u32) (a1 + 96)) = (u64) v1; return;
}
