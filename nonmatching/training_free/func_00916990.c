/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009041F0(s64, s64, s64, s64);
s64 func_009051D0(s64, s64);
s64 func_00A07B40(s64, s64, s64, s64);

s64 func_00916990(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_009169C4; }
    v0 = 0;
L_009169B0:;
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = s0; goto L_00916A00; }
    v0 = 0; goto L_00916AF8;
L_009169C4:;
    v0 = func_00A07B40(a0, a1, a2, a3);
    if (v0 != 0) goto L_009169DC;
    v0 = 0; goto L_009169B0;
L_009169DC:;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 21192));
    v0 = (*(volatile u8 *) (u32) (v0 + 9964));
    at = v1 < v0;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_009169B0; }
    v0 = 0; goto L_009169B0;
L_00916A00:;
    v0 = func_009041F0(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = 0; goto L_00916AF8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    a1 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a1) { v0 = 0; goto L_00916AF8; }
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e80U);
    f1.f = (*(volatile f32 *) (u32) (s0 + 224));
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f0.f = f1.f - f0.f;
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45000000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00916AF4;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 24));
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00916A8C;
    a1 = -1;
L_00916A8C:;
    f2.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) 0;
    fcc = f2.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00916AA8; }
    v0 = -1;
L_00916AA8:;
    if (v0 != a1) goto L_00916AF4;
    f2.i = f2.i & 0x7FFFFFFF;
    f0.i = f1.i & 0x7FFFFFFF;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00916AF4;
    v0 = (*(volatile u8 *) (u32) (s0 + 477));
    a0 = a0 & 0xff;
    a1 = 25;
    v0 = v0 ^ 0x19;
    s0 = (u64) v0 < (u64) (s64) 1; v0 = func_009051D0(a0, a1);
    v1 = s0 & 0xff;
    at = v1 < v0;
    if (at != 0) goto L_00916AF4;
    v0 = 1; goto L_00916AF8;
L_00916AF4:;
    v0 = 0;
L_00916AF8:;
    return v0;
}
