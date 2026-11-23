/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103050(s64, s64, s64, s64);
void func_001031F0(s64, s64);
void func_00103208(s64);
void func_001032B0(s64, s64, s64);
f32 func_0013B7E0(void);

void func_0013F3B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[38];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    s1 = a0;
    a0 = (s32) 0x500000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -9212));
    a1 = (*(volatile u8 *) (u32) (a0 + -9176));
    s4 = (*(volatile s16 *) (u32) (v0 + 12));
    a0 = (*(volatile u8 *) (u32) (v1 + -9175));
    s2 = (*(volatile s16 *) (u32) (v0 + 6));
    s6 = (*(volatile u16 *) (u32) (v0 + 16));
    s3 = (*(volatile s16 *) (u32) (v0 + 14));
    v1 = (*(volatile s32 *) (u32) (v0 + 24));
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (s64) ((u64) a1 << 48);
    v1 = v1 >> 48;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile u16 *) (u32) (v0 + 10));
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (s64) ((u64) a0 << 48);
    v1 = v1 >> 48;
    a0 = (*(volatile s16 *) (u32) (v0 + 8));
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v1;
    v1 = (s32) ((u32) a0 << 4);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { s32 c_ = s4 >= 0; a0 = (s32) s4 >> 1; if (c_) goto L_0013F454; }
    v1 = (s32) ((u32) s4 + 0x1U);
    a0 = (s32) v1 >> 1;
L_0013F454:;
    v1 = 2048;
    a1 = (s32) s3 >> 1;
    v1 = (s32) ((u32) v1 - (u32) a0);
    s7 = (s32) ((u32) v1 << 4);
    { s32 c_ = s3 >= 0; s0 = (s32) ((u32) s7 + 0xfffffff8U); if (c_) goto L_0013F474; }
    v1 = (s32) ((u32) s3 + 0x1U);
    a1 = (s32) v1 >> 1;
L_0013F474:;
    v1 = (s32) ((u32) a1 + 0x800U);
    a0 = 2048;
    v1 = (s32) ((u32) v1 << 4);
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    fp = (s32) ((u32) a0 << 4);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    a0 = s6 & 0xffff;
    v1 = (s32) ((u32) fp + 0xfffffff8U);
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v1;
    v1 = 10;
    if (a0 == v1) goto L_0013F540;
    v1 = 2;
    if (a0 == v1) goto L_0013F540;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) 0; goto L_0013F540;
L_0013F4C4:;
    v0 = (*(volatile s32 *) (u32) (v0 + -9136));
    if (v0 == 0) { (*(volatile u32 *) (u32) (sp + 288)) = (u32) v1; goto L_0013F4D0; }
L_0013F4D0:;
    f0.f = func_0013B7E0();
    v1 = (s32) 0x3f800000U;
    a0 = (s32) 0x43000000U;
    f2.i = (s32) v1;
    f1.i = (s32) a0;
    f0.f = f2.f - f0.f;
    v1 = (s32) 0x4f000000U;
    f1.f = f1.f * f0.f;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_0013F51C; }
    f0.i = (s32) f1.f;
    s5 = f0.i;
    goto L_0013F530;
L_0013F51C:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    s5 = f0.i;
    s5 = s5 | v1;
L_0013F530:;
    if (s5 != 0) { a0 = s1; goto L_0013F554; }
    goto L_0013F86C;
L_0013F540:;
    v1 = (*(volatile s32 *) (u32) (v0 + 40));
    if (v1 == 0) goto L_0013F4D0;
    v0 = (s32) 0x500000U; goto L_0013F4C4;
L_0013F554:;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00103050(a0, a1, a2, a3);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25568) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s1; func_001031F0(a0, a1);
    { s32 c_ = s4 >= 0; v0 = (s32) s4 >> 6; if (c_) goto L_0013F584; }
    v0 = (s32) ((u32) s4 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013F584:;
    v1 = (s64) ((u64) v0 << 32);
    a0 = s1;
    v0 = (*(volatile s32 *) (u32) (sp + 288));
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    a1 = 76;
    v0 = (s32) ((u32) v0 >> 11);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    v1 = v0 | v1;
    v0 = (s64) ((u64) s6 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 24);
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    v1 = (s32) ((u32) s4 + 0xffffffffU);
    v0 = (s32) ((u32) s3 + 0xffffffffU);
    v1 = (s64) ((u64) v1 << 32);
    v0 = (s64) ((u64) v0 << 32);
    v1 = v1 >> 32;
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 << 48);
    a2 = v1 | v0;
    a0 = s1;
    a1 = 64; func_001032B0(a0, a1, a2);
    v0 = (s64) ((u64) fp << 32);
    v1 = (s64) ((u64) s7 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a0 = s1;
    a2 = v1 | v0;
    a1 = 24; func_001032B0(a0, a1, a2);
    a0 = s1;
    a1 = 34;
    a2 = 0; func_001032B0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    if (v0 != 0) { a0 = s1; goto L_0013F770; }
L_0013F630:;
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 6; if (c_) goto L_0013F640; }
    v0 = (s32) ((u32) s2 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013F640:;
    v1 = (s64) ((u64) v0 << 32);
    a1 = 6;
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v1 = (s64) ((u64) v1 << 14);
    v0 = (s32) ((u32) v0 >> 6);
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 >> 32);
    a0 = v0 | v1;
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v1 = (s64) ((u64) v0 << 20);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 | a0;
    a0 = s1;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 26);
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 30);
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    a0 = s1;
    a1 = 20;
    a2 = 1; func_001032B0(a0, a1, a2);
    v1 = 128;
    a0 = s1;
    v0 = (s64) ((u64) v1 << 32);
    a1 = 59;
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s1;
    a1 = 71;
    a2 = v0 | 0x1001; func_001032B0(a0, a1, a2);
    a0 = s1;
    a1 = 66;
    a2 = 68; func_001032B0(a0, a1, a2);
    a0 = s1;
    a1 = 8;
    a2 = 0; func_001032B0(a0, a1, a2);
    v1 = (s64) ((u64) s5 << 32);
    v0 = (s32) 0x800000U;
    v1 = (s64) ((u64) v1 >> 32);
    v0 = v0 | 0x8080;
    v1 = (s64) ((u64) v1 << 24);
    a0 = s1;
    a2 = v1 | v0;
    a1 = 1; func_001032B0(a0, a1, a2);
    v0 = 0 < s2;
    { s32 c_ = v0 != 0; s5 = 0; if (c_) goto L_0013F7B0; }
    v0 = (*(volatile s32 *) (u32) (sp + 272));
L_0013F738:;
    if (v0 == 0) goto L_0013F750;
    a0 = s1;
    a1 = 69;
    a2 = 0; func_001032B0(a0, a1, a2);
L_0013F750:;
    a0 = s1;
    a1 = 97;
    a2 = 0; func_001032B0(a0, a1, a2);
    a0 = s1; func_00103208(a0);
    goto L_0013F868;
L_0013F770:;
    a1 = 69;
    a2 = 1; func_001032B0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -23452));
    v0 = (s32) 0x3c0000U;
    v0 = (s32) ((u32) v0 + 0x69a0U);
    a0 = s1;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s64 *) (u32) v0);
    a1 = 68; func_001032B0(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -23452));
    v0 = v0 ^ 0x1;
    (*(volatile u32 *) (u32) (gp + -23452)) = (u32) v0; goto L_0013F630;
L_0013F7B0:;
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s4 = 0;
    s3 = 512;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    s6 = (s64) ((u64) v1 << 16);
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    s7 = (s64) ((u64) v0 << 16);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    fp = (s64) ((u64) v0 << 16);
L_0013F7E8:;
    a2 = (s64) ((u64) s4 << 32);
    a0 = s1;
    a2 = a2 >> 32;
    a1 = 3; func_001032B0(a0, a1, a2);
    v0 = (s64) ((u64) s0 << 32);
    a0 = s1;
    v0 = v0 >> 32;
    a1 = 5;
    a2 = s6 | v0; func_001032B0(a0, a1, a2);
    v0 = (s64) ((u64) s3 << 32);
    a0 = s1;
    v0 = v0 >> 32;
    a1 = 3;
    a2 = s7 | v0; func_001032B0(a0, a1, a2);
    v0 = (s32) ((u32) s0 + 0x200U);
    a0 = s1;
    v0 = (s64) ((u64) v0 << 32);
    a1 = 5;
    v0 = v0 >> 32;
    a2 = fp | v0; func_001032B0(a0, a1, a2);
    s5 = (s32) ((u32) s5 + 0x20U);
    s4 = (s32) ((u32) s4 + 0x200U);
    v0 = s5 < s2;
    s0 = (s32) ((u32) s0 + 0x200U);
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x200U); if (c_) goto L_0013F7E8; }
    v0 = (*(volatile s32 *) (u32) (sp + 272)); goto L_0013F738;
L_0013F868:;
L_0013F86C:;
    return;
}
