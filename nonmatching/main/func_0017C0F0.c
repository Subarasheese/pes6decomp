/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103F50(s32, s32, s32, f32);
void func_00103FF8(s32, s32, s32, f32);
void func_001040A0(s32, s32, s32, f32);
void func_0012BE80(s32, s32);
void func_00132500(s32, s32, s32, s32, f32, f32);
void func_0017C2C0(s32, s32, s32, s32);
s32 func_0017E140(void);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_0017C0F0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = func_0017E140();
    if (v0 == 0) goto L_0017C290;
    s0 = (s32) 0x510000U;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xff0U);
L_0017C124:;
    s1 = (*(volatile s32 *) (u32) s0);
    if (s1 == 0) goto L_0017C1F8;
L_0017C130:;
    v1 = (*(volatile s8 *) (u32) s1);
    if (v1 == 0) goto L_0017C1E8;
    v0 = (*(volatile s8 *) (u32) (s1 + 10));
    if (v0 != 0) goto L_0017C210;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.i = (s32) 0;
    fcc = f1.f == f0.f;
    if (!fcc) goto L_0017C228;
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    fcc = f1.f == f0.f;
    if (!fcc) goto L_0017C228;
    f12.f = (*(volatile f32 *) (u32) (s1 + 228));
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) s1 + 0x50U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_001040A0(a0, a1, a2, f12.f);
L_0017C188:;
    v1 = (s32) 0x3f800000U;
    f0.f = (*(volatile f32 *) (u32) (s1 + 208));
    (*(volatile f32 *) (u32) (s1 + 128)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 212));
    (*(volatile f32 *) (u32) (s1 + 132)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 216));
    (*(volatile f32 *) (u32) (s1 + 136)) = f0.f;
    (*(volatile u32 *) (u32) (s1 + 140)) = (u32) v1;
    s4 = (*(volatile s32 *) (u32) (s1 + 44));
    if (s4 == 0) goto L_0017C1E8;
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
    if (v1 == 0) goto L_0017C1E8;
    s3 = (*(volatile s32 *) (u32) (s1 + 36));
    (*(volatile u32 *) (u32) (s1 + 40)) = (u32) s3;
    a0 = (*(volatile s32 *) (u32) (s3 + 4)); func_00132500(a0, a1, a2, a3, f12.f, f13.f);
    a1 = (*(volatile s32 *) (u32) (s4 + 4));
    a2 = (*(volatile s32 *) (u32) s4);
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a0 = (*(volatile s32 *) (u32) (s3 + 4)); func_0017C2C0(a0, a1, a2, a3);
L_0017C1E8:;
    s1 = (*(volatile s32 *) (u32) (s1 + 304));
    if (s1 != 0) goto L_0017C130;
L_0017C1F8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 4;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0017C124; }
    goto L_0017C290;
L_0017C210:;
    a0 = (s32) ((u32) s1 + 0x50U);
    a1 = (s32) ((u32) s1 + 0x40U); func_0012BE80(a0, a1);
    goto L_0017C188;
L_0017C228:;
    a1 = (s32) 0x370000U;
    f12.f = (*(volatile f32 *) (u32) (s1 + 228));
    a0 = (s32) ((u32) s1 + 0x50U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_001040A0(a0, a1, a2, f12.f);
    f12.f = (*(volatile f32 *) (u32) (s1 + 224));
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_00103FF8(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) s1 + 0x50U);
    a2 = (s32) ((u32) sp + 0x60U);
    a1 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    f12.f = (*(volatile f32 *) (u32) (s1 + 232));
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_00103F50(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) s1 + 0x50U);
    a2 = (s32) ((u32) sp + 0x60U);
    a1 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    goto L_0017C188;
L_0017C290:;
    return;
}
