/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00C2F020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a5 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1ef8U);
    v1 = (s32) ((u32) v1 + 0x1ef6U);
    a1 = (s32) ((u32) a1 + (u32) a5);
    a4 = (s32) ((u32) v1 + (u32) a5);
    a6 = (*(volatile u8 *) (u32) a1);
    v1 = (*(volatile u8 *) (u32) a4);
    v1 = (s32) ((u32) a6 + (u32) v1);
    at = a6 < v1;
    if (at == 0) goto L_00C2F0B0;
    v1 = 139;
    a2 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) a5 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a2 = (s32) ((u32) a2 + 0x1a90U);
    a1 = (s32) ((u32) a6 << 3);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (s32) ((u32) v1 + 0x1e00U);
    a3 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a5);
    a2 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 248));
    v1 = (*(volatile u8 *) (u32) (v1 + 246));
    a1 = (s32) ((u32) a1 + (u32) v1);
L_00C2F08C:;
    (*(volatile u8 *) (u32) (a3 + 82)) = (u8) a2;
    a6 = (s32) ((u32) a6 + 0x1U);
    (*(volatile u8 *) (u32) (a3 + 83)) = (u8) a2;
    v1 = a6 < a1;
    (*(volatile u8 *) (u32) (a3 + 84)) = (u8) a2;
    (*(volatile u8 *) (u32) (a3 + 85)) = (u8) a2;
    (*(volatile u8 *) (u32) (a3 + 86)) = (u8) 0;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00C2F08C; }
L_00C2F0B0:;
    (*(volatile u8 *) (u32) a4) = (u8) 0;
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) 0;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    at = 0 < v1;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_00C2F0F0; }
    a1 = 255;
L_00C2F0CC:;
    v1 = (s32) ((u32) a0 + (u32) a2);
    (*(volatile u8 *) (u32) (v1 + 33)) = (u8) a1;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 26)) = (u8) a1;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v1 = a2 < v1;
    if (v1 != 0) goto L_00C2F0CC;
L_00C2F0F0:;
    (*(volatile u8 *) (u32) (a0 + 22)) = (u8) 0; return;
}
