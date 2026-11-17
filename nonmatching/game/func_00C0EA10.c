/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952A50(s32);
s32 func_009B3070(s32, s32);
s32 func_009B32D0(s32, s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

s32 func_00C0EA10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    f13.i = (s32) 0;
    f12.f = (*(volatile f32 *) (u32) (a0 + 224));
    s1 = a0; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s0 = v0 & 0xffff;
    a0 = s0; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 99;
    if (v0 != 0) { a0 = (*(volatile u16 *) (u32) (s1 + 38)); goto L_00C0EA58; }
    v0 = 0; goto L_00C0EB30;
L_00C0EA58:;
    a1 = s0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 10241;
    if (at != 0) { v0 = 0; goto L_00C0EB30; }
    f0.f = (*(volatile f32 *) (u32) (s1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45120000U;
    v0 = v0 | 0x8000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00C0EB30; }
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46260000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = (*(volatile u16 *) (u32) (s1 + 280)); goto L_00C0EAC0; }
    v0 = 0; goto L_00C0EB30;
L_00C0EAC0:;
    a1 = s0;
    s2 = (*(volatile u16 *) (u32) (s1 + 42));
    a2 = 8192; v0 = func_009B32D0(a0, a1, a2);
    a0 = s0; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 85;
    if (v0 != 0) { a0 = s0; goto L_00C0EAF0; }
L_00C0EAE8:;
    v0 = 0; goto L_00C0EB30;
L_00C0EAF0:;
    v0 = func_00952A50(a0);
    a0 = s2;
    s0 = v0 & 0xff; v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    at = s0 < v0;
    if (at == 0) goto L_00C0EAE8;
    a0 = (*(volatile u16 *) (u32) (s1 + 280)); v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    at = v0 < 50;
    if (at == 0) goto L_00C0EAE8;
    v0 = 1;
L_00C0EB30:;
    return v0;
}
