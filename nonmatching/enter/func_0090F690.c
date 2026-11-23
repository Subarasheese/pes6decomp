/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00208310(s64);

s64 func_0090F690(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s1 = a1;
    s0 = a2;
    a0 = s2 & 0xffff; v0 = func_00208310(a0);
    v1 = (*(volatile u8 *) (u32) v0);
    a1 = s2 & 0xffff;
    v1 = (s64) ((u64) v1 << 58);
    v0 = a1 < 1434;
    v1 = (s64) ((u64) v1 >> 59);
    { s32 c_ = v0 != 0; (*(volatile u16 *) (u32) s0) = (u16) v1; if (c_) goto L_0090F8C4; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x10000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -852));
    v0 = v1 | 0xfb;
    if (a0 == v0) { v0 = 1448; goto L_0090F89C; }
    v0 = v1 | 0xeb;
    if (a0 == v0) { v0 = 1465; goto L_0090F874; }
    v0 = v1 | 0xe3;
    if (a0 == v0) { v0 = 1467; goto L_0090F84C; }
    v0 = v1 | 0xf0;
    if (a0 == v0) { v0 = 1447; goto L_0090F7E8; }
    v0 = v1 | 0xee;
    if (a0 == v0) { v0 = 0; goto L_0090F8C8; }
    v0 = v1 | 0xed;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xec;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xe8;
    if (a0 == v0) { v0 = 1450; goto L_0090F7A8; }
    v0 = v1 | 0xf6;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xf5;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xf4;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xf3;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xe7;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xe6;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xe5;
    if (a0 == v0) goto L_0090F8C4;
    v0 = v1 | 0xe4;
    if (a0 == v0) goto L_0090F8C4;
    goto L_0090F8C4;
L_0090F7A8:;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F7B8; }
    v1 = (s32) ((u32) s1 << 1); goto L_0090F7D0;
L_0090F7B8:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff9a50U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F7D0:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff9a50U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F7E8:;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F81C; }
    v0 = 1446;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F804; }
    v1 = (s32) ((u32) s1 << 1); goto L_0090F834;
L_0090F804:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff96f0U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F81C:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff93d0U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F834:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff96f0U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F84C:;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F85C; }
    goto L_0090F8C4;
L_0090F85C:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff9b20U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F874:;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F884; }
    goto L_0090F8C4;
L_0090F884:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff9b20U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F89C:;
    if (a1 == v0) { v1 = (s32) ((u32) s1 << 1); goto L_0090F8AC; }
    goto L_0090F8C4;
L_0090F8AC:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffff9b20U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0090F8C8;
L_0090F8C4:;
    v0 = 0;
L_0090F8C8:;
    return v0;
}
