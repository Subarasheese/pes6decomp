/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Random_Below(s64);
void func_001CEA10(s64, s64, s64, s64);
void func_001CEC70(void);
void func_001CECC0(s64);
void func_001D3FF0(s64, s64, s64, s64);

void func_0018EA60(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    f1.i = (s32) 0;
    s1 = a0;
    f0.f = (*(volatile f32 *) (u32) (a0 + 1088));
    fcc = f1.f == f0.f;
    { s32 c_ = fcc; s0 = (s32) ((u32) s1 + 0x440U); if (c_) goto L_0018EBE4; }
    a0 = 500; v0 = Pes6Random_Below(a0);
    v1 = v0 & 0xffff;
    v0 = (*(volatile u8 *) (u32) (s0 + 6));
    { s32 c_ = v0 == 0; v1 = (s32) ((u32) v1 + 0x64U); if (c_) goto L_0018EAD8; }
    v0 = (*(volatile s16 *) (u32) (s0 + 4));
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v0;
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    at = v1 < 1001;
    if (at != 0) goto L_0018EB08;
    v0 = 2000;
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v0;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) 0; goto L_0018EB08;
L_0018EAD8:;
    v0 = (s64) ((u64) v1 << 48);
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (s0 + 4));
    if (v0 >= 0) goto L_0018EB08;
    v1 = (s32) ((u32) 0 - (u32) v0);
    v0 = 1;
    (*(volatile u16 *) (u32) (s0 + 4)) = (u16) v1;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) v0;
L_0018EB08:;
    a0 = 568; func_001CECC0(a0);
    a0 = (*(volatile s16 *) (u32) (s0 + 4));
    v0 = (s32) 0x3da90000U;
    v0 = v0 | 0xfbe7;
    v1 = 250;
    f0.i = (s32) v0;
    v0 = 170;
    f1.i = (s32) a0;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s0 + 7));
    if (v0 != 0) { a0 = 11002; goto L_0018EB74; }
    a0 = 11002;
    a1 = a0; func_001CEA10(a0, a1, a2, a3);
    v0 = 1; goto L_0018EB80;
L_0018EB74:;
    a1 = 11003; func_001CEA10(a0, a1, a2, a3);
    v0 = 1;
L_0018EB80:;
    a1 = (s32) ((u32) sp + 0x3cU);
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x5cU);
    f3.f = (*(volatile f32 *) (u32) (s1 + 4));
    v0 = (s32) 0x41700000U;
    f2.f = (*(volatile f32 *) (u32) (s1 + 8));
    a0 = (s32) ((u32) sp + 0x30U);
    f1.f = (*(volatile f32 *) (u32) (s1 + 12));
    f0.i = (s32) v0;
    v0 = (s32) 0x390000U;
    v0 = (s32) ((u32) v0 + 0x7600U);
    (*(volatile f32 *) (u32) (sp + 48)) = f3.f;
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    f2.f = (*(volatile f32 *) (u32) (s1 + 28));
    f1.f = (*(volatile f32 *) (u32) s0);
    f1.f = f2.f * f1.f;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    f0.f = f0.f * f1.f;
    (*(volatile f32 *) (u32) a1) = f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f; func_001D3FF0(a0, a1, a2, a3);
    func_001CEC70();
L_0018EBE4:;
    return;
}
