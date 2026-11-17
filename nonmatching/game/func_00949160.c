/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009492E0(s64, s64, s64, s64, f32, f32);
s64 func_009498C0(s64, s64, s64, s64, f32, f32);
s64 func_00958AD0(s64, s64);

s64 func_00949160(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x53bdU);
    s0 = a2;
    a2 = (*(u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_009491BC; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x5368U);
    a0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(s32 *) (u32) a0);
    v0 = 255;
    if (v1 == v0) goto L_009491BC;
    (*(u32 *) (u32) a0) = (u32) 0; goto L_009492C4;
L_009491BC:;
    v1 = (s32) 0xcb0000U;
    v0 = (*(u8 *) (u32) s1);
    v1 = (s32) ((u32) v1 + 0x56abU);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(u8 *) (u32) v1);
    if (v1 == v0) { a0 = s1; goto L_009491E0; }
    v0 = 255; goto L_009492C4;
L_009491E0:;
    a2 = s0; v0 = func_009498C0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = 240;
    if (s0 != v0) { a0 = s1; goto L_0094920C; }
    a0 = s1;
    a1 = 2;
    a2 = 3; v0 = func_009492E0(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xff; goto L_0094921C;
L_0094920C:;
    a1 = 0;
    a2 = 0; v0 = func_009492E0(a0, a1, a2, a3, f12.f, f13.f);
    s2 = v0 & 0xff;
L_0094921C:;
    a0 = s1;
    a1 = s2;
    a2 = 0; v0 = func_00958AD0(a0, a1);
    a1 = v0 & 0xff;
    if (a1 == 0) goto L_00949280;
    v1 = a1 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00949254; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00949254:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe7b2U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    v0 = v0 < s0;
    if (v0 != 0) { s2 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_00949280; }
    s2 = a1 & 0xff;
L_00949280:;
    v1 = s2 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = (*(u8 *) (u32) (s1 + 19)); goto L_009492B0; }
    a0 = (*(u8 *) (u32) (s1 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5368U);
    v0 = s2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0; goto L_009492C4;
L_009492B0:;
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5368U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(u32 *) (u32) v1) = (u32) 0;
L_009492C4:;
    return v0;
}
