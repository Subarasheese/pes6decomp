/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0030E170(s32, s32, s32, s32);

s32 func_00322DB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2980U);
    s4 = 0;
    s1 = a1 & 0xff;
    v0 = (s32) ((u32) s1 << 4);
    a2 = (s32) ((u32) v0 - (u32) s1);
    a1 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) s1 << 10);
    a1 = (s32) ((u32) a1 - (u32) a2);
    s0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) a1 << 8);
    s3 = (s32) ((u32) v1 + (u32) v0);
    s2 = s3;
L_00322E04:;
    v1 = (*(volatile u16 *) (u32) (s3 + 70));
    a1 = 0;
    a0 = s0;
L_00322E10:;
    v0 = (*(volatile u16 *) (u32) (a0 + 200));
    if (v0 != v1) goto L_00322E38;
    if (v1 == 0) goto L_00322E38;
    v0 = (s32) ((u32) a1 << 5);
    v1 = 1;
    v0 = (s32) ((u32) s0 + (u32) v0);
    s5 = (s32) ((u32) v0 + 0xc8U); goto L_00322E50;
L_00322E38:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 32;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x20U); if (c_) goto L_00322E10; }
    v1 = 0;
L_00322E50:;
    if (v1 == 0) goto L_00322F30;
    a0 = (s32) ((u32) s5 + 0x6U);
    a1 = s1;
    a2 = s4; v0 = func_0030E170(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s5 + 20));
    v0 = 3;
    if (v1 == v0) goto L_00322F20;
    v0 = 5;
    if (v1 == v0) goto L_00322EA8;
    v0 = 6;
    if (v1 == v0) goto L_00322EA8;
    v0 = 2;
    if (v1 == v0) goto L_00322EA8;
    goto L_00322F30;
L_00322EA8:;
    v0 = (*(volatile u16 *) (u32) (s2 + 68));
    if (v0 == 0) goto L_00322EF0;
    v0 = (*(volatile s16 *) (u32) (s5 + 6));
    if (v0 == 0) goto L_00322ED8;
    v0 = (*(volatile s16 *) (u32) (s5 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (s5 + 12)) = (u16) v0;
    (*(volatile u8 *) (u32) (s5 + 16)) = (u8) 0; goto L_00322F20;
L_00322ED8:;
    (*(volatile u16 *) (u32) (s5 + 12)) = (u16) 0;
    v0 = (*(volatile u8 *) (u32) (s5 + 16));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (s5 + 16)) = (u8) v0; goto L_00322F20;
L_00322EF0:;
    v0 = (*(volatile s16 *) (u32) (s5 + 6));
    if (v0 == 0) goto L_00322F10;
    v0 = (*(volatile s16 *) (u32) (s5 + 12));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u16 *) (u32) (s5 + 12)) = (u16) v0;
    (*(volatile u8 *) (u32) (s5 + 16)) = (u8) 0; goto L_00322F20;
L_00322F10:;
    (*(volatile u16 *) (u32) (s5 + 12)) = (u16) 0;
    v0 = 255;
    (*(volatile u8 *) (u32) (s5 + 16)) = (u8) v0;
L_00322F20:;
    (*(volatile u16 *) (u32) (s5 + 12)) = (u16) 0;
    v0 = 255;
    (*(volatile u8 *) (u32) (s5 + 16)) = (u8) v0;
L_00322F30:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 32;
    s3 = (s32) ((u32) s3 + 0x348U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x348U); if (c_) goto L_00322E04; }
    v0 = 1;
    return v0;
}
