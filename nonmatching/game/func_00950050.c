/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_00962BC0(s64);
s64 func_00963340(s64);
s64 func_0098F4A0(s64);
s64 func_009909D0(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_00BBB780(s64);

s64 func_00950050(s64 a0, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    a1 = (s32) 0x100000U;
    s1 = a0;
    v0 = func_009909D0(a0, a1);
    if (v0 != 0) { v0 = 0; goto L_0095022C; }
    v0 = (s32) 0x590000U;
    v0 = (*(u8 *) (u32) (v0 + 7756));
    if (v0 != 0) { a0 = s1; goto L_0095008C; }
    v0 = 0; goto L_0095022C;
L_0095008C:;
    v0 = func_0098F4A0(a0);
    if (v0 == 0) goto L_009500E4;
    f0.f = (*(f32 *) (u32) (s1 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_009500E4;
    a1 = (*(u16 *) (u32) (s1 + 38));
    a0 = (*(u16 *) (u32) (s1 + 42)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12289;
    if (at != 0) { a0 = s1; goto L_009500EC; }
    v0 = 0; goto L_0095022C;
L_009500E4:;
    v0 = 0; goto L_0095022C;
L_009500EC:;
    v0 = func_00962BC0(a0);
    s0 = v0;
    if (s0 <= 0) { a0 = s1; goto L_00950120; }
L_00950100:;
    v1 = (*(u8 *) (u32) (s1 + 19));
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) { a1 = (*(u16 *) (u32) (s1 + 42)); goto L_00950148; }
    v0 = 0; goto L_0095022C;
L_00950120:;
    v0 = func_00963340(a0);
    v0 = (s32) ((u32) v0 + 0x32U);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_00950100;
    v0 = 1; goto L_0095022C;
L_00950148:;
    a0 = s1;
    a2 = 12288;
    a3 = (s32) 0x240000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_009501FC;
    v0 = s0 < 4;
    if (v0 != 0) goto L_00950190;
    a1 = (*(u16 *) (u32) (s1 + 42));
    a0 = s1;
    a2 = 12288;
    a3 = (s32) 0x1000000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_00950190;
    v0 = 0; goto L_0095022C;
L_00950190:;
    a2 = (*(u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(u8 *) (u32) (s1 + 17));
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
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_009501FC;
    v0 = 1; goto L_0095022C;
L_009501FC:;
    if (s0 <= 0) { a0 = s1; goto L_0095020C; }
L_00950204:;
    v0 = 0; goto L_0095022C;
L_0095020C:;
    v0 = func_00963340(a0);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_00950204;
    v0 = 1;
L_0095022C:;
    return v0;
}
