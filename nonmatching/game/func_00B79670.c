/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A5F20(s32);
s32 func_00208210(s32);
s32 func_00208250(s32);

s32 func_00B79670(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    v0 = 255;
    if (v1 == v0) goto L_00B7969C;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00B796A0;
L_00B7969C:;
    a0 = 1;
L_00B796A0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 << 6);
    s0 = 0xffff;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7972));
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; a0 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00B7980C; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe720U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb796e8U) goto L_00B796E8; if (t_ == 0xb796f0U) goto L_00B796F0; if (t_ == 0xb79718U) goto L_00B79718; if (t_ == 0xb79758U) goto L_00B79758; if (t_ == 0xb797ecU) goto L_00B797EC; if (t_ == 0xb79808U) goto L_00B79808; if (t_ == 0xb7980cU) goto L_00B7980C; }
L_00B796E8:;
    s0 = 130; goto L_00B7980C;
L_00B796F0:;
    v1 = (*(volatile s32 *) (u32) (a0 + 148));
    v0 = 2;
    if (v1 == v0) goto L_00B7970C;
    v0 = 1;
    if (v1 == v0) { s0 = 123; goto L_00B79710; }
L_00B7970C:;
    s0 = 122;
L_00B79710:;
    a0 = 4; goto L_00B79810;
L_00B79718:;
    v1 = (*(volatile s32 *) (u32) (a0 + 144));
    v0 = 4;
    if (v1 == v0) { s0 = 129; goto L_00B79750; }
    v0 = 3;
    if (v1 == v0) { s0 = 128; goto L_00B79750; }
    v0 = 2;
    if (v1 == v0) { s0 = 127; goto L_00B79750; }
    v0 = 1;
    if (v1 == v0) { s0 = 126; goto L_00B79750; }
    s0 = 125;
L_00B79750:;
    goto L_00B7980C;
L_00B79758:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16828));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (a0 + 144)); goto L_00B79770; }
    s0 = 121; goto L_00B797E4;
L_00B79770:;
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_00B79798;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe6f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb79798U) goto L_00B79798; if (t_ == 0xb797a0U) goto L_00B797A0; if (t_ == 0xb797a8U) goto L_00B797A8; if (t_ == 0xb797b0U) goto L_00B797B0; if (t_ == 0xb797b8U) goto L_00B797B8; if (t_ == 0xb797c0U) goto L_00B797C0; if (t_ == 0xb797c8U) goto L_00B797C8; if (t_ == 0xb797d0U) goto L_00B797D0; if (t_ == 0xb797d8U) goto L_00B797D8; if (t_ == 0xb797e0U) goto L_00B797E0; }
L_00B79798:;
    s0 = 110; goto L_00B797E4;
L_00B797A0:;
    s0 = 111; goto L_00B797E4;
L_00B797A8:;
    s0 = 112; goto L_00B797E4;
L_00B797B0:;
    s0 = 113; goto L_00B797E4;
L_00B797B8:;
    s0 = 114; goto L_00B797E4;
L_00B797C0:;
    s0 = 115; goto L_00B797E4;
L_00B797C8:;
    s0 = 116; goto L_00B797E4;
L_00B797D0:;
    s0 = 118; goto L_00B797E4;
L_00B797D8:;
    s0 = 119; goto L_00B797E4;
L_00B797E0:;
    s0 = 120;
L_00B797E4:;
    goto L_00B7980C;
L_00B797EC:;
    v1 = (*(volatile s32 *) (u32) (a0 + 144));
    v0 = 4;
    if (v1 == v0) { s0 = 108; goto L_00B79800; }
    s0 = 107;
L_00B79800:;
    goto L_00B7980C;
L_00B79808:;
    s0 = 124;
L_00B7980C:;
    a0 = 4;
L_00B79810:;
    v0 = func_001A5F20(a0);
    a0 = v0; v0 = func_00208210(a0);
    v1 = 205;
    if (s0 == v1) goto L_00B79844;
    if (s0 == v0) goto L_00B79844;
    a0 = s0; v0 = func_00208250(a0);
    goto L_00B7984C;
L_00B79844:;
    v0 = 0;
L_00B7984C:;
    return v0;
}
