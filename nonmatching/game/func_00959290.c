/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00959320(s64, s64, s64, s64, f32, f32);
s64 func_00961C80(s64, s64, s64, s64);

s64 func_00959290(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x53bdU);
    v1 = (*(u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_009592D4; }
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) goto L_009592DC;
    v0 = 0; goto L_0095930C;
L_009592D4:;
    v0 = 0; goto L_0095930C;
L_009592DC:;
    v0 = func_00959320(a0, a1, a2, a3, f12.f, f13.f);
    a1 = v0 & 0xff;
    v0 = 255;
    if (a1 != v0) { a2 = 1; goto L_009592FC; }
    v0 = 0; goto L_0095930C;
L_009592FC:;
    a0 = s0;
    a3 = a2; v0 = func_00961C80(a0, a1, a2, a3);
    v0 = 1;
L_0095930C:;
    return v0;
}
