/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
s32 func_00255E70(s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);
s32 func_00991F40(s32, s32, s32, s32);

s32 func_003032A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 255;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    v1 = (*(volatile u8 *) (u32) (s0 + 44));
    { s32 c_ = v1 == v0; s1 = a0; if (c_) goto L_003032DC; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_003032E4;
L_003032DC:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_003032E4:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = (s32) ((u32) sp + 0x4fU);
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = s2; v0 = func_00991F40(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    a0 = 255;
    if (v1 == a0) { v0 = 7; goto L_003033A0; }
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00303374; }
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s2 + 18)); goto L_00303338; }
    a0 = 254; goto L_0030339C;
    a0 = (*(volatile u8 *) (u32) (s2 + 18));
L_00303338:;
    v0 = func_00255E70(a0);
    if (v0 == 0) { a0 = 3; goto L_0030335C; }
    a0 = 4; v0 = Pes6Random_Below(a0);
    a0 = v0 & 0xffff; goto L_0030339C;
    a0 = 3;
L_0030335C:;
    v0 = Pes6Random_Below(a0);
    v0 = v0 & 0xffff;
    a0 = (s32) ((u32) v0 + 0x4U); goto L_0030339C;
    a0 = (*(volatile u8 *) (u32) (s2 + 18));
L_00303374:;
    v0 = func_00255E70(a0);
    if (v0 == 0) { a0 = 7; goto L_0030339C; }
    a0 = 1; goto L_0030339C;
    a0 = 7;
    goto L_0030339C;
    a0 = 254;
L_0030339C:;
    v0 = 7;
L_003033A0:;
    { s32 c_ = a0 == v0; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) a0; if (c_) goto L_00303430; }
    v0 = 6;
    if (a0 == v0) goto L_00303430;
    v0 = 5;
    if (a0 == v0) goto L_00303430;
    v0 = 4;
    if (a0 == v0) goto L_00303430;
    v0 = 3;
    if (a0 == v0) goto L_00303430;
    v0 = 2;
    if (a0 == v0) goto L_00303430;
    v0 = 1;
    if (a0 == v0) goto L_00303430;
    if (a0 == 0) goto L_00303430;
    v0 = 254;
    if (a0 == v0) { v0 = 0; goto L_003034DC; }
    v0 = 255;
    if (a0 == v0) goto L_00303418;
    goto L_003034D8;
L_00303418:;
    a1 = (s32) 0x300000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x3500U); v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_003034DC;
L_00303430:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0x4e50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_0030347C; }
    v0 = 255;
    a1 = (s32) 0x300000U;
    a0 = s1;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x3500U); v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_003034DC;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
L_0030347C:;
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0x4e50U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    a2 = (*(volatile s32 *) (u32) (s0 + 36));
    v1 = (s32) 0x3b0000U;
    a1 = (s32) 0x300000U;
    v1 = (s32) ((u32) v1 + 0x4e50U);
    v0 = (s32) 0x590000U;
    a0 = s1;
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + 0x3200U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 2);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_003034DC;
L_003034D8:;
    v0 = 0;
L_003034DC:;
    return v0;
}
