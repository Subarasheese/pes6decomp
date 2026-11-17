/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_00990590(s32, s32, s32, s32, s32);

s32 func_00993DF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    v0 = a1 & 0xff;
    if (v0 == 0) goto L_00993E20;
    at = v0 < 23;
    if (at == 0) goto L_00993E20;
    v0 = 0; goto L_00993FC4;
L_00993E20:;
    a2 = (*(volatile s16 *) (u32) (a0 + 20));
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 18));
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v0 = 1;
    f0.i = (s32) a2;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) v1);
    { s32 c_ = v1 == v0; f20.f = (f32) f0.i; if (c_) goto L_00993EDC; }
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    v1 = (s32) 0x45d20000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    f1.f = f1.f * f20.f;
    fcc = f1.f < f0.f;
    if (fcc) { v0 = 0; goto L_00993FC4; }
    v1 = (s32) 0x590000U;
    a1 = 32767;
    v1 = (*(volatile s32 *) (u32) (v1 + 7984));
    if (v1 == a1) goto L_00993EE4;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x46520000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00993EE4;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7988));
    f0.f = (f32) f0.i;
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x44f50000U;
    v1 = v1 | 0x6000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00993EE4;
    goto L_00993FC8;
L_00993EDC:;
    v0 = 0; goto L_00993FC4;
L_00993EE4:;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { a1 = (*(volatile u16 *) (u32) (a0 + 288)); goto L_00993F04; }
    v0 = 0; goto L_00993FC4;
L_00993F04:;
    a2 = 4096;
    a3 = (*(volatile s32 *) (u32) (a0 + 292));
    a4 = 2; v0 = func_00990590(a0, a1, a2, a3, a4);
    if (v0 == 0) { a0 = 224; goto L_00993F24; }
    v0 = 0; goto L_00993FC4;
L_00993F24:;
    s1 = 0; v0 = func_002AE670(a0);
    at = 0 < v0;
    if (at == 0) goto L_00993FC0;
    s0 = 0;
L_00993F3C:;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    v0 = (s32) ((u32) a0 + (u32) s0);
    f1.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f1.f = f1.f * f20.f;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_00993F68; }
    v1 = 0;
L_00993F68:;
    v0 = v1 ^ 0x1;
    if (v0 != 0) { a0 = 224; goto L_00993FA8; }
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x44f50000U;
    v0 = v0 | 0x6000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00993FC0;
    v0 = 1; goto L_00993FC4;
L_00993FA8:;
    s0 = (s32) ((u32) s0 + 0x4U);
    s1 = (s32) ((u32) s1 + 0x1U); v0 = func_002AE670(a0);
    v0 = s1 < v0;
    if (v0 != 0) goto L_00993F3C;
L_00993FC0:;
    v0 = 0;
L_00993FC4:;
L_00993FC8:;
    return v0;
}
