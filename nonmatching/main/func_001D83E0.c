/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001D4E90(s64, s64);
s64 func_001D6370(s64, s64, s64, s64);
s64 func_001D7E40(s64, s64, s64, s64);
s64 func_001D93C0(s64);
s64 func_001EB1D0(s64, s64, s64, s64);
s64 func_001EC0F0(void);
s64 func_001EC4C0(s64, s64, s64);
s64 func_001EC540(s64, s64, s64, s64);

s64 func_001D83E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    u64 qh_v0 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    { s32 c_ = s2 == 0; s1 = a1; if (c_) goto L_001D85EC; }
    a0 = 1;
    a1 = 176; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s0 = v0;
    (*(volatile u32 *) (u32) (v0 + 44)) = (u32) s2;
    a0 = s0;
    a1 = 0; v0 = func_001D7E40(a0, a1, a2, a3);
    if (s0 == 0) goto L_001D842C;
    (*(volatile u8 *) (u32) (s0 + 164)) = (u8) 0;
L_001D842C:;
    if (s0 == 0) goto L_001D8438;
    (*(volatile u8 *) (u32) (s0 + 168)) = (u8) 0;
L_001D8438:;
    if (s0 == 0) goto L_001D8444;
    (*(volatile u8 *) (u32) (s0 + 169)) = (u8) 0;
L_001D8444:;
    v0 = (s32) 0x3a0000U;
    a0 = (s32) ((u32) sp + 0x40U);
    f3.f = (*(volatile f32 *) (u32) (v0 + -27872));
    v0 = (s32) 0x3a0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -27868));
    (*(volatile f32 *) (u32) (sp + 64)) = f3.f;
    v0 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -27864));
    (*(volatile f32 *) (u32) (sp + 68)) = f2.f;
    v0 = (s32) 0x3a0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -27860));
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    { s32 c_ = s0 == 0; (*(volatile f32 *) (u32) (sp + 76)) = f0.f; if (c_) goto L_001D84D8; }
    v0 = (s32) 0x7f7f0000U;
    a1 = 0;
    v0 = v0 | 0xffff;
    v1 = s0;
    f0.i = (s32) 0;
    f1.i = (s32) v0;
L_001D8494:;
    f2.f = (*(volatile f32 *) (u32) a0);
    fcc = f2.f <= f1.f;
    if (fcc) goto L_001D84AC;
    f2.i = f1.i; goto L_001D84C0;
L_001D84AC:;
    fcc = f2.f < f0.f;
    if (!fcc) goto L_001D84C0;
    f2.i = f0.i; goto L_001D84C0;
L_001D84C0:;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x4U);
    (*(volatile f32 *) (u32) (v1 + 92)) = f2.f;
    v0 = a1 < 4;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x4U); if (c_) goto L_001D8494; }
L_001D84D8:;
    a4 = (*(volatile u8 *) (u32) (gp + -32468));
    a3 = (s32) ((u32) sp + 0x6dU);
    a2 = (*(volatile u8 *) (u32) (gp + -32467));
    a1 = (s32) ((u32) sp + 0x6eU);
    v1 = (*(volatile u8 *) (u32) (gp + -32466));
    a0 = (s32) ((u32) sp + 0x6fU);
    v0 = (*(volatile u8 *) (u32) (gp + -32465));
    (*(volatile u8 *) (u32) (sp + 108)) = (u8) a4;
    (*(volatile u8 *) (u32) a3) = (u8) a2;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    { s32 c_ = s0 == 0; (*(volatile u8 *) (u32) a0) = (u8) v0; if (c_) goto L_001D857C; }
    v0 = (s32) ((u32) sp + 0x6cU);
    if (v0 == 0) goto L_001D857C;
    v1 = (*(volatile u8 *) (u32) (sp + 108));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001D8528; }
    v0 = 128;
L_001D8528:;
    v1 = (*(volatile u8 *) (u32) a3);
    (*(volatile u8 *) (u32) (s0 + 84)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001D8540; }
    v0 = 128;
L_001D8540:;
    v1 = (*(volatile u8 *) (u32) a1);
    (*(volatile u8 *) (u32) (s0 + 85)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001D8558; }
    v0 = 128;
L_001D8558:;
    v1 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) (s0 + 86)) = (u8) v0;
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001D8570; }
    v0 = 128;
L_001D8570:;
    (*(volatile u8 *) (u32) (s0 + 87)) = (u8) v0;
    v0 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (s0 + 88)) = (u32) v0;
L_001D857C:;
    v0 = (s32) 0x3a0000U;
    a0 = (s32) ((u32) sp + 0x54U);
    v1 = (*(volatile s32 *) (u32) (v0 + -27888));
    v0 = (s32) 0x3a0000U;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v1;
    f2.f = (*(volatile f32 *) (u32) (v0 + -27884));
    v0 = (s32) 0x3a0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -27880));
    (*(volatile f32 *) (u32) a0) = f2.f;
    v0 = (s32) 0x3a0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -27876));
    (*(volatile f32 *) (u32) (sp + 88)) = f1.f;
    { s32 c_ = s0 == 0; (*(volatile f32 *) (u32) (sp + 92)) = f0.f; if (c_) goto L_001D8600; }
    v0 = (s32) ((u32) sp + 0x50U);
    if (v0 == 0) goto L_001D8600;
    f1.f = (*(volatile f32 *) (u32) (s0 + 128));
    f0.f = (*(volatile f32 *) (u32) (sp + 80));
    fcc = f1.f == f0.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (s0 + 132)); goto L_001D85F4; }
L_001D85D4:;
    { u32 a_ = (u32) (sp + 80) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 128) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 166));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 166)) = (u8) v0; goto L_001D8600;
L_001D85EC:;
    v0 = 0; goto L_001D8708;
L_001D85F4:;
    fcc = f0.f == f2.f;
    if (!fcc) goto L_001D85D4;
L_001D8600:;
    v1 = (s32) ((u32) sp + 0x60U);
    { s32 c_ = v1 == 0; v0 = 12; if (c_) goto L_001D8628; }
L_001D860C:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001D860C;
L_001D8628:;
    if (s0 == 0) goto L_001D869C;
    v0 = (s32) ((u32) sp + 0x60U);
    if (v0 == 0) goto L_001D869C;
    f1.f = (*(volatile f32 *) (u32) (s0 + 144));
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    fcc = f1.f == f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (s0 + 148)); goto L_001D8678; }
L_001D8650:;
    f2.f = (*(volatile f32 *) (u32) (sp + 96));
    f1.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.f = (*(volatile f32 *) (u32) (sp + 104));
    (*(volatile f32 *) (u32) (s0 + 144)) = f2.f;
    (*(volatile f32 *) (u32) (s0 + 148)) = f1.f;
    (*(volatile f32 *) (u32) (s0 + 152)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s0 + 166));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 166)) = (u8) v0; goto L_001D869C;
L_001D8678:;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001D8650;
    f1.f = (*(volatile f32 *) (u32) (s0 + 152));
    f0.f = (*(volatile f32 *) (u32) (sp + 104));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001D8650;
L_001D869C:;
    if (s1 != 0) goto L_001D86F0;
L_001D86A4:;
    v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 165)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    a2 = (s32) 0x1e0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 52));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffff8750U); v0 = func_001EC4C0(a0, a1, a2);
    a0 = s0; v0 = func_001D93C0(a0);
    a0 = s2;
    a1 = s0; v0 = func_001D4E90(a0, a1);
    a0 = s0; v0 = func_001D6370(a0, a1, a2, a3);
    v0 = s0; goto L_001D8708;
L_001D86F0:;
    a1 = (s32) 0x1e0000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffff9420U); v0 = func_001EB1D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_001D86A4;
L_001D8708:;
    return v0;
}
