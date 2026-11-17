/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0098F6C0(s32);
s32 func_009B33A0(s32, s32, s32);
s32 func_009D8B80(s32);
s32 func_00A09950(s32);
s32 func_00AA32C0(s32);

s32 func_00C20350(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    s1 = a1;
    v0 = (*(volatile u8 *) (u32) (a0 + 36));
    { s32 c_ = v0 == 0; s0 = a2; if (c_) goto L_00C2048C; }
L_00C20378:;
    v0 = (*(volatile s32 *) (u32) (s2 + 276));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00C20390; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00C203A8;
L_00C20390:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00C203A8:;
    v0 = (s32) 0x46720000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 1; goto L_00C205E0; }
    if (s0 == 0) { v1 = (*(volatile s16 *) (u32) (s2 + 20)); goto L_00C2041C; }
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    a0 = s2;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0x1000000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00C20468;
    v0 = 0; goto L_00C205E0;
L_00C2041C:;
    v0 = (s32) 0xc6520000U;
    v0 = v0 | 0x6400;
    a0 = s2;
    f0.i = (s32) v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a2 = 0; v0 = func_009B33A0(a0, a1, a2);
    at = (s32) 0xc40000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_00C20468;
    v0 = 0; goto L_00C205E0;
L_00C20468:;
    a0 = s2; v0 = func_00AA32C0(a0);
    s0 = v0;
    at = (s32) 0x1440000U;
    at = s0 < at;
    if (at == 0) { a0 = s2; goto L_00C204A4; }
    v0 = 0; goto L_00C205E0;
L_00C2048C:;
    v0 = func_009D8B80(a0);
    if (v0 == 0) goto L_00C20378;
    v0 = 0; goto L_00C205E0;
L_00C204A4:;
    v0 = func_00A09950(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00C20508; }
L_00C204B4:;
    v0 = (*(volatile s32 *) (u32) (s2 + 276));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00C204CC; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00C204E4;
L_00C204CC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00C204E4:;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s2; goto L_00C20550; }
    v0 = 1; goto L_00C205E0;
L_00C20508:;
    v0 = 11;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 != v0) goto L_00C204B4;
    at = s1 < 4096;
    if (at == 0) goto L_00C204B4;
    v0 = (*(volatile s32 *) (u32) (s2 + 272));
    v0 = (u64) s1 < (u64) v0;
    if (v0 != 0) goto L_00C20548;
    at = (s32) 0x1000000U;
    at = at | 0x1;
    at = s0 < at;
    if (at != 0) goto L_00C204B4;
L_00C20548:;
    v0 = 1; goto L_00C205E0;
L_00C20550:;
    v0 = func_0098F6C0(a0);
    if (v0 == 0) goto L_00C205A4;
    a0 = (*(volatile s16 *) (u32) (s2 + 20));
    v0 = (s32) 0x44800000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.i = (s32) v0;
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s2 + 224));
    acc = f0.f + f1.f;
    f1.i = (s32) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f3.f = (f32) f1.i;
    f1.f = f0.f * f3.f;
    f0.f = acc + f2.f * f3.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00C205A4;
    v0 = 0; goto L_00C205E0;
L_00C205A4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) { a0 = s2; goto L_00C205BC; }
L_00C205B4:;
    v0 = 0; goto L_00C205E0;
L_00C205BC:;
    v0 = func_00A09950(a0);
    if (v0 != 0) goto L_00C205B4;
    v0 = (*(volatile s32 *) (u32) (s2 + 276));
    at = (u64) v0 < (u64) (s64) 4097;
    if (at != 0) goto L_00C205B4;
    v0 = 1;
L_00C205E0:;
    return v0;
}
