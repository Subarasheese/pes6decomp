/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00948F20(s64, s64, s64, s64, s64, s64, f32, f32);
s64 func_00952A50(s64);
s64 func_009595A0(s64, s64);
s64 func_009598D0(s64);
s64 func_00959C00(s64, f32, f32);
s64 func_0095A220(s64, f32, f32);
s64 func_0095A660(s64, f32, f32);
s64 func_00961C80(s64, s64, s64, s64);
s64 func_00967760(s64);
s64 func_009B3070(s64, s64);
s64 func_00BBB8C0(s64);
s64 func_00C04E00(s64, s64);

s64 func_0095BCD0(s64 a0, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    s1 = a0;
    v0 = func_00967760(a0);
    v1 = (*(u8 *) (u32) (s1 + 22));
    a1 = v0 & 0xffff;
    v0 = 14;
    if (v1 == v0) { v0 = (*(s32 *) (u32) (gp + -32252)); goto L_0095BD34; }
L_0095BCFC:;
    v1 = (*(u8 *) (u32) (s1 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) goto L_0095BD54;
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) goto L_0095BD54;
    v0 = 0; goto L_0095C064;
L_0095BD34:;
    a0 = (*(u16 *) (u32) (v0 + 92)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12289;
    if (at != 0) goto L_0095BCFC;
    v0 = 0; goto L_0095C064;
L_0095BD54:;
    a0 = s1; v0 = func_0095A660(a0, f12.f, f13.f);
    if (v0 != 0) { a0 = s1; goto L_0095BEF4; }
    a0 = s1; v0 = func_0095A220(a0, f12.f, f13.f);
    if (v0 != 0) { a0 = s1; goto L_0095BF04; }
    a0 = s1; v0 = func_00959C00(a0, f12.f, f13.f);
    if (v0 != 0) { a0 = s1; goto L_0095BF14; }
    a0 = s1; v0 = func_00967760(a0);
    a1 = (*(s32 *) (u32) (gp + -32252));
    a0 = v0 & 0xffff;
    v0 = 5;
    v1 = (*(u16 *) (u32) (a1 + 132));
    if (v1 != v0) goto L_0095BEA8;
    f0.f = (*(f32 *) (u32) (s1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45890000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0095BEA8;
    v1 = (*(s16 *) (u32) (s1 + 20));
    v0 = (s32) 0x46100000U;
    v0 = v0 | 0x6400;
    f1.f = (*(f32 *) (u32) (s1 + 224));
    f0.i = (s32) v0;
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0095BEA8;
    v0 = (*(s32 *) (u32) (s1 + 272));
    at = (s32) 0x20000U;
    at = at | 0x4001;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_0095BEA8;
    a1 = (*(u16 *) (u32) (a1 + 92)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) goto L_0095BEA8;
    a0 = 18; v0 = func_00BBB8C0(a0);
    a2 = (*(u8 *) (u32) (s1 + 18));
    s0 = v0;
    a0 = (s32) 0x590000U;
    v1 = (*(u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) (v0 + 129));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 2; if (c_) goto L_0095BE94; }
    v0 = (s32) ((u32) v0 + 0x3U);
    v1 = (s32) v0 >> 2;
L_0095BE94:;
    at = s0 < v1;
    if (at == 0) goto L_0095BEA8;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0095BEAC;
L_0095BEA8:;
    v0 = 0;
L_0095BEAC:;
    if (v0 != 0) { a0 = s1; goto L_0095BF24; }
    a0 = s1; v0 = func_009598D0(a0);
    if (v0 != 0) { a0 = s1; goto L_0095BF34; }
    v1 = (*(u8 *) (u32) (s1 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 != 0) { a0 = (*(u16 *) (u32) (s1 + 288)); goto L_0095BF44; }
    v0 = 0;
L_0095BEE4:;
    if (v0 == 0) { a0 = s1; goto L_0095C040; }
    v0 = 2; goto L_0095C064;
L_0095BEF4:;
    a1 = 3; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095C064;
L_0095BF04:;
    a1 = 0; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095C064;
L_0095BF14:;
    a1 = 4; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095C064;
L_0095BF24:;
    a1 = 0; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095C064;
L_0095BF34:;
    a1 = 0; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095C064;
L_0095BF44:;
    v0 = func_00952A50(a0);
    v0 = v0 & 0xff;
    at = v0 < 75;
    if (at == 0) { a1 = (*(u16 *) (u32) (s1 + 288)); goto L_0095BF64; }
    v0 = 0; goto L_0095BEE4;
L_0095BF64:;
    a4 = 1;
    a0 = s1;
    a2 = 50;
    a3 = 20480;
    a5 = a4; v0 = func_00948F20(a0, a1, a2, a3, a4, a5, f12.f, f13.f);
    s0 = v0 & 0xff;
    v0 = 255;
    if (s0 == v0) { v0 = 0; goto L_0095BEE4; }
    if (s0 == v0) { a0 = 1; goto L_0095BFA0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_0095BFA0:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0x2710000U;
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(s32 *) (u32) (a1 + 292));
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) { a0 = (*(u16 *) (u32) (a1 + 38)); goto L_0095BFD4; }
L_0095BFCC:;
    v0 = 0; goto L_0095BEE4;
L_0095BFD4:;
    a1 = (*(u16 *) (u32) (a1 + 288)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) goto L_0095BFCC;
    a0 = s1;
    a1 = s0;
    a2 = 1;
    a3 = 0; v0 = func_00961C80(a0, a1, a2, a3);
    v0 = 255;
    if (s0 == v0) { a0 = 1; goto L_0095C018; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_0095C018:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00C04E00(a0, a1);
    v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0095BEE4;
L_0095C040:;
    v0 = func_009595A0(a0, a1);
    if (v0 != 0) { a0 = s1; goto L_0095C058; }
    v0 = 0; goto L_0095C064;
L_0095C058:;
    a1 = 1; v0 = func_00C04E00(a0, a1);
    v0 = 1;
L_0095C064:;
    return v0;
}
