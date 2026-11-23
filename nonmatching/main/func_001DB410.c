/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001EB1D0(s64, s64, s64, s64);
s64 func_001EC0F0(void);
void func_001EC4C0(s64, s64, s64);
s64 func_001EC540(s64, s64, s64, s64);

s64 func_001DB410(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    a0 = 1;
    a1 = 48;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) goto L_001DB43C;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 45)) = (u8) v0;
L_001DB43C:;
    v1 = (s32) ((u32) sp + 0x20U);
    { s32 c_ = v1 == 0; v0 = 16; if (c_) goto L_001DB464; }
L_001DB448:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_001DB448;
L_001DB464:;
    if (s0 == 0) goto L_001DB4DC;
    v0 = (s32) ((u32) sp + 0x20U);
    if (v0 == 0) goto L_001DB4DC;
    f1.f = (*(volatile f32 *) (u32) (s0 + 16));
    f0.f = (*(volatile f32 *) (u32) (sp + 32));
    fcc = f1.f == f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (s0 + 20)); goto L_001DB4A4; }
L_001DB48C:;
    { u32 a_ = (u32) (sp + 32) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 47));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 47)) = (u8) v0; goto L_001DB4DC;
L_001DB4A4:;
    f0.f = (*(volatile f32 *) (u32) (sp + 36));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001DB48C;
    f1.f = (*(volatile f32 *) (u32) (s0 + 24));
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001DB48C;
    f1.f = (*(volatile f32 *) (u32) (s0 + 28));
    f0.f = (*(volatile f32 *) (u32) (sp + 44));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001DB48C;
L_001DB4DC:;
    v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 46)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) v0;
    a2 = (s32) 0x1e0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffffb050U); func_001EC4C0(a0, a1, a2);
    v0 = 255;
    a1 = (s32) 0x1e0000U;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 47)) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0xffffb970U); v0 = func_001EB1D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0;
    v0 = s0;
    return v0;
}
