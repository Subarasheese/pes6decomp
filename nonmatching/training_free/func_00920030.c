/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00905170(void);
s64 func_0098EC40(s64, s64, s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);
s64 func_00AFBAB0(s64, s64, s64, s64);
s64 func_00BDB8B0(s64, s64, s64, s64);

s64 func_00920030(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7956));
    if (v1 == 0) goto L_00920078;
    v1 = 0;
L_00920060:;
    v1 = v1 & 0xff;
    if (v1 != 0) { a0 = 1; goto L_009200B4; }
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 21167)) = (u8) 0; goto L_00920238;
L_00920078:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_00920090;
    v1 = 0; goto L_00920060;
L_00920090:;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 21192));
    v1 = (*(volatile u8 *) (u32) (v1 + 9964));
    at = a0 < v1;
    if (at == 0) { v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00920060; }
    v1 = 0; goto L_00920060;
L_009200B4:;
    v0 = func_0098EC40(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) v0);
    s4 = v0; v0 = func_00AFBAB0(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 255;
    if (a0 == v1) { a0 = 1; goto L_009200F0; }
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0, a1, a2, a3);
    a0 = v0 & 0xff;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a0 = hi;
L_009200F0:;
    s0 = (*(volatile s16 *) (u32) (s4 + 20));
    v1 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v1 + (u32) a0);
    s2 = 0;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (v1 + 224));
    f2.i = (s32) s0;
    f0.i = (s32) 0;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; s1 = 26930; if (c_) goto L_00920140; }
L_00920130:;
    if (s2 != 0) goto L_0092022C;
L_00920138:;
    goto L_0092023C;
L_00920140:;
    s3 = 0;
L_00920144:;
    a0 = s4; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00920210;
    f1.i = (s32) s0;
    f0.f = (*(volatile f32 *) (u32) (s4 + 224));
    f1.f = (f32) f1.i;
    f1.f = f0.f * f1.f;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00920210;
    a0 = (*(volatile u8 *) (u32) (s4 + 477));
    v1 = 8;
    if (a0 == v1) goto L_009201C8;
    v1 = 36;
    if (a0 == v1) goto L_009201C8;
    v1 = 52;
    if (a0 == v1) goto L_009201A8;
    a0 = s4; goto L_009201B8;
L_009201A8:;
    a0 = (*(volatile u8 *) (u32) s4);
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 21167)) = (u8) a0; goto L_00920238;
L_009201B8:;
    v0 = func_00905170();
    if (v0 != 0) goto L_00920210;
L_009201C8:;
    v1 = (s32) 0x46520000U;
    f2.i = (s32) s0;
    v1 = v1 | 0x6400;
    f3.f = (*(volatile f32 *) (u32) (s4 + 224));
    f2.f = (f32) f2.i;
    f1.i = (s32) v1;
    f0.i = (s32) 0;
    acc = f0.f + f1.f;
    f0.f = acc + f3.f * f2.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    at = v1 < s1;
    if (at == 0) goto L_00920210;
    s2 = (*(volatile u8 *) (u32) s4);
    s1 = v1;
L_00920210:;
    v1 = (s32) ((u32) s3 + 0x1U);
    s3 = v1 & 0xff;
    v1 = s3 < 10;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00920144; }
    goto L_00920130;
L_0092022C:;
    v1 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (v1 + 21167)) = (u8) s2; goto L_00920138;
L_00920238:;
L_0092023C:;
    return v0;
}
