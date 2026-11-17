/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00207D10(s64);
s64 func_00207D80(s64, s64);
void func_00209830(s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
void func_009B37F0(s64, s64, s64, s64, s64);
s64 func_00B2A9C0(s64, s64, s64, s64);
void func_00B2AD40(s64, s64, s64, s64);
void func_00B31650(s64, s64, s64, s64);
void func_00B35E10(s64, s64, s64);

void func_00B2A6E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    volatile union { f32 f; s32 i; } f24 = { 0 };
    volatile union { f32 f; s32 i; } f25 = { 0 };
    s32 fcc = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    s3 = a2;
    s2 = a3;
    v0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    f25.f = (*(volatile f32 *) (u32) (v0 + 224));
    s6 = (*(volatile u16 *) (u32) (v0 + 38));
    f24.f = (*(volatile f32 *) (u32) (v0 + 228));
    s7 = (*(volatile s32 *) (u32) (v0 + 28));
    f23.f = (*(volatile f32 *) (u32) (v0 + 232));
    fp = (*(volatile u16 *) (u32) (v0 + 40));
    f22.f = (*(volatile f32 *) (u32) (v1 + 56));
    f20.f = (*(volatile f32 *) (u32) (v1 + 72));
    f21.f = (*(volatile f32 *) (u32) (v1 + 64));
    v0 = (*(volatile s16 *) (u32) (v1 + 52));
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (v1 + 77));
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (v1 + 76));
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u16 *) (u32) (v1 + 60));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_00B2A9C0(a0, a1, a2, a3);
    s1 = v0;
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    v1 = (u64) 0 < (u64) v0;
    v1 = v1 ^ 0x1;
    if (v1 == 0) goto L_00B2A870;
    s0 = s2 & 0xffff;
L_00B2A7A8:;
    if (s2 == 0) goto L_00B2A808;
    v1 = (*(volatile s32 *) (u32) s5);
    { s32 c_ = s2 < 0; a0 = (*(volatile s32 *) (u32) (v1 + 4)); if (c_) goto L_00B2A7C8; }
    f0.i = (s32) s2;
    f1.f = (f32) f0.i; goto L_00B2A7E4;
L_00B2A7C8:;
    a1 = (s32) ((u32) s2 >> 1);
    v1 = s2 & 0x1;
    a1 = a1 | v1;
    f0.i = (s32) a1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00B2A7E4:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 56));
    fcc = f1.f < f0.f;
    if (fcc) goto L_00B2A870;
    a1 = s0; v0 = func_00207D80(a0, a1);
    if (v0 != 0) goto L_00B2A870;
L_00B2A808:;
    if (s1 != 0) { v0 = (*(volatile s32 *) (u32) s5); goto L_00B2A92C; }
L_00B2A810:;
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + 48));
    at = v0 < 1434;
    if (at == 0) goto L_00B2A838;
    func_00B31650(a0, a1, a2, a3);
    goto L_00B2A840;
L_00B2A838:;
    func_00B2AD40(a0, a1, a2, a3);
L_00B2A840:;
    a0 = (*(volatile s32 *) (u32) s5); func_009B37F0(a0, a1, a2, a3, a4);
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00209830(a0);
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00207D10(a0);
    v1 = (u64) 0 < (u64) v0;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_00B2A7A8;
L_00B2A870:;
    v1 = (*(volatile s32 *) (u32) s5);
    f0.f = (*(volatile f32 *) (u32) (v1 + 224));
    (*(volatile f32 *) (u32) s4) = f0.f;
    v1 = (*(volatile s32 *) (u32) s5);
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    (*(volatile f32 *) (u32) (s4 + 4)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s5);
    v1 = (*(volatile u16 *) (u32) (v1 + 38));
    (*(volatile u16 *) (u32) s3) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile f32 *) (u32) (v1 + 224)) = f25.f;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile f32 *) (u32) (v1 + 228)) = f24.f;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile f32 *) (u32) (v1 + 232)) = f23.f;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) s6;
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a0 + 52)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) s5);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) (v1 + 56)) = f22.f;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u32 *) (u32) (v1 + 28)) = (u32) s7;
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) fp;
    v1 = (*(volatile s32 *) (u32) s5);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) (v1 + 72)) = f20.f;
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (a0 + 77)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) (a0 + 76)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u16 *) (u32) (a0 + 60)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) s5);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) (v1 + 64)) = f21.f; goto L_00B2A970;
L_00B2A92C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = s1; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00B2A810;
    v0 = (*(volatile s32 *) (u32) s5);
    a0 = s5;
    a1 = (s32) ((u32) v0 + 0x6cU);
    a2 = (s32) ((u32) v0 + 0x70U); func_00B35E10(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s5);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s5);
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0; goto L_00B2A810;
L_00B2A970:;
    return;
}
