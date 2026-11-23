/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0099CB60(s32, s32, s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009B34C0(f32, f32, f32, f32);
s32 func_00AFBAB0(s32);
s32 func_00BDBAF0(f32, f32);
void func_00BF4000(s32);
s32 func_00BF41C0(void);

void func_00BFF270(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -12829)); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00BFF2B4; }
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -12829)); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BFF2B4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_0099CB60(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 255;
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7758)) = (u8) a0;
    v0 = (s32) 0x46520000U;
    v1 = v0 | 0xd400;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7768));
    f1.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00BFF490;
L_00BFF308:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0xc6520000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7768));
    v0 = v1 | 0xd400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00BFF49C;
L_00BFF32C:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f12.f = (*(volatile f32 *) (u32) (v1 + 7768)); v0 = func_00BDBAF0(f12.f, f13.f);
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7757));
    v1 = 255;
    { s32 c_ = a0 == v1; a2 = (s32) ((u32) 0 - (u32) v0); if (c_) goto L_00BFF368; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00BFF36C;
L_00BFF368:;
    a1 = 1;
L_00BFF36C:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5c4U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s16 *) (u32) v1);
    if (a2 == v1) goto L_00BFF4A8;
L_00BFF390:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { v1 = 1; goto L_00BFF3B0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    v1 = hi;
L_00BFF3B0:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 9078));
    v0 = 1;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00BFF4D4; }
    a0 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    v1 = (s32) 0x590000U;
    f0.i = (s32) v0;
    f12.f = (*(volatile f32 *) (u32) (v1 + 7768));
    v0 = (s32) 0x590000U;
    f13.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f1.i = (s32) a0;
    f15.i = (s32) 0;
    f1.f = (f32) f1.i;
    f14.f = f0.f * f1.f; v0 = func_009B34C0(f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile u16 *) (u32) (s0 + 42));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 41;
    if (at == 0) goto L_00BFF4D4;
    v1 = (*(volatile s16 *) (u32) (s0 + 20));
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    a0 = s0;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x6400000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00BFF4D4;
    v0 = func_00BF41C0();
    if (v0 == 0) goto L_00BFF4D4;
    a0 = 2; func_00BF4000(a0);
L_00BFF488:;
    goto L_00BFF4E4;
L_00BFF490:;
    v0 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) (v0 + 7768)) = f1.f; goto L_00BFF308;
L_00BFF49C:;
    v0 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) (v0 + 7768)) = f0.f; goto L_00BFF32C;
L_00BFF4A8:;
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    v0 = (s32) 0x463c0000U;
    v1 = v0 | 0x6400;
    v0 = (s32) 0x590000U;
    f1.i = (s32) v1;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v0 + 7768)) = f0.f; goto L_00BFF390;
L_00BFF4D4:;
    a0 = 0; func_00BF4000(a0);
    goto L_00BFF488;
L_00BFF4E4:;
    return;
}
