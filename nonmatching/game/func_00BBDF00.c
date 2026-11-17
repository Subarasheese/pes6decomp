/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001040A0(s64, s64, s64, s64, f32);
s64 func_009B3070(s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);

void func_00BBDF00(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    f0.i = (s32) 0;
    v1 = (*(volatile s32 *) (u32) a0);
    f3.f = (*(volatile f32 *) (u32) (v1 + 224));
    fcc = f3.f < f0.f;
    { s32 c_ = !fcc; s2 = a0; if (c_) goto L_00BBDF3C; }
    v0 = -1; goto L_00BBDF40;
L_00BBDF3C:;
    v0 = 1;
L_00BBDF40:;
    f0.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 232));
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x400;
    f0.i = (s32) v0;
    f21.f = f0.f * f1.f;
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00BBDF78; }
    v0 = -1;
L_00BBDF78:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x446d0000U;
    v1 = v0 | 0xc000;
    v0 = 22;
    f0.i = (s32) v1;
    { s32 c_ = a1 == v0; f20.f = f0.f * f1.f; if (c_) goto L_00BBE084; }
    v0 = 21;
    if (a1 == v0) goto L_00BBE024;
    v0 = 20;
    if (a1 == v0) goto L_00BBDFBC;
    goto L_00BBE0E4;
L_00BBDFBC:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE258;
L_00BBDFD0:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE004;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBE004;
L_00BBDFF0:;
    v0 = (s32) 0xc1c30000U;
    v0 = v0 | 0x3333;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3f50000U; goto L_00BBE014;
L_00BBE004:;
    v0 = (s32) 0x41c30000U;
    v0 = v0 | 0x3333;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3f50000U;
L_00BBE014:;
    v0 = v0 | 0x2666;
    f4.i = (s32) v0;
    goto L_00BBE0E4;
L_00BBE024:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE26C;
L_00BBE038:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE068;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBE068;
L_00BBE058:;
    v0 = (s32) 0x42dc0000U;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3790000U; goto L_00BBE074;
L_00BBE068:;
    v0 = (s32) 0xc2dc0000U;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3790000U;
L_00BBE074:;
    v0 = v0 | 0x999a;
    f4.i = (s32) v0;
    goto L_00BBE0E4;
L_00BBE084:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE280;
L_00BBE098:;
    f0.i = (s32) 0;
    fcc = f3.f < f0.f;
    if (!fcc) goto L_00BBE0CC;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBE0CC;
L_00BBE0B8:;
    v0 = (s32) 0x42ae0000U;
    v0 = v0 | 0x6666;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3e80000U; goto L_00BBE0DC;
L_00BBE0CC:;
    v0 = (s32) 0xc2ae0000U;
    v0 = v0 | 0x6666;
    f5.i = (s32) v0;
    v0 = (s32) 0xc3e80000U;
L_00BBE0DC:;
    v0 = v0 | 0x8000;
    f4.i = (s32) v0;
L_00BBE0E4:;
    v1 = (s32) 0x370000U;
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v1 + 23344) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    s1 = (s32) ((u32) sp + 0xc0U);
    { u32 a_ = (u32) (v0 + 23360) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    s0 = (s32) ((u32) sp + 0xc8U);
    f1.i = (s32) 0;
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 144) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v0 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) s1) = f5.f;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) v0;
    (*(volatile f32 *) (u32) s0) = f4.f;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    fcc = f0.f < f1.f;
    { s32 c_ = fcc; { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_00BBE1A8; }
    a0 = 0xc000;
    a1 = 0; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) 0x80000000U;
    a0 = (s32) ((u32) v1 - (u32) a0);
    v0 = v0 | 0x1;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 15;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00BBE200;
L_00BBE1A8:;
    a0 = 0xc000;
    a1 = 0x8000; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) 0x80000000U;
    a0 = (s32) ((u32) v1 - (u32) a0);
    v0 = v0 | 0x1;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) v1 << 3);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 15;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) 0 - (u32) v0);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
L_00BBE200:;
    v0 = (s32) 0x3c8e0000U;
    a0 = (s32) ((u32) sp + 0x90U);
    v0 = v0 | 0xfa35;
    a1 = a0;
    f0.i = (s32) v0;
    f12.f = f1.f * f0.f; func_001040A0(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) s0);
    f1.f = f21.f + f1.f;
    (*(volatile f32 *) (u32) (v0 + 108)) = f1.f;
    v0 = (*(volatile s32 *) (u32) s2);
    f0.f = f20.f + f0.f;
    (*(volatile f32 *) (u32) (v0 + 112)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s2);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0; goto L_00BBE294;
L_00BBE258:;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBDFF0;
    goto L_00BBDFD0;
L_00BBE26C:;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBE058;
    goto L_00BBE038;
L_00BBE280:;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_00BBE0B8;
    goto L_00BBE098;
L_00BBE294:;
    return;
}
