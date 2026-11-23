/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
void Pes6Heap_Free(s64);
void func_0011D310(s64, f32);

void func_00261150(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_a0 = 0;
    u64 qh_a2 = 0;
    s64 hi1 = 0, lo1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    volatile union { f32 f; s32 i; } f23 = { 0 };
    s64 hi = 0, lo = 0;
    s64 frame[34];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -11436));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11434));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + -11400)) = (u32) v0;
    s2 = v0;
    v0 = (*(volatile s32 *) (u32) (v1 + -11480));
    f20.i = (s32) 0;
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) 0;
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x3f800000U;
    f2.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (v1 + -11408));
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -11404));
    f21.f = f2.f / f1.f;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11434));
    at = 0 < v0;
    f22.f = f2.f / f0.f;
    f0.i = (s32) f21.f;
    v1 = f0.i;
    a0 = (s64) ((u64) v1 << 48);
    f0.i = (s32) f22.f;
    a0 = a0 >> 48;
    v1 = f0.i;
    v1 = (s64) ((u64) v1 << 48);
    { s32 c_ = at == 0; v1 = v1 >> 48; if (c_) goto L_002612B8; }
    s1 = (s64) ((u64) a0 << 48);
    s0 = (s64) ((u64) v1 << 48);
    s1 = s1 >> 48;
    s0 = s0 >> 48;
    v0 = (s32) ((u32) s1 + 0xfffffff8U);
    (*(volatile u32 *) (u32) (sp + 224)) = (u32) v0;
    v0 = (s32) 0x80000000U;
    fp = s1 & v0;
L_00261240:;
    f12.i = f20.i;
    a0 = (s32) ((u32) sp + 0x10cU); func_0011D310(a0, f12.f);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -11444));
    f23.i = (s32) 0;
    v0 = (s32) ((u32) sp + 0x10cU);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.i = (s32) f0.f;
    v0 = f0.i;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (*(volatile s16 *) (u32) (v0 + -11436));
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s7 = (s32) ((u32) v0 + (u32) a0);
    v0 = 0 < v1;
    { s32 c_ = v0 != 0; s3 = 0; if (c_) goto L_002612D8; }
L_00261290:;
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) v0;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v0 + -11434));
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    v0 = v0 < v1;
    { s32 c_ = v0 != 0; f20.f = f20.f + f22.f; if (c_) goto L_00261240; }
L_002612B8:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11480)); Pes6Heap_Free(a0);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -11400));
    (*(volatile u32 *) (u32) (v1 + -11480)) = (u32) a0; goto L_00261628;
L_002612D8:;
    f12.i = f23.i;
    a0 = (s32) ((u32) sp + 0x108U); func_0011D310(a0, f12.f);
    at = 0 < s0;
    a6 = 0;
    v0 = 0;
    v1 = 0;
    a1 = 0;
    s4 = 0;
    { s32 c_ = at == 0; s5 = 0; if (c_) goto L_002615B8; }
    a0 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (sp + 264));
    a0 = (*(volatile s16 *) (u32) (a0 + -11444));
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    f0.i = (s32) f0.f;
    a0 = (*(volatile s16 *) (u32) (a2 + -11444));
    t8 = f0.i;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
L_00261328:;
    at = 0 < s1;
    { s32 c_ = at == 0; s6 = 0; if (c_) goto L_002615A8; }
    at = s1 < 9;
    if (at != 0) goto L_00261548;
    at = s1 < 0;
    a2 = 0;
    { s32 c_ = at != 0; a0 = 0; if (c_) goto L_00261618; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s1 < at;
    if (at == 0) goto L_00261618;
    a0 = 1; goto L_00261618;
L_00261370:;
    { s32 c_ = fp != 0; a0 = 1; if (c_) goto L_00261388; }
    if (fp == 0) goto L_00261388;
    a0 = 0;
L_00261388:;
    if (a0 == 0) goto L_00261398;
    a2 = 1;
L_00261398:;
    if (a2 == 0) goto L_00261548;
    { u32 a_ = (u32) (sp + 192) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    t9 = t8;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) s5; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a0 = (s32) ((u32) a0 << 2);
    t7 = (s32) ((u32) s7 + (u32) a0);
L_002613B8:;
    a0 = (s32) ((u32) t9 << 2);
    a0 = (s32) ((u32) t7 + (u32) a0);
    a2 = (s32) ((u32) s6 + 0x1U);
    t5 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) ((u32) t8 + (u32) a2);
    t4 = (*(volatile u8 *) (u32) (a0 + 1));
    a2 = (s32) ((u32) a2 << 2);
    a5 = (*(volatile u8 *) (u32) (a0 + 2));
    a3 = (s32) ((u32) t7 + (u32) a2);
    a4 = (*(volatile u8 *) (u32) (a0 + 3));
    s4 = (s32) ((u32) s4 + 0x8U);
    a2 = (*(volatile u8 *) (u32) a3);
    t9 = (s32) ((u32) t9 + 0x8U);
    a1 = (s32) ((u32) a1 + (u32) t5);
    v1 = (s32) ((u32) v1 + (u32) t4);
    a5 = (s32) ((u32) v0 + (u32) a5);
    t4 = (*(volatile u8 *) (u32) (a3 + 2));
    a0 = (s32) ((u32) s6 + 0x2U);
    v0 = (*(volatile u8 *) (u32) (a3 + 3));
    a0 = (s32) ((u32) t8 + (u32) a0);
    a2 = (s32) ((u32) a1 + (u32) a2);
    a7 = (s32) ((u32) a0 << 2);
    a0 = (*(volatile u8 *) (u32) (a3 + 1));
    a7 = (s32) ((u32) t7 + (u32) a7);
    a1 = (*(volatile u8 *) (u32) (a7 + 1));
    a5 = (s32) ((u32) a5 + (u32) t4);
    a3 = (s32) ((u32) a6 + (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a4 = (*(volatile u8 *) (u32) a7);
    a3 = (s32) ((u32) a3 + (u32) v0);
    a6 = (*(volatile u8 *) (u32) (a7 + 2));
    a0 = (*(volatile u8 *) (u32) (a7 + 3));
    a2 = (s32) ((u32) a2 + (u32) a4);
    a5 = (s32) ((u32) a5 + (u32) a6);
    a7 = (s32) ((u32) s6 + 0x3U);
    a0 = (s32) ((u32) a3 + (u32) a0);
    a7 = (s32) ((u32) t8 + (u32) a7);
    v0 = (s32) ((u32) a7 << 2);
    a4 = (s32) ((u32) t7 + (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) a1);
    a6 = (*(volatile u8 *) (u32) (a4 + 2));
    v1 = (*(volatile u8 *) (u32) a4);
    a1 = (*(volatile u8 *) (u32) (a4 + 1));
    a3 = (*(volatile u8 *) (u32) (a4 + 3));
    t4 = (s32) ((u32) a5 + (u32) a6);
    t6 = (s32) ((u32) a2 + (u32) v1);
    t5 = (s32) ((u32) v0 + (u32) a1);
    a4 = (s32) ((u32) s6 + 0x4U);
    a7 = (s32) ((u32) t8 + (u32) a4);
    a4 = (s32) ((u32) s6 + 0x5U);
    a7 = (s32) ((u32) a7 << 2);
    v1 = (s32) ((u32) t7 + (u32) a7);
    a4 = (s32) ((u32) t8 + (u32) a4);
    v0 = (s32) ((u32) a4 << 2);
    a7 = (s32) ((u32) a0 + (u32) a3);
    a2 = (s32) ((u32) t7 + (u32) v0);
    a6 = (*(volatile u8 *) (u32) v1);
    a5 = (*(volatile u8 *) (u32) (v1 + 1));
    v0 = (s32) ((u32) s6 + 0x6U);
    a4 = (*(volatile u8 *) (u32) (v1 + 2));
    v0 = (s32) ((u32) t8 + (u32) v0);
    a3 = (*(volatile u8 *) (u32) (v1 + 3));
    v0 = (s32) ((u32) v0 << 2);
    a1 = (*(volatile u8 *) (u32) a2);
    a0 = (*(volatile u8 *) (u32) (a2 + 1));
    a6 = (s32) ((u32) t6 + (u32) a6);
    a5 = (s32) ((u32) t5 + (u32) a5);
    a4 = (s32) ((u32) t4 + (u32) a4);
    v1 = (s32) ((u32) t7 + (u32) v0);
    v0 = (s32) ((u32) s6 + 0x7U);
    a6 = (s32) ((u32) a6 + (u32) a1);
    v0 = (s32) ((u32) t8 + (u32) v0);
    a0 = (s32) ((u32) a5 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    a5 = (*(volatile u8 *) (u32) (v1 + 1));
    t4 = (s32) ((u32) t7 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) (a2 + 3));
    v0 = (s32) ((u32) a7 + (u32) a3);
    s6 = (s32) ((u32) s6 + 0x8U);
    a3 = (*(volatile u8 *) (u32) (a2 + 2));
    a7 = (*(volatile u8 *) (u32) v1);
    a5 = (s32) ((u32) a0 + (u32) a5);
    t5 = (s32) ((u32) v0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) (t4 + 3));
    v0 = (*(volatile u8 *) (u32) (t4 + 1));
    a2 = (*(volatile u8 *) (u32) (v1 + 2));
    a3 = (s32) ((u32) a4 + (u32) a3);
    a1 = (s32) ((u32) a6 + (u32) a7);
    a4 = (*(volatile u8 *) (u32) t4);
    a6 = (*(volatile u8 *) (u32) (t4 + 2));
    v1 = (*(volatile u8 *) (u32) (v1 + 3));
    a3 = (s32) ((u32) a3 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) (sp + 224));
    a1 = (s32) ((u32) a1 + (u32) a4);
    a7 = (s32) ((u32) t5 + (u32) v1);
    v1 = (s32) ((u32) a5 + (u32) v0);
    a2 = s6 < a2;
    v0 = (s32) ((u32) a3 + (u32) a6);
    { s32 c_ = a2 != 0; a6 = (s32) ((u32) a7 + (u32) a0); if (c_) goto L_002613B8; }
L_00261548:;
    at = s6 < s1;
    if (at == 0) goto L_002615A8;
    { u32 a_ = (u32) (sp + 176) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) t8 + (u32) s6);
    { s64 m_ = (s64) (s32) a2 * (s64) (s32) s5; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a2 = (s32) ((u32) a2 << 2);
    t4 = (s32) ((u32) s7 + (u32) a2);
L_00261568:;
    a2 = (s32) ((u32) a0 << 2);
    a3 = (s32) ((u32) t4 + (u32) a2);
    s6 = (s32) ((u32) s6 + 0x1U);
    a7 = (*(volatile u8 *) (u32) a3);
    a2 = s6 < s1;
    a5 = (*(volatile u8 *) (u32) (a3 + 1));
    s4 = (s32) ((u32) s4 + 0x1U);
    a4 = (*(volatile u8 *) (u32) (a3 + 2));
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) ((u32) a1 + (u32) a7);
    v1 = (s32) ((u32) v1 + (u32) a5);
    a3 = (*(volatile u8 *) (u32) (a3 + 3));
    v0 = (s32) ((u32) v0 + (u32) a4);
    { s32 c_ = a2 != 0; a6 = (s32) ((u32) a6 + (u32) a3); if (c_) goto L_00261568; }
L_002615A8:;
    s5 = (s32) ((u32) s5 + 0x1U);
    a0 = s5 < s0;
    if (a0 != 0) goto L_00261328;
L_002615B8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    if ((s32) s4 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) s4); hi = (s32) ((s32) a1 % (s32) s4); lo = q_; }
    f23.f = f23.f + f21.f;
    a0 = lo;
    if ((s32) s4 != 0) { s32 q_ = (s32) ((s32) v1 / (s32) s4); hi1 = (s32) ((s32) v1 % (s32) s4); lo1 = q_; }
    (*(volatile u8 *) (u32) s2) = (u8) a0;
    v1 = lo1;
    if ((s32) s4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) s4); hi = (s32) ((s32) v0 % (s32) s4); lo = q_; }
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) v1;
    v0 = lo;
    if ((s32) s4 != 0) { s32 q_ = (s32) ((s32) a6 / (s32) s4); hi1 = (s32) ((s32) a6 % (s32) s4); lo1 = q_; }
    (*(volatile u8 *) (u32) (s2 + 2)) = (u8) v0;
    v0 = (s32) 0x590000U;
    v1 = lo1;
    (*(volatile u8 *) (u32) (s2 + 3)) = (u8) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + -11436));
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002612D8; }
    goto L_00261290;
L_00261618:;
    if (a0 == 0) goto L_00261398;
    goto L_00261370;
L_00261628:;
    return;
}
