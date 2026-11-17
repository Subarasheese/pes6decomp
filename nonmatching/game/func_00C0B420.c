/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00962BC0(s64);
s64 func_009B3070(s64, s64);
s64 func_00A1B4A0(s64);

s64 func_00C0B420(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = 2;
    s3 = a0;
    s2 = a1;
    s1 = a2;
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 != v0; a0 = 0; if (c_) goto L_00C0B58C; }
    v1 = (*(volatile s32 *) (u32) (s1 + 36));
    v0 = 9;
    if (v1 == v0) goto L_00C0B480;
    v0 = 5;
    if (v1 == v0) goto L_00C0B480;
    if (v1 == 0) goto L_00C0B480;
    goto L_00C0B58C;
L_00C0B480:;
    a0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00C0B58C;
L_00C0B488:;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    s0 = (*(volatile u8 *) (u32) (s2 + 514));
    a1 = 30;
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
    v0 = (*(volatile u8 *) (u32) (v0 + 116));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = (s32) 0x88880000U;
    v1 = v1 | 0x8889;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) v0 >> 31);
    v1 = hi;
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) v0 >> 4;
    v0 = (s32) ((u32) v0 + (u32) a0);
    at = v0 < s0;
    if (at != 0) goto L_00C0B510;
    v0 = 1; goto L_00C0B5FC;
L_00C0B510:;
    a0 = s2; v0 = func_00A1B4A0(a0);
    if (v0 != 0) { v0 = 1; goto L_00C0B5FC; }
    v0 = (*(volatile u16 *) (u32) (s1 + 46));
    if (v0 != 0) goto L_00C0B54C;
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) goto L_00C0B54C;
    v0 = 1; goto L_00C0B5FC;
L_00C0B54C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    at = v0 < 7425;
    if (at != 0) goto L_00C0B59C;
    v0 = (*(volatile u8 *) (u32) s3);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = (*(volatile u16 *) (u32) (s2 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00C0B59C;
    v0 = 1; goto L_00C0B5FC;
L_00C0B58C:;
    if (a0 == 0) goto L_00C0B510;
    a2 = (*(volatile u8 *) (u32) (s3 + 18)); goto L_00C0B488;
L_00C0B59C:;
    a0 = s3; v0 = func_00962BC0(a0);
    v0 = v0 < 5;
    if (v0 != 0) goto L_00C0B5F8;
    a0 = (*(volatile s16 *) (u32) (s3 + 20));
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (s32) ((u32) v0 + 0x1e90U);
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    f1.i = (s32) a0;
    v1 = v1 ^ 0x1;
    f2.f = (f32) f1.i;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f * f2.f;
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_00C0B5F8;
    v0 = 1; goto L_00C0B5FC;
L_00C0B5F8:;
    v0 = 0;
L_00C0B5FC:;
    return v0;
}
