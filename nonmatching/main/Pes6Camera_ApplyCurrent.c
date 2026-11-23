/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Camera_SetMatrix(s32);
void func_00129DD0(s32);
void func_00129E50(void);
void func_00129E70(void);
void func_00129EB0(void);

void Pes6Camera_ApplyCurrent(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 1376));
    if (v1 == 0) goto L_001A3A70;
    v0 = (s32) 0x520000U;
    s0 = (*(volatile s32 *) (u32) (v0 + 948));
    f12.f = (*(volatile f32 *) (u32) s0); func_00129E70();
    f12.f = (*(volatile f32 *) (u32) (s0 + 4)); func_00129E50();
    f12.f = (*(volatile f32 *) (u32) (s0 + 8)); func_00129EB0();
    a0 = (s32) ((u32) s0 + 0x10U); func_00129DD0(a0);
    a0 = (s32) ((u32) s0 + 0x70U); Pes6Camera_SetMatrix(a0);
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 1380));
    if (v1 == 0) goto L_001A3A38;
    f2.f = (*(volatile f32 *) (u32) (s0 + 96));
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (fcc) { v1 = (s32) 0x3fc90000U; goto L_001A3A44; }
    v1 = (s32) 0x3f490000U;
    v1 = v1 | 0xfdb;
    f0.i = (s32) v1;
    fcc = f2.f < f0.f;
    if (fcc) goto L_001A39E0;
    v1 = (s32) 0x3f800000U;
    f3.i = (s32) v1;
    v1 = (s32) 0x42200000U; goto L_001A39F0;
L_001A39E0:;
    f3.f = f2.f / f0.f;
    v1 = (s32) 0x42200000U;
L_001A39F0:;
    a0 = (s32) 0x3f800000U;
    f2.i = (s32) v1;
    f1.i = (s32) a0;
    v1 = (s32) 0x42b40000U;
    f0.i = (s32) v1;
    f1.f = f1.f - f3.f;
    acc = f0.f * f3.f;
    f2.f = acc + f2.f * f1.f;
L_001A3A14:;
    f1.f = (*(volatile f32 *) (u32) s0);
    v1 = (s32) 0x520000U;
    f0.f = (*(volatile f32 *) (u32) (s0 + 8));
    f1.f = f1.f + f2.f;
    f0.f = f1.f / f0.f;
    (*(volatile f32 *) (u32) (v1 + 1384)) = f0.f; goto L_001A3A70;
L_001A3A38:;
    v1 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v1 + 1384)) = (u32) 0; goto L_001A3A70;
L_001A3A44:;
    a0 = (s32) 0x3f800000U;
    a1 = v1 | 0xfdb;
    f1.i = (s32) a1;
    v1 = (s32) 0x42200000U;
    f0.i = (s32) a0;
    f1.f = f2.f / f1.f;
    f1.f = f0.f + f1.f;
    f0.i = (s32) v1;
    f2.f = f0.f * f1.f; goto L_001A3A14;
L_001A3A70:;
    return;
}
