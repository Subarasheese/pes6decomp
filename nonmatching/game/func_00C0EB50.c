/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_00952A50(s32);
s32 func_009B3070(s32, s32);

s32 func_00C0EB50(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    s2 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 == 0; s1 = a1; if (c_) goto L_00C0EB94; }
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    at = v0 < 2;
    if (at == 0) { a0 = (*(volatile u16 *) (u32) (s2 + 38)); goto L_00C0EB9C; }
    v0 = 1; goto L_00C0ECF0;
L_00C0EB94:;
    v0 = 1; goto L_00C0ECF0;
L_00C0EB9C:;
    v0 = func_009B3070(a0, a1);
    s0 = v0 & 0xffff;
    at = s0 < 12289;
    if (at == 0) { v0 = 1; goto L_00C0ECF0; }
    f1.f = (*(volatile f32 *) (u32) (s2 + 232));
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45c80000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00C0EC20;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00C0EBF0; }
    v0 = -1;
L_00C0EBF0:;
    v0 = (s32) ((u32) v0 << 14);
    a0 = s1;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    a1 = v0 & 0xffff; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 10240;
    if (at == 0) goto L_00C0EC20;
    v0 = 1; goto L_00C0ECF0;
L_00C0EC20:;
    at = s0 < 4097;
    if (at != 0) goto L_00C0EC54;
    s0 = s1 & 0xffff;
    v0 = (s32) ((u32) s0 + 0x2000U);
    a0 = v0 & 0xffff; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 99;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xffffe000U); goto L_00C0ECB8; }
L_00C0EC4C:;
    v0 = 1; goto L_00C0ECF0;
L_00C0EC54:;
    a0 = s2;
    a1 = s1;
    a2 = 8192;
    a3 = (s32) 0x190000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00C0EC94;
    a0 = s2;
    a1 = s1;
    a2 = 8192;
    a3 = (s32) 0x1000000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) goto L_00C0EC94;
    v0 = 1; goto L_00C0ECF0;
L_00C0EC94:;
    a1 = s1;
    a0 = s2;
    a2 = 4096;
    a3 = (s32) 0x900000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (s2 + 38)); goto L_00C0ECD8; }
    v0 = 1; goto L_00C0ECF0;
L_00C0ECB8:;
    a0 = v0 & 0xffff; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 99;
    if (v0 != 0) goto L_00C0EC54;
    goto L_00C0EC4C;
L_00C0ECD8:;
    a0 = s2;
    a2 = 12288;
    a3 = (s32) 0x400000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
L_00C0ECF0:;
    return v0;
}
