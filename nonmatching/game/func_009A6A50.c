/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);
s32 func_00154070(s32);
void memset(s32, s32, s32);

void func_009A6A50(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 != 0; s0 = a1; if (c_) goto L_009A6AF0; }
    a1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 2;
    v1 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 4);
    a0 = (s32) ((u32) v1 - (u32) a1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    { s32 c_ = s0 == v0; s2 = (s32) ((u32) v1 << 5); if (c_) goto L_009A6AD4; }
    v0 = 1;
    if (s0 == v0) goto L_009A6AC0;
    if (s0 == 0) goto L_009A6AC0;
    a0 = (*(volatile s32 *) (u32) s1); goto L_009A6AE4;
L_009A6AC0:;
    a0 = 10;
    a1 = s2; v0 = func_00153FE0(a0, a1);
    (*(volatile u32 *) (u32) s1) = (u32) v0; goto L_009A6AE0;
L_009A6AD4:;
    a0 = s2; v0 = func_00154070(a0);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_009A6AE0:;
    a0 = (*(volatile s32 *) (u32) s1);
L_009A6AE4:;
    a2 = s2;
    a1 = 0; memset(a0, a1, a2);
L_009A6AF0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    if (v1 != 0) goto L_009A6B78;
    a1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 6);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); s2 = lo; }
    v1 = 2;
    if (s0 == v1) { a0 = s2; goto L_009A6B50; }
    v1 = 1;
    if (s0 == v1) { a0 = 10; goto L_009A6B3C; }
    if (s0 == 0) { v1 = 0; goto L_009A6B60; }
    v1 = 0; goto L_009A6B60;
L_009A6B3C:;
    a1 = s2; v0 = func_00153FE0(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    v1 = 1; goto L_009A6B60;
L_009A6B50:;
    v0 = func_00154070(a0);
    (*(volatile u32 *) (u32) (s1 + 36)) = (u32) v0;
    v1 = 1;
L_009A6B60:;
    if (v1 == 0) goto L_009A6B78;
    a0 = (*(volatile s32 *) (u32) (s1 + 36));
    a2 = s2;
    a1 = 0; memset(a0, a1, a2);
L_009A6B78:;
    return;
}
