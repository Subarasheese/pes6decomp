/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00904AF0(s32);

s32 func_009192A0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    at = v0 < 8;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_009193AC; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    a0 = (*(volatile u8 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (a0 == v0) { v0 = 0; goto L_009193B0; }
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 7;
    if (v1 != v0) { v0 = 0; goto L_009193B0; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 39;
    if (v1 != v0) goto L_00919354;
    v1 = (*(volatile s32 *) (u32) (s0 + 488));
    if (v1 == 0) goto L_00919354;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00919324; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00919324:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 468));
    at = v0 < 2;
    if (at != 0) goto L_00919354;
    v0 = 0; goto L_009193B0;
L_00919354:;
    a0 = s0; v0 = func_00904AF0(a0);
    if (v0 != 0) { v0 = 0; goto L_009193B0; }
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_009193B0; }
    v1 = (*(volatile u8 *) (u32) (s0 + 477));
    v0 = 45;
    if (v1 == v0) { v0 = 0; goto L_009193B0; }
    v0 = 1; goto L_009193B0;
L_009193AC:;
    v0 = 0;
L_009193B0:;
    return v0;
}
