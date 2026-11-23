/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002D9C38(s32, s32, s32, s32);

void func_00650F50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) ((u32) a1 + 0x24U);
    a1 = (s32) ((u32) sp + 0x28U);
    s0 = a0;
    a0 = 4;
L_00650F6C:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_00650F6C; }
    a0 = (s32) ((u32) sp + 0x28U); func_002D9C38(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 41));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_00650FA8; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_00650FA8:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (sp + 42));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_00650FE8; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_00650FE8:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (sp + 43));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_00651028; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_00651028:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (sp + 45));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_00651068; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_00651068:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (sp + 46));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_006510A8; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_006510A8:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    a1 = (*(volatile u8 *) (u32) (sp + 47));
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 4; if (c_) goto L_006510E8; }
    v1 = (s32) ((u32) a1 + 0xfU);
    a0 = (s32) v1 >> 4;
L_006510E8:;
    v1 = a1 & 0xf;
    a1 = 10;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) a1); hi = (s32) ((s32) a0 % (s32) a1); lo = q_; }
    a0 = hi;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a1); hi = (s32) ((s32) v1 % (s32) a1); lo = q_; }
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 1);
    v1 = hi;
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v1 + 0x7d0U);
    (*(volatile u16 *) (u32) s0) = (u16) v1;
    return;
}
