/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C17AC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    s32 hi = 0, lo = 0;

    a6 = (s32) 0x590000U;
    a5 = 0;
    a6 = (s32) ((u32) a6 + 0xffffe7f0U);
    a3 = (s32) 0xcd0000U;
    a0 = 255;
    a3 = (s32) ((u32) a3 + 0xffffae40U);
L_00C17AD8:;
    a2 = a5 & 0xff;
    a4 = 0;
    v1 = (s32) ((u32) a2 << 5);
    a1 = (s32) ((u32) a3 + (u32) v1);
L_00C17AE8:;
    at = a2 < 2;
    if (at == 0) goto L_00C17B10;
    v1 = a4 & 0xff;
    at = v1 < 32;
    if (at == 0) goto L_00C17B10;
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_00C17B10:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 32;
    if (v1 != 0) goto L_00C17AE8;
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = a5 < 2;
    if (v1 != 0) goto L_00C17AD8;
    t4 = (s32) 0xcd0000U;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a4 = 0;
    t4 = (s32) ((u32) t4 + 0xffffae40U);
    a1 = 139;
    a0 = (s32) ((u32) a0 + 0x1a90U);
    v1 = (s32) ((u32) v1 + 0x2980U);
L_00C17B50:;
    a5 = 0;
    a3 = 0;
L_00C17B58:;
    a2 = (*(volatile u8 *) (u32) (a6 + 18));
    a7 = (s32) ((u32) a2 << 4);
    t5 = (s32) ((u32) a7 - (u32) a2);
    a7 = (s32) ((u32) t5 << 3);
    a7 = (s32) ((u32) a7 - (u32) t5);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); t6 = lo; }
    a7 = (s32) ((u32) a7 << 8);
    t5 = (s32) ((u32) a0 + (u32) t6);
    t5 = (s32) ((u32) a3 + (u32) t5);
    t6 = (s32) ((u32) v1 + (u32) a7);
    t7 = (*(volatile u8 *) (u32) (t5 + 7));
    a7 = (s32) ((u32) t7 << 4);
    t5 = (s32) ((u32) a7 - (u32) t7);
    a7 = (s32) ((u32) t5 << 3);
    a7 = (s32) ((u32) a7 - (u32) t5);
    a7 = (s32) ((u32) a7 << 3);
    a7 = (s32) ((u32) a7 + (u32) t6);
    a7 = (*(volatile u8 *) (u32) (a7 + 212));
    if (a7 == 0) goto L_00C17BD8;
    t5 = a5 & 0xff;
    at = a2 < 2;
    { s32 c_ = at == 0; a5 = (s32) ((u32) a5 + 0x1U); if (c_) goto L_00C17BD8; }
    a7 = t7 & 0xff;
    at = a7 < 32;
    if (at == 0) goto L_00C17BD8;
    a2 = (s32) ((u32) a2 << 5);
    a2 = (s32) ((u32) t4 + (u32) a2);
    a2 = (s32) ((u32) a2 + (u32) a7);
    (*(volatile u8 *) (u32) a2) = (u8) t5;
L_00C17BD8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = a3 < 11;
    { s32 c_ = a2 != 0; a6 = (s32) ((u32) a6 + 0x240U); if (c_) goto L_00C17B58; }
    a4 = (s32) ((u32) a4 + 0x1U);
    a2 = a4 < 2;
    if (a2 != 0) goto L_00C17B50;
    return;
}
