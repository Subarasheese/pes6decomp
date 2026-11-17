/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002BB910(f32, f32);
s32 func_00BBCB00(s32, s32, s32, s32);
s32 func_00BBCB50(s32, s32, s32, s32);

s32 func_002BB080(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f20 = { 0 };
    union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_002BB0AC; }
    f0.i = (s32) v0;
    f21.f = (f32) f0.i; goto L_002BB0C4;
L_002BB0AC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f21.f = (f32) f0.i;
    f21.f = f21.f + f21.f;
L_002BB0C4:;
    v0 = (s32) 0x5e0000U;
    f20.f = (*(volatile f32 *) (u32) (v0 + 12196)); v0 = func_00BBCB00(a0, a1, a2, a3);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_002BB0E4; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_002BB0FC;
L_002BB0E4:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_002BB0FC:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc + f21.f * f20.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_002BB130; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xffff; goto L_002BB148;
L_002BB130:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v0;
    a0 = a0 & 0xffff;
L_002BB148:;
    v0 = func_00BBCB50(a0, a1, a2, a3);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 12200));
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 12664)) = (u32) a1;
    a0 = (*(volatile s32 *) (u32) (v0 + 12192));
    v0 = (s32) 0x5e0000U;
    v1 = a0 | 0x8;
    (*(volatile u32 *) (u32) (v0 + 12192)) = (u32) v1; v0 = func_002BB910(f12.f, f13.f);
    v0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 12152));
    v1 = (s32) ((u32) v1 + 0x2f7cU);
    a0 = (s32) ((u32) a0 << 2);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    return v0;
}
