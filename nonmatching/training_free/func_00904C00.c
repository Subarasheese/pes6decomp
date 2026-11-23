/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00AFBAB0(s32, s32, s32, s32);
s32 func_00BDB8B0(s32, s32, s32, s32);

s32 func_00904C00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s3 = a1;
    s1 = 0;
    s0 = a0; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00904C4C; }
    a0 = s0; v0 = func_00AFBAB0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00904C4C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00904C68:;
    a0 = s0; v0 = func_00BDB8B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00904CD8;
    if (s3 == 0) goto L_00904CC0;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 144));
    f0.f = f0.f - f1.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45800000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00904CD8;
L_00904CC0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 16));
    at = v0 < 10;
    if (at == 0) goto L_00904CD8;
    s1 = (s32) ((u32) s1 + 0x1U);
L_00904CD8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 10;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_00904C68; }
    v0 = s1 & 0xff;
    return v0;
}
