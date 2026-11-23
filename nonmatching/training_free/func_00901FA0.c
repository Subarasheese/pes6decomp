/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s64, s64);
void func_001EEE60(s64, s64);
void func_002DF640(s64, s64, s64, s64);
void func_008FAA60(s64, s64, s64, s64);
s64 func_008FC600(s64, s64, s64);
void func_008FD2C0(s64, s64, s64, s64);
void func_00901630(s64, s64, s64);
void func_00C74CC0(s64, s64, s64, s64);

void func_00901FA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    f32 acc = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    s0 = (*(volatile s32 *) (u32) (v1 + 32));
    v0 = (*(volatile s32 *) (u32) (v1 + 48));
    at = s0 < 11;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0; if (c_) goto L_00901FF0; }
    a2 = 8; goto L_00901FF8;
L_00901FF0:;
    s0 = (s32) ((u32) s0 + 0xfffffff5U);
    a2 = 9;
L_00901FF8:;
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = 3; func_008FAA60(a0, a1, a2, a3);
    f0.i = (s32) s0;
    v0 = (s32) 0x3b0000U;
    f2.f = (f32) f0.i;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    f1.f = (*(volatile f32 *) (u32) (sp + 244));
    f0.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (sp + 252));
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 244)) = f13.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 144));
    f12.f = (*(volatile f32 *) (u32) (sp + 240)); func_002DF640(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x1ef8U);
    a1 = (s32) ((u32) a1 + 0x1ef6U);
    s4 = 0;
    s2 = 0;
    a3 = (*(volatile s32 *) (u32) (v1 + 48));
    a0 = (*(volatile s32 *) (u32) (v1 + 44));
    a2 = (s32) ((u32) a2 + (u32) a3);
    a1 = (s32) ((u32) a1 + (u32) a3);
    a2 = (*(volatile u8 *) (u32) a2);
    a1 = (*(volatile u8 *) (u32) a1);
    { s32 c_ = a0 <= 0; s1 = (s32) ((u32) a2 + (u32) a1); if (c_) goto L_00902478; }
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = 139;
    a3 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a3 = (s32) ((u32) a3 + 0x1a90U);
    a1 = (s32) ((u32) a1 + 0x2980U);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    s3 = 0;
    s5 = 0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    a0 = (s32) ((u32) v0 << 4);
    s7 = (s32) ((u32) a3 + (u32) a4);
    a2 = (s32) ((u32) a0 - (u32) v0);
    fp = s7;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1e00U);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0xf8U);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) a2 << 3);
    v0 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v0 << 8);
    v0 = (s32) ((u32) a1 + (u32) v0);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_009020D8:;
    a0 = (*(volatile s32 *) (u32) (v1 + 56));
    v0 = 1;
    s0 = (*(volatile u8 *) (u32) (fp + 7));
    { s32 c_ = a0 == v0; s6 = 0; if (c_) goto L_009021F0; }
    if (a0 == 0) goto L_00902100;
    goto L_00902278;
L_00902100:;
    a1 = s2 & 0xff;
    v1 = (s32) ((u32) s7 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (v1 + 7));
    v1 = (s32) ((u32) a0 << 4);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    a0 = (s32) ((u32) v1 << 3);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 214));
    if (v1 == 0) goto L_00902140;
    v0 = 0; goto L_00902188;
L_00902140:;
    v1 = (*(volatile u8 *) (u32) (a0 + 212));
    if (v1 != 0) goto L_00902158;
    v0 = 0; goto L_00902188;
L_00902158:;
    at = a1 < 11;
    if (at == 0) goto L_00902170;
    goto L_00902188;
L_00902170:;
    v1 = (*(volatile u8 *) (u32) (a0 + 215));
    if (v1 == 0) goto L_00902188;
    v0 = 0; goto L_00902188;
L_00902188:;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u8 *) (u32) v0);
    at = v1 < s1;
    if (at == 0) goto L_00902278;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) s7 + (u32) v0);
L_009021A8:;
    v0 = (*(volatile u8 *) (u32) (a0 + 83));
    if (s0 != v0) goto L_009021C0;
    s6 = 1; goto L_00902278;
L_009021C0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 82));
    if (s0 != v0) goto L_009021D8;
    s6 = 1; goto L_00902278;
L_009021D8:;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = v1 < s1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_009021A8; }
    goto L_00902278;
L_009021F0:;
    a1 = (*(volatile u8 *) (u32) (v1 + 52));
    a0 = (*(volatile s32 *) (u32) (sp + 208));
    a2 = s2 & 0xff; v0 = func_008FC600(a0, a1, a2);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (*(volatile u8 *) (u32) v0);
    at = v1 < s1;
    if (at == 0) goto L_00902278;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) ((u32) s7 + (u32) v0);
L_00902220:;
    v0 = (*(volatile u8 *) (u32) (a0 + 83));
    if (s0 != v0) goto L_00902250;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v0 + 52));
    if (v0 != s2) goto L_00902248;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
L_00902248:;
    s6 = 1; goto L_00902278;
L_00902250:;
    v0 = (*(volatile u8 *) (u32) (a0 + 82));
    if (s0 != v0) goto L_00902268;
    s6 = 1; goto L_00902278;
L_00902268:;
    v1 = (s32) ((u32) v1 + 0x1U);
    v0 = v1 < s1;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_00902220; }
L_00902278:;
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (a0 + 52));
    v1 = (s32) ((u32) a0 + (u32) s3);
    { s32 c_ = s2 != v0; v1 = (s32) ((u32) v1 + 0x134U); if (c_) goto L_00902298; }
    a1 = 16; goto L_009022C8;
L_00902298:;
    v0 = (*(volatile s32 *) (u32) (sp + 224));
    if (v0 == 0) goto L_009022C0;
    v0 = (*(volatile s32 *) (u32) (a0 + 32));
    if (v0 != s2) { a1 = 6; goto L_009022B4; }
    a1 = 7;
L_009022B4:;
    goto L_009022C8;
L_009022C0:;
    a1 = 1;
L_009022C8:;
    a0 = (*(volatile s32 *) (u32) v1); func_008FD2C0(a0, a1, a2, a3);
    if (s6 == 0) goto L_00902458;
    v0 = (*(volatile u8 *) (u32) (gp + -31134));
    at = s2 < 11;
    a0 = (*(volatile u8 *) (u32) (gp + -31136));
    v1 = (*(volatile u8 *) (u32) (gp + -31135));
    (*(volatile u8 *) (u32) (sp + 270)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31133));
    (*(volatile u8 *) (u32) (sp + 268)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 269)) = (u8) v1;
    { s32 c_ = at == 0; (*(volatile u8 *) (u32) (sp + 271)) = (u8) v0; if (c_) goto L_00902350; }
    s0 = s2;
    s6 = 8;
    { s32 c_ = s2 >= 0; v0 = s2 & 0x1; if (c_) goto L_0090231C; }
    if (v0 == 0) goto L_0090231C;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_0090231C:;
    if (v0 == 0) { v0 = 18; goto L_00902328; }
    v0 = 17;
L_00902328:;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) sp + 0x10cU);
    v0 = (s32) 0x3b0000U;
    a2 = a0;
    v0 = (s32) ((u32) v0 + 0xffffb520U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_00901630(a0, a1, a2);
    goto L_00902398;
L_00902350:;
    s0 = (s32) ((u32) s2 + 0xfffffff5U);
    s6 = 9;
    { s32 c_ = s2 >= 0; v0 = s2 & 0x1; if (c_) goto L_0090236C; }
    if (v0 == 0) goto L_0090236C;
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_0090236C:;
    if (v0 == 0) { v0 = 17; goto L_00902378; }
    v0 = 18;
L_00902378:;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) sp + 0x10cU);
    v0 = (s32) 0x3b0000U;
    a2 = a0;
    v0 = (s32) ((u32) v0 + 0xffffb520U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_00901630(a0, a1, a2);
L_00902398:;
    a2 = s6;
    a0 = (s32) ((u32) sp + 0xf0U);
    a1 = 3; func_008FAA60(a0, a1, a2, a3);
    f0.i = (s32) s0;
    v0 = (s32) 0x3b0000U;
    f2.f = (f32) f0.i;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) ((u32) v0 + (u32) s5);
    f1.f = (*(volatile f32 *) (u32) (sp + 244));
    f0.i = (s32) 0;
    f3.f = (*(volatile f32 *) (u32) (sp + 252));
    acc = f0.f + f1.f;
    f13.f = acc + f3.f * f2.f;
    (*(volatile f32 *) (u32) (sp + 244)) = f13.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 76));
    f12.f = (*(volatile f32 *) (u32) (sp + 240)); func_00C74CC0(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) ((u32) v0 + (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v0 + 76));
    a1 = 1; func_001D7D60(a0, a1);
    at = s2 < 11;
    if (at == 0) { v0 = 20; goto L_00902408; }
    v0 = 19;
L_00902408:;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) sp + 0x10cU);
    v0 = (s32) 0x3b0000U;
    a2 = a0;
    v0 = (s32) ((u32) v0 + 0xffffb520U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_00901630(a0, a1, a2);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 180));
    a1 = (s32) ((u32) sp + 0x10cU); func_001EEE60(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 192));
    s5 = (s32) ((u32) s5 + 0x4U);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = (s32) ((u32) v1 + 0x8U);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v1;
L_00902458:;
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    s2 = (s32) ((u32) s2 + 0x1U);
    fp = (s32) ((u32) fp + 0x1U);
    a0 = (*(volatile s32 *) (u32) (v1 + 44));
    a0 = s2 < a0;
    { s32 c_ = a0 != 0; s3 = (s32) ((u32) s3 + 0xcU); if (c_) goto L_009020D8; }
L_00902478:;
    at = s4 < 16;
    if (at == 0) goto L_009024B0;
    s0 = (s32) ((u32) s4 << 2);
L_00902488:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 76));
    a1 = 0; func_001D7D60(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s4 < 16;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00902488; }
L_009024B0:;
    return;
}
