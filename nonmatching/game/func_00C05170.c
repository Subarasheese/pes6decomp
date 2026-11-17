/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void memset(s32, s32, s32);

s32 func_00C05170(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s5 = a0;
    s3 = 0;
    s2 = 0;
L_00C0519C:;
    s0 = (s32) 0xcb0000U;
    s4 = 0;
    s0 = (s32) ((u32) s0 + 0x52a0U);
L_00C051A8:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1084));
    { s32 c_ = a0 == 0; s1 = (s32) ((u32) s0 + 0x43cU); if (c_) goto L_00C0529C; }
    if (s2 != 0) goto L_00C051D0;
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
    if (v0 != 0) goto L_00C051E0;
    s4 = (s32) ((u32) s4 + 0x1U); goto L_00C052A0;
L_00C051D0:;
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
    if (v0 != 0) goto L_00C0529C;
L_00C051E0:;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    if (v0 == 0) { a0 = s1; goto L_00C0531C; }
    v1 = (*(volatile u8 *) (u32) s5);
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    if (v1 != v0) goto L_00C0529C;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xfffff0f0U);
    a0 = s5;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; a1 = s1; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    v1 = 4;
    if (v0 == v1) { a0 = s1; goto L_00C05288; }
    v1 = 3;
    if (v0 == v1) goto L_00C05280;
    v1 = 2;
    if (v0 == v1) goto L_00C05278;
    v1 = 1;
    if (v0 == v1) goto L_00C05260;
    if (v0 == 0) goto L_00C0529C;
    goto L_00C0529C;
L_00C05260:;
    a0 = s1;
    a1 = 0;
    a2 = 64; memset(a0, a1, a2);
    goto L_00C0529C;
L_00C05278:;
    s3 = 1; goto L_00C0529C;
L_00C05280:;
    v0 = 1; goto L_00C05330;
L_00C05288:;
    a1 = 0;
    a2 = 64; memset(a0, a1, a2);
    v0 = 1; goto L_00C05330;
L_00C0529C:;
    s4 = (s32) ((u32) s4 + 0x1U);
L_00C052A0:;
    v0 = s4 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x40U); if (c_) goto L_00C051A8; }
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    if (v0 != 0) goto L_00C0519C;
    if (s3 != 0) goto L_00C05314;
    v1 = (*(volatile u8 *) (u32) s5);
    a0 = (s32) 0xcb0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x52a0U);
L_00C052D4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 1092));
    if (v0 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00C052E8; }
    v0 = 1; goto L_00C052F8;
L_00C052E8:;
    v0 = a1 < 10;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x40U); if (c_) goto L_00C052D4; }
    v0 = 0;
L_00C052F8:;
    if (v0 == 0) goto L_00C05304;
    s3 = 1;
L_00C05304:;
    v0 = (*(volatile s32 *) (u32) (s5 + 180));
    if (v0 == 0) goto L_00C05314;
    s3 = 1;
L_00C05314:;
    v0 = s3; goto L_00C05330;
L_00C0531C:;
    a1 = 0;
    a2 = 64; memset(a0, a1, a2);
    goto L_00C0529C;
L_00C05330:;
    return v0;
}
