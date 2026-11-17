/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
void Pes6Heap_Free(s64, s64);
void func_0014AD10(s64, s64, s64, s64);
void func_00151080(s64, s64);

void func_001DC1C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x530000U;
    v1 = a2 & 0xffff;
    s7 = a0;
    s2 = a1 & 0xffff;
    s3 = (*(volatile s32 *) (u32) (v0 + -21528));
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    a1 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s4 = v0;
L_001DC20C:;
    s1 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile u8 *) (u32) (s1 + 9));
    a1 = (*(volatile u8 *) (u32) (s1 + 8));
    s0 = (*(volatile u16 *) (u32) (s1 + 4));
    v0 = (s64) ((u64) v0 << 32);
    v0 = v0 >> 32;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = hi;
    v0 = v0 >> 32;
    { u64 s_ = (u64) v1, t_ = (u64) a0; v1 = (s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32)); qh_v1 = (t_ >> 32) | ((s_ >> 32) << 32); }
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); v0 = lo1; }
    v0 = (s64) ((u64) v0 << 32);
    v0 = (s64) ((u64) v0 + (u64) v1);
    (*(volatile u64 *) (u32) (sp + 152)) = (u64) v0;
    a0 = (*(volatile s32 *) (u32) (sp + 152));
    s6 = (*(volatile s32 *) (u32) (s1 + 12));
    a1 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s5 = v0;
    a0 = s6;
    a2 = s0;
    a1 = s5;
    a3 = (s32) ((u32) sp + 0x98U); func_0014AD10(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    t4 = (*(volatile u16 *) (u32) (s3 + 10));
    v1 = (*(volatile s32 *) (u32) (v0 + -21548));
    a3 = s5;
    a0 = (*(volatile u8 *) (u32) (s1 + 9));
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 256;
    v1 = (*(volatile u16 *) (u32) (v1 + 12));
    { s32 c_ = v1 != v0; a0 = (s32) ((u32) t4 + (u32) a0); if (c_) goto L_001DC308; }
    at = t4 < a0;
    if (at == 0) goto L_001DC4B0;
    { s64 m_ = (s64) (s32) t4 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
L_001DC2A8:;
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    v1 = (*(volatile u16 *) (u32) (s3 + 8));
    a1 = (s32) ((u32) s4 + (u32) a2);
    a4 = 0;
    at = 0 < v0;
    { s32 c_ = at == 0; v1 = (s32) ((u32) a1 + (u32) v1); if (c_) goto L_001DC2F0; }
L_001DC2C8:;
    v0 = (*(volatile s8 *) (u32) a3);
    if (v0 != 0) { (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_001DC2D8; }
L_001DC2D8:;
    v0 = (*(volatile u8 *) (u32) (s1 + 8));
    a4 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a4 < v0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x1U); if (c_) goto L_001DC2C8; }
L_001DC2F0:;
    t4 = (s32) ((u32) t4 + 0x1U);
    v0 = t4 < a0;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + (u32) s2); if (c_) goto L_001DC2A8; }
    goto L_001DC4B0;
L_001DC308:;
    v0 = (*(volatile u16 *) (u32) (s3 + 8));
    at = t4 < a0;
    a5 = 0;
    a4 = s5;
    { s32 c_ = at == 0; a6 = v0 & 0x1; if (c_) goto L_001DC4B0; }
    { s64 m_ = (s64) (s32) t4 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v0 = 1;
L_001DC328:;
    t6 = (*(volatile u16 *) (u32) (s3 + 8));
    t5 = (*(volatile u8 *) (u32) (s1 + 6));
    v1 = (s32) ((u32) s4 + (u32) a3);
    a7 = 0;
    a1 = a6;
    a2 = 0;
    t6 = (s32) ((u32) t6 >> 1);
    at = 0 < t5;
    { s32 c_ = at == 0; v1 = (s32) ((u32) v1 + (u32) t6); if (c_) goto L_001DC498; }
L_001DC350:;
    if (a7 == v0) goto L_001DC390;
    if (a7 == 0) goto L_001DC368;
    goto L_001DC3B0;
L_001DC368:;
    { s32 c_ = a2 >= 0; a5 = (s32) a2 >> 1; if (c_) goto L_001DC378; }
    a5 = (s32) ((u32) a2 + 0x1U);
    a5 = (s32) a5 >> 1;
L_001DC378:;
    a5 = (s32) ((u32) a4 + (u32) a5);
    a5 = (*(volatile u8 *) (u32) a5);
    a5 = (s32) a5 >> 4;
    a5 = a5 & 0xff; goto L_001DC3B0;
L_001DC390:;
    { s32 c_ = a2 >= 0; a5 = (s32) a2 >> 1; if (c_) goto L_001DC3A0; }
    a5 = (s32) ((u32) a2 + 0x1U);
    a5 = (s32) a5 >> 1;
L_001DC3A0:;
    a5 = (s32) ((u32) a4 + (u32) a5);
    a5 = (*(volatile u8 *) (u32) a5);
    a5 = a5 & 0xf;
L_001DC3B0:;
    if (a5 == 0) goto L_001DC480;
    if (a7 != a1) goto L_001DC420;
    { s32 c_ = a2 >= 0; t5 = (s32) a2 >> 1; if (c_) goto L_001DC3D0; }
    t5 = (s32) ((u32) a2 + 0x1U);
    t5 = (s32) t5 >> 1;
L_001DC3D0:;
    if (a7 == v0) goto L_001DC400;
    if (a7 == 0) goto L_001DC3E8;
    goto L_001DC480;
L_001DC3E8:;
    t6 = (s32) ((u32) v1 + (u32) t5);
    t5 = (*(volatile u8 *) (u32) t6);
    t5 = t5 | a5;
    (*(volatile u8 *) (u32) t6) = (u8) t5; goto L_001DC480;
L_001DC400:;
    t6 = (s32) ((u32) v1 + (u32) t5);
    t5 = (*(volatile u8 *) (u32) t6);
    t7 = a5 & 0xff;
    t7 = (s32) ((u32) t7 << 4);
    t7 = t7 & 0xff;
    t5 = t5 | t7;
    (*(volatile u8 *) (u32) t6) = (u8) t5; goto L_001DC480;
L_001DC420:;
    t6 = (s32) ((u32) a2 + 0x1U);
    { s32 c_ = t6 >= 0; t5 = (s32) t6 >> 1; if (c_) goto L_001DC434; }
    t5 = (s32) ((u32) t6 + 0x1U);
    t5 = (s32) t5 >> 1;
L_001DC434:;
    if (a7 == v0) goto L_001DC470;
    if (a7 == 0) goto L_001DC450;
    goto L_001DC480;
L_001DC450:;
    t6 = (s32) ((u32) v1 + (u32) t5);
    t5 = (*(volatile u8 *) (u32) t6);
    t7 = a5 & 0xff;
    t7 = (s32) ((u32) t7 << 4);
    t7 = t7 & 0xff;
    t5 = t5 | t7;
    (*(volatile u8 *) (u32) t6) = (u8) t5; goto L_001DC480;
L_001DC470:;
    t6 = (s32) ((u32) v1 + (u32) t5);
    t5 = (*(volatile u8 *) (u32) t6);
    t5 = t5 | a5;
    (*(volatile u8 *) (u32) t6) = (u8) t5;
L_001DC480:;
    t5 = (*(volatile u8 *) (u32) (s1 + 6));
    a2 = (s32) ((u32) a2 + 0x1U);
    a7 = a7 ^ 0x1;
    t5 = a2 < t5;
    { s32 c_ = t5 != 0; a1 = a1 ^ 0x1; if (c_) goto L_001DC350; }
L_001DC498:;
    a1 = (*(volatile u8 *) (u32) (s1 + 8));
    t4 = (s32) ((u32) t4 + 0x1U);
    a3 = (s32) ((u32) a3 + (u32) s2);
    v1 = t4 < a0;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + (u32) a1); if (c_) goto L_001DC328; }
L_001DC4B0:;
    a0 = s5; Pes6Heap_Free(a0, a1);
    s3 = (*(volatile s32 *) (u32) (s3 + 12));
    if (s3 != 0) goto L_001DC20C;
    a0 = s7;
    a1 = s4; func_00151080(a0, a1);
    a0 = s4; Pes6Heap_Free(a0, a1);
    return;
}
