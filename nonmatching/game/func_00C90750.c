/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001EDD00(s64, s64, s64, s64);
void func_001EE630(s64, s64);
void func_001EEAC0(s64, s64);
void func_001EEE60(s64, s64);
void func_001EF370(s64, s64);
void func_001EF860(s64, s64);
void func_001EF900(s64, s64);
s64 func_00C8B100(s64);
s64 func_00C8B140(void);
void memset(s64, s64, s64);

void func_00C90750(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    if (s4 <= 0) goto L_00C908B8;
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -10020));
    if (v1 != 0) goto L_00C908B8;
    v0 = func_00C8B140();
    a0 = (s32) 0xcd0000U;
    s2 = v0;
    a0 = (s32) ((u32) a0 + 0xffffd8d4U);
    a1 = 0;
    a2 = 16; memset(a0, a1, a2);
    v0 = (s32) ((u32) s4 << 1);
    a0 = 1;
    v0 = (s32) ((u32) v0 + (u32) s4);
    a1 = (s32) ((u32) v0 << 2); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) s4 << 2);
    (*(volatile u32 *) (u32) (v1 + -10024)) = (u32) v0;
    a0 = 1; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0xcd0000U;
    s3 = 0;
    { s32 c_ = s4 <= 0; (*(volatile u32 *) (u32) (v1 + -10020)) = (u32) v0; if (c_) goto L_00C908B8; }
    s0 = 0;
L_00C907E8:;
    a0 = s2; v0 = func_001EDD00(a0, a1, a2, a3);
    s1 = v0;
    a1 = (s32) ((u32) sp + 0x80U);
    v0 = (s32) 0xcb0000U;
    a0 = s1;
    f21.f = (*(volatile f32 *) (u32) (v0 + -30136));
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    v0 = (s32) 0xcb0000U;
    f20.f = (*(volatile f32 *) (u32) (v0 + -30132));
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0; func_001EF860(a0, a1);
    v0 = (s32) 0x40000000U;
    a0 = s1;
    f1.i = f21.i ^ (s32) 0x80000000U;
    a1 = (s32) ((u32) sp + 0x70U);
    f2.i = (s32) v0;
    f0.i = f20.i ^ (s32) 0x80000000U;
    f1.f = f1.f / f2.f;
    f0.f = f0.f / f2.f;
    (*(volatile f32 *) (u32) (sp + 120)) = f21.f;
    (*(volatile f32 *) (u32) (sp + 124)) = f20.f;
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f; func_001EF370(a0, a1);
    a0 = 0; v0 = func_00C8B100(a0);
    a1 = v0;
    a0 = s1; func_001EEAC0(a0, a1);
    a1 = (s32) 0xcb0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffff8a38U); func_001EE630(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) gp + 0xffffb534U); func_001EEE60(a0, a1);
    a0 = s1;
    a1 = 0; func_001EF900(a0, a1);
    v1 = (s32) 0xcd0000U;
    s3 = (s32) ((u32) s3 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (v1 + -10020));
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = s3 < s4;
    (*(volatile u32 *) (u32) a0) = (u32) s1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C907E8; }
L_00C908B8:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -10028)) = (u32) s4;
    a0 = -3;
    v1 = (s32) 0xcd0000U;
    a1 = (s64) ((u64) 0 + (u64) (s64) 2);
    a2 = (*(volatile u8 *) (u32) (v1 + -10016));
    a0 = a2 & a0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | a1;
    (*(volatile u8 *) (u32) (v1 + -10016)) = (u8) a0;
    return;
}
