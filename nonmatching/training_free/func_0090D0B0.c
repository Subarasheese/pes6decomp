/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BDB8B0(s32, s32, s32, s32);

s32 func_0090D0B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    a0 = a0 & 0xff;
    if (a0 != 0) goto L_0090D0E8;
    v0 = (s32) 0x3f800000U;
    f21.i = (s32) v0;
    goto L_0090D0F0;
L_0090D0E8:;
    v0 = (s32) 0xbf800000U;
    f21.i = (s32) v0;
L_0090D0F0:;
    if (a1 == 0) goto L_0090D104;
    v0 = (s32) 0xcb0000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 21249)); goto L_0090D10C;
L_0090D104:;
    v0 = (s32) 0xcb0000U;
    s2 = (*(volatile u8 *) (u32) (v0 + 21250));
L_0090D10C:;
    if (s2 != 0) goto L_0090D25C;
    if (a1 == 0) { v0 = (s32) 0xbf800000U; goto L_0090D12C; }
    v0 = (s32) 0x3f800000U;
    f20.i = (s32) v0;
    v0 = (s32) ((u32) a0 << 2); goto L_0090D134;
L_0090D12C:;
    f20.i = (s32) v0;
    v0 = (s32) ((u32) a0 << 2);
L_0090D134:;
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = 255;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a0 + 0x1U);
    { s32 c_ = v1 == v0; s1 = 0; if (c_) goto L_0090D164; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v0 = hi;
    a0 = (s32) ((u32) v0 + 0x1U); goto L_0090D168;
L_0090D164:;
    a0 = 1;
L_0090D168:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = 0;
    s3 = (s32) ((u32) v0 + (u32) v1);
L_0090D184:;
    a0 = s3; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0090D24C;
    f3.f = (*(volatile f32 *) (u32) (s3 + 232));
    v0 = (s32) 0xc5a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    f1.f = f3.f * f21.f;
    f1.f = f20.f * f1.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0090D24C;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.f = f0.f * f21.f;
    f0.f = f20.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0090D24C;
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    v0 = (s32) 0xc5000000U;
    f0.i = (s32) v0;
    f2.f = f1.f * f21.f;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_0090D24C;
    f1.f = (*(volatile f32 *) (u32) (v1 + 16));
    v0 = (s32) 0x45400000U;
    f0.i = (s32) v0;
    f1.f = f1.f * f21.f;
    f0.f = f1.f - f0.f;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_0090D24C;
    f0.i = (s32) f3.f;
    v1 = f0.i;
    if (v1 <= 0) { v0 = (s32) ((u32) 0 - (u32) v1); goto L_0090D230; }
    v0 = v1;
L_0090D230:;
    at = s1 < v0;
    if (at == 0) goto L_0090D24C;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0090D244; }
L_0090D244:;
    s2 = (*(volatile u8 *) (u32) s3);
    s1 = v1;
L_0090D24C:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_0090D184; }
L_0090D25C:;
    v0 = s2 & 0xff;
    return v0;
}
