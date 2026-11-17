/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_002C7930(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a6 = (*(volatile u8 *) (u32) a0);
    a2 = 139;
    v1 = (s32) 0x590000U;
    a4 = (s32) 0x5a0000U;
    a3 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x1a90U);
    a4 = (s32) ((u32) a4 + 0x2021U);
    a3 = (s32) ((u32) a3 + 0x2020U);
    a1 = 0;
    { s64 m_ = (s64) (s32) a6 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a5 = (s32) ((u32) a6 << 4);
    a6 = (s32) ((u32) a5 - (u32) a6);
    v1 = (s32) ((u32) v1 + (u32) a2);
    a5 = (s32) ((u32) a6 << 2);
    v1 = (s32) ((u32) v1 + 0x7U);
    a5 = (s32) ((u32) a5 - (u32) a6);
    a2 = (s32) ((u32) a5 << 3);
    a4 = (s32) ((u32) a4 + (u32) a2);
    a4 = (*(volatile u8 *) (u32) a4);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a3 = (s32) ((u32) a4 << 2);
    (*(volatile u8 *) (u32) (a0 + 20)) = (u8) 0;
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 3);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 1);
    a2 = (s32) ((u32) a3 + (u32) a2);
    a2 = (s32) ((u32) a2 + 0x8U);
L_002C79A0:;
    a6 = (s32) ((u32) v1 + (u32) a1);
    a5 = (s32) ((u32) a0 + (u32) a1);
    a4 = (*(volatile u8 *) (u32) a6);
    a1 = (s32) ((u32) a1 + 0x8U);
    a3 = a1 < 32;
    (*(volatile u8 *) (u32) (a5 + 140)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) a6);
    (*(volatile u8 *) (u32) (a5 + 40)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 1));
    (*(volatile u8 *) (u32) (a5 + 141)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 1));
    (*(volatile u8 *) (u32) (a5 + 41)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 2));
    (*(volatile u8 *) (u32) (a5 + 142)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 2));
    (*(volatile u8 *) (u32) (a5 + 42)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 3));
    (*(volatile u8 *) (u32) (a5 + 143)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 3));
    (*(volatile u8 *) (u32) (a5 + 43)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 4));
    (*(volatile u8 *) (u32) (a5 + 144)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 4));
    (*(volatile u8 *) (u32) (a5 + 44)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 5));
    (*(volatile u8 *) (u32) (a5 + 145)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 5));
    (*(volatile u8 *) (u32) (a5 + 45)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 6));
    (*(volatile u8 *) (u32) (a5 + 146)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 6));
    (*(volatile u8 *) (u32) (a5 + 46)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 7));
    (*(volatile u8 *) (u32) (a5 + 147)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a6 + 7));
    { s32 c_ = a3 != 0; (*(volatile u8 *) (u32) (a5 + 47)) = (u8) a4; if (c_) goto L_002C79A0; }
    a3 = (s32) ((u32) a0 + 0x48U);
    a1 = 53;
    a4 = a2;
L_002C7A40:;
    v1 = (*(volatile s8 *) (u32) a4);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a3) = (u8) v1;
    a4 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) ((u32) a3 + 0x1U);
    if (a1 > 0) goto L_002C7A40;
    a1 = (s32) ((u32) a0 + 0xacU);
    a0 = 53;
L_002C7A64:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x1U);
    if (a0 > 0) goto L_002C7A64;
    return v0;
}
