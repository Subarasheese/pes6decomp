/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B32D0(s32, s32, s32);
s32 func_00BBB9C0(s32, s32);

s32 func_00B183E0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s1 = a0;
    s0 = a1;
    a1 = 896; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00B18428; }
L_00B18428:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = s1; goto L_00B184A4; }
    v0 = s1 & 0xffff;
    at = v0 < 16385;
    if (at != 0) goto L_00B1848C;
    at = 0xc000;
    at = v0 < at;
    if (at == 0) goto L_00B1848C;
    a1 = s1;
    a2 = s0;
    a0 = 0x8000; v0 = func_009B32D0(a0, a1, a2);
    s1 = v0 & 0xffff;
L_00B18484:;
    v0 = s1; goto L_00B1855C;
L_00B1848C:;
    a1 = s1;
    a2 = s0;
    a0 = 0; v0 = func_009B32D0(a0, a1, a2);
    s1 = v0 & 0xffff; goto L_00B18484;
L_00B184A4:;
    a1 = 1280; v0 = func_00BBB9C0(a0, a1);
    f0.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f1.f = (f32) f0.i;
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f0.f = f0.f + f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00B184D4; }
L_00B184D4:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00B18484;
    v0 = s1 & 0xffff;
    at = v0 < 16385;
    if (at != 0) goto L_00B1853C;
    at = 0xc000;
    at = v0 < at;
    if (at == 0) goto L_00B1853C;
    v0 = s0 & 0xffff;
    a1 = s1;
    v0 = (s32) ((u32) v0 >> 1);
    a0 = 0x8000;
    a2 = v0 & 0xffff; v0 = func_009B32D0(a0, a1, a2);
    s1 = v0 & 0xffff; goto L_00B18484;
L_00B1853C:;
    v0 = s0 & 0xffff;
    a1 = s1;
    v0 = (s32) ((u32) v0 >> 1);
    a0 = 0;
    a2 = v0 & 0xffff; v0 = func_009B32D0(a0, a1, a2);
    s1 = v0 & 0xffff; goto L_00B18484;
L_00B1855C:;
    return v0;
}
