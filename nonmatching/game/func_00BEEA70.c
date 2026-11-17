/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

s32 func_00BEEA70(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    f13.i = (s32) 0;
    s2 = a1;
    f12.f = (*(volatile f32 *) (u32) (a0 + 224));
    s0 = a2; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    f0.i = (s32) s0;
    v1 = s2 & 0xffff;
    s0 = v0 & 0xffff;
    a0 = (s32) ((u32) v1 - (u32) s0);
    v0 = (s32) 0x10000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = 0x8001;
    v0 = (s32) 0x43360000U;
    a0 = a0 & 0xffff;
    v0 = v0 | 0xb61;
    s1 = a0 < v1;
    f0.f = (f32) f0.i;
    a0 = s2;
    a1 = s0;
    f1.i = (s32) v0;
    f20.f = f1.f * f0.f; v0 = func_009B3070(a0, a1);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00BEEAF4; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00BEEB0C;
L_00BEEAF4:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00BEEB0C:;
    fcc = f0.f < f20.f;
    if (!fcc) { v1 = 1; goto L_00BEEB20; }
    v0 = s2; goto L_00BEEBAC;
L_00BEEB20:;
    v0 = -1;
    if (s1 != 0) v1 = v0;
    f0.i = (s32) v1;
    { s32 c_ = s0 < 0; f3.f = (f32) f0.i; if (c_) goto L_00BEEB40; }
    f0.i = (s32) s0;
    f2.f = (f32) f0.i; goto L_00BEEB5C;
L_00BEEB40:;
    v1 = (s32) ((u32) s0 >> 1);
    v0 = s0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00BEEB5C:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc - f20.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00BEEB90; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00BEEBA8;
L_00BEEB90:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00BEEBA8:;
    v0 = v1 & 0xffff;
L_00BEEBAC:;
    return v0;
}
