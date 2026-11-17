/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
f32 func_00140F40(s64, s64, s64);
s64 func_001D4930(s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001CF3F0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[46];
    s64 sp = (s32) (u32) frame;

    a2 = 5;
    s5 = a0;
    s4 = a1;
    a1 = 8;
    s2 = (*(volatile s32 *) (u32) (a0 + 12));
    a0 = s4; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a0 = s4;
    a2 = (*(volatile s64 *) (u32) (v0 + -21696));
    a1 = 20; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a0 = s4;
    a2 = (*(volatile s64 *) (u32) (v0 + -21704));
    a1 = 6; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) 0x3f800000U;
    a2 = (s32) ((u32) sp + 0x124U);
    (*(volatile u32 *) (u32) (sp + 284)) = (u32) v1;
    a1 = (s32) ((u32) sp + 0x128U);
    v1 = (*(volatile u16 *) (u32) (s5 + 2));
    a0 = (s32) ((u32) sp + 0x12cU);
    s1 = 0;
    v1 = (s32) ((u32) v1 + 0x2U);
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) 0;
    at = 0 < v1;
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) 0;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 348)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 352)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 320)) = (u32) 0; if (c_) goto L_001CF798; }
    v0 = (s32) ((u32) sp + 0x140U);
    s7 = 0;
    v0 = (s32) ((u32) v0 + 0x4U);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + 0x4U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x140U);
    v0 = (s32) ((u32) v0 + 0x8U);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + 0x8U);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x140U);
    v0 = (s32) ((u32) v0 + 0xcU);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + 0xcU);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001CF514:;
    at = s1 < 2;
    if (at == 0) goto L_001CF528;
    s6 = s1; goto L_001CF52C;
L_001CF528:;
    s6 = 2;
L_001CF52C:;
    if (s2 == 0) goto L_001CF738;
    v1 = (*(volatile u16 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v1 << 1);
    s2 = (s32) ((u32) s2 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    s3 = (s32) ((u32) a0 + (u32) v0);
L_001CF550:;
    f0.f = (*(volatile f32 *) (u32) s3);
    v0 = (s32) ((u32) s6 << 2);
    v1 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0x110U);
    v0 = (s32) ((u32) s6 << 4);
    fp = (s32) ((u32) v1 + 0x158U);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a2 = 1;
    s0 = (s32) ((u32) v0 + 0x120U);
    v0 = (s32) ((u32) sp + 0x114U);
    a0 = s0;
    (*(volatile f32 *) (u32) (sp + 272)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) v0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    v0 = (s32) ((u32) sp + 0x118U);
    (*(volatile f32 *) (u32) v0) = f0.f; f0.f = func_00140F40(a0, a1, a2);
    (*(volatile f32 *) (u32) fp) = f0.f;
    a0 = s4;
    f2.f = (*(volatile f32 *) (u32) (s3 + 16));
    a1 = 2;
    f1.f = (*(volatile f32 *) (u32) (s3 + 20));
    f2.f = f2.f * f0.f;
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 360)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 364)) = f2.f;
    v0 = (*(volatile u32 *) (u32) (sp + 360));
    v1 = (*(volatile u32 *) (u32) (sp + 364));
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s3 + 12));
    v0 = 255;
    if (v1 != v0) goto L_001CF5E8;
    v0 = 128; goto L_001CF5EC;
L_001CF5E8:;
    v0 = (s32) v1 >> 1;
L_001CF5EC:;
    v1 = (*(volatile u8 *) (u32) (s3 + 13));
    (*(volatile u8 *) (u32) (sp + 336)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) goto L_001CF608;
    v1 = 128; goto L_001CF60C;
L_001CF608:;
    v1 = (s32) v1 >> 1;
L_001CF60C:;
    v0 = (s32) ((u32) sp + 0x151U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 14));
    v0 = 255;
    if (v1 != v0) goto L_001CF62C;
    v1 = 128; goto L_001CF630;
L_001CF62C:;
    v1 = (s32) v1 >> 1;
L_001CF630:;
    v0 = (s32) ((u32) sp + 0x152U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s3 + 15));
    v0 = 255;
    if (v1 != v0) goto L_001CF650;
    v1 = 128; goto L_001CF654;
L_001CF650:;
    v1 = (s32) v1 >> 1;
L_001CF654:;
    f0.f = (*(volatile f32 *) (u32) fp);
    v0 = (s32) ((u32) sp + 0x153U);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    a0 = s4;
    v0 = (s32) ((u32) sp + 0x154U);
    (*(volatile f32 *) (u32) (sp + 356)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (sp + 356));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a2 = (*(volatile s64 *) (u32) (sp + 336));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x120U);
    a2 = (s32) ((u32) sp + 0x158U);
    s3 = 4; v0 = func_001D4C20(a0, a1, a2);
    if (v0 != 0) goto L_001CF6A0;
    s3 = 12;
L_001CF6A0:;
    v0 = s1 < 2;
    if (v0 != 0) goto L_001CF6DC;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -21759));
    if (v0 != v1) goto L_001CF6DC;
    v0 = (*(volatile u16 *) (u32) s5);
    a0 = (s32) ((u32) sp + 0x120U);
    a1 = v0 & 0x100; v0 = func_001D4930(a0, a1);
    if (v0 != 0) goto L_001CF6DC;
    s3 = 12;
L_001CF6DC:;
    a3 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s3;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    a2 = (*(volatile s32 *) (u32) s0);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = 2;
    if (s6 == v1) goto L_001CF744;
L_001CF71C:;
    { u32 a_ = (u32) (sp + 256) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    { s32 c_ = v1 != 0; s7 = (s32) ((u32) s7 + 0x18U); if (c_) goto L_001CF514; }
    goto L_001CF79C;
L_001CF738:;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    s3 = (s32) ((u32) v0 + (u32) s7); goto L_001CF550;
L_001CF744:;
    v1 = (s32) ((u32) sp + 0x140U);
    a3 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) sp + 0x160U);
    f0.f = (*(volatile f32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a2 = (*(volatile s32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile s32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) sp + 0x130U);
    (*(volatile u32 *) (u32) v1) = (u32) a3;
    v1 = (s32) ((u32) sp + 0x15cU);
    (*(volatile f32 *) (u32) v1) = f0.f;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a0; goto L_001CF71C;
L_001CF798:;
L_001CF79C:;
    return;
}
