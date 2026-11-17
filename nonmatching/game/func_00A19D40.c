/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s64 func_00208310(s64);
s64 func_00930080(s64, s64, s64, s64, f32, f32);
s64 func_009B30B0(s64, s64);
s64 func_009B34C0(s64, s64, s64, s64, f32, f32, f32, f32);
void func_009B36C0(s64, s64, s64, s64, s64, f32);
s64 func_009F4B70(s64, s64, f32);

s64 func_00A19D40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    f32 acc = 0;

    s5 = a4;
    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    a0 = s3;
    f20.i = f12.i;
    a1 = s2; v0 = func_009F4B70(a0, a1, f12.f);
    s6 = v0;
    v1 = s3 & 0xffff;
    v0 = 684;
    if (v1 == v0) { s0 = 4096; goto L_00A19DB4; }
    v0 = 179;
    if (v1 == v0) { s0 = 4096; goto L_00A19DB4; }
    s0 = 3584;
L_00A19DB4:;
    v0 = 236;
    if (v1 == v0) goto L_00A19DD4;
    v0 = 203;
    if (v1 == v0) goto L_00A19DD4;
    s7 = (s64) ((u64) 0 + (u64) (s64) 49); goto L_00A19DD8;
L_00A19DD4:;
    s7 = (s64) ((u64) 0 + (u64) (s64) 96);
L_00A19DD8:;
    a0 = s3 & 0xffff; v0 = func_00208310(a0);
    a4 = s5;
    a0 = s4;
    a1 = s3;
    a2 = 0;
    a3 = s1; func_009B36C0(a0, a1, a2, a3, a4, f12.f);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f13.f = (*(volatile f32 *) (u32) (v0 + 7796));
    s6 = (s32) ((u32) s6 << 2);
    v0 = (s32) ((u32) s6 + (u32) a0);
    f14.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f15.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f12.f = (*(volatile f32 *) (u32) (v1 + 7788)); v0 = func_009B34C0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    s5 = v0 & 0xffff;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7796));
    f2.f = (*(volatile f32 *) (u32) (v1 + 7788));
    v0 = (s32) ((u32) s6 + (u32) a0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f0.f = f0.f - f1.f;
    f2.f = f2.f - f3.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    a1 = s3;
    a0 = s4;
    a2 = 0;
    s3 = f0.i;
    f13.i = f20.i;
    f0.i = (s32) s2;
    f12.f = (f32) f0.i; v0 = func_00930080(a0, a1, a2, a3, f12.f, f13.f);
    f1.i = (s32) s3;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7148));
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    f1.f = (f32) f1.i;
    a1 = (*(volatile u16 *) (u32) (s4 + 40));
    v1 = (s32) 0x43800000U;
    f2.f = f1.f * f0.f;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f0.f = (f32) f0.i;
    f1.f = f1.f * f2.f;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    s2 = f0.i;
    v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 32;
    if (at == 0) goto L_00A19F0C;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    at = v0 < 5633;
    if (at == 0) goto L_00A19F04;
    at = v0 < 4609;
    if (at != 0) goto L_00A19F0C;
    v0 = (s32) ((u32) v0 + 0xfffffe00U);
    at = v0 < s2;
    if (at == 0) goto L_00A19F0C;
L_00A19F04:;
    v0 = 1; goto L_00A19FAC;
L_00A19F0C:;
    a1 = (*(volatile u16 *) (u32) (s4 + 40));
    a0 = (*(volatile u16 *) (u32) (s4 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 66;
    if (at == 0) { v0 = 0; goto L_00A19FAC; }
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    v0 = (s32) ((u32) v0 + 0x400U);
    at = v0 < s0;
    if (at == 0) { a0 = (*(volatile u16 *) (u32) (s4 + 38)); goto L_00A19F44; }
    v0 = 0; goto L_00A19FAC;
L_00A19F44:;
    a1 = s1;
    s3 = s7 & 0xffff; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = s3 < v0;
    if (at == 0) { a0 = (*(volatile u16 *) (u32) (s4 + 38)); goto L_00A19F68; }
    v0 = 0; goto L_00A19FAC;
L_00A19F68:;
    a1 = s5; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = s3 < v0;
    if (at == 0) { a0 = (*(volatile u16 *) (u32) (s4 + 40)); goto L_00A19F88; }
    v0 = 0; goto L_00A19FAC;
L_00A19F88:;
    a1 = s5; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 41;
    if (at != 0) { v0 = s2 < s0; goto L_00A19FA8; }
    v0 = 0; goto L_00A19FAC;
L_00A19FA8:;
    v0 = v0 ^ 0x1;
L_00A19FAC:;
    return v0;
}
