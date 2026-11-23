/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0098ED30(s64, s64, s64, s64);
s64 func_009B3070(s64, s64, s64, s64);
s64 func_009B34C0(s64, s64, s64, s64);
s64 func_00AFBA70(s64, s64, s64, s64);
s64 func_00BDB8B0(s64, s64, s64, s64);

s64 func_00905270(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    volatile union { f32 f; s32 i; } f15 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    s5 = a0;
    v0 = (*(volatile s16 *) (u32) (a0 + 20));
    f0.i = (s32) v0;
    a0 = (*(volatile u8 *) (u32) a0);
    f20.f = (f32) f0.i; v0 = func_0098ED30(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 2;
    if (v1 == v0) goto L_009052F4;
    v0 = 3;
    if (v1 == v0) goto L_009052F4;
    v0 = 4;
    if (v1 == v0) goto L_009052EC;
    v0 = 5;
    if (v1 == v0) goto L_009052EC;
    a1 = (s64) ((u64) 0 + (u64) (s64) 4096); goto L_009052F8;
L_009052EC:;
    a1 = (s64) ((u64) 0 + (u64) (s64) 4608); goto L_009052F8;
L_009052F4:;
    a1 = (s64) ((u64) 0 + (u64) (s64) 4352);
L_009052F8:;
    a0 = (*(volatile u8 *) (u32) (s5 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e80U);
    f12.f = (*(volatile f32 *) (u32) (s5 + 224));
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f - f12.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0090532C; }
L_0090532C:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 3; if (c_) goto L_0090533C; }
    v0 = (s32) ((u32) v1 + 0x7U);
    v0 = (s32) v0 >> 3;
L_0090533C:;
    v1 = v0 & 0xffff;
    v0 = a0 & 0xff;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = v0 ^ 0x1;
    a0 = v1 & 0xffff;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f0.f - f12.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0090537C; }
L_0090537C:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_0090538C; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_0090538C:;
    v1 = v0 & 0xffff;
    v0 = (*(volatile s16 *) (u32) (s5 + 20));
    v1 = (s32) ((u32) a0 + (u32) v1);
    f0.i = (s32) 0;
    f1.i = (s32) v0;
    f2.f = (f32) f1.i;
    f1.f = f12.f * f2.f;
    fcc = f1.f < f0.f;
    { s32 c_ = !fcc; s0 = v1 & 0xffff; if (c_) goto L_009053C0; }
    v0 = 0; goto L_0090555C;
L_009053C0:;
    v0 = (s32) 0x46520000U;
    s6 = 0;
    v1 = v0 | 0x6400;
    v0 = (s32) 0x45120000U;
    f0.i = (s32) v1;
    v0 = v0 | 0x8000;
    f1.i = (s32) v0;
    f13.f = (*(volatile f32 *) (u32) (s5 + 232));
    f14.f = f0.f * f2.f;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f1.f = f1.f * f13.f;
    f0.i = (s32) v0;
    f15.f = f1.f / f0.f;
    v0 = func_009B34C0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) s5);
    s2 = v0 & 0xffff; v0 = func_00AFBA70(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { v1 = 1; goto L_0090543C; }
    a0 = (*(volatile u8 *) (u32) s5); v0 = func_00AFBA70(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) v0 + 0x1U);
L_0090543C:;
    v0 = (s32) ((u32) v1 << 3);
    s0 = s0 & 0xffff;
    v1 = (s32) ((u32) v0 + (u32) v1);
    s3 = 0;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    s4 = (s32) ((u32) v0 + (u32) v1);
L_0090545C:;
    a0 = s4; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00905520;
    f1.f = (*(volatile f32 *) (u32) (s5 + 224));
    v0 = (s32) 0x44800000U;
    f2.f = (*(volatile f32 *) (u32) (s4 + 224));
    f0.i = (s32) v0;
    f1.f = f1.f * f20.f;
    f2.f = f20.f * f2.f;
    f0.f = f1.f - f0.f;
    fcc = f2.f < f0.f;
    if (fcc) goto L_00905520;
    a0 = (*(volatile u8 *) (u32) s4);
    v0 = (s32) 0x190000U;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) s5 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 344));
    v0 = (u64) v1 < (u64) v0;
    { s32 c_ = v0 != 0; s1 = 0; if (c_) goto L_00905544; }
    v0 = (s32) 0x310000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00905550;
    at = (s32) 0x510000U;
    at = (u64) v1 < (u64) at;
    if (at == 0) goto L_009054E0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 2048);
L_009054E0:;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) s5 + (u32) v0);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
    a0 = s2; v0 = func_009B3070(a0, a1, a2, a3);
    a0 = v0 & 0xffff;
    v0 = s1 & 0xffff;
    v1 = (s32) ((u32) s0 + (u32) v0);
    v0 = a0 < v1;
    if (v0 != 0) goto L_00905558;
    v0 = (s32) ((u32) v1 + 0x1000U);
    at = a0 < v0;
    if (at == 0) goto L_00905520;
    s6 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00905520:;
    v0 = (s32) ((u32) s3 + 0x1U);
    s3 = v0 & 0xffff;
    v0 = s3 < 10;
    { s32 c_ = v0 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_0090545C; }
    v0 = 1;
    v1 = 2;
    if (s6 == 0) v0 = v1; goto L_0090555C;
L_00905544:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6144); goto L_009054E0;
L_00905550:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 4096); goto L_009054E0;
L_00905558:;
    v0 = 0;
L_0090555C:;
    return v0;
}
