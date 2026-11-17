/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6PacketStream_AppendGsAD(s64, s64, s64);
f32 func_00140F40(s64, s64, s64);
s64 func_001D4930(s64, s64);
s64 func_001D4C20(s64, s64, s64);

void func_001CFEC0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[44];
    s64 sp = (s32) (u32) frame;

    v0 = 255;
    s6 = a1;
    s5 = a0;
    a3 = (*(volatile u8 *) (u32) (a0 + 4));
    a2 = (*(volatile u8 *) (u32) (a0 + 5));
    a1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    s4 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u8 *) (u32) (sp + 328)) = (u8) a3;
    (*(volatile u8 *) (u32) (sp + 329)) = (u8) a2;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) (sp + 330)) = (u8) a1; if (c_) goto L_001CFF24; }
    v0 = 128; goto L_001CFF28;
L_001CFF24:;
    v0 = (s32) v1 >> 1;
L_001CFF28:;
    (*(volatile u8 *) (u32) (sp + 331)) = (u8) v0;
    a0 = s6;
    (*(volatile u32 *) (u32) (sp + 332)) = (u32) 0;
    a2 = (*(volatile s64 *) (u32) (sp + 328));
    a1 = 1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = (s32) 0x3f800000U;
    a1 = (s32) ((u32) sp + 0x114U);
    (*(volatile u32 *) (u32) (sp + 268)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x118U);
    a2 = (*(volatile u16 *) (u32) (s5 + 2));
    v1 = (s32) ((u32) sp + 0x11cU);
    s3 = 0;
    fp = (s32) ((u32) a2 + 0x2U);
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) 0;
    at = 0 < fp;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) 0;
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 340)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 344)) = (u32) 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 304)) = (u32) 0; if (c_) goto L_001D0188; }
    v0 = (s32) ((u32) sp + 0x130U);
    s2 = 0;
    v0 = (s32) ((u32) v0 + 0x4U);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x120U);
    v0 = (s32) ((u32) v0 + 0x4U);
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + 0x8U);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x120U);
    v0 = (s32) ((u32) v0 + 0x8U);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + 0xcU);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (s32) ((u32) sp + 0x120U);
    v0 = (s32) ((u32) v0 + 0xcU);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001CFFF0:;
    at = s3 < 2;
    if (at == 0) goto L_001D0004;
    s1 = s3; goto L_001D0008;
L_001D0004:;
    s1 = 2;
L_001D0008:;
    if (s4 == 0) goto L_001D0128;
    v1 = (*(volatile u16 *) (u32) s4);
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    v0 = (s32) ((u32) v1 << 1);
    s4 = (s32) ((u32) s4 + 0x2U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v0);
L_001D002C:;
    f0.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) ((u32) s1 << 4);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0x100U);
    s0 = (s32) ((u32) v0 + 0x110U);
    a2 = 1;
    v0 = (s32) ((u32) sp + 0x104U);
    a0 = s0;
    (*(volatile f32 *) (u32) (sp + 256)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    (*(volatile f32 *) (u32) v0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    v0 = (s32) ((u32) sp + 0x108U);
    (*(volatile f32 *) (u32) v0) = f0.f; f0.f = func_00140F40(a0, a1, a2);
    v0 = (s32) ((u32) s1 << 2);
    a0 = 3;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) sp + 0x110U);
    (*(volatile f32 *) (u32) (v0 + 336)) = f0.f;
    a2 = (s32) ((u32) sp + 0x150U);
    s7 = 4; v0 = func_001D4C20(a0, a1, a2);
    if (v0 != 0) goto L_001D0094;
    s7 = 12;
L_001D0094:;
    v0 = s3 < 2;
    if (v0 != 0) goto L_001D00D0;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -21759));
    if (v0 != v1) goto L_001D00D0;
    v0 = (*(volatile u16 *) (u32) s5);
    a0 = (s32) ((u32) sp + 0x110U);
    a1 = v0 & 0x100; v0 = func_001D4930(a0, a1);
    if (v0 != 0) goto L_001D00D0;
    s7 = 12;
L_001D00D0:;
    a3 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = s7;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = s6;
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    a2 = (*(volatile s32 *) (u32) s0);
    a3 = (s64) ((u64) a3 << 16);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 56);
    a2 = a2 | a3;
    v1 = v1 | a2;
    a2 = v0 | v1; Pes6PacketStream_AppendGsAD(a0, a1, a2);
    v1 = 2;
    if (s1 == v1) goto L_001D0134;
L_001D0110:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < fp;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x18U); if (c_) goto L_001CFFF0; }
    goto L_001D018C;
L_001D0128:;
    v0 = (*(volatile s32 *) (u32) (s5 + 8));
    v1 = (s32) ((u32) v0 + (u32) s2); goto L_001D002C;
L_001D0134:;
    v1 = (s32) ((u32) sp + 0x130U);
    a3 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) sp + 0x158U);
    f0.f = (*(volatile f32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 240) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a2 = (*(volatile s32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 208) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a1 = (*(volatile s32 *) (u32) v1);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) sp + 0x120U);
    (*(volatile u32 *) (u32) v1) = (u32) a3;
    v1 = (s32) ((u32) sp + 0x154U);
    (*(volatile f32 *) (u32) v1) = f0.f;
    { u32 a_ = (u32) (sp + 224) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    { u32 a_ = (u32) (sp + 192) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    (*(volatile u32 *) (u32) v1) = (u32) a0; goto L_001D0110;
L_001D0188:;
L_001D018C:;
    return;
}
