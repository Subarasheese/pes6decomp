/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B8380(s32);
void func_001B9030(s32, s32, s32, s32);
s32 func_002DCA30(void);

void func_0023E780(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    a0 = 1; func_001B8380(a0);
    v0 = func_002DCA30();
    if (v0 == 0) goto L_0023E7C0;
    a1 = s0;
    a0 = 5;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9FC;
L_0023E7C0:;
    v1 = (s32) 0x590000U;
    v0 = 6;
    a3 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (a3 == v0) { a0 = v0; goto L_0023E9DC; }
    v1 = 14;
    if (a3 == v1) goto L_0023E99C;
    v1 = 12;
    if (a3 == v1) goto L_0023E95C;
    a1 = 7;
    if (a3 == a1) goto L_0023E91C;
    if (a3 == 0) goto L_0023E91C;
    v1 = 5;
    if (a3 == v1) goto L_0023E8DC;
    a0 = 4;
    if (a3 == a0) goto L_0023E8A0;
    v1 = 2;
    if (a3 == v1) goto L_0023E868;
    a2 = 1;
    if (a3 == a2) goto L_0023E838;
    a0 = v0; goto L_0023E9F0;
L_0023E838:;
    v1 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a1) { a0 = v0; goto L_0023E858; }
    a1 = s0; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E858:;
    a1 = s0; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E868:;
    v1 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a1) { a0 = v0; goto L_0023E88C; }
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E88C:;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E8A0:;
    v1 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a1) { a0 = v0; goto L_0023E8C8; }
    a1 = s0;
    a0 = 3;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E8C8:;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E8DC:;
    v1 = (s32) 0x510000U;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a0) { a1 = s0; goto L_0023E908; }
    a0 = v0;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E908:;
    a0 = 0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E91C:;
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a1 = s0; goto L_0023E948; }
    a1 = s0;
    a0 = 6;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E948:;
    a0 = 0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E95C:;
    v1 = (s32) 0x510000U;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a0) { a1 = s0; goto L_0023E988; }
    a0 = v0;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E988:;
    a0 = 0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E99C:;
    v1 = (s32) 0x510000U;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a0) { a1 = s0; goto L_0023E9C8; }
    a0 = v0;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E9C8:;
    a0 = 8;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E9DC:;
    a1 = s0;
    a2 = 1; func_001B9030(a0, a1, a2, a3);
    goto L_0023E9F8;
L_0023E9F0:;
    a1 = s0; func_001B9030(a0, a1, a2, a3);
L_0023E9F8:;
L_0023E9FC:;
    return;
}
