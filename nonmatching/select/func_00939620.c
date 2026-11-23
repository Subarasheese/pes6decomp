/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B68B0(s32, s32, s32, s32);
s32 func_009386B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_009387A0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00938B10(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00938E50(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00939620(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -18624));
    v0 = 3;
    s1 = a1;
    { s32 c_ = v1 == v0; s0 = a2; if (c_) goto L_009396E4; }
    v0 = 2;
    if (v1 == v0) { a0 = s1; goto L_009396B0; }
    v0 = 1;
    if (v1 == v0) goto L_00939684;
    if (v1 == 0) goto L_0093966C;
    v0 = 0; goto L_00939718;
L_0093966C:;
    func_00938E50(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -18624));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18624)) = (u32) v0; goto L_00939714;
L_00939684:;
    v0 = func_001B68B0(a0, a1, a2, a3);
    v1 = v0 ^ 0x1;
    v0 = 1;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 != v0) goto L_00939714;
    v0 = (*(volatile s32 *) (u32) (gp + -18624));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18624)) = (u32) v0; goto L_00939714;
L_009396B0:;
    a1 = (s32) ((u32) gp + 0xffffb744U); v0 = func_00938B10(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) { a0 = s1; goto L_009396D4; }
    v0 = (*(volatile s32 *) (u32) (gp + -18624));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18624)) = (u32) v0;
    a0 = s1;
L_009396D4:;
    func_009387A0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00939714;
L_009396E4:;
    a0 = s1; v0 = func_009386B0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00939714;
    if (s0 == 0) { (*(volatile u32 *) (u32) (gp + -18624)) = (u32) 0; goto L_0093970C; }
    v0 = (*(volatile s32 *) (u32) (gp + -18620));
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -18624)) = (u32) 0;
L_0093970C:;
    v0 = 1; goto L_00939718;
L_00939714:;
    v0 = 0;
L_00939718:;
    return v0;
}
