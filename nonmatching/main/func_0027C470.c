/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAD0(s32);

s32 func_0027C470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 68));
    if (v1 == 0) goto L_0027C680;
    s0 = (*(volatile s32 *) (u32) a0);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) (s0 + 4)); v0 = func_001CDAD0(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v1);
    at = 0 < a0;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_0027C610; }
    at = a0 < 9;
    { s32 c_ = at != 0; v1 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_0027C5D0; }
    at = a0 < 0;
    a4 = 0;
    { s32 c_ = at != 0; a1 = 0; if (c_) goto L_0027C65C; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_0027C65C;
    a1 = 1; goto L_0027C65C;
    a1 = (s32) 0x80000000U;
L_0027C4E8:;
    a1 = a0 & a1;
    { s32 c_ = a1 != 0; a2 = 1; if (c_) goto L_0027C500; }
    if (a1 == 0) goto L_0027C500;
    a2 = 0;
L_0027C500:;
    if (a2 == 0) goto L_0027C50C;
    a4 = 1;
L_0027C50C:;
    if (a4 == 0) goto L_0027C5D0;
    a2 = 0;
    a1 = s0;
L_0027C51C:;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a3 = (s32) ((u32) a3 + 0x8U);
    a4 = a3 < v1;
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) a5);
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 8));
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 12));
    (*(volatile u32 *) (u32) (a1 + 20)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 16));
    (*(volatile u32 *) (u32) (a1 + 24)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 20));
    (*(volatile u32 *) (u32) (a1 + 28)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 24));
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) a5;
    a5 = (*(volatile s32 *) (u32) (s0 + 4));
    a5 = (*(volatile s32 *) (u32) (a5 + 4));
    a5 = (s32) ((u32) a5 + (u32) a2);
    a5 = (*(volatile s32 *) (u32) (a5 + 28));
    a2 = (s32) ((u32) a2 + 0x20U);
    (*(volatile u32 *) (u32) (a1 + 36)) = (u32) a5;
    { s32 c_ = a4 != 0; a1 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_0027C51C; }
L_0027C5D0:;
    at = a3 < a0;
    if (at == 0) goto L_0027C610;
    a4 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) s0 + (u32) a4);
L_0027C5E4:;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < a0;
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (s32) ((u32) a1 + (u32) a4);
    a1 = (*(volatile s32 *) (u32) a1);
    a4 = (s32) ((u32) a4 + 0x4U);
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) a1;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0027C5E4; }
L_0027C610:;
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0xfffffbf0U);
    a0 = (s32) ((u32) s0 - (u32) v1);
    v1 = (s32) 0xe6c20000U;
    v1 = v1 | 0xb449;
    { s64 m_ = (s64) (u64) (u32) v1 * (s64) (u64) (u32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = hi;
    v1 = 6;
    a0 = (s32) ((u32) a0 >> 9);
    if (a0 == v1) goto L_0027C66C;
    v1 = 5;
    if (a0 == v1) goto L_0027C66C;
    v1 = 4;
    if (a0 == v1) goto L_0027C66C;
L_0027C654:;
    goto L_0027C684;
L_0027C65C:;
    if (a1 == 0) goto L_0027C50C;
    a1 = (s32) 0x80000000U; goto L_0027C4E8;
L_0027C66C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) (a0 + 4)) = (u32) v1; goto L_0027C654;
L_0027C680:;
L_0027C684:;
    return v0;
}
