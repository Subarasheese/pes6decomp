/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00B79B70(s32, s32, s32);

void func_00B798F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    a2 = a2 & 0xff;
    v1 = 255;
    if (a2 == v1) goto L_00B79918;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v1); hi = (s32) ((s32) a2 % (s32) v1); lo = q_; }
    a3 = hi; goto L_00B7991C;
L_00B79918:;
    a3 = 1;
L_00B7991C:;
    v1 = (s32) ((u32) a3 << 3);
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) v1 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffe5b0U);
    v1 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 << 6);
    v1 = (*(volatile u8 *) (u32) (v1 + 7972));
    at = (u64) v1 < (u64) (s64) 9;
    { s32 c_ = at == 0; a2 = (s32) ((u32) a2 + (u32) a3); if (c_) goto L_00B79B64; }
    a3 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a3 = (s32) ((u32) a3 + 0xffffe750U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb79960U) goto L_00B79960; if (t_ == 0xb79a20U) goto L_00B79A20; if (t_ == 0xb79b00U) goto L_00B79B00; if (t_ == 0xb79b14U) goto L_00B79B14; if (t_ == 0xb79b40U) goto L_00B79B40; if (t_ == 0xb79b5cU) goto L_00B79B5C; if (t_ == 0xb79b64U) goto L_00B79B64; }
L_00B79960:;
    v1 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 7768));
    f0.i = (s32) f2.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00B7997C; }
L_00B7997C:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46500000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00B799DC;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00B799BC; }
    v1 = -1;
L_00B799BC:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46500000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f2.f = f0.f * f1.f;
L_00B799DC:;
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7776));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a2 = 1; goto L_00B799FC; }
    a2 = -1;
L_00B799FC:;
    f0.i = (s32) a2;
    v1 = (s32) 0x460d0000U;
    v1 = v1 | 0x6400;
    f0.f = (f32) f0.i;
    f1.i = (s32) v1;
    (*(volatile f32 *) (u32) a0) = f2.f;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f; goto L_00B79B64;
L_00B79A20:;
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7768));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a2 = 1; goto L_00B79A40; }
    a2 = -1;
L_00B79A40:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00B79A58; }
    v1 = -1;
L_00B79A58:;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    v1 = (s32) 0x463c0000U;
    a3 = v1 | 0x6400;
    v1 = (s32) ((u32) a2 << 2);
    a2 = (s32) ((u32) v1 + (u32) a2);
    a2 = (s32) ((u32) a2 << 5);
    v1 = (s32) 0x590000U;
    f0.i = (s32) a2;
    f4.f = (*(volatile f32 *) (u32) (v1 + 7776));
    f1.f = (f32) f0.i;
    f0.i = (s32) 0;
    f2.i = (s32) a3;
    fcc = f4.f < f0.f;
    acc = f0.f + f1.f;
    { s32 c_ = !fcc; f1.f = acc + f2.f * f3.f; if (c_) goto L_00B79AA8; }
    v1 = -1; goto L_00B79AAC;
L_00B79AA8:;
    v1 = 1;
L_00B79AAC:;
    f0.i = (s32) 0;
    fcc = f4.f < f0.f;
    if (!fcc) { a2 = 1; goto L_00B79AC4; }
    a2 = -1;
L_00B79AC4:;
    f0.i = (s32) a2;
    v1 = (s32) ((u32) v1 << 8);
    (*(volatile f32 *) (u32) a0) = f1.f;
    f0.f = (f32) f0.i;
    a0 = (s32) 0x45120000U;
    a0 = a0 | 0x8000;
    f1.i = (s32) a0;
    f1.f = f1.f * f0.f;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) a1) = f0.f; goto L_00B79B64;
L_00B79B00:;
    v1 = (s32) 0xc6260000U;
    v1 = v1 | 0x6400;
    (*(volatile u32 *) (u32) a0) = (u32) v1;
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00B79B64;
L_00B79B14:;
    a2 = (*(volatile s16 *) (u32) (a2 + 20));
    v1 = (s32) 0x46260000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f1.i = (s32) a2;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) a0) = f0.f;
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00B79B64;
L_00B79B40:;
    a2 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (a2 + 7776));
    f0.f = (*(volatile f32 *) (u32) (v1 + 7768));
    (*(volatile f32 *) (u32) a0) = f0.f;
    (*(volatile f32 *) (u32) a1) = f1.f; goto L_00B79B64;
L_00B79B5C:;
    func_00B79B70(a0, a1, a2);
L_00B79B64:;
    return;
}
