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
s64 func_00140460(void);
s64 func_00140470(void);
s64 func_001404C0(void);
s64 func_001404D0(void);
s64 func_00146CA0(s64);
s64 rand(s64, s64, s64, s64, s64, s64);

void func_0013B850(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    volatile union { f32 f; s32 i; } f8 = { 0 };
    volatile union { f32 f; s32 i; } f9 = { 0 };
    volatile union { f32 f; s32 i; } f10 = { 0 };
    f32 acc = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6180U);
    v1 = (s64) ((u64) v1 << 36);
    v0 = (s32) 0x20000000U;
    v1 = (s64) ((u64) v1 >> 36);
    s5 = a0;
    s2 = v1 | v0;
    v0 = func_00140470();
    s1 = v0; v0 = func_00140460();
    s6 = v0; v0 = func_001404D0();
    s4 = (s64) ((u64) v0 << 48);
    s4 = s4 >> 48; v0 = func_001404C0();
    s3 = (s64) ((u64) v0 << 48);
    a0 = s4;
    s3 = s3 >> 48; v0 = func_00146CA0(a0);
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = s3; v0 = func_00146CA0(a0);
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 1;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) a0 << (v0 & 31));
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) ((u32) a0 << (v0 & 31));
    a0 = (s32) s4 >> 1;
    { s32 c_ = s4 >= 0; { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; } if (c_) goto L_0013B904; }
    a0 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) a0 >> 1;
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
L_0013B904:;
    { u32 a_ = (u32) (sp + 240) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a1 = 2048;
    s0 = (s32) s3 >> 1;
    { s32 c_ = s3 >= 0; s7 = (s32) ((u32) a1 - (u32) a0); if (c_) goto L_0013B920; }
    a0 = (s32) ((u32) s3 + 0x1U);
    s0 = (s32) a0 >> 1;
L_0013B920:;
    f2.i = (s32) s4;
    a0 = (s32) 0x500000U;
    f0.i = (s32) s3;
    a1 = 2048;
    f3.f = (*(volatile f32 *) (u32) (a0 + -11916));
    fp = (s32) ((u32) a1 - (u32) s0);
    f2.f = (f32) f2.i;
    a1 = (s32) 0x44000000U;
    a0 = (s32) s4 >> 6;
    f0.f = (f32) f0.i;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    f2.f = f3.f * f2.f;
    f1.i = (s32) a1;
    f0.f = f3.f * f0.f;
    f9.f = f0.f / f1.f;
    f10.f = f2.f / f1.f;
    f1.i = (s32) s7;
    f0.i = (s32) fp;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 32)) = f1.f;
    { s32 c_ = s4 >= 0; (*(volatile f32 *) (u32) (s2 + 36)) = f0.f; if (c_) goto L_0013B990; }
    a0 = (s32) ((u32) s4 + 0x3fU);
    a0 = (s32) a0 >> 6;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
L_0013B990:;
    f0.i = (s32) v0;
    a0 = (s32) 0x3f000000U;
    f1.i = (s32) v1;
    a1 = (s32) 0x40400000U;
    f5.f = (f32) f0.i;
    v0 = (s32) 0x40000000U;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    f0.i = (s32) s7;
    (*(volatile u32 *) (u32) (s2 + 64)) = (u32) v1;
    f7.i = (s32) a0;
    f0.f = (f32) f0.i;
    v1 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (s2 + 68)) = (u32) s0;
    f4.f = (f32) f1.i;
    f0.f = f7.f - f0.f;
    f6.i = (s32) 0;
    f8.i = (s32) a1;
    acc = f6.f + f0.f;
    f0.f = acc - f8.f * f10.f;
    f0.f = f0.f / f4.f;
    f2.i = (s32) v0;
    (*(volatile f32 *) (u32) (s2 + 80)) = f0.f;
    f0.f = f2.f * f10.f;
    f1.f = f0.f / f4.f;
    f3.i = (s32) v1;
    f0.f = f2.f * f9.f;
    f4.f = f3.f / f4.f;
    f2.i = (s32) fp;
    f3.f = f3.f / f5.f;
    f2.f = (f32) f2.i;
    f2.f = f7.f - f2.f;
    acc = f6.f + f2.f;
    f2.f = acc - f8.f * f9.f;
    f2.f = f2.f / f5.f;
    (*(volatile f32 *) (u32) (s2 + 84)) = f2.f;
    (*(volatile f32 *) (u32) (s2 + 96)) = f4.f;
    (*(volatile f32 *) (u32) (s2 + 100)) = f3.f;
    f0.f = f0.f / f5.f;
    (*(volatile f32 *) (u32) (s2 + 112)) = f1.f;
    (*(volatile f32 *) (u32) (s2 + 116)) = f0.f; v0 = rand(a0, a1, a2, a3, a4, a5);
    f1.i = (s32) v0;
    a0 = s5;
    a1 = 0;
    f1.f = (f32) f1.i;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    f1.f = f1.f / f0.f;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s2 + 124)) = f0.f; func_00103538(a0, a1);
    a0 = s5;
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = 0; func_001036F0(a0, a1);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25088) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_00103778(a0, a1);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = (s64) ((u64) v0 << 32);
    s2 = s2 >> 32;
    { s32 c_ = s1 >= 0; v0 = (s32) s1 >> 11; if (c_) goto L_0013BAB8; }
    v0 = (s32) ((u32) s1 + 0x7ffU);
    v0 = (s32) v0 >> 11;
L_0013BAB8:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) s2 << 16);
    a2 = v1 | v0;
    a1 = 77; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = 1;
    v0 = (s32) 0x3a000000U;
    v1 = (s64) ((u64) v1 << 32);
    a0 = s5;
    a1 = 79;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) ((u32) fp << 4);
    a0 = s5;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = 25;
    v0 = (s32) ((u32) s7 << 4);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) ((u32) s3 + 0xffffffffU);
    v1 = (s32) ((u32) s4 + 0xffffffffU);
    v0 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v0 = v0 >> 32;
    a1 = 65;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s64) ((u64) v1 << 32);
    v0 = v0 >> 32;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s64) ((u64) v0 << 16);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 48);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = (s64) ((u64) s2 << 14);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    s7 = (s64) ((u64) v0 << 26);
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    fp = (s64) ((u64) v0 << 30);
    { s32 c_ = s6 >= 0; v0 = (s32) s6 >> 6; if (c_) goto L_0013BB8C; }
    v0 = (s32) ((u32) s6 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013BB8C:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v1 = v1 >> 32;
    v0 = 4;
    v1 = v1 | s2;
    v0 = (s64) ((u64) v0 << 32);
    v1 = s7 | v1;
    a1 = 7;
    v1 = fp | v1;
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 21;
    a2 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 9;
    a2 = 0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 72;
    a2 = v0 | 0x3001; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x3f800000U;
    v1 = 0x8080;
    a0 = (s64) ((u64) v0 << 32);
    a1 = 1;
    v0 = (s64) ((u64) v1 << 16);
    a0 = (s64) ((u64) a0 >> 32);
    v1 = (s64) ((u64) a0 << 32);
    v0 = v0 | 0x8080;
    a2 = v1 | v0;
    a0 = s5; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = 0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 4;
    v1 = (s32) ((u32) v0 + 0xfffffff8U);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) ((u32) s3 << 4);
    v1 = (s32) ((u32) s4 << 4);
    v0 = (s64) ((u64) v0 << 16);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 3; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 4;
    v1 = (s32) ((u32) v0 + 0x800U);
    v0 = (s32) ((u32) s0 + 0x800U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { s32 c_ = s1 >= 0; v0 = (s32) s1 >> 6; if (c_) goto L_0013BCC8; }
    v0 = (s32) ((u32) s1 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013BCC8:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s5;
    v1 = v1 >> 32;
    v0 = 4;
    v1 = v1 | s2;
    v0 = (s64) ((u64) v0 << 32);
    v1 = s7 | v1;
    a1 = 6;
    v1 = fp | v1;
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = 97; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 8;
    v1 = (s64) ((u64) v0 << 14);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 | 0xa;
    v0 = (s64) ((u64) v0 << 34);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0x3001; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5; func_00103790(a0);
    a0 = s5; func_00103748(a0);
    a1 = (s32) 0x3c0000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0xffffd680U);
    a2 = 0; func_00103628(a0, a1, a2);
    a1 = (s32) 0x370000U;
    v0 = (s32) 0x1000000U;
    a0 = s5;
    a1 = (s32) ((u32) a1 + 0x6180U);
    a2 = 8;
    a3 = v0 | 0x101;
    a4 = (s32) 0x6c080000U;
    a5 = 0; func_00103590(a0, a1, a2, a3, a4, a5);
    a0 = s5;
    a1 = 0; func_00103538(a0, a1);
    a0 = s5;
    a1 = (s32) 0x14000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = (s32) 0x13000000U; Pes6PacketStream_AppendWord(a0, a1);
    a0 = s5;
    a1 = 0; func_001036F0(a0, a1);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25088) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_00103778(a0, a1);
    v0 = (s32) 0x50000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0xd; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = s5; func_00103790(a0);
    a0 = s5; func_00103748(a0);
    return;
}
