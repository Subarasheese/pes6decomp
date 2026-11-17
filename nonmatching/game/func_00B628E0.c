/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_00B2A420(s32);
void func_00B67B80(s32, s32, s32, s32, f32, f32);
s32 func_00B67E00(s32, s32);
s32 func_00BA8B40(s32, s32);
s32 func_00BBB8C0(s32);

s32 func_00B628E0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcc0000U;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + -11671)); v0 = func_00B2A420(a0);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9084));
    if (v1 != 0) { v0 = 0; goto L_00B62B84; }
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) (a0 + 224));
    f3.f = (*(volatile f32 *) (u32) (a1 + 224));
    f1.f = (*(volatile f32 *) (u32) (a1 + 232));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x400000U;
    at = at | 0x1;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < at;
    if (at == 0) goto L_00B62ABC;
    v1 = (*(volatile u8 *) (u32) (a1 + 19));
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    if (v1 != v0) goto L_00B62ABC;
    a0 = s0; func_00B67B80(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    a0 = (*(volatile u16 *) (u32) (v0 + 40)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16;
    if (at == 0) { v0 = 0; goto L_00B62B84; }
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    at = v0 < 2049;
    if (at != 0) { a0 = 3; goto L_00B62A1C; }
    a0 = 3; v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B629D0;
    v1 = 1;
    if (v0 == v1) { s1 = 26; goto L_00B629D4; }
    if (v0 == 0) { s1 = 25; goto L_00B629D4; }
L_00B629D0:;
    s1 = 37;
L_00B629D4:;
    a0 = s0;
    a1 = s1; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) goto L_00B62A7C;
    a0 = s1;
    a1 = 0; v0 = func_00B67E00(a0, a1);
    if (v0 != 0) goto L_00B62A7C;
    a0 = 15; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s1;
L_00B62A14:;
    v0 = 1; goto L_00B62B84;
L_00B62A1C:;
    v0 = func_00BBB8C0(a0);
    v1 = 2;
    if (v0 == v1) goto L_00B62A44;
    v1 = 1;
    if (v0 == v1) { s1 = 30; goto L_00B62A48; }
    if (v0 == 0) { s1 = 18; goto L_00B62A48; }
L_00B62A44:;
    s1 = 7;
L_00B62A48:;
    a0 = s1;
    a1 = 0; v0 = func_00B67E00(a0, a1);
    if (v0 != 0) { a0 = 15; goto L_00B62A9C; }
    a0 = 15; v0 = func_00BBB8C0(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u8 *) (u32) (v1 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) s1;
L_00B62A74:;
    v0 = 1; goto L_00B62B84;
L_00B62A7C:;
    a0 = 15; v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 51;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B62A14;
L_00B62A9C:;
    v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 53;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B62A74;
L_00B62ABC:;
    a0 = s0; func_00B67B80(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = (*(volatile u16 *) (u32) (v0 + 38));
    a0 = (*(volatile u16 *) (u32) (v0 + 40)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 512;
    if (at == 0) goto L_00B62B64;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    at = v0 < 2049;
    if (at != 0) goto L_00B62B64;
    a0 = s0;
    a1 = 37; v0 = func_00BA8B40(a0, a1);
    if (v0 == 0) goto L_00B62B44;
    a0 = 37;
    a1 = 0; v0 = func_00B67E00(a0, a1);
    if (v0 != 0) goto L_00B62B44;
    a0 = 15; v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 37;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1;
L_00B62B3C:;
    v0 = 1; goto L_00B62B84;
L_00B62B44:;
    a0 = 15; v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 51;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B62B3C;
L_00B62B64:;
    a0 = 15; v0 = func_00BBB8C0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 53;
    (*(volatile u8 *) (u32) (a0 + 78)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 76)) = (u8) v1; goto L_00B62B3C;
L_00B62B84:;
    return v0;
}
