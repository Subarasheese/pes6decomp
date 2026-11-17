/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_00961660(s64, s64, s64);
s64 func_00962A70(s64);
s64 func_00967690(s64, s64);
s64 func_009683B0(s64);
s64 func_009909D0(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_009B32D0(s64, s64, s64);
s64 func_00BBB8C0(s64);
s64 func_00C04AD0(s64, s64, s64, s64);
s64 func_00C04F80(s64, s64, s64);

s64 func_00941BE0(s64 a0, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    f0.f = (*(f32 *) (u32) (a0 + 232));
    s0 = a0;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00941E7C; }
    v1 = (*(u8 *) (u32) (s0 + 19));
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) goto L_00941C38;
    v0 = 0; goto L_00941E7C;
L_00941C38:;
    v0 = func_00962A70(a0);
    v0 = v0 & 0xff;
    if (v0 == 0) { a0 = 10; goto L_00941C90; }
L_00941C4C:;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f1.i = f0.i & 0x7FFFFFFF;
    f0.f = (*(f32 *) (u32) (s0 + 224));
    f0.i = f0.i & 0x7FFFFFFF;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 0; goto L_00941E7C; }
    v1 = (*(s32 *) (u32) (s0 + 272));
    v0 = (s32) 0x10000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) { a2 = (*(u8 *) (u32) (s0 + 18)); goto L_00941CA8; }
    v0 = 0; goto L_00941E7C;
L_00941C90:;
    v0 = func_00BBB8C0(a0);
    if (v0 == 0) goto L_00941C4C;
    v0 = 0; goto L_00941E7C;
L_00941CA8:;
    a0 = (s32) 0x590000U;
    v1 = (*(u8 *) (u32) (s0 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) (v0 + 114));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) ((u32) v0 << 8);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 4; if (c_) goto L_00941D08; }
    v0 = (s32) ((u32) v1 + 0xfU);
    v0 = (s32) v0 >> 4;
L_00941D08:;
    a1 = (*(u16 *) (u32) (s0 + 288));
    v0 = (s32) ((u32) v0 + 0x2000U);
    a0 = s0;
    a2 = v0 & 0xffff;
    a3 = (s32) 0x310000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) { a0 = s0; goto L_00941D30; }
    v0 = 0; goto L_00941E7C;
L_00941D30:;
    v0 = func_00967690(a0, a1);
    if (v0 == 0) { a1 = (*(u16 *) (u32) (s0 + 42)); goto L_00941D48; }
    v0 = 0; goto L_00941E7C;
L_00941D48:;
    a0 = (*(u16 *) (u32) (s0 + 38));
    v0 = (s32) ((u32) a1 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    s1 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at == 0) goto L_00941DF0;
    a0 = s0;
    a1 = s1;
    a2 = 8192;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00941DF0;
    a0 = s0; v0 = func_009683B0(a0);
    if (v0 == 0) goto L_00941DBC;
    a0 = s0;
    a1 = (s32) 0x40000U; v0 = func_009909D0(a0, a1);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00941DBC;
    a0 = s0;
    a1 = 7; v0 = func_00C04AD0(a0, a1, a2, a3);
L_00941DBC:;
    a2 = s1;
    a0 = s0;
    a1 = 1; v0 = func_00C04F80(a0, a1, a2);
    a0 = s0;
    a1 = 3;
    a2 = 2; v0 = func_00961660(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = 1;
    v1 = (*(u8 *) (u32) (v1 + 9980));
    (*(u32 *) (u32) (s0 + 500)) = (u32) v1; goto L_00941E7C;
L_00941DF0:;
    v0 = (*(u16 *) (u32) (s0 + 42));
    a2 = 8192;
    a0 = (*(u16 *) (u32) (s0 + 288));
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xffff; v0 = func_009B32D0(a0, a1, a2);
    a0 = (*(u16 *) (u32) (s0 + 38));
    a1 = (*(u16 *) (u32) (s0 + 42));
    s1 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at != 0) { a0 = s0; goto L_00941E34; }
L_00941E2C:;
    v0 = 0; goto L_00941E7C;
L_00941E34:;
    a1 = s1;
    a2 = 8192;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00941E2C;
    a2 = s1;
    a0 = s0;
    a1 = 1; v0 = func_00C04F80(a0, a1, a2);
    a0 = s0;
    a1 = 3;
    a2 = 5; v0 = func_00961660(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = 2;
    v1 = (*(u8 *) (u32) (v1 + 9980));
    (*(u32 *) (u32) (s0 + 500)) = (u32) v1;
L_00941E7C:;
    return v0;
}
