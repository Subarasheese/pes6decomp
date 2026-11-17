/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B30B0(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);

void func_00A8A7B0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    f32 acc = 0;
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    v0 = a0 & 0xff;
    (*(volatile u16 *) (u32) (sp + 286)) = (u16) a1;
    (*(volatile u32 *) (u32) (sp + 280)) = (u32) a3;
    f21.i = f12.i;
    { s32 c_ = v0 != 0; f20.i = f13.i; if (c_) goto L_00A8A808; }
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffe7f0U); goto L_00A8A810;
L_00A8A808:;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xb0U);
L_00A8A810:;
    v0 = a2 & 0xffff;
    v1 = a0 & 0xff;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s4 = 255;
    v0 = (s32) 0x7fff0000U;
    fp = (s32) ((u32) v1 << 1);
    s1 = v0 | 0xffff;
    s6 = s4;
    v0 = (s32) 0x590000U;
    s2 = s1;
    v0 = (s32) ((u32) v0 + 0x1e53U);
    s7 = s1;
    v0 = (s32) ((u32) v0 + (u32) fp);
    s5 = 0;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    f0.i = (s32) f20.f;
    (*(volatile u8 *) (u32) v0) = (u8) s4;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 + 0x10U);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    v0 = (s32) ((u32) v0 + (u32) fp);
    v0 = (s32) ((u32) v0 + 0x53U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = f0.i;
    f0.i = (s32) f21.f;
    (*(volatile u32 *) (u32) (sp + 256)) = (u32) v0;
    v0 = f0.i;
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v0;
L_00A8A88C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00A8AA10;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == v0) goto L_00A8AA10;
    a1 = (*(volatile s32 *) (u32) (sp + 240));
    a2 = (*(volatile s32 *) (u32) (sp + 256));
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    s3 = v0;
    v0 = (*(volatile s32 *) (u32) (sp + 280));
    v0 = v0 < s3;
    if (v0 != 0) goto L_00A8AA10;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 9956));
    { s32 c_ = a0 < 0; f4.f = (*(volatile f32 *) (u32) (s0 + 240)); if (c_) goto L_00A8A8F0; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00A8A90C;
L_00A8A8F0:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00A8A90C:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (s0 + 248));
    acc = f0.f + f1.f;
    { s32 c_ = a0 < 0; f14.f = acc + f4.f * f2.f; if (c_) goto L_00A8A930; }
    f0.i = (s32) a0;
    f2.f = (f32) f0.i; goto L_00A8A94C;
L_00A8A930:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00A8A94C:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) 0;
    f12.i = f21.i;
    f13.i = f20.i;
    acc = f0.f + f1.f;
    f15.f = acc + f3.f * f2.f; v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a0 = (*(volatile u16 *) (u32) (sp + 286));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    at = (s32) 0x190000U;
    at = s3 < at;
    { s32 c_ = at == 0; a0 = v0 & 0xffff; if (c_) goto L_00A8A9B0; }
    a1 = a0 & 0xffff;
    at = a1 < 48;
    if (at == 0) goto L_00A8AA10;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    at = v0 < a1;
    if (at != 0) goto L_00A8AA10;
    s3 = 0; goto L_00A8A9C8;
L_00A8A9B0:;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a1 = a0 & 0xffff;
    at = v0 < a1;
    if (at != 0) goto L_00A8AA10;
L_00A8A9C8:;
    at = s7 < s3;
    if (at == 0) { v1 = (*(volatile u8 *) (u32) s0); goto L_00A8AA4C; }
L_00A8A9D8:;
    at = s2 < a1;
    if (at != 0) goto L_00A8A9F8;
    s4 = s6;
    s1 = s2;
    s6 = (*(volatile u8 *) (u32) s0);
    s2 = a0 & 0xffff; goto L_00A8AA10;
L_00A8A9F8:;
    at = s1 < a1;
    if (at != 0) goto L_00A8AA10;
    s4 = (*(volatile u8 *) (u32) s0);
    s1 = a0 & 0xffff;
L_00A8AA10:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00A8A88C; }
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == s6) goto L_00A8AA60;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e54U);
    v0 = (s32) ((u32) v0 + (u32) fp);
    (*(volatile u8 *) (u32) v0) = (u8) s6;
L_00A8AA40:;
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (*(volatile u8 *) (u32) v0); goto L_00A8AA74;
L_00A8AA4C:;
    s7 = s3;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_00A8A9D8;
L_00A8AA60:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e54U);
    v0 = (s32) ((u32) v0 + (u32) fp);
    (*(volatile u8 *) (u32) v0) = (u8) s4; goto L_00A8AA40;
L_00A8AA74:;
    return;
}
