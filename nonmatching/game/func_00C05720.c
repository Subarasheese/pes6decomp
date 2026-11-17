/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0096D0A0(s64, s64, s64);
s64 func_00996180(void);
s64 func_009B3070(s64, s64);

s64 func_00C05720(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s2 = 0;
    v0 = (*(volatile s32 *) (u32) (a2 + 16));
    v0 = v0 & 0x1;
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_00C0574C; }
    s2 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00C0574C:;
    s1 = (*(volatile u16 *) (u32) (a2 + 40));
    a0 = (*(volatile u16 *) (u32) (s0 + 38));
    a1 = s1; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at != 0) goto L_00C05770;
    s2 = 0;
L_00C05770:;
    a1 = s1;
    a0 = s0;
    a2 = s2; func_0096D0A0(a0, a1, a2);
    if (s2 != 0) { v0 = (*(volatile s32 *) (u32) (s0 + 180)); goto L_00C057C4; }
L_00C05788:;
    v0 = func_00996180();
    if (v0 != 0) goto L_00C057D0;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C057D0;
    v0 = 3; goto L_00C057D4;
L_00C057C4:;
    v0 = v0 | 0x800;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v0; goto L_00C05788;
L_00C057D0:;
    v0 = 1;
L_00C057D4:;
    return v0;
}
