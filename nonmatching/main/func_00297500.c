/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00297670(s32, s32, s32, s32, s32);

void func_00297500(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = 16;
    s2 = a0;
    a0 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = a0 == 0; s1 = a1; if (c_) goto L_00297544; }
L_00297528:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00297528;
L_00297544:;
    a0 = (s32) ((u32) sp + 0x40U);
    { s32 c_ = a0 == 0; v1 = 16; if (c_) goto L_0029756C; }
L_00297550:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00297550;
L_0029756C:;
    if (s1 == 0) goto L_00297628;
    s0 = 0;
L_00297578:;
    a0 = s0 & 0xff;
    v1 = (s32) ((u32) a0 << 5);
    a1 = (s32) ((u32) s1 + (u32) v1);
    v1 = (s32) ((u32) a1 + 0x1U);
    a1 = (*(volatile u8 *) (u32) (a1 + 1));
    if (a1 == 0) goto L_00297658;
    v0 = (s32) ((u32) a0 << 1);
    a5 = 0;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 5);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a4 = (s32) ((u32) v0 + 0x5U);
L_002975B0:;
    a2 = a5 & 0xff;
    v0 = (s32) ((u32) a2 + (u32) sp);
    a3 = (s32) ((u32) v0 + 0x50U);
    a1 = (*(volatile u8 *) (u32) a3);
    if (a1 == 0) goto L_00297630;
    v0 = (*(volatile u8 *) (u32) v1);
    if (a1 == v0) goto L_00297630;
L_002975D8:;
    v0 = (s32) ((u32) a5 + 0x1U);
    a5 = v0 & 0xff;
    v0 = a5 < 16;
    if (v0 != 0) goto L_002975B0;
    a2 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) s1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v1);
    v0 = (s32) ((u32) a0 << 1);
    a3 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 5);
    a4 = (s32) ((u32) v1 + 0x10U);
    a0 = (s32) ((u32) s2 + (u32) v0); func_00297670(a0, a1, a2, a3, a4);
    v1 = (s32) ((u32) s0 + 0x1U);
    s0 = v1 & 0xff; goto L_00297578;
L_00297628:;
    goto L_00297658;
L_00297630:;
    v0 = (s32) ((u32) a2 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x40U);
    a2 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) a3) = (u8) a2;
    (*(volatile u8 *) (u32) a4) = (u8) v0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) a1) = (u8) v0; goto L_002975D8;
L_00297658:;
    return;
}
