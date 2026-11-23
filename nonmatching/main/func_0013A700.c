/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
void Pes6PacketStream_AppendWord(s64, s64);
void func_00103538(s64, s64);
void func_00103590(s64, s64, s64, s64, s64, s64);
void func_00103628(s64, s64, s64);
void func_001036F0(s64, s64);
void func_00103748(s64);
void func_00103778(s64, s64);
void func_00103790(s64);
s64 func_00146CA0(s64);

void func_0013A700(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s1 = (*(volatile s32 *) (u32) (a1 + 16));
    s0 = a1;
    fp = (*(volatile s32 *) (u32) a1);
    s3 = (*(volatile s32 *) (u32) (a1 + 4));
    s2 = (*(volatile s32 *) (u32) (a1 + 12));
    a0 = s1; v0 = func_00146CA0(a0);
    s6 = v0;
    { s32 c_ = s2 >= 0; a0 = (s32) s2 >> 1; if (c_) goto L_0013A760; }
    v0 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) v0 >> 1;
L_0013A760:;
    v0 = 2048;
    v1 = (s32) s1 >> 1;
    v0 = (s32) ((u32) v0 - (u32) a0);
    { s32 c_ = s1 >= 0; { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } if (c_) goto L_0013A77C; }
    v0 = (s32) ((u32) s1 + 0x1U);
    v1 = (s32) v0 >> 1;
L_0013A77C:;
    v0 = 2048;
    s7 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = (s32) ((u32) v0 - (u32) v1);
    a5 = 0;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s32) 0x20000000U;
    v0 = (s32) 0x370000U;
    s4 = (s32) s2 >> 6;
    v0 = (s32) ((u32) v0 + 0x5d40U);
    a0 = (s64) ((u64) v0 << 36);
    v0 = (s32) 0x3f000000U;
    a0 = (s64) ((u64) a0 >> 36);
    f2.i = (s32) v0;
    a4 = a0 | v1;
    s0 = (s32) ((u32) s0 + 0x18U);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    f1.i = (s32) v0;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    f1.f = (f32) f1.i;
    f0.i = (s32) v0;
    f1.f = f1.f - f2.f;
    f0.f = (f32) f0.i;
    f0.f = f0.f - f2.f;
    (*(volatile f32 *) (u32) (a4 + 64)) = f1.f;
    (*(volatile f32 *) (u32) (a4 + 68)) = f0.f;
    f0.i = (s32) s1;
    f0.f = (f32) f0.i;
    { s32 c_ = s2 >= 0; (*(volatile f32 *) (u32) (a4 + 84)) = f0.f; if (c_) goto L_0013A800; }
    v0 = (s32) ((u32) s2 + 0x3fU);
    s4 = (s32) v0 >> 6;
L_0013A800:;
    at = 0 < s4;
    if (at == 0) goto L_0013AAB0;
    at = s4 < 9;
    { s32 c_ = at != 0; a1 = (s32) ((u32) s4 + 0xfffffff8U); if (c_) goto L_0013AA20; }
    at = s4 < 0;
    a0 = 0;
    { s32 c_ = at != 0; v0 = 0; if (c_) goto L_0013AE28; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s4 < at;
    if (at == 0) goto L_0013AE28;
    v0 = 1; goto L_0013AE28;
L_0013A844:;
    v0 = s4 & v0;
    { s32 c_ = v0 != 0; v1 = 1; if (c_) goto L_0013A85C; }
    if (v0 == 0) goto L_0013A85C;
    v1 = 0;
L_0013A85C:;
    if (v1 == 0) goto L_0013A868;
    a0 = 1;
L_0013A868:;
    if (a0 == 0) goto L_0013AA20;
    v1 = (s32) ((u32) s2 << 1);
    a3 = fp;
    a2 = a4;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 6; if (c_) goto L_0013A88C; }
    v0 = (s32) ((u32) v1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013A88C:;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) ((u32) s6 + 0x1U);
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a0 = (s64) ((u64) v1 << 14);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v0 << 30);
    v0 = (s32) 0x1d300000U;
L_0013A8AC:;
    { s32 c_ = a3 >= 0; a6 = (s32) a3 >> 6; if (c_) goto L_0013A8BC; }
    a6 = (s32) ((u32) a3 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A8BC:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x800U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 704)) = (u64) t4; if (c_) goto L_0013A8E8; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A8E8:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x1000U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 720)) = (u64) t4; if (c_) goto L_0013A914; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A914:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x1800U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 736)) = (u64) t4; if (c_) goto L_0013A940; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A940:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x2000U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 752)) = (u64) t4; if (c_) goto L_0013A96C; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A96C:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x2800U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 768)) = (u64) t4; if (c_) goto L_0013A998; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A998:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x3000U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 784)) = (u64) t4; if (c_) goto L_0013A9C4; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A9C4:;
    a6 = (s64) ((u64) a6 << 32);
    a7 = (s32) ((u32) a3 + 0x3800U);
    a6 = a6 >> 32;
    t4 = a6 | a0;
    t4 = t4 | v0;
    a6 = (s32) a7 >> 6;
    t4 = v1 | t4;
    { s32 c_ = a7 >= 0; (*(volatile u64 *) (u32) (a2 + 800)) = (u64) t4; if (c_) goto L_0013A9F0; }
    a6 = (s32) ((u32) a7 + 0x3fU);
    a6 = (s32) a6 >> 6;
L_0013A9F0:;
    a6 = (s64) ((u64) a6 << 32);
    a5 = (s32) ((u32) a5 + 0x8U);
    a6 = a6 >> 32;
    a3 = (s32) ((u32) a3 + 0x4000U);
    a6 = a6 | a0;
    a7 = a6 | v0;
    a7 = v1 | a7;
    a6 = a5 < a1;
    (*(volatile u64 *) (u32) (a2 + 816)) = (u64) a7;
    { s32 c_ = a6 != 0; a2 = (s32) ((u32) a2 + 0x80U); if (c_) goto L_0013A8AC; }
L_0013AA20:;
    at = a5 < s4;
    if (at == 0) goto L_0013AAB0;
    v1 = (s32) ((u32) a5 << 11);
    v0 = (s32) ((u32) a5 << 4);
    a0 = (s32) ((u32) fp + (u32) v1);
    a1 = (s32) ((u32) s2 << 1);
    v1 = (s32) ((u32) a4 + (u32) v0);
    { s32 c_ = a1 >= 0; v0 = (s32) a1 >> 6; if (c_) goto L_0013AA50; }
    v0 = (s32) ((u32) a1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013AA50:;
    a1 = (s32) ((u32) s6 + 0x1U);
    v0 = (s64) ((u64) v0 << 32);
    a1 = (s64) ((u64) a1 << 32);
    v0 = v0 >> 32;
    a1 = a1 >> 32;
    v0 = (s64) ((u64) v0 << 14);
    a6 = (s64) ((u64) a1 << 30);
    a3 = (s32) 0x1d300000U;
L_0013AA70:;
    { s32 c_ = a0 >= 0; a1 = (s32) a0 >> 6; if (c_) goto L_0013AA80; }
    a1 = (s32) ((u32) a0 + 0x3fU);
    a1 = (s32) a1 >> 6;
L_0013AA80:;
    a1 = (s64) ((u64) a1 << 32);
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = a1 >> 32;
    a0 = (s32) ((u32) a0 + 0x800U);
    a1 = a1 | v0;
    a2 = a1 | a3;
    a2 = a6 | a2;
    a1 = a5 < s4;
    (*(volatile u64 *) (u32) (v1 + 704)) = (u64) a2;
    { s32 c_ = a1 != 0; v1 = (s32) ((u32) v1 + 0x10U); if (c_) goto L_0013AA70; }
L_0013AAB0:;
    v0 = (*(volatile s64 *) (u32) s0);
    (*(volatile u64 *) (u32) (a4 + 864)) = (u64) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 6; if (c_) goto L_0013AACC; }
    v0 = (s32) ((u32) v1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013AACC:;
    v1 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = (s32) 0xa0000000U;
    a0 = (s64) ((u64) v1 << 37);
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x1300000U;
    v0 = v0 | v1;
    { u64 h_ = (u64) 0; v0 = (s64) (u64) v0; qh_v0 = h_; }
    v0 = a0 | v0;
    (*(volatile u64 *) (u32) (a4 + 960)) = (u64) v0;
    v0 = (*(volatile s64 *) (u32) (s0 + 16));
    (*(volatile u64 *) (u32) (a4 + 880)) = (u64) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 24));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 6; if (c_) goto L_0013AB10; }
    v0 = (s32) ((u32) v1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013AB10:;
    v1 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = (s32) 0xa0000000U;
    a0 = (s64) ((u64) v1 << 37);
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x1300000U;
    v0 = v0 | v1;
    { u64 h_ = (u64) 0; v0 = (s64) (u64) v0; qh_v0 = h_; }
    v0 = a0 | v0;
    (*(volatile u64 *) (u32) (a4 + 976)) = (u64) v0;
    v0 = (*(volatile s64 *) (u32) (s0 + 32));
    (*(volatile u64 *) (u32) (a4 + 896)) = (u64) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 40));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 6; if (c_) goto L_0013AB54; }
    v0 = (s32) ((u32) v1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013AB54:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v1 = v1 >> 32;
    v0 = (s32) 0xa0000000U;
    a2 = (s64) ((u64) v1 << 37);
    a1 = 0;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x1300000U;
    v0 = v0 | v1;
    { u64 h_ = (u64) 0; v0 = (s64) (u64) v0; qh_v0 = h_; }
    v0 = a2 | v0;
    (*(volatile u64 *) (u32) (a4 + 992)) = (u64) v0;
    (*(volatile u32 *) (u32) (a4 + 1012)) = (u32) s1;
    (*(volatile u32 *) (u32) (a4 + 1020)) = (u32) s4; func_00103538(a0, a1);
    a0 = s5;
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = 0; func_001036F0(a0, a1);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 24896) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_00103778(a0, a1);
    { s32 c_ = s3 >= 0; v0 = (s32) s3 >> 11; if (c_) goto L_0013ABC8; }
    v0 = (s32) ((u32) s3 + 0x7ffU);
    v0 = (s32) v0 >> 11;
L_0013ABC8:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v0 = (s64) ((u64) s4 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    a1 = 76;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { s32 c_ = s7 >= 0; v0 = (s32) s7 >> 11; if (c_) goto L_0013ABFC; }
    v0 = (s32) ((u32) s7 + 0x7ffU);
    v0 = (s32) v0 >> 11;
L_0013ABFC:;
    s3 = (s64) ((u64) v0 << 32);
    a0 = s5;
    s3 = s3 >> 32;
    v0 = (s32) 0x30000U;
    a2 = s3 | v0;
    a1 = 77; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 25;
    v1 = (s32) ((u32) v0 << 4);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) v0 << 4);
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) ((u32) s2 + 0xffffffffU);
    v0 = (s32) ((u32) s1 + 0xffffffffU);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 << 48);
    a2 = v1 | v0;
    a0 = s5;
    a1 = 65; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) ((u32) s6 + 0x1U);
    v0 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 << 32);
    v0 = v0 | 0xc000;
    v1 = v1 >> 32;
    v0 = s3 | v0;
    v1 = (s64) ((u64) v1 << 30);
    a0 = s5;
    v1 = v0 | v1;
    a1 = 6;
    v0 = 8;
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 21;
    a2 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 8;
    a2 = 5; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 9;
    a2 = 5; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0x1001; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 72;
    a2 = v0 | 0x1001; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 63;
    a2 = 0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 6; if (c_) goto L_0013AD30; }
    v0 = (s32) ((u32) v1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013AD30:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v1 = v1 >> 32;
    v0 = (s32) 0x60000000U;
    a2 = (s64) ((u64) v1 << 37);
    a1 = 23;
    v1 = (s64) ((u64) v0 << 32);
    v0 = (s32) 0x1300000U;
    v0 = v0 | v1;
    a2 = a2 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5; func_00103790(a0);
    a0 = s5; func_00103748(a0);
    a1 = (s32) 0x3c0000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0xffffe840U);
    a2 = 0; func_00103628(a0, a1, a2);
    a1 = (s32) 0x370000U;
    v0 = (s32) 0x1000000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0x5d40U);
    a2 = 64;
    a3 = v0 | 0x101;
    a4 = (s32) 0x6c400000U;
    a5 = 0; func_00103590(a0, a1, a2, a3, a4, a5);
    a0 = s5;
    a1 = 0; func_00103538(a0, a1);
    a0 = s5;
    a1 = 0; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = (s32) 0x14000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = 0; func_00103538(a0, a1);
    a0 = s5;
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = 0; func_001036F0(a0, a1);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 24896) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_00103778(a0, a1);
    v0 = (s32) 0x50000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0xd; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5; func_00103790(a0);
    a0 = s5; func_00103748(a0);
    goto L_0013AE38;
L_0013AE28:;
    if (v0 == 0) goto L_0013A868;
    v0 = (s32) 0x80000000U; goto L_0013A844;
L_0013AE38:;
    return;
}
