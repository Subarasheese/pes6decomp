/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C00B00(s32, s32, s32, s32);
s32 func_00C00D60(s32, s32, s32, s32);

s32 func_00C153C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s6 = 0;
    s2 = a0;
    s1 = a3;
    { s32 c_ = s2 == 0; s0 = a4; if (c_) goto L_00C15524; }
    if (s1 == 0) { s1 = a1 & 0xff; goto L_00C1552C; }
    at = (u64) 0 < (u64) s0;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_00C15524; }
    s3 = a1 & 0xff;
    s7 = a2 & 0xff;
L_00C15418:;
    v0 = (s32) ((u32) s1 + (u32) s5);
    s4 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) s2 + (u32) s4);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_00C15514;
    v0 = 255;
    if (s3 == v0) goto L_00C154A0;
    v1 = (s32) 0xcb0000U;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x35e8U);
    a0 = s4;
L_00C1544C:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (v0 != s4) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00C15460; }
    v0 = 1; goto L_00C15470;
L_00C15460:;
    v0 = (u64) a1 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_00C1544C; }
    v0 = 0;
L_00C15470:;
    if (v0 == 0) goto L_00C15488;
    v0 = func_00C00D60(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_00C15494;
L_00C15488:;
    v0 = func_00C00B00(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_00C15494:;
    v0 = v0 & 0xff;
    if (s3 != v0) goto L_00C15514;
L_00C154A0:;
    v0 = 255;
    if (s7 == v0) goto L_00C1550C;
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x35e8U);
L_00C154B8:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (v0 != s4) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00C154CC; }
    v0 = 1; goto L_00C154DC;
L_00C154CC:;
    v0 = (u64) a0 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_00C154B8; }
    v0 = 0;
L_00C154DC:;
    if (v0 == 0) { a0 = s4; goto L_00C154F4; }
    a0 = s4; v0 = func_00C00B00(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_00C15500;
L_00C154F4:;
    v0 = func_00C00D60(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_00C15500:;
    v0 = v0 & 0xff;
    if (s7 != v0) goto L_00C15514;
L_00C1550C:;
    s6 = 1; goto L_00C15524;
L_00C15514:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = (u64) s5 < (u64) s0;
    if (v0 != 0) goto L_00C15418;
L_00C15524:;
    v0 = s6; goto L_00C1562C;
L_00C1552C:;
    s0 = a2 & 0xff;
    s2 = 0;
L_00C15534:;
    v0 = 255;
    if (s1 == v0) goto L_00C155A0;
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x35e8U);
L_00C1554C:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (v0 != s2) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00C15560; }
    v0 = 1; goto L_00C15570;
L_00C15560:;
    v0 = (u64) a0 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_00C1554C; }
    v0 = 0;
L_00C15570:;
    if (v0 == 0) { a0 = s2; goto L_00C15588; }
    a0 = s2; v0 = func_00C00D60(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_00C15594;
L_00C15588:;
    v0 = func_00C00B00(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_00C15594:;
    v0 = v0 & 0xff;
    if (s1 != v0) goto L_00C15614;
L_00C155A0:;
    v0 = 255;
    if (s0 == v0) goto L_00C1560C;
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x35e8U);
L_00C155B8:;
    v0 = (*(volatile u8 *) (u32) v1);
    if (v0 != s2) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00C155CC; }
    v0 = 1; goto L_00C155DC;
L_00C155CC:;
    v0 = (u64) a0 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_00C155B8; }
    v0 = 0;
L_00C155DC:;
    if (v0 == 0) { a0 = s2; goto L_00C155F4; }
    a0 = s2; v0 = func_00C00B00(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_00C15600;
L_00C155F4:;
    v0 = func_00C00D60(a0, a1, a2, a3);
    v0 = v0 & 0xff;
L_00C15600:;
    v0 = v0 & 0xff;
    if (s0 != v0) goto L_00C15614;
L_00C1560C:;
    s6 = 1; goto L_00C15524;
L_00C15614:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 46;
    if (v0 != 0) goto L_00C15534;
    goto L_00C15524;
L_00C1562C:;
    return v0;
}
