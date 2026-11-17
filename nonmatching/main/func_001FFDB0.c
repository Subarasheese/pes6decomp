/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001A54F0(s64);
s64 func_001A55C0(s64);
s64 func_00270530(s64, s64, s64, s64);

s64 func_001FFDB0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a2;
    a1 = (s32) ((u32) sp + 0x40U);
    v0 = func_00270530(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 10051));
    v1 = (s32) ((u32) v1 + 0xffff89f0U);
    a0 = (s32) ((u32) sp + 0x60U);
    v0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 1);
    s0 = (s32) ((u32) v1 + (u32) v0); v0 = func_001A55C0(a0);
    a0 = (s32) ((u32) sp + 0x50U); v0 = func_001A54F0(a0);
    v1 = (*(volatile s16 *) (u32) (s0 + 14));
    f1.f = (*(volatile f32 *) (u32) (sp + 64));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f0.f < f1.f;
    { s32 c_ = !fcc; f2.f = (*(volatile f32 *) (u32) (sp + 72)); if (c_) goto L_001FFE28; }
    f1.i = f0.i;
L_001FFE28:;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    v1 = (s32) ((u32) 0 - (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = (*(volatile s16 *) (u32) (s0 + 12)); goto L_001FFE54; }
    f1.i = f0.i;
    v1 = (*(volatile s16 *) (u32) (s0 + 12));
L_001FFE54:;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f0.f < f2.f;
    if (!fcc) { v1 = (*(volatile s16 *) (u32) (s0 + 10)); goto L_001FFE74; }
    f2.i = f0.i;
    v1 = (*(volatile s16 *) (u32) (s0 + 10));
L_001FFE74:;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_001FFE90;
    f2.i = f0.i;
L_001FFE90:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 10051));
    at = (u64) v1 < (u64) (s64) 13;
    if (at == 0) { ; goto L_001FFFB0; }
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x3fa0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x1ffec0U) goto L_001FFEC0; if (t_ == 0x1ffee0U) goto L_001FFEE0; if (t_ == 0x1fff68U) goto L_001FFF68; if (t_ == 0x1fffacU) goto L_001FFFAC; }
L_001FFEC0:;
    (*(volatile f32 *) (u32) (s2 + 16)) = f1.f;
    v1 = (*(volatile s16 *) (u32) (s0 + 2));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 20)) = f0.f;
    (*(volatile f32 *) (u32) (s2 + 24)) = f2.f; goto L_001FFFAC;
L_001FFEE0:;
    v1 = (s32) 0x43000000U;
    a1 = (s64) ((u64) s1 << 48);
    f0.i = (s32) v1;
    a1 = a1 >> 48;
    f0.f = f0.f * f1.f;
    a0 = 16384;
    v1 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) (s2 + 16)) = f1.f;
    a2 = (*(volatile s16 *) (u32) (s0 + 2));
    f1.i = (s32) a2;
    f1.f = (f32) f1.i;
    (*(volatile f32 *) (u32) (s2 + 20)) = f1.f;
    (*(volatile f32 *) (u32) (s2 + 24)) = f2.f;
    a2 = (*(volatile u16 *) (u32) (s0 + 16));
    a1 = (s32) ((u32) a2 + (u32) a1);
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    a1 = (*(volatile s16 *) (u32) (s0 + 6));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    a1 = (*(volatile s16 *) (u32) (s0 + 8));
    f0.i = (s32) a1;
    f0.f = (f32) f0.i;
    f0.f = f2.f + f0.f;
    (*(volatile f32 *) (u32) (s2 + 8)) = f0.f;
    (*(volatile u16 *) (u32) (v1 + 10058)) = (u16) a0; goto L_001FFFAC;
L_001FFF68:;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 10058)) = (u16) 0;
    (*(volatile f32 *) (u32) (s2 + 16)) = f1.f;
    (*(volatile u32 *) (u32) (s2 + 20)) = (u32) 0;
    (*(volatile f32 *) (u32) (s2 + 24)) = f2.f;
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    v1 = (*(volatile s16 *) (u32) (s0 + 6));
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    (*(volatile f32 *) (u32) (s2 + 8)) = f2.f;
L_001FFFAC:;
L_001FFFB0:;
    return v0;
}
