/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_001B9600(s32, s32, s32, s32);
s32 func_001B9610(s32, s32, s32, s32, s32);
s32 func_0020CBB0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0020CC20(s32, s32, s32, s32, s32, s32, s32);
s32 func_0020E310(s32, s32);
s32 func_0035A5B0(s32, s32, s32, s32);

s32 func_0035A410(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_0035A594; }
    v0 = (*(volatile s32 *) (u32) v0);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -21428)); goto L_0035A588; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6ad0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x35a454U) goto L_0035A454; if (t_ == 0x35a47cU) goto L_0035A47C; if (t_ == 0x35a4a8U) goto L_0035A4A8; if (t_ == 0x35a4b8U) goto L_0035A4B8; if (t_ == 0x35a544U) goto L_0035A544; if (t_ == 0x35a564U) goto L_0035A564; }
L_0035A454:;
    v0 = func_0035A5B0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    a1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = (*(volatile s32 *) (u32) (v0 + 8)); v0 = func_001B9610(a0, a1, a2, a3, a4);
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0035A47C:;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    a1 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = (*(volatile s32 *) (u32) (v0 + 8)); v0 = func_001B9600(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = s0; goto L_0035A598; }
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0035A4A8:;
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0035A4B8:;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    a0 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) v0 << 2); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) (gp + -21428));
    a5 = 0;
    v1 = (*(volatile s32 *) (u32) (a1 + 12));
    { s32 c_ = v1 <= 0; a4 = 0; if (c_) goto L_0035A528; }
    a3 = 0;
    a2 = v0;
    a0 = 4;
L_0035A4EC:;
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    a1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) a1);
    if (v1 != a0) goto L_0035A510;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    a4 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) a2) = (u32) v1;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0035A510:;
    a1 = (*(volatile s32 *) (u32) (gp + -21428));
    a5 = (s32) ((u32) a5 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (a1 + 12));
    v1 = a5 < v1;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_0035A4EC; }
L_0035A528:;
    (*(volatile u32 *) (u32) (a1 + 20)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) a4;
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0035A544:;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
    a0 = 1;
    a1 = (s32) ((u32) v0 + 0x1cU); v0 = func_0020E310(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0035A564:;
    v0 = func_0020CC20(a0, a1, a2, a3, a4, a5, a6);
    v0 = func_0020CBB0(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (gp + -21428));
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21428));
L_0035A588:;
    v1 = -1;
    s0 = 1;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
L_0035A594:;
    v0 = s0;
L_0035A598:;
    return v0;
}
