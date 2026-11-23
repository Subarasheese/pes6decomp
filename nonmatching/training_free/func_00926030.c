/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
void func_00B798F0(s32, s32, s32, s32);

s32 func_00926030(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) sp + 0x28U);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x2cU); func_00B798F0(a0, a1, a2, a3);
    v1 = s0 & 0xff;
    if (v1 == 0) { f1.f = (*(volatile f32 *) (u32) (sp + 44)); goto L_00926154; }
L_00926060:;
    v0 = 1;
    if (v1 != v0) goto L_0092608C;
    f1.f = (*(volatile f32 *) (u32) (sp + 44));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0092608C;
    v0 = 0; goto L_009261E4;
L_0092608C:;
    f4.f = (*(volatile f32 *) (u32) (sp + 44));
    f0.i = (s32) 0;
    fcc = f4.f < f0.f;
    if (!fcc) { v0 = 1; goto L_009260A8; }
    v0 = -1;
L_009260A8:;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 40));
    f3.f = (f32) f1.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f1.i = (s32) 0;
    f2.i = (s32) v0;
    f0.f = f0.f - f1.f;
    acc = f1.f + f4.f;
    f2.f = acc - f2.f * f3.f;
    acc = f0.f * f0.f;
    f12.f = acc + f2.f * f2.f; f0.f = func_001CD9E0();
    f1.i = (s32) f0.f;
    v0 = (s32) 0x43800000U;
    f2.f = (f32) f1.i;
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 44));
    f1.f = f2.f / f1.f;
    f1.i = (s32) f1.f;
    v1 = f1.i;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 2; goto L_009261E4; }
    at = v1 < 26;
    if (at != 0) { f0.f = (*(volatile f32 *) (u32) (sp + 40)); goto L_00926170; }
L_00926128:;
    at = v1 < 31;
    if (at != 0) { f0.f = (*(volatile f32 *) (u32) (sp + 40)); goto L_00926198; }
L_00926134:;
    at = v1 < 45;
    if (at != 0) { f0.f = (*(volatile f32 *) (u32) (sp + 40)); goto L_009261C0; }
L_00926140:;
    at = v1 < 47;
    if (at == 0) { v0 = 1; goto L_009261E4; }
    v0 = 2; goto L_009261E4;
L_00926154:;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00926060;
    v0 = 0; goto L_009261E4;
L_00926170:;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45810000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00926128;
    v0 = 5; goto L_009261E4;
L_00926198:;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00926134;
    v0 = 4; goto L_009261E4;
L_009261C0:;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45e10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00926140;
    v0 = 3;
L_009261E4:;
    return v0;
}
