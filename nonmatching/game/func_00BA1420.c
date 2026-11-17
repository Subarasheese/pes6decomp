/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103D80(s32, s32, s32, f32);
void func_001A5520(void);
void func_001A55F0(void);
void func_001A5670(f32);
s32 func_001CDAA0(void);

void func_00BA1420(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { 0 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = func_001CDAA0();
    v1 = 1;
    if (v0 != v1) { s1 = 120; goto L_00BA1454; }
    s1 = 100;
L_00BA1454:;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -12224));
    v0 = (u64) v1 < (u64) s1;
    if (v0 != 0) { v1 = (s32) ((u32) v1 + 0x1U); goto L_00BA15E4; }
L_00BA1468:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -12224));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BA1484; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00BA149C;
L_00BA1484:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BA149C:;
    if (s1 < 0) { v1 = (s32) ((u32) s1 >> 1); goto L_00BA14B0; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_00BA14C8;
L_00BA14B0:;
    v0 = s1 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BA14C8:;
    f20.f = f1.f / f0.f;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -12216));
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v0;
    f2.f = (*(volatile f32 *) (u32) (v1 + 8));
    f1.f = f0.f - f20.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 36));
    acc = f0.f * f20.f;
    f12.f = acc + f2.f * f1.f; func_001A5670(f12.f);
    v0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) sp + 0x80U);
    v0 = (*(volatile s32 *) (u32) (v0 + -12216));
    s0 = (s32) ((u32) sp + 0x84U);
    s4 = (s32) ((u32) sp + 0x88U);
    s3 = (s32) ((u32) sp + 0x74U);
    s2 = (s32) ((u32) sp + 0x78U);
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = a0;
    f12.i = f20.i;
    f0.f = (*(volatile f32 *) (u32) (v0 + 12));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 16));
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 20));
    (*(volatile f32 *) (u32) s4) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 40));
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 44));
    (*(volatile f32 *) (u32) s3) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 48));
    (*(volatile f32 *) (u32) s2) = f0.f; func_00103D80(a0, a1, a2, f12.f);
    f13.f = (*(volatile f32 *) (u32) s0);
    f14.f = (*(volatile f32 *) (u32) s4);
    f12.f = (*(volatile f32 *) (u32) (sp + 128)); func_001A55F0();
    v0 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) sp + 0x80U);
    v0 = (*(volatile s32 *) (u32) (v0 + -12216));
    f12.i = f20.i;
    a1 = (s32) ((u32) sp + 0x70U);
    a2 = a0;
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 28));
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 32));
    (*(volatile f32 *) (u32) s4) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 52));
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 56));
    (*(volatile f32 *) (u32) s3) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 60));
    (*(volatile f32 *) (u32) s2) = f0.f; func_00103D80(a0, a1, a2, f12.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 128));
    f14.f = (*(volatile f32 *) (u32) s4);
    f13.f = (*(volatile f32 *) (u32) s0); func_001A5520();
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12220));
    v0 = (*(volatile s32 *) (u32) (v0 + -12224));
    v1 = (s32) ((u32) s1 - (u32) v1);
    v0 = (u64) v0 < (u64) v1;
    v0 = v0 ^ 0x1; goto L_00BA15F0;
L_00BA15E4:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u32 *) (u32) (v0 + -12224)) = (u32) v1; goto L_00BA1468;
L_00BA15F0:;
    return;
}
