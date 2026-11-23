/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);

void func_00278980(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s3 = a0;
    a0 = (*(volatile u16 *) (u32) (gp + -32268));
    v1 = (*(volatile u16 *) (u32) (gp + -32272));
    a2 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = a2 != 0; s2 = a1; if (c_) goto L_002789B8; }
    v1 = 0; goto L_00278A14;
L_002789B8:;
    a1 = s2 & 0xff;
    v1 = 23;
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
    v1 = (s32) 0xb2160000U;
    v1 = v1 | 0x42c9;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a0 = (s32) ((u32) a2 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (*(volatile s32 *) (u32) (gp + -22204));
    v1 = (s32) ((u32) v1 + (u32) a0);
    if ((u32) a2 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) a2); hi = (s32) ((u32) v1 % (u32) a2); lo = q_; }
    v1 = hi;
    v1 = v1 & 0xffff;
L_00278A14:;
    s1 = v1 & 0xffff;
    if (s1 == 0) goto L_00278AD4;
L_00278A20:;
    a2 = (*(volatile u16 *) (u32) (gp + -32272));
    at = s1 < a2;
    if (at == 0) goto L_00278B1C;
    v1 = (s32) 0x5a0000U;
    a1 = s2 & 0xff;
    v1 = (s32) ((u32) v1 + 0xfffffb90U);
    a0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0xfffffbb0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a1 = (*(volatile s8 *) (u32) a0);
    v1 = (*(volatile s8 *) (u32) v1);
    v1 = (s32) ((u32) v1 - (u32) a1);
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    if ((s32) a2 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a2); hi = (s32) ((s32) v1 % (s32) a2); lo = q_; }
    a0 = lo;
    v1 = (s32) 0x42fe0000U;
    f0.i = (s32) v1;
    a0 = (s32) ((u32) a1 + (u32) a0);
    f1.i = (s32) a0;
    f1.f = (f32) f1.i;
    f1.f = f1.f / f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 24));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s3 + 24)) = f0.f;
L_00278A94:;
    f1.f = (*(volatile f32 *) (u32) (s3 + 24));
    v1 = (s32) 0x3f800000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00278B5C;
    v1 = (s32) 0xbf800000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00278B64;
    (*(volatile f32 *) (u32) (s3 + 24)) = f0.f;
L_00278ACC:;
    goto L_00278B68;
L_00278AD4:;
    v0 = (s32) 0x5a0000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffbb0U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x5a0000U;
    a0 = (*(volatile s8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + 0xfffffb90U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (gp + -32264));
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    v0 = (s32) ((u32) v0 << 1);
    a0 = v0 & 0xffff; v0 = Pes6Random_Below(a0);
    v1 = (*(volatile u8 *) (u32) (gp + -32264));
    a0 = v0 & 0xffff;
    v1 = (s32) ((u32) a0 - (u32) v1);
    (*(volatile u8 *) (u32) s0) = (u8) v1; goto L_00278A20;
L_00278B1C:;
    v1 = (s32) 0x5a0000U;
    a0 = s2 & 0xff;
    v1 = (s32) ((u32) v1 + 0xfffffbb0U);
    a0 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s8 *) (u32) a0);
    v1 = (s32) 0x42fe0000U;
    f1.i = (s32) v1;
    f0.f = (*(volatile f32 *) (u32) (s3 + 24));
    f2.i = (s32) a0;
    f2.f = (f32) f2.i;
    f1.f = f2.f / f1.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s3 + 24)) = f0.f; goto L_00278A94;
L_00278B5C:;
    (*(volatile f32 *) (u32) (s3 + 24)) = f0.f; goto L_00278ACC;
L_00278B64:;
L_00278B68:;
    return;
}
