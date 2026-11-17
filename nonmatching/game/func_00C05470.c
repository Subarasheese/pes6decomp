/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_009B3070(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_00AFBA70(s32);

s32 func_00C05470(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s3 = a0;
    v0 = (*(volatile s16 *) (u32) (a1 + 4));
    s0 = a1;
    a2 = (*(volatile s16 *) (u32) (a1 + 6));
    a1 = v0; v0 = func_009B33A0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    s2 = v0;
    v0 = 10;
    a0 = s3;
    a1 = s2;
    a2 = s0;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
    v0 = (s32) 0xca0000U;
    v0 = (s32) ((u32) v0 + 0xfffff1d0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    s1 = v0;
    v0 = 2;
    if (s1 != v0) goto L_00C05634;
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x462c0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00C05534;
    a1 = (*(volatile u16 *) (u32) (s3 + 42));
    a0 = (*(volatile u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 10241;
    if (at == 0) goto L_00C05534;
    v0 = 1; goto L_00C05638;
L_00C05534:;
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) 0x1000000U;
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) { v0 = 1; goto L_00C05638; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 != 0) goto L_00C05634;
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 129));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    a2 = (*(volatile u8 *) (u32) (s3 + 18));
    v0 = (s32) ((u32) v0 << 6);
    s0 = (s32) ((u32) v0 + 0x800U);
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
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
    v0 = (*(volatile u8 *) (u32) (v0 + 129));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v0 = (s32) ((u32) v0 << 6);
    v0 = (s32) ((u32) v0 + 0x800U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < s2;
    if (at == 0) goto L_00C05634;
    v0 = 1; goto L_00C05638;
L_00C05634:;
    v0 = s1;
L_00C05638:;
    return v0;
}
