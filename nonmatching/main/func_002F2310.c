/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001DE2F0(s32, s32, s32, s32, f32);
s32 func_001DE450(s32, s32, s32, s32, f32);
s32 func_001F1620(s32);

void func_002F2310(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = 3;
    s3 = a0;
    s2 = a1;
    s1 = a2;
    s0 = a3;
    v1 = (*(volatile u8 *) (u32) (a0 + 2));
    s4 = v1 & 0xf;
    { s32 c_ = s4 != v0; f21.i = f12.i; if (c_) goto L_002F2454; }
    f1.f = (*(volatile f32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f0.f = f1.f + f0.f;
    f22.f = f21.f - f0.f; v0 = func_001F1620(a0);
    s5 = v0;
    a1 = s0;
    a0 = s5; f0.f = func_001DE2F0(a0, a1, a2, a3, f12.f);
    fcc = f22.f < f0.f;
    { s32 c_ = !fcc; f20.i = f0.i; if (c_) goto L_002F2398; }
    f20.i = f22.i;
L_002F2398:;
    v1 = (*(volatile u8 *) (u32) (s3 + 2));
    v1 = v1 & 0x10;
    if (v1 == 0) { v0 = (s32) 0x4f000000U; goto L_002F23B0; }
    a0 = 1; goto L_002F23FC;
L_002F23B0:;
    f0.i = (s32) v0;
    fcc = f0.f <= f22.f;
    if (fcc) { f0.f = f22.f - f0.f; goto L_002F23D4; }
    f0.i = (s32) f22.f;
    a2 = f0.i;
    a2 = a2 & 0xffff; goto L_002F23EC;
L_002F23D4:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a2 = a2 | v0;
    a2 = a2 & 0xffff;
L_002F23EC:;
    a0 = s5;
    a1 = s0; v0 = func_001DE450(a0, a1, a2, a3, f12.f);
    a0 = v0 & 0xff;
L_002F23FC:;
    v1 = 33;
    if (s0 != v1) { v1 = (s32) 0x41800000U; goto L_002F241C; }
    v1 = (s32) 0x414c0000U;
    v1 = v1 | 0xcccd;
    f1.i = (s32) v1;
    goto L_002F2420;
L_002F241C:;
    f1.i = (s32) v1;
L_002F2420:;
    f0.i = (s32) a0;
    v1 = (s32) 0x40c00000U;
    f0.f = (f32) f0.i;
    f2.i = (s32) v1;
    f1.f = f2.f + f1.f;
    f0.f = f0.f * f1.f;
    f4.f = f0.f - f2.f;
    f1.f = (*(volatile f32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s3 + 16)) = f0.f; goto L_002F2584;
L_002F2454:;
    f0.f = (*(volatile f32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (s3 + 32));
    f22.f = f21.f - f0.f; v0 = func_001F1620(a0);
    s5 = v0;
    a1 = s0;
    a0 = s5; f0.f = func_001DE2F0(a0, a1, a2, a3, f12.f);
    fcc = f22.f < f0.f;
    { s32 c_ = !fcc; f20.i = f0.i; if (c_) goto L_002F2484; }
    f20.i = f22.i;
L_002F2484:;
    v1 = (*(volatile u8 *) (u32) (s3 + 2));
    v1 = v1 & 0x10;
    if (v1 == 0) { v0 = (s32) 0x4f000000U; goto L_002F249C; }
    a0 = 1; goto L_002F24E8;
L_002F249C:;
    f0.i = (s32) v0;
    fcc = f0.f <= f22.f;
    if (fcc) { f0.f = f22.f - f0.f; goto L_002F24C0; }
    f0.i = (s32) f22.f;
    a2 = f0.i;
    a2 = a2 & 0xffff; goto L_002F24D8;
L_002F24C0:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a2 = a2 | v0;
    a2 = a2 & 0xffff;
L_002F24D8:;
    a0 = s5;
    a1 = s0; v0 = func_001DE450(a0, a1, a2, a3, f12.f);
    a0 = v0 & 0xff;
L_002F24E8:;
    v1 = 33;
    if (s0 != v1) { v1 = (s32) 0x41800000U; goto L_002F2508; }
    v1 = (s32) 0x414c0000U;
    v1 = v1 | 0xcccd;
    f1.i = (s32) v1;
    goto L_002F250C;
L_002F2508:;
    f1.i = (s32) v1;
L_002F250C:;
    f0.i = (s32) a0;
    v1 = (s32) 0x40c00000U;
    f0.f = (f32) f0.i;
    f2.i = (s32) v1;
    f1.f = f2.f + f1.f;
    v1 = (s32) 0x3f000000U;
    f0.f = f0.f * f1.f;
    f3.f = (*(volatile f32 *) (u32) s2);
    f4.f = f0.f - f2.f;
    f1.f = f21.f - f3.f;
    f1.f = f1.f - f20.f;
    f0.i = (s32) v1;
    { s32 c_ = s4 < 0; f2.f = f0.f * f1.f; if (c_) goto L_002F2554; }
    f0.i = (s32) s4;
    f1.f = (f32) f0.i; goto L_002F2570;
L_002F2554:;
    a0 = (s32) ((u32) s4 >> 1);
    v1 = s4 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_002F2570:;
    f0.i = (s32) 0;
    acc = f0.f + f3.f;
    f0.f = acc + f1.f * f2.f;
    (*(volatile f32 *) (u32) (s3 + 16)) = f0.f;
L_002F2584:;
    a0 = (*(volatile u8 *) (u32) (s3 + 3));
    v1 = 3;
    a0 = a0 & 0xf;
    if (a0 != v1) { f0.f = (*(volatile f32 *) (u32) (s2 + 4)); goto L_002F25AC; }
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.f = (*(volatile f32 *) (u32) (s3 + 12));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (s3 + 20)) = f0.f; goto L_002F25B0;
L_002F25AC:;
    (*(volatile f32 *) (u32) (s3 + 20)) = f0.f;
L_002F25B0:;
    v1 = (s32) ((u32) s4 + 0xffffffffU);
    (*(volatile f32 *) (u32) (s3 + 24)) = f20.f;
    at = (u64) v1 < (u64) (s64) 2;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (s3 + 28)) = f4.f; if (c_) goto L_002F25CC; }
    (*(volatile f32 *) (u32) s1) = f21.f; goto L_002F25EC;
L_002F25CC:;
    f2.f = (*(volatile f32 *) (u32) (s3 + 16));
    f1.f = (*(volatile f32 *) (u32) (s3 + 24));
    f0.f = (*(volatile f32 *) (u32) s1);
    f1.f = f2.f + f1.f;
    fcc = f0.f < f1.f;
    if (!fcc) { f2.f = (*(volatile f32 *) (u32) (s3 + 20)); goto L_002F25F0; }
    (*(volatile f32 *) (u32) s1) = f1.f;
L_002F25EC:;
    f2.f = (*(volatile f32 *) (u32) (s3 + 20));
L_002F25F0:;
    f1.f = (*(volatile f32 *) (u32) (s3 + 28));
    f0.f = (*(volatile f32 *) (u32) (s1 + 4));
    f1.f = f2.f + f1.f;
    fcc = f0.f < f1.f;
    if (!fcc) { f1.f = (*(volatile f32 *) (u32) (s3 + 16)); goto L_002F2610; }
    (*(volatile f32 *) (u32) (s1 + 4)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s3 + 16));
L_002F2610:;
    f0.f = (*(volatile f32 *) (u32) (s3 + 24));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    return;
}
