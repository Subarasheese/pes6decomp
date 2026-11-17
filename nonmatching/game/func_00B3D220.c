/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0027D0B0(s32, s32, s32, s32, f32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_009F42B0(s32, s32);
void func_00A08ED0(s32, s32, s32, s32, f32);

s32 func_00B3D220(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 12;
    a2 = (s32) ((u32) sp + 0x40U);
    s2 = a0;
    func_00A08ED0(a0, a1, a2, a3, f12.f);
    f1.f = (*(volatile f32 *) (u32) (s2 + 228));
    f0.i = (s32) 0;
    fcc = f0.f == f1.f;
    if (fcc) { a0 = s2; goto L_00B3D264; }
L_00B3D25C:;
    v0 = 0; goto L_00B3D404;
L_00B3D264:;
    a1 = -160; v0 = func_009F42B0(a0, a1);
    f1.i = (s32) v0;
    f0.f = (*(volatile f32 *) (u32) (sp + 68));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00B3D25C;
    s1 = (*(volatile s32 *) (u32) (s2 + 4));
    f13.f = (*(volatile f32 *) (u32) (s2 + 232));
    f12.i = (s32) 0;
    s0 = (*(volatile u8 *) (u32) (s1 + 45));
    a0 = s2; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = v0 & 0xffff;
    v1 = (s32) 0x10000U;
    v0 = 0x8001;
    a0 = (s32) ((u32) a0 - (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = v1 & 0xffff;
    v0 = v1 < v0;
    if (s0 != v0) { v0 = 0; goto L_00B3D404; }
    v1 = (*(volatile u16 *) (u32) (s1 + 48));
    v0 = 365;
    if (v1 == v0) goto L_00B3D400;
    v0 = 298;
    if (v1 == v0) goto L_00B3D400;
    v0 = 596;
    if (v1 == v0) goto L_00B3D400;
    v0 = 761;
    if (v1 == v0) goto L_00B3D400;
    v0 = 291;
    if (v1 == v0) goto L_00B3D400;
    v0 = 590;
    if (v1 == v0) goto L_00B3D400;
    v0 = 822;
    if (v1 == v0) goto L_00B3D400;
    v0 = 901;
    if (v1 == v0) goto L_00B3D400;
    v1 = (*(volatile u8 *) (u32) (s2 + 22));
    v0 = 79;
    if (v1 == v0) goto L_00B3D400;
    v0 = 17;
    if (v1 == v0) goto L_00B3D400;
    a0 = s2;
    a1 = 16; func_0027D0B0(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    v0 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7788));
    f2.i = (s32) v1;
    v0 = (s32) 0xc6510000U;
    f2.f = (f32) f2.i;
    v0 = v0 | 0xe400;
    f1.f = f2.f * f1.f;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00B3D39C;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    at = v0 < 2049;
    if (at != 0) goto L_00B3D39C;
    v0 = 0; goto L_00B3D404;
L_00B3D39C:;
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (fcc) { v1 = (*(volatile u16 *) (u32) (s2 + 38)); goto L_00B3D3DC; }
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    at = v0 < 20481;
    if (at != 0) goto L_00B3D25C;
    at = 0xb000;
    at = v0 < at;
    if (at == 0) goto L_00B3D25C;
    v0 = 1; goto L_00B3D404;
L_00B3D3DC:;
    v0 = v1 < 12288;
    if (v0 != 0) goto L_00B3D3F8;
    at = 0xd001;
    at = v1 < at;
    if (at != 0) goto L_00B3D25C;
L_00B3D3F8:;
    v0 = 1; goto L_00B3D404;
L_00B3D400:;
    v0 = 0;
L_00B3D404:;
    return v0;
}
