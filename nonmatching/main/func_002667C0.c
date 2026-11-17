/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 func_001D9FF0(s32);
s32 func_001DA3F0(s32);
void func_001DA550(s32, s32);
s32 func_001DD3C0(s32);
void func_001DD910(s32, s32, s32, s32, s32);
void func_002CA9A0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002F8250(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_002667C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0x590000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd770U);
    s5 = 0;
    v1 = 1;
L_002667FC:;
    v0 = (*(volatile s32 *) (u32) a0);
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00266810; }
    v0 = 0; goto L_002669FC;
L_00266810:;
    v0 = (u64) a1 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_002667FC; }
    a0 = (s32) 0x590000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd770U);
    a2 = 32;
    s3 = 0; memset(a0, a1, a2);
    s6 = (s32) 0x590000U;
    s2 = (s32) 0x590000U;
    s1 = (s32) 0x590000U;
    s7 = 0;
    s6 = (s32) ((u32) s6 + 0x1bb0U);
    s2 = (s32) ((u32) s2 + 0xffffd770U);
    s1 = (s32) ((u32) s1 + 0xffffd750U);
L_00266850:;
    s4 = 0;
L_00266858:;
    a0 = (*(volatile u16 *) (u32) s6);
    a1 = s4; v0 = func_002F8250(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) goto L_002668F0;
    a0 = (*(volatile u8 *) (u32) (s0 + 3));
    if (a0 == 0) goto L_002668F0;
    { s32 c_ = s3 <= 0; a1 = 0; if (c_) goto L_002668B0; }
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffd750U);
L_00266890:;
    v0 = (*(volatile s32 *) (u32) v1);
    if (a0 == v0) goto L_002668B0;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s3;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_00266890; }
L_002668B0:;
    at = a1 < s3;
    if (at != 0) goto L_002668F0;
    v0 = func_001DD3C0(a0);
    if (v0 != 0) goto L_002668F0;
    a0 = (*(volatile u8 *) (u32) (s0 + 3)); func_001DD910(a0, a1, a2, a3, a4);
    s5 = 1;
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u32 *) (u32) s2) = (u32) s5;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
    s2 = (s32) ((u32) s2 + 0x4U);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    s1 = (s32) ((u32) s1 + 0x4U);
L_002668F0:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 4;
    if (v0 != 0) goto L_00266858;
    s7 = (s32) ((u32) s7 + 0x1U);
    v0 = s7 < 2;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x2U); if (c_) goto L_00266850; }
    v0 = (s32) 0x590000U;
    v1 = 7;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 != v1) { v0 = 10; goto L_00266938; }
    s1 = (s32) 0x3b0000U;
    s0 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 + 0xffffb1a0U);
    s0 = (s32) ((u32) s0 + 0xffffb1a8U); goto L_00266964;
L_00266938:;
    if (a0 != v0) goto L_00266954;
    s1 = (s32) 0x3b0000U;
    s0 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 + 0xffffb1b0U);
    s0 = (s32) ((u32) s0 + 0xffffb1b8U); goto L_00266964;
L_00266954:;
    s1 = (s32) 0x3b0000U;
    s0 = (s32) 0x3b0000U;
    s1 = (s32) ((u32) s1 + 0xffffb190U);
    s0 = (s32) ((u32) s0 + 0xffffb198U);
L_00266964:;
    a0 = 2; v0 = func_001DA3F0(a0);
    if (v0 == 0) { a1 = s1; goto L_002669A0; }
    a0 = 2; v0 = func_001D9FF0(a0);
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = v0; v0 = func_00153FE0(a0, a1);
    (*(volatile u32 *) (u32) (gp + -22280)) = (u32) v0;
    a1 = v0;
    a0 = 2; func_002CA9A0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1; goto L_002669B0;
L_002669A0:;
    a0 = 2; func_001DA550(a0, a1);
    s5 = 1;
    a0 = 1;
L_002669B0:;
    v0 = func_001DA3F0(a0);
    if (v0 == 0) { a1 = s0; goto L_002669EC; }
    a0 = 1; v0 = func_001D9FF0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = v0; v0 = func_00153FE0(a0, a1);
    (*(volatile u32 *) (u32) (gp + -22276)) = (u32) v0;
    a1 = v0;
    a0 = 1; func_002CA9A0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = s5; goto L_002669FC;
L_002669EC:;
    a0 = 1; func_001DA550(a0, a1);
    s5 = 1;
    v0 = s5;
L_002669FC:;
    return;
}
