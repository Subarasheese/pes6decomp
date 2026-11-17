/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001520C0(void);
s32 func_001520F0(void);
s32 func_002D4870(s32);
s32 func_002D4970(s32);
s32 func_00305E50(s32);
s32 func_00305E60(s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_00B78B60(s32, s32, s32, s32);

s32 func_002FDC60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    s1 = a0;
    a0 = 1;
    s0 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 == v0) { a0 = 2; goto L_002FDCA8; }
    a1 = (s32) 0x300000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffda10U); v0 = func_00305E60(a0, a1);
    a0 = 2;
L_002FDCA8:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) goto L_002FDE40;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd3b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2fdcdcU) goto L_002FDCDC; if (t_ == 0x2fdce4U) goto L_002FDCE4; if (t_ == 0x2fdd30U) goto L_002FDD30; if (t_ == 0x2fddd8U) goto L_002FDDD8; if (t_ == 0x2fde40U) goto L_002FDE40; }
L_002FDCDC:;
    s0 = 75; goto L_002FDE40;
L_002FDCE4:;
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -16892));
    if (a0 == v1) { a0 = 1; goto L_002FDD04; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_002FDD04:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 80; goto L_002FDE40; }
    s0 = 76; goto L_002FDE40;
L_002FDD30:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { v1 = 1; goto L_002FDD50; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v1 = hi;
L_002FDD50:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -16896));
    v0 = 1;
    { s32 c_ = v1 != v0; a0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_002FDD88; }
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    if (v0 != 0) { s0 = 81; goto L_002FDD88; }
    s0 = 77;
L_002FDD88:;
    if (v1 != 0) goto L_002FDE40;
    v1 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (a0 + 18)); goto L_002FDDB4; }
    v0 = 12;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (a0 + 18)); goto L_002FDDC8; }
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
L_002FDDB4:;
    v0 = 1;
    if (v1 != v0) { s0 = 83; goto L_002FDE40; }
    s0 = 79; goto L_002FDE40;
L_002FDDC8:;
    if (v0 != 0) { s0 = 82; goto L_002FDE40; }
    s0 = 78; goto L_002FDE40;
L_002FDDD8:;
    v0 = func_00B78B60(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) { a0 = 64; goto L_002FDE28; }
    v1 = 1;
    if (v0 == v1) { a0 = 63; goto L_002FDE18; }
    if (v0 == 0) { a0 = 62; goto L_002FDE08; }
    a0 = s1; goto L_002FDE38;
L_002FDE08:;
    v0 = func_002D4970(a0);
    s0 = 62; goto L_002FDE34;
L_002FDE18:;
    v0 = func_002D4970(a0);
    s0 = 63; goto L_002FDE34;
L_002FDE28:;
    v0 = func_002D4970(a0);
    s0 = 64;
L_002FDE34:;
    a0 = s1;
L_002FDE38:;
    v0 = func_00305E50(a0);
L_002FDE40:;
    v0 = func_001520F0();
    s2 = v0; v0 = func_001520C0();
    { s32 c_ = s2 != 0; s1 = v0; if (c_) goto L_002FDE7C; }
    v0 = (*(volatile s32 *) (u32) (gp + -32016));
    if (v0 == 0) { a0 = s0; goto L_002FDE80; }
    v0 = (*(volatile s32 *) (u32) (gp + -32012));
    if (v0 != 0) goto L_002FDE7C;
    a0 = 0; v0 = func_002D4870(a0);
    s0 = 84;
L_002FDE7C:;
    a0 = s0;
L_002FDE80:;
    (*(volatile u32 *) (u32) (gp + -32016)) = (u32) s2;
    (*(volatile u32 *) (u32) (gp + -32012)) = (u32) s1; v0 = func_002D4970(a0);
    v0 = 1;
    return v0;
}
