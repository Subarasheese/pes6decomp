/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001040A0(s64, s64, s64, s64, f32);
s64 func_009B3070(s64, s64);

void func_00BD7260(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 hi = 0, lo = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v0 = 29;
    f0.f = (*(volatile f32 *) (u32) (sp + 144));
    f1.f = (*(volatile f32 *) (u32) (sp + 148));
    f2.f = (*(volatile f32 *) (u32) (sp + 152));
    s3 = a0;
    { s32 c_ = a2 == v0; s2 = a1; if (c_) goto L_00BD733C; }
    v0 = 28;
    if (a2 == v0) { v0 = (*(volatile s32 *) (u32) s3); goto L_00BD72F8; }
    v0 = 27;
    if (a2 == v0) { v0 = (*(volatile s32 *) (u32) s3); goto L_00BD72B4; }
    goto L_00BD7378;
L_00BD72B4:;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 != 0) { v0 = (s32) 0xc3b60000U; goto L_00BD72D8; }
    v0 = (s32) 0x43b60000U;
    v0 = v0 | 0x8ccd;
    f0.i = (s32) v0;
    v0 = (s32) 0x43790000U; goto L_00BD72E4;
L_00BD72D8:;
    v0 = v0 | 0x8ccd;
    f0.i = (s32) v0;
    v0 = (s32) 0x43790000U;
L_00BD72E4:;
    v0 = v0 | 0x3334;
    f1.i = (s32) 0;
    f2.i = (s32) v0;
    goto L_00BD7378;
L_00BD72F8:;
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 != 0) { v0 = (s32) 0xc3b20000U; goto L_00BD731C; }
    v0 = (s32) 0x43b20000U;
    v0 = v0 | 0xb333;
    f0.i = (s32) v0;
    v0 = (s32) 0x42230000U; goto L_00BD7328;
L_00BD731C:;
    v0 = v0 | 0xb333;
    f0.i = (s32) v0;
    v0 = (s32) 0x42230000U;
L_00BD7328:;
    v0 = v0 | 0x999a;
    f1.i = (s32) 0;
    f2.i = (s32) v0;
    goto L_00BD7378;
L_00BD733C:;
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    if (v0 != 0) { v0 = (s32) 0xc3c40000U; goto L_00BD7364; }
    v0 = (s32) 0x43c40000U;
    v0 = v0 | 0x4ccd;
    f0.i = (s32) v0;
    v0 = (s32) 0xc31b0000U; goto L_00BD7370;
L_00BD7364:;
    v0 = v0 | 0x4ccd;
    f0.i = (s32) v0;
    v0 = (s32) 0xc31b0000U;
L_00BD7370:;
    f1.i = (s32) 0;
    f2.i = (s32) v0;
L_00BD7378:;
    v1 = (s32) 0x370000U;
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (v1 + 23344) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    s1 = (s32) ((u32) sp + 0xd0U);
    { u32 a_ = (u32) (v0 + 23360) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    s0 = (s32) ((u32) sp + 0xd8U);
    v1 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (v1 + 23376) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s32) 0x370000U;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (sp + 96) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (sp + 80) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    { u32 a_ = (u32) (v0 + 23392) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 112) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v0 = (s32) 0x3f800000U;
    (*(volatile f32 *) (u32) s1) = f0.f;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0;
    (*(volatile f32 *) (u32) (sp + 212)) = f1.f;
    (*(volatile f32 *) (u32) s0) = f2.f;
    v0 = (*(volatile s32 *) (u32) s2);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    at = a1 < 16385;
    { s32 c_ = at != 0; { u32 a_ = (u32) (sp + 128) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; } if (c_) goto L_00BD7484; }
    at = 0xc000;
    at = a1 < at;
    if (at == 0) goto L_00BD7484;
    a0 = 0xc000; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v0 = (s32) 0xb40b0000U;
    v0 = v0 | 0x40b5;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) 0 - (u32) v0);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
L_00BD7434:;
    v0 = (s32) 0x3c8e0000U;
    a0 = (s32) ((u32) sp + 0xa0U);
    v0 = v0 | 0xfa35;
    a1 = a0;
    f0.i = (s32) v0;
    f12.f = f1.f * f0.f; func_001040A0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) s2);
    f0.f = (*(volatile f32 *) (u32) s1);
    f2.f = (*(volatile f32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) s3);
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (v1 + 108)) = f0.f;
    a0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) s3);
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f0.f = f0.f + f2.f;
    (*(volatile f32 *) (u32) (v1 + 112)) = f0.f; goto L_00BD74C0;
L_00BD7484:;
    a0 = 0xc000; v0 = func_009B3070(a0, a1);
    a0 = v0 & 0xffff;
    v0 = (s32) 0xb40b0000U;
    v0 = v0 | 0x40b5;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) a0 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00BD7434;
L_00BD74C0:;
    return;
}
