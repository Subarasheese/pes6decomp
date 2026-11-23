/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00272D00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a4 = 0;
    u64 qh_a5 = 0;
    u64 qh_a6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    s32 fcc = 0;
    s64 frame[86];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v0 + -18736) & ~15U; a6 = *(volatile s64 *) a_; qh_a6 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v1 + -18720) & ~15U; a5 = *(volatile s64 *) a_; qh_a5 = *(volatile u64 *) (a_ + 8); }
    a7 = (s32) ((u32) sp + 0x80U);
    a3 = (s32) ((u32) sp + 0x220U);
    a2 = 18;
    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) a6; *(volatile u64 *) (a_ + 8) = qh_a6; }
    { u32 a_ = (u32) (v0 + -18704) & ~15U; a4 = *(volatile s64 *) a_; qh_a4 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (v1 + -18688) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a5; *(volatile u64 *) (a_ + 8) = qh_a5; }
    v0 = (s32) 0x3b0000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a4; *(volatile u64 *) (a_ + 8) = qh_a4; }
    v0 = (*(volatile s64 *) (u32) (v0 + -18672));
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile u64 *) (u32) (sp + 192)) = (u64) v0;
L_00272D4C:;
    v1 = (*(volatile s16 *) (u32) a7);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a7 + 2));
    (*(volatile u16 *) (u32) a3) = (u16) v1;
    (*(volatile u16 *) (u32) (a3 + 2)) = (u16) v0;
    a7 = (s32) ((u32) a7 + 0x4U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_00272D4C; }
    a2 = (s32) 0x3b0000U;
    a4 = (s32) ((u32) sp + 0x0U);
    a2 = (s32) ((u32) a2 + 0xffffb720U);
    v1 = 7;
L_00272D7C:;
    { u32 a_ = (u32) (a2 + 0) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    { u32 a_ = (u32) (a4 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = (s32) ((u32) a2 + 0x10U);
    a4 = (s32) ((u32) a4 + 0x10U);
    if (v1 > 0) goto L_00272D7C;
    v0 = (*(volatile s64 *) (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a2 + 8));
    a3 = (s32) ((u32) sp + 0x0U);
    v1 = 31;
    (*(volatile u64 *) (u32) a4) = (u64) v0;
    a2 = (s32) ((u32) sp + 0x1a0U);
    (*(volatile f32 *) (u32) (a4 + 8)) = f0.f;
L_00272DB4:;
    v0 = (*(volatile s32 *) (u32) a3);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    a2 = (s32) ((u32) a2 + 0x4U);
    if (v1 > 0) goto L_00272DB4;
    a4 = (*(volatile u8 *) (u32) (a0 + 1));
    a2 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) ((u32) a4 << 1);
    v1 = (s32) ((u32) v1 + (u32) a4);
    a3 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 << 2);
    a4 = (s32) ((u32) v1 + (u32) sp);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (*(volatile u16 *) (u32) (a3 + 544));
    { s32 c_ = a3 < 0; v0 = (s32) ((u32) v0 << 2); if (c_) goto L_00272E0C; }
    f0.i = (s32) a3;
    f2.f = (f32) f0.i; goto L_00272E28;
L_00272E0C:;
    a4 = (s32) ((u32) a3 >> 1);
    a3 = a3 & 0x1;
    a4 = a4 | a3;
    f0.i = (s32) a4;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00272E28:;
    a4 = (s32) ((u32) v0 + (u32) sp);
    a3 = (s32) 0x4f000000U;
    f1.f = (*(volatile f32 *) (u32) (a4 + 416));
    f0.i = (s32) a3;
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00272E5C; }
    f0.i = (s32) f1.f;
    a4 = f0.i;
    a4 = a4 & 0xffff; goto L_00272E74;
L_00272E5C:;
    a3 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a4 = f0.i;
    a4 = a4 | a3;
    a4 = a4 & 0xffff;
L_00272E74:;
    a3 = a4 & 0xffff;
    if (a3 <= 0) { a3 = 0; goto L_00272E90; }
    at = a3 < 21;
    if (at == 0) { a3 = 2; goto L_00272E90; }
    a3 = 1;
L_00272E90:;
    t4 = (s32) ((u32) sp + 0x80U);
    a7 = (s32) ((u32) sp + 0x150U);
    a6 = 18;
L_00272E9C:;
    a5 = (*(volatile s16 *) (u32) t4);
    a6 = (s32) ((u32) a6 + 0xffffffffU);
    a4 = (*(volatile s16 *) (u32) (t4 + 2));
    (*(volatile u16 *) (u32) a7) = (u16) a5;
    (*(volatile u16 *) (u32) (a7 + 2)) = (u16) a4;
    t4 = (s32) ((u32) t4 + 0x4U);
    { s32 c_ = a6 > 0; a7 = (s32) ((u32) a7 + 0x4U); if (c_) goto L_00272E9C; }
    a7 = (s32) ((u32) sp + 0x0U);
    a6 = (s32) ((u32) sp + 0xd0U);
    a5 = 31;
L_00272EC8:;
    a4 = (*(volatile s32 *) (u32) a7);
    a5 = (s32) ((u32) a5 + 0xffffffffU);
    (*(volatile u32 *) (u32) a6) = (u32) a4;
    a7 = (s32) ((u32) a7 + 0x4U);
    a6 = (s32) ((u32) a6 + 0x4U);
    if (a5 > 0) goto L_00272EC8;
    a4 = (*(volatile u8 *) (u32) (a0 + 3));
    a0 = a2 & 0xff;
    a2 = (s32) ((u32) a0 - (u32) a4);
    if (a2 < 0) { a2 = 0; goto L_00272EF8; }
L_00272EF8:;
    a0 = (s32) ((u32) v1 + (u32) sp);
    v1 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) (v1 + 336));
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00272F1C; }
    f0.i = (s32) v1;
    f2.f = (f32) f0.i; goto L_00272F34;
L_00272F1C:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00272F34:;
    v1 = (s32) ((u32) v0 + (u32) sp);
    f1.f = (*(volatile f32 *) (u32) (v1 + 208));
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00272F68; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00272F80;
L_00272F68:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00272F80:;
    v0 = v1 & 0xffff;
    if (v0 <= 0) { a0 = 0; goto L_00272F9C; }
    at = v0 < 21;
    if (at == 0) { a0 = 2; goto L_00272F9C; }
    a0 = 1;
L_00272F9C:;
    v1 = 3;
    { s32 c_ = a1 == v1; v0 = 0; if (c_) goto L_00273030; }
    v1 = 2;
    if (a1 == v1) goto L_00272FFC;
    v1 = 1;
    if (a1 == v1) goto L_00272FC8;
    goto L_00273094;
L_00272FC8:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a3 << 2);
    f2.f = (*(volatile f32 *) (u32) (v0 + -18216));
    a0 = (s32) ((u32) v1 + (u32) sp);
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -18212));
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -18208));
    (*(volatile f32 *) (u32) (sp + 672)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 676)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 680)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (a0 + 672)); goto L_00273094;
L_00272FFC:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a3 << 2);
    f2.f = (*(volatile f32 *) (u32) (v0 + -18200));
    a0 = (s32) ((u32) v1 + (u32) sp);
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -18196));
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -18192));
    (*(volatile f32 *) (u32) (sp + 656)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 660)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 664)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (a0 + 656)); goto L_00273094;
L_00273030:;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a3 << 2);
    f5.f = (*(volatile f32 *) (u32) (v0 + -18176));
    v0 = (s32) 0x3b0000U;
    f4.f = (*(volatile f32 *) (u32) (v0 + -18172));
    (*(volatile f32 *) (u32) (sp + 624)) = f5.f;
    v0 = (s32) 0x3b0000U;
    f3.f = (*(volatile f32 *) (u32) (v0 + -18168));
    (*(volatile f32 *) (u32) (sp + 628)) = f4.f;
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -18164));
    (*(volatile f32 *) (u32) (sp + 632)) = f3.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -18160));
    (*(volatile f32 *) (u32) (sp + 636)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -18156));
    (*(volatile f32 *) (u32) (sp + 640)) = f1.f;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile f32 *) (u32) (sp + 644)) = f0.f;
    v0 = (*(volatile s32 *) (u32) (v0 + 624));
L_00273094:;
    return;
}
