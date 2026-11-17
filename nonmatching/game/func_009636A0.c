/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009909D0(s64, s64);
s64 func_00AFBA70(s64);
s64 func_00BDB8B0(s64);

s64 func_009636A0(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, a1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    a1 = (s32) 0x100000U;
    s3 = a0;
    s1 = 0; v0 = func_009909D0(a0, a1);
    if (v0 == 0) goto L_009636D4;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_009636D4:;
    v0 = (*(s32 *) (u32) (s3 + 500));
    if (v0 != 0) goto L_009636E4;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_009636E4:;
    v0 = (*(s32 *) (u32) (gp + -32252));
    f0.f = (*(f32 *) (u32) (v0 + 16));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x464e0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00963710;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00963710:;
    a0 = (*(u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00963740; }
    a0 = (*(u8 *) (u32) s3); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00963740:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_0096375C:;
    a0 = s2; v0 = func_00BDB8B0(a0);
    if (v0 == 0) goto L_0096378C;
    v1 = (*(s32 *) (u32) (s3 + 276));
    v0 = (*(s32 *) (u32) (s2 + 276));
    v1 = (s32) ((u32) v1 + 0x800U);
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_0096378C;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_009637A0;
L_0096378C:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 11;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_0096375C; }
L_009637A0:;
    v0 = s1;
    return v0;
}
