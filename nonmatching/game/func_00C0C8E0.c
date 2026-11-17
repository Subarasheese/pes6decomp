/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_00952A50(s32);
s32 func_00962BC0(s32);
s32 func_009B3070(s32, s32);

s32 func_00C0C8E0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    s1 = a0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s0 = a1; if (c_) goto L_00C0C90C; }
    v0 = 0; goto L_00C0CA68;
L_00C0C90C:;
    v0 = func_00962BC0(a0);
    at = v0 < 3;
    if (at == 0) { a0 = s1; goto L_00C0C928; }
    v0 = 0; goto L_00C0CA68;
L_00C0C928:;
    a1 = s0;
    a2 = 12288;
    a3 = (s32) 0x510000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a0 = s1; goto L_00C0C948; }
    v0 = 0; goto L_00C0CA68;
L_00C0C948:;
    a1 = s0;
    a2 = 10752;
    a3 = (s32) 0x1900000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a0 = s0; goto L_00C0C968; }
    v0 = 0; goto L_00C0CA68;
L_00C0C968:;
    v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00C0CA64;
    f0.f = (*(volatile f32 *) (u32) (s1 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46000000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { a1 = (*(volatile u16 *) (u32) (s1 + 42)); goto L_00C0CA04; }
L_00C0C9A0:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) { a0 = s0; goto L_00C0CA24; }
L_00C0C9C0:;
    f1.f = (*(volatile f32 *) (u32) (s1 + 232));
    v0 = (s32) 0xc5a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { a0 = s0; goto L_00C0CA44; }
L_00C0C9E0:;
    a0 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = s0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 2048;
    if (at == 0) goto L_00C0CA64;
    v0 = 1; goto L_00C0CA68;
L_00C0CA04:;
    a0 = s0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00C0C9A0;
    v0 = 0; goto L_00C0CA68;
L_00C0CA24:;
    a1 = 0xc000; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00C0C9C0;
    v0 = 0; goto L_00C0CA68;
L_00C0CA44:;
    a1 = 16384; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00C0C9E0;
    v0 = 0; goto L_00C0CA68;
L_00C0CA64:;
    v0 = 0;
L_00C0CA68:;
    return v0;
}
