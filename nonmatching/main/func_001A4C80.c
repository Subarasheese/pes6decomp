/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103FF8(s32, s32, s32, f32);
void func_001040A0(s32, s32, s32, f32);
f32 func_0011D238(f32);
void func_001A5320(void);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_001A4C80(s32 a0, s32 a1, s32 a2, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xbfc90000U;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    f21.i = f12.i;
    fcc = f21.f < f0.f;
    if (fcc) goto L_001A4D6C;
    v0 = (s32) 0x3fc90000U;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    fcc = f21.f <= f0.f;
    if (fcc) goto L_001A4CC8;
    f21.i = f0.i;
L_001A4CC8:;
    v0 = (s32) 0xc0490000U;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    fcc = f13.f < f0.f;
    if (fcc) goto L_001A4D74;
    v0 = (s32) 0x40490000U;
    v0 = v0 | 0xfdb;
    f0.i = (s32) v0;
    fcc = f13.f <= f0.f;
    if (!fcc) goto L_001A4D74;
L_001A4D00:;
    v1 = (s32) 0x520000U;
    v0 = (s32) 0x520000U;
    a1 = (s32) 0x370000U;
    a0 = (s32) ((u32) sp + 0x60U);
    (*(volatile f32 *) (u32) (v0 + 1492)) = f13.f;
    a1 = (s32) ((u32) a1 + 0x5b30U);
    (*(volatile f32 *) (u32) (v1 + 1488)) = f21.f;
    f12.i = f21.i; func_00103FF8(a0, a1, a2, f12.f);
    v0 = (s32) 0x520000U;
    a1 = (s32) 0x370000U;
    f12.f = (*(volatile f32 *) (u32) (v0 + 1492));
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) ((u32) a1 + 0x5b30U); func_001040A0(a0, a1, a2, f12.f);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (s32) ((u32) sp + 0x20U);
    a2 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 132));
    f14.f = (*(volatile f32 *) (u32) (sp + 136));
    f12.f = (*(volatile f32 *) (u32) (sp + 128)); func_001A5320();
    v1 = (*(volatile s32 *) (u32) (gp + -23264));
    v1 = v1 | 0x6;
    (*(volatile u32 *) (u32) (gp + -23264)) = (u32) v1; goto L_001A4DE0;
L_001A4D6C:;
    f21.i = f0.i; goto L_001A4CC8;
L_001A4D74:;
    v0 = (s32) 0x3e220000U;
    v0 = v0 | 0xf983;
    f0.i = (s32) v0;
    f20.f = f0.f * f13.f;
    f12.i = f20.i; f0.f = func_0011D238(f12.f);
    f20.f = f20.f - f0.f;
    v0 = (s32) 0x3f000000U;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) goto L_001A4DBC;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f20.f = f20.f - f0.f;
L_001A4DBC:;
    v0 = (s32) 0x40000000U;
    v1 = (s32) 0x40490000U;
    f0.i = (s32) v0;
    v1 = v1 | 0xfdb;
    f1.i = (s32) v1;
    f0.f = f0.f * f20.f;
    f13.f = f1.f * f0.f; goto L_001A4D00;
L_001A4DE0:;
    return;
}
