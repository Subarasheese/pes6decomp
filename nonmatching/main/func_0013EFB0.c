/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103050(s64, s64, s64, s64);
void func_001031F0(s64, s64);
void func_00103208(s64);
void func_001032B0(s64, s64, s64);
f32 func_0013B7E0(void);

void func_0013EFB0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[36];
    s64 sp = (s32) (u32) frame;

    a1 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    s5 = a0;
    a0 = (s32) 0x500000U;
    a2 = (*(volatile u8 *) (u32) (a1 + -9176));
    v1 = (*(volatile s32 *) (u32) (v1 + -9212));
    a1 = (*(volatile u8 *) (u32) (a0 + -9175));
    s2 = (*(volatile s16 *) (u32) (v1 + 12));
    s1 = (*(volatile s16 *) (u32) (v1 + 14));
    fp = (*(volatile u16 *) (u32) (v1 + 16));
    a0 = (s64) ((u64) a2 << 48);
    a0 = a0 >> 48;
    a2 = (s32) s2 >> 1;
    { u32 a_ = (u32) (sp + 272) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a0 = (s64) ((u64) a1 << 48);
    a0 = a0 >> 48;
    { u32 a_ = (u32) (sp + 256) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a0 = (s32) ((u32) s2 << 4);
    { u32 a_ = (u32) (sp + 240) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a0 = (s32) ((u32) s1 << 4);
    { s32 c_ = s2 >= 0; { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; } if (c_) goto L_0013F03C; }
    a0 = (s32) ((u32) s2 + 0x1U);
    a2 = (s32) a0 >> 1;
L_0013F03C:;
    a0 = (s32) ((u32) a2 + 0x800U);
    a1 = 2048;
    a0 = (s32) ((u32) a0 << 4);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) ((u32) a0 + 0xfffffff8U);
    s0 = (s32) ((u32) a1 << 4);
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a2 = (s32) s1 >> 1;
    a0 = (s32) ((u32) s0 + 0xfffffff8U);
    { s32 c_ = s1 >= 0; { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; } if (c_) goto L_0013F070; }
    a0 = (s32) ((u32) s1 + 0x1U);
    a2 = (s32) a0 >> 1;
L_0013F070:;
    s3 = (*(volatile s32 *) (u32) (v1 + 40));
    a0 = (s32) ((u32) a2 + 0x800U);
    a1 = 2048;
    a0 = (s32) ((u32) a0 << 4);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a0 = (s32) ((u32) a0 + 0xfffffff8U);
    s6 = (s32) ((u32) a1 << 4);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    a0 = (s32) ((u32) s6 + 0xfffffff8U);
    { s32 c_ = s3 == 0; { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; } if (c_) goto L_0013F37C; }
    a0 = (s32) 0x500000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -9136));
    if (a0 == 0) goto L_0013F0B8;
    s4 = s3;
    s3 = (*(volatile s32 *) (u32) (v1 + 28)); goto L_0013F0BC;
L_0013F0B8:;
    s4 = (*(volatile s32 *) (u32) (v1 + 28));
L_0013F0BC:;
    if (s4 != s3) goto L_0013F0CC;
    goto L_0013F380;
L_0013F0CC:;
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
    if (fcc) goto L_0013F118;
    f0.i = (s32) f1.f;
    a0 = f0.i;
    v1 = 128; goto L_0013F134;
L_0013F118:;
    f0.f = f1.f - f0.f;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    v1 = 128;
L_0013F134:;
    if (a0 == v1) goto L_0013F37C;
    a0 = s5;
    a1 = 0;
    a2 = 0;
    a3 = 0; func_00103050(a0, a1, a2, a3);
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v0 + 25584) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    a0 = s5; func_001031F0(a0, a1);
    { s32 c_ = s2 >= 0; v0 = (s32) s2 >> 6; if (c_) goto L_0013F170; }
    v0 = (s32) ((u32) s2 + 0x3fU);
    v0 = (s32) v0 >> 6;
L_0013F170:;
    s7 = (s64) ((u64) v0 << 32);
    fp = (s64) ((u64) fp << 32);
    v0 = (s32) ((u32) s3 >> 11);
    s7 = s7 >> 32;
    a0 = (s64) ((u64) v0 << 32);
    fp = fp >> 32;
    v1 = (s64) ((u64) s7 << 16);
    a0 = (s64) ((u64) a0 >> 32);
    v1 = a0 | v1;
    v0 = (s64) ((u64) fp << 24);
    a0 = s5;
    a2 = v0 | v1;
    a1 = 76; func_001032B0(a0, a1, a2);
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
    a1 = 64; func_001032B0(a0, a1, a2);
    v0 = (s64) ((u64) s6 << 32);
    v1 = (s64) ((u64) s0 << 32);
    v0 = v0 >> 32;
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    a0 = s5;
    a2 = v1 | v0;
    a1 = 24; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 34;
    a2 = 0; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 69;
    a2 = 0; func_001032B0(a0, a1, a2);
    v1 = (s32) ((u32) s4 >> 6);
    v0 = (s64) ((u64) s7 << 14);
    a0 = (s64) ((u64) v1 << 32);
    a1 = 6;
    a0 = (s64) ((u64) a0 >> 32);
    v1 = (s64) ((u64) fp << 20);
    a0 = a0 | v0;
    { u32 a_ = (u32) (sp + 272) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 | a0;
    a0 = s5;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 26);
    v1 = v0 | v1;
    { u32 a_ = (u32) (sp + 256) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 30);
    a2 = v0 | v1; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 20;
    a2 = 1; func_001032B0(a0, a1, a2);
    v1 = 128;
    a0 = s5;
    v0 = (s64) ((u64) v1 << 32);
    a1 = 59;
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    v0 = (s32) 0x30000U;
    a0 = s5;
    a1 = 71;
    a2 = v0 | 0x1001; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 66;
    a2 = 68; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 8;
    a2 = 0; func_001032B0(a0, a1, a2);
    v0 = 0x8080;
    a0 = s5;
    v0 = (s64) ((u64) v0 << 16);
    a1 = 1;
    a2 = v0 | 0x8080; func_001032B0(a0, a1, a2);
    a0 = s5;
    a1 = 3;
    a2 = 0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 240) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 3;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s5;
    a1 = 5;
    v1 = (s64) ((u64) v0 << 32);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 32;
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    v0 = (s64) ((u64) v0 << 16);
    a2 = v1 | v0; func_001032B0(a0, a1, a2);
    a0 = s5; func_00103208(a0);
L_0013F37C:;
L_0013F380:;
    return;
}
