/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void func_001EDA30(s32, s32);
void func_001EDA50(s32, s32);
void func_001EDAE0(s32, s32);
s32 func_001EE0D0(s32, s32, s32, s32);
s32 func_0020A550(s32, s32, s32, s32);
void func_002E3800(s32, s32);
void func_002E3AD0(s32, s32, s32, s32);

s32 func_002E3460(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    { s32 c_ = s3 != 0; s1 = a3; if (c_) goto L_002E3498; }
    v0 = 0; goto L_002E3634;
L_002E3498:;
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    if (s0 > 0) { a0 = 1; goto L_002E34AC; }
    v0 = 0; goto L_002E3634;
L_002E34AC:;
    a1 = 40; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) s0;
    a0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0; v0 = func_0020A550(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; v0 = func_001EE0D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    f0.f = (*(volatile f32 *) (u32) s3);
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 4));
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x60U); func_001EDA50(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001EDAE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001EDA30(a0, a1);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) s4;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0x36c0U);
    v0 = (s32) ((u32) v0 + 0x36c4U);
    (*(volatile f32 *) (u32) (s0 + 12)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 12));
    (*(volatile f32 *) (u32) (s0 + 16)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) v1);
    (*(volatile f32 *) (u32) (s0 + 20)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    (*(volatile f32 *) (u32) (s0 + 24)) = f0.f;
    (*(volatile u16 *) (u32) (s0 + 28)) = (u16) s2;
    (*(volatile u16 *) (u32) (s0 + 30)) = (u16) s1;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = 20; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    v0 = (*(volatile s16 *) (u32) (s0 + 30));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_002E3630; }
    v1 = (*(volatile s16 *) (u32) (s0 + 28));
L_002E3590:;
    { s32 c_ = v1 <= 0; s1 = 0; if (c_) goto L_002E3608; }
L_002E3598:;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a1 = s0;
    a0 = (s32) ((u32) s1 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1); func_002E3AD0(a0, a1, a2, a3);
    v1 = (*(volatile s16 *) (u32) (s0 + 28));
    a1 = (s32) ((u32) sp + 0x60U);
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    { s64 m_ = (s64) (s32) s2 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a0 = (s32) ((u32) s1 + (u32) v1);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v0 + (u32) v1); func_002E3800(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (s0 + 12));
    s1 = (s32) ((u32) s1 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 96)) = f0.f;
    v1 = (*(volatile s16 *) (u32) (s0 + 28));
    v0 = s1 < v1;
    if (v0 != 0) goto L_002E3598;
L_002E3608:;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    f1.f = (*(volatile f32 *) (u32) (s0 + 16));
    s2 = (s32) ((u32) s2 + 0x1U);
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    v0 = (*(volatile s16 *) (u32) (s0 + 30));
    v0 = s2 < v0;
    if (v0 != 0) { v1 = (*(volatile s16 *) (u32) (s0 + 28)); goto L_002E3590; }
L_002E3630:;
    v0 = s0;
L_002E3634:;
    return v0;
}
