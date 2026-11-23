/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009001B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0;
    s64 gp = 0x3ef370;

    a7 = (*(volatile s32 *) (u32) (a0 + 64));
    t6 = a2;
    t4 = 0;
    v1 = 0;
    v0 = (u64) a1 < (u64) (s64) 10;
    { s32 c_ = v0 == 0; a6 = (*(volatile s32 *) (u32) (a7 + 96)); if (c_) goto L_00900248; }
    t5 = (s32) 0x900000U;
    a5 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) t5 + 0x1800U);
    a0 = 0xffff;
    a0 = (s64) ((u64) a0 << 24);
    v0 = (s32) ((u32) v0 + (u32) a5);
    v1 = (*(volatile s64 *) (u32) (v0 + 8));
    { s32 c_ = v1 == a0; v0 = (u64) a0 < (u64) v1; if (c_) goto L_00900228; }
    if (v0 != 0) goto L_00900210;
    v0 = 0xff00;
    v0 = (s64) ((u64) v0 << 24);
    { s32 c_ = v1 == v0; a2 = 0; if (c_) goto L_00900230; }
    a5 = (*(volatile s32 *) (u32) (a7 + 100)); goto L_00900250;
L_00900210:;
    v0 = -1;
    v0 = (s64) ((u64) v0 >> 24);
    { s32 c_ = v1 != v0; a2 = 0; if (c_) goto L_0090024C; }
    a2 = 0; goto L_00900234;
L_00900228:;
    a2 = 24; goto L_00900234;
L_00900230:;
    a2 = 32;
L_00900234:;
    v0 = (s32) ((u32) t5 + 0x1800U);
    a0 = (s64) ((u64) t6 << (a2 & 63));
    v0 = (s32) ((u32) a5 + (u32) v0);
    v1 = (*(volatile s64 *) (u32) v0);
    v1 = v1 | a0;
L_00900248:;
    a2 = v1;
L_0090024C:;
    a5 = (*(volatile s32 *) (u32) (a7 + 100));
L_00900250:;
    { s32 c_ = a5 <= 0; a0 = 0; if (c_) goto L_00900290; }
    v0 = (*(volatile s64 *) (u32) a6);
    if (a2 != v0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00900270; }
    t4 = (*(volatile s32 *) (u32) (a6 + 16)); goto L_00900290;
L_00900270:;
    v0 = a0 < a5;
    { s32 c_ = v0 == 0; v0 = (s32) ((u32) a0 << 5); if (c_) goto L_00900290; }
    v0 = (s32) ((u32) v0 + (u32) a6);
    v1 = (*(volatile s64 *) (u32) v0);
    if (a2 != v1) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00900270; }
    t4 = (*(volatile s32 *) (u32) (v0 + 16));
L_00900290:;
    v0 = a0 < 64;
    { s32 c_ = v0 == 0; v1 = (s32) ((u32) a0 << 5); if (c_) goto L_009002D8; }
    v0 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) v1 + (u32) a6);
    a0 = (s32) 0x900000U;
    a0 = (s32) ((u32) a0 + 0x1800U);
    (*(volatile u64 *) (u32) v1) = (u64) a2;
    a0 = (s32) ((u32) a0 + (u32) v0);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) a3;
    v0 = (*(volatile s64 *) (u32) (a0 + 8));
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) a4;
    (*(volatile u64 *) (u32) (v1 + 8)) = (u64) v0;
    a0 = gp;
    v0 = (*(volatile s32 *) (u32) (a7 + 100));
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) a0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (a7 + 100)) = (u32) v0;
L_009002D8:;
    v0 = t4; return;
}
