/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002631D0(void);

void func_002474F0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;

    v1 = (s32) 0x510000U;
    s2 = a0;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    s1 = a1;
    { s32 c_ = v1 != a0; s0 = a2; if (c_) goto L_00247538; }
    a0 = (*(volatile s32 *) (u32) (gp + -18788));
    v1 = 1;
    if (a0 != v1) { v1 = 3; goto L_00247548; }
    v1 = 2; goto L_00247548;
L_00247538:;
    v0 = func_002631D0();
    v1 = (s64) ((u64) v0 << 56);
    v1 = v1 >> 56;
L_00247548:;
    a0 = (s64) ((u64) v1 << 56);
    a0 = a0 >> 56;
    v1 = 2;
    if (a0 != v1) goto L_00247608;
    v1 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    a1 = (s32) ((u32) v1 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v1 <= 0) { a0 = (*(volatile s8 *) (u32) a1); goto L_002475B8; }
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a0;
    if (v1 == 0) { v1 = 10; goto L_002475B0; }
    (*(volatile u8 *) (u32) a1) = (u8) 0; goto L_002475B4;
L_002475B0:;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
L_002475B4:;
    a0 = (*(volatile s8 *) (u32) a1);
L_002475B8:;
    v1 = -2;
    if (a0 != v1) { a0 = (*(volatile s8 *) (u32) (s0 + 1)); goto L_002475D0; }
    v1 = -3;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
L_002475D0:;
    v1 = -4;
    if (a0 != v1) { a0 = (*(volatile s8 *) (u32) (s0 + 1)); goto L_002475E8; }
    v1 = -1;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1;
    a0 = (*(volatile s8 *) (u32) (s0 + 1));
L_002475E8:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1; goto L_002476C4; }
    v1 = 10;
    if (a0 != v1) goto L_002476C4;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) s1;
    goto L_002476C4;
L_00247608:;
    if (s2 != 0) goto L_00247628;
    v1 = (*(volatile s8 *) (u32) (s0 + 1));
    if (v1 < 0) { a0 = (s32) ((u32) s2 << 1); goto L_0024768C; }
    v1 = -1;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1; goto L_00247688;
L_00247628:;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) s2 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8be0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (gp + -22608));
    a0 = (*(volatile s32 *) (u32) a0);
    v1 = v1 & a0;
    if (v1 == 0) { v1 = (s32) ((u32) s2 << 1); goto L_0024766C; }
    v1 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) 0; goto L_00247688;
L_0024766C:;
    a0 = 10;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) a0;
L_00247688:;
    a0 = (s32) ((u32) s2 << 1);
L_0024768C:;
    v1 = -3;
    a0 = (s32) ((u32) a0 + (u32) s2);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) s2);
    a1 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a1 + (u32) s0);
    a0 = (*(volatile s8 *) (u32) (a0 + 1));
    if (a0 != v1) goto L_002476C4;
    v1 = (s32) 0x3b0000U;
    a0 = -1;
    v1 = (s32) ((u32) v1 + 0xffffa201U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_002476C4:;
    return;
}
