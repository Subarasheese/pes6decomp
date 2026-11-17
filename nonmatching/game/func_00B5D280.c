/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_Update(f32, f32, f32, f32, f32, f32, f32, f32);
void func_00209A00(s32, s32, s32);
s32 func_002DCA30(void);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
void func_009E1CB0(s32, s32, s32, s32);
void func_009E1D30(s32, s32);
void func_00AD0A20(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00AFBFD0(f32, f32, f32, f32);
void func_00B4A160(s32, s32, s32, s32, f32, f32);
void func_00B52D70(s32, s32, s32, s32);
void func_00B5BC40(s32, s32, s32, s32, f32, f32);
void func_00B5DBD0(void);
void func_00BBB960(s32);
s32 func_00BF6270(void);
void func_00C1AD80(s32, s32, s32, s32, f32, f32);

void func_00B5D280(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 hi = 0, lo = 0;

    v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00B5D2BC; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00B5D2BC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_002DCA30();
    if (v0 == 0) goto L_00B5D3D0;
    v0 = (s32) 0x8b0000U;
    s1 = (s32) 0x8b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 5212));
    s1 = (s32) ((u32) s1 + 0x1180U); func_00BBB960(a0);
    s3 = (s32) 0x590000U;
    s2 = 0;
    s3 = (s32) ((u32) s3 + 0xffffe5b0U);
L_00B5D300:;
    a0 = (*(volatile s16 *) (u32) s1);
    v0 = (s32) 0x43800000U;
    f2.i = (s32) v0;
    v1 = (*(volatile s16 *) (u32) (s1 + 2));
    v0 = (s32) 0x42c80000U;
    f1.i = (s32) v0;
    f0.i = (s32) a0;
    v0 = (*(volatile u8 *) (u32) (s1 + 12));
    f0.f = (f32) f0.i;
    v0 = (s32) ((u32) v0 << 8);
    f0.f = f2.f * f0.f;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (s3 + 224)) = f0.f;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f2.f * f0.f;
    f0.f = f0.f / f1.f;
    (*(volatile f32 *) (u32) (s3 + 232)) = f0.f;
    { s32 c_ = s3 == s0; (*(volatile u16 *) (u32) (s3 + 38)) = (u16) v0; if (c_) goto L_00B5D4C0; }
L_00B5D358:;
    if (s2 != 0) goto L_00B5D3B8;
    f3.f = (*(volatile f32 *) (u32) (s3 + 224));
    f2.f = (*(volatile f32 *) (u32) (s0 + 224));
    f1.f = (*(volatile f32 *) (u32) (s3 + 232));
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x20000U;
    at = at | 0x4001;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < at;
    if (at == 0) goto L_00B5D3B8;
    a0 = (*(volatile s32 *) (u32) (s3 + 4));
    a1 = 1161;
    a2 = 0; func_00209A00(a0, a1, a2);
L_00B5D3B8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 23;
    s3 = (s32) ((u32) s3 + 0x240U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1aU); if (c_) goto L_00B5D300; }
L_00B5D3D0:;
    v0 = func_00BF6270();
    v1 = 255;
    if (v0 != v1) goto L_00B5D4D8;
L_00B5D3E4:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -13514));
    if (v0 == 0) { a0 = 3; goto L_00B5D4E8; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9084));
    if (v0 != 0) { v1 = 1; goto L_00B5D4F8; }
    func_00B52D70(a0, a1, a2, a3);
    func_00B4A160(a0, a1, a2, a3, f12.f, f13.f);
    func_00C1AD80(a0, a1, a2, a3, f12.f, f13.f);
    func_00B5BC40(a0, a1, a2, a3, f12.f, f13.f);
    func_00B5DBD0();
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -13516));
    v0 = v0 & 0x400;
    if (v0 == 0) goto L_00B5D4B0;
    v0 = (s32) 0xcc0000U;
    v1 = 27;
    v0 = (*(volatile u8 *) (u32) (v0 + -13513));
    if (v0 == v1) goto L_00B5D4B0;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -13507));
    at = 0 < v0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_00B5D4B0; }
L_00B5D468:;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -13516));
    v0 = v0 & 0x2;
    if (v0 != 0) goto L_00B5D490;
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
L_00B5D490:;
    func_00AFBFD0(f12.f, f13.f, f14.f, f15.f);
    v0 = (s32) 0xcc0000U;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (*(volatile u8 *) (u32) (v0 + -13507));
    v0 = s0 < v0;
    if (v0 != 0) goto L_00B5D468;
L_00B5D4B0:;
    a0 = 3; func_009E1CB0(a0, a1, a2, a3);
L_00B5D4B8:;
    goto L_00B5D51C;
L_00B5D4C0:;
    f12.i = (s32) 0;
    a0 = s3;
    f13.i = f12.i; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s3 + 38)) = (u16) v0; goto L_00B5D358;
L_00B5D4D8:;
    v0 = func_00BF6270();
    goto L_00B5D3E4;
L_00B5D4E8:;
    a1 = 5; func_009E1D30(a0, a1);
    goto L_00B5D4B8;
L_00B5D4F8:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12831)) = (u8) v1;
    a0 = 3;
    v0 = (s32) 0xcc0000U;
    a1 = 5;
    (*(volatile u8 *) (u32) (v0 + -13514)) = (u8) 0; func_009E1D30(a0, a1);
    goto L_00B5D4B8;
L_00B5D51C:;
    return;
}
