/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009492E0(s64, s64, s64, s64, f32, f32);
s64 func_009498C0(s64, s64, s64, s64, f32, f32);

s64 func_00948F20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x53bdU);
    s2 = a0;
    s1 = a4;
    a4 = (*(u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) a4);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s0 = a5; if (c_) goto L_00948F80; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a4 << 2);
    v0 = (s32) ((u32) v0 + 0x5368U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(s32 *) (u32) a0);
    v0 = 255;
    if (v1 == v0) goto L_00948F80;
    (*(u32 *) (u32) a0) = (u32) 0; goto L_00949000;
L_00948F80:;
    v1 = (s32) 0xcb0000U;
    v0 = (*(u8 *) (u32) s2);
    v1 = (s32) ((u32) v1 + 0x56abU);
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (*(u8 *) (u32) v1);
    if (v1 == v0) { a0 = s2; goto L_00948FA4; }
    v0 = 255; goto L_00949000;
L_00948FA4:;
    v0 = func_009498C0(a0, a1, a2, a3, f12.f, f13.f);
    a1 = s1;
    a2 = s0;
    a0 = s2; v0 = func_009492E0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = v0 & 0xff;
    v1 = 255;
    if (v0 == v1) { a0 = (*(u8 *) (u32) (s2 + 19)); goto L_00948FE8; }
    a0 = (*(u8 *) (u32) (s2 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5368U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0; goto L_00949000;
L_00948FE8:;
    v0 = v1;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5368U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0;
L_00949000:;
    return v0;
}
