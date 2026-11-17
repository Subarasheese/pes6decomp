/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B3220(s64, s64, s64);
s64 func_00B42980(s64, s64, s64);

s64 func_00B42790(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a0;
    a1 = a2;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) a3;
    a0 = s2;
    a2 = (s32) ((u32) sp + 0x4fU); v0 = func_00B42980(a0, a1, a2);
    s0 = v0 & 0xffff;
    v0 = 0xffff;
    if (s0 == v0) { a1 = 8; goto L_00B428D0; }
L_00B427D0:;
    v1 = s0 & 0xffff;
    v0 = 0xffff;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00B428E8; }
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile u16 *) (u32) (v0 + 40));
    v0 = (s32) ((u32) a0 >> 13);
    v0 = v0 & 0xffff;
    v0 = v0 & 0xf;
    at = v0 < 8;
    if (at == 0) { v0 = 0; goto L_00B42834; }
    { s32 c_ = v0 >= 0; v1 = v0 & 0x7; if (c_) goto L_00B42814; }
    if (v1 == 0) goto L_00B42814;
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
L_00B42814:;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5374U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v0 < 4;
    if (v0 != 0) { v0 = 0; goto L_00B42834; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00B42834:;
    if (v0 != 0) { v0 = s0 & 0xffff; goto L_00B428C4; }
    v1 = (*(volatile u8 *) (u32) (sp + 79));
    v0 = 3;
    if (v1 == v0) goto L_00B428F0;
    a1 = s0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) goto L_00B428F0;
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    at = v0 < 2;
    if (at != 0) goto L_00B4290C;
    at = v0 < 3;
    if (at == 0) { v0 = s0 & 0xffff; goto L_00B428C4; }
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -13548));
    v0 = v0 & 0x1;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00B428B0; }
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = s0;
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a2 = 288; v0 = func_009B3220(a0, a1, a2);
    v0 = v0 & 0xffff; goto L_00B428C4;
L_00B428B0:;
    a0 = s0;
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a2 = 64; v0 = func_009B3220(a0, a1, a2);
    v0 = v0 & 0xffff;
L_00B428C4:;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) v0; goto L_00B4295C;
L_00B428D0:;
    a0 = s2;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) a1;
    a2 = (s32) ((u32) sp + 0x4eU); v0 = func_00B42980(a0, a1, a2);
    s0 = v0 & 0xffff; goto L_00B427D0;
L_00B428E8:;
    v0 = (*(volatile u16 *) (u32) (v0 + 38)); goto L_00B428C4;
L_00B428F0:;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = s0;
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a2 = 288; v0 = func_009B3220(a0, a1, a2);
    v0 = v0 & 0xffff; goto L_00B428C4;
L_00B4290C:;
    v0 = (s32) 0xcc0000U;
    v1 = 3;
    v0 = (*(volatile s32 *) (u32) (v0 + -13548));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) v0 / (u32) v1); hi = (s32) ((u32) v0 % (u32) v1); lo = q_; }
    v0 = hi;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00B42944; }
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = s0;
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a2 = 288; v0 = func_009B3220(a0, a1, a2);
    v0 = v0 & 0xffff; goto L_00B428C4;
L_00B42944:;
    a0 = s0;
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a2 = 64; v0 = func_009B3220(a0, a1, a2);
    v0 = v0 & 0xffff; goto L_00B428C4;
L_00B4295C:;
    return v0;
}
