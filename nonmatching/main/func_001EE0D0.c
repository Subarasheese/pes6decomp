/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_001EB1D0(s64, s64, s64, s64);
s64 func_001EC0F0(void);
s64 func_001EC4C0(s64, s64, s64);
s64 func_001EC540(s64, s64, s64, s64);

s64 func_001EE0D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, s0 = 0;
    u64 qh_v0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    a0 = 1;
    a1 = 64;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s0 = v0;
    if (s0 == 0) goto L_001EE0FC;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 56)) = (u8) v0;
L_001EE0FC:;
    if (s0 == 0) goto L_001EE190;
    v0 = (s32) 0x530000U;
    v0 = (s32) ((u32) v0 + 0xffffb200U);
    if (v0 == 0) goto L_001EE190;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 32));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19968));
    fcc = f1.f == f0.f;
    if (fcc) goto L_001EE148;
L_001EE12C:;
    v0 = (s32) 0x530000U;
    { u32 a_ = (u32) (v0 + -19968) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = (*(volatile u8 *) (u32) (s0 + 58));
    v0 = v0 | 0x1;
    (*(volatile u8 *) (u32) (s0 + 58)) = (u8) v0; goto L_001EE190;
L_001EE148:;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 36));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19964));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EE12C;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 40));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19960));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EE12C;
    v0 = (s32) 0x530000U;
    f1.f = (*(volatile f32 *) (u32) (s0 + 44));
    f0.f = (*(volatile f32 *) (u32) (v0 + -19956));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_001EE12C;
L_001EE190:;
    if (s0 == 0) goto L_001EE19C;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
L_001EE19C:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) 0; v0 = func_001EC0F0();
    (*(volatile u8 *) (u32) (s0 + 57)) = (u8) v0; v0 = func_001EC540(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    a2 = (s32) 0x1f0000U;
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffffcaa0U); v0 = func_001EC4C0(a0, a1, a2);
    v0 = 255;
    a1 = (s32) 0x1f0000U;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 58)) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0xfffffb90U); v0 = func_001EB1D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
    v0 = s0;
    return v0;
}
