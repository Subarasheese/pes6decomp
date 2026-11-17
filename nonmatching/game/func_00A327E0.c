/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_009B30B0(s32, s32);
s32 func_00A13E50(s32, s32);
s32 func_00A9B980(s32);
s32 func_00A9C640(s32);

s32 func_00A327E0(s32 a0, s32 a1, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    s3 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s2 = a1; if (c_) goto L_00A32844; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffae30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xa3282cU) goto L_00A3282C; if (t_ == 0xa32834U) goto L_00A32834; if (t_ == 0xa3283cU) goto L_00A3283C; if (t_ == 0xa32844U) goto L_00A32844; }
L_00A3282C:;
    s0 = 2560; goto L_00A32848;
L_00A32834:;
    s0 = 2048; goto L_00A32848;
L_00A3283C:;
    s0 = 1536; goto L_00A32848;
L_00A32844:;
    s0 = 1024;
L_00A32848:;
    a0 = s3; v0 = func_00A9B980(a0);
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    f1.i = (s32) v1;
    v0 = (s32) 0x46d20000U;
    v0 = v0 | 0x6400;
    f1.f = (f32) f1.i;
    f0.i = (s32) v0;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    s1 = f0.i;
    at = s1 < 1025;
    if (at == 0) { s1 = 1024; goto L_00A328B0; }
    at = s1 < 192;
    if (at == 0) goto L_00A328B0;
    s1 = 192;
L_00A328B0:;
    a0 = s3; v0 = func_00A9C640(a0);
    a0 = (*(volatile u16 *) (u32) (s3 + 268));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    s0 = v0 & 0xffff;
    at = s0 < 80;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A32AD4; }
L_00A328D4:;
    v0 = s0 < 80;
    if (v0 != 0) goto L_00A32AC8;
    a0 = (*(volatile s32 *) (u32) (s3 + 276));
    v0 = (s32) 0x51eb0000U;
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 5);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    v0 = (s32) ((u32) v0 >> 5);
    at = (u64) s1 < (u64) v0;
    if (at == 0) goto L_00A32AC8;
    a0 = (*(volatile u8 *) (u32) (s3 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00A32948; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00A32948:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile u16 *) (u32) (s0 + 42));
    a0 = (*(volatile u16 *) (u32) (s0 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 96;
    if (at == 0) { v0 = s1; goto L_00A32B14; }
    v0 = (*(volatile u8 *) (u32) (s3 + 36));
    if (v0 == 0) goto L_00A329FC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7100));
    at = v0 < 3;
    if (at != 0) goto L_00A329FC;
    v0 = (*(volatile s32 *) (u32) (s3 + 292));
    at = (s32) 0x4000000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00A329F4;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A329CC; }
L_00A329CC:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00A329FC;
L_00A329F4:;
    v0 = s1; goto L_00A32B14;
L_00A329FC:;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00A32A20; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00A32A38;
L_00A32A20:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00A32A38:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    s1 = (*(volatile s32 *) (u32) (s3 + 276));
    a0 = f0.i;
    at = (u64) s1 < (u64) a0;
    if (at == 0) goto L_00A32AF8;
    a0 = s1; goto L_00A32AF8;
L_00A32A64:;
    at = (s32) 0x1440000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00A32A98;
L_00A32A78:;
    at = a0 < 513;
    if (at != 0) goto L_00A32A98;
    a0 = (s32) ((u32) a0 + 0xfffffe00U);
    a1 = 1024; v0 = func_00A13E50(a0, a1);
    s1 = v0; goto L_00A32AC8;
L_00A32A98:;
    if (s2 == 0) { v1 = (s32) ((u32) s1 << 1); goto L_00A32AA8; }
    v0 = s1; goto L_00A32ACC;
L_00A32AA8:;
    v0 = (s32) 0x51eb0000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = v0 | 0x851f;
    v1 = (s32) ((u32) v1 << 5);
    v1 = (s32) ((u32) v1 + (u32) s1);
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    s1 = (s32) ((u32) v0 >> 5);
L_00A32AC8:;
    v0 = s1;
L_00A32ACC:;
    goto L_00A32B18;
L_00A32AD4:;
    a1 = (*(volatile u16 *) (u32) (v0 + 88));
    a0 = (*(volatile u16 *) (u32) (s3 + 268)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 49;
    if (at == 0) goto L_00A328D4;
    v0 = 0; goto L_00A32B14;
L_00A32AF8:;
    v1 = (*(volatile s32 *) (u32) (s0 + 292));
    v0 = (s32) 0x1900000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00A32A78;
    v0 = (*(volatile s32 *) (u32) (s3 + 284)); goto L_00A32A64;
L_00A32B14:;
L_00A32B18:;
    return v0;
}
