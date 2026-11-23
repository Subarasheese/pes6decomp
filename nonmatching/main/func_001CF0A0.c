/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
void func_001036F0(s64, s64);
void func_00103748(s64);
void func_00103778(s64, s64);
void func_00103790(s64);
f32 func_00140F40(s64, s64, s64);
void func_001D47E0(s64, s64, s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001CF0A0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    func_001D47E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s5);
    s0 = (*(volatile s32 *) (u32) (s5 + 8));
    at = (u64) 0 < (u64) v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001CF118; }
L_001CF0EC:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = s0;
    a2 = 1; f0.f = func_00140F40(a0, a1, a2);
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (*(volatile s32 *) (u32) s5);
    v0 = (u64) s1 < (u64) v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x30U); if (c_) goto L_001CF0EC; }
L_001CF118:;
    s4 = (s32) 0x530000U;
    s4 = (s32) ((u32) s4 + 0xffffab10U);
    a1 = 0;
    a0 = s4; func_001036F0(a0, a1);
    v0 = (s32) 0x3a0000U;
    { u32 a_ = (u32) (v0 + -27920) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4; func_00103778(a0, a1);
    a0 = s4;
    a1 = 8;
    a2 = 0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a0 = s4;
    a2 = (*(volatile s64 *) (u32) (v0 + -21696));
    a1 = 20; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a0 = s4;
    a2 = (*(volatile s64 *) (u32) (v0 + -21704));
    a1 = 6; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = (s32) 0x530000U;
    a0 = s4;
    a2 = (*(volatile s64 *) (u32) (v0 + -21688));
    a1 = 52; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    s2 = (*(volatile s32 *) (u32) (s5 + 16));
    v0 = -1;
    v1 = (*(volatile s16 *) (u32) s2);
    if (v1 == v0) goto L_001CF3A8;
    s7 = (s32) ((u32) sp + 0xe1U);
    fp = (s32) ((u32) sp + 0xe2U);
L_001CF1A4:;
    a0 = (s32) ((u32) v1 << 2);
    v0 = (*(volatile s16 *) (u32) (s2 + 2));
    v1 = (*(volatile s32 *) (u32) (s5 + 12));
    s1 = 0;
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_001CF394; }
L_001CF1C0:;
    a1 = (*(volatile u16 *) (u32) s3);
    v0 = 3;
    v1 = (*(volatile s32 *) (u32) (s5 + 8));
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 4);
    a1 = (s32) ((u32) v1 + (u32) a0);
    s0 = (s32) ((u32) a1 + 0x10U);
    f20.f = (*(volatile f32 *) (u32) (a1 + 32));
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    v0 = hi;
    { u32 a_ = (u32) (a1 + 16) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) a0 + (u32) sp);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) a0 + 0xb0U);
    v0 = (s32) ((u32) v0 + (u32) sp);
    { u32 a_ = (u32) (a0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    f0.f = (*(volatile f32 *) (u32) (a1 + 32));
    (*(volatile f32 *) (u32) (v0 + 232)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s3 + 2));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_001CF228; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_001CF240;
L_001CF228:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_001CF240:;
    v0 = (*(volatile u8 *) (u32) (s3 + 3));
    { s32 c_ = v0 < 0; f1.f = f20.f * f0.f; if (c_) goto L_001CF258; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_001CF274;
L_001CF258:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_001CF274:;
    f0.f = f20.f * f0.f;
    a0 = s4;
    a1 = 2;
    (*(volatile f32 *) (u32) (sp + 248)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 252)) = f1.f;
    v0 = (*(volatile u32 *) (u32) (sp + 248));
    v1 = (*(volatile u32 *) (u32) (sp + 252));
    v0 = (s64) ((u64) v0 << 32);
    a2 = v1 | v0; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001CF2B0; }
    v0 = 128;
L_001CF2B0:;
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    (*(volatile u8 *) (u32) (sp + 224)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001CF2C8; }
    v0 = 128;
L_001CF2C8:;
    v1 = (*(volatile u8 *) (u32) (s5 + 6));
    (*(volatile u8 *) (u32) s7) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001CF2E0; }
    v0 = 128;
L_001CF2E0:;
    v1 = (*(volatile u8 *) (u32) (s5 + 7));
    (*(volatile u8 *) (u32) fp) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v1 = (s32) v1 >> 1; goto L_001CF2F8; }
    v1 = 128;
L_001CF2F8:;
    v0 = (s32) ((u32) sp + 0xe3U);
    a0 = s4;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    (*(volatile f32 *) (u32) (sp + 244)) = f20.f;
    v1 = (*(volatile s32 *) (u32) (sp + 244));
    v0 = (s32) ((u32) sp + 0xe4U);
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    a2 = (*(volatile s64 *) (u32) (sp + 224));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v0 = s1 < 2;
    { s32 c_ = v0 != 0; s6 = 12; if (c_) goto L_001CF34C; }
    a0 = 3;
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = (s32) ((u32) sp + 0xe8U); v0 = func_001D4C20(a0, a1, a2);
    v1 = 1;
    if (v0 != v1) goto L_001CF34C;
    s6 = 4;
L_001CF34C:;
    a3 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s6;
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
    v0 = (*(volatile s16 *) (u32) (s2 + 2));
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_001CF1C0; }
L_001CF394:;
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = -1;
    v1 = (*(volatile s16 *) (u32) s2);
    if (v1 != v0) goto L_001CF1A4;
L_001CF3A8:;
    a0 = s4; func_00103790(a0);
    a0 = s4; func_00103748(a0);
    return;
}
