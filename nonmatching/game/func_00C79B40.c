/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001EDC80(s64, s64);
void func_001EEE60(s64, s64);
void func_001EF900(s64, s64);
s64 func_002F9320(s64, s64);
s64 func_002F9370(s64);
s64 func_002F96F0(s64, s64);
void func_002FA170(s64, s64, s64, s64, s64, s64);

void func_00C79B40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s64 frame[24];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) a4 << 1);
    v1 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + (u32) a4);
    v1 = (s32) ((u32) v1 + 0xffffbeb0U);
    s7 = a0;
    fp = a2;
    s4 = a1;
    s1 = (s32) ((u32) v0 << 2);
    a1 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) a3;
    a0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) s1 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s3 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) a5; v0 = func_002F9370(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19252));
    (*(volatile u32 *) (u32) (sp + 180)) = (u32) v0;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 4);
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F9320(a0, a1);
    a0 = v0;
    a1 = 0; v0 = func_002F96F0(a0, a1);
    s5 = (*(volatile s32 *) (u32) (v0 + 12));
    { s32 c_ = s3 <= 0; s2 = 0; if (c_) goto L_00C79CA0; }
    v0 = (s32) 0xcd0000U;
    s0 = 0;
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00C79C1C:;
    a0 = (*(volatile s32 *) (u32) (gp + -19252));
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffbe90U);
    v1 = (s32) ((u32) a0 << 4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) a0);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = (s32) ((u32) s0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a1 = (*(volatile s32 *) (u32) (v0 + 36));
    { u32 t_ = (u32) s7; a0 = (*(volatile s32 *) (u32) (v1 + 56)); v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    s6 = v0;
    a1 = (s32) ((u32) s4 + (u32) s2);
    a0 = s5; v0 = func_001EDC80(a0, a1);
    a2 = (*(volatile s32 *) (u32) (sp + 180));
    s1 = v0;
    a4 = (*(volatile s32 *) (u32) (sp + 188));
    a1 = s6;
    a3 = (s32) ((u32) fp + (u32) s2);
    a0 = s1;
    a5 = 0; func_002FA170(a0, a1, a2, a3, a4, a5);
    a1 = (*(volatile s32 *) (u32) (sp + 184));
    a0 = s1; func_001EEE60(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < s3;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C79C1C; }
L_00C79CA0:;
    at = s3 < 2;
    if (at == 0) goto L_00C79CD8;
    a1 = (s32) ((u32) s4 + (u32) s3);
L_00C79CB0:;
    a0 = s5; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 2;
    if (v1 != 0) { a1 = (s32) ((u32) s4 + (u32) s3); goto L_00C79CB0; }
L_00C79CD8:;
    return;
}
