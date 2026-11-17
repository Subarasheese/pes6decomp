/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001D9B00(s64);
s64 func_001D9B80(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001DB590(s64, s64, s64);

s64 func_001DB750(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s3 = a1;
    s2 = a2;
    s0 = a0; v0 = func_001DB590(a0, a1, a2);
    { s32 c_ = v0 == 0; s1 = v0; if (c_) goto L_001DB930; }
L_001DB780:;
    a0 = 1;
    a1 = 224; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) s0;
    (*(volatile u32 *) (u32) (v0 + 16)) = (u32) s3;
    (*(volatile u8 *) (u32) (v0 + 222)) = (u8) s2;
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) s1;
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    s0 = v0; v0 = func_001D9B00(a0);
    if (s0 == 0) goto L_001DB844;
    v0 = (s32) ((u32) gp + 0xffff8130U);
    if (v0 == 0) goto L_001DB844;
    a2 = (*(volatile u8 *) (u32) (gp + -32464));
    v0 = 255;
    a1 = (*(volatile u8 *) (u32) (gp + -32463));
    a0 = (*(volatile u8 *) (u32) (gp + -32462));
    v1 = (*(volatile u8 *) (u32) (gp + -32461));
    (*(volatile u8 *) (u32) (s0 + 176)) = (u8) a2;
    (*(volatile u8 *) (u32) (s0 + 177)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 178)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 179)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s0 + 176));
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001DB7F0; }
    v0 = 128;
L_001DB7F0:;
    (*(volatile u8 *) (u32) (s0 + 184)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 177));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001DB808; }
    v0 = 128;
L_001DB808:;
    (*(volatile u8 *) (u32) (s0 + 185)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 178));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001DB820; }
    v0 = 128;
L_001DB820:;
    (*(volatile u8 *) (u32) (s0 + 186)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 179));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001DB838; }
    v0 = 128;
L_001DB838:;
    (*(volatile u8 *) (u32) (s0 + 187)) = (u8) v0;
    v0 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (s0 + 188)) = (u32) v0;
L_001DB844:;
    if (s0 == 0) goto L_001DB874;
    v0 = (s32) 0x3a0000U;
    v0 = (s32) ((u32) v0 + 0xffff9330U);
    if (v0 == 0) goto L_001DB874;
    v0 = (s32) 0x3a0000U;
    { u32 a_ = (u32) (v0 + -27856) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 223));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 223)) = (u8) v0;
L_001DB874:;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    v0 = (*(volatile u8 *) (u32) (a0 + 72));
    { s32 c_ = v0 < 0; (*(volatile u32 *) (u32) (sp + 92)) = (u32) 0; if (c_) goto L_001DB8A4; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_001DB8C0;
L_001DB8A4:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_001DB8C0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 73));
    (*(volatile f32 *) (u32) a1) = f0.f;
    { s32 c_ = v0 < 0; a0 = (s32) ((u32) sp + 0x64U); if (c_) goto L_001DB8DC; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_001DB8F8;
L_001DB8DC:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_001DB8F8:;
    (*(volatile f32 *) (u32) a0) = f1.f;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    { u32 a_ = (u32) (sp + 80) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    f0.f = (*(volatile f32 *) (u32) a1);
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    v0 = s0;
    { u32 a_ = (u32) (a1 + 0) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (s0 + 64) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    (*(volatile f32 *) (u32) (s0 + 64)) = f0.f;
    { u32 a_ = (u32) (s0 + 80) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    (*(volatile f32 *) (u32) (s0 + 84)) = f1.f;
    { u32 a_ = (u32) (s0 + 96) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } goto L_001DB94C;
L_001DB930:;
    a0 = s0;
    a1 = s3;
    a2 = s2; v0 = func_001D9B80(a0, a1, a2, a3, a4, a5, a6, a7);
    { s32 c_ = v0 != 0; s1 = v0; if (c_) goto L_001DB780; }
    v0 = 0;
L_001DB94C:;
    return v0;
}
