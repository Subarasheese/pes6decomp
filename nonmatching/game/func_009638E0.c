/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00288670(s64, s64);
s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_009909D0(s64, s64);
s64 func_009B3070(s64, s64);
s64 func_00BBB780(s64);

s64 func_009638E0(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    s2 = a0;
    v0 = (*(u8 *) (u32) (v0 + 21378));
    { s32 c_ = v0 <= 0; s1 = a1; if (c_) goto L_009639FC; }
    a1 = (*(u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(u8 *) (u32) (s2 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) (v1 + 120));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 == 0; s0 = 10; if (c_) goto L_00963960; }
    s0 = (s32) ((u32) s0 + 0x1eU);
L_00963960:;
    v0 = (*(u8 *) (u32) (v1 + 115));
    a1 = 40;
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 71;
    if (at != 0) goto L_009639D8;
    a2 = (*(u8 *) (u32) (s2 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(u8 *) (u32) (s2 + 17));
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
    v0 = (*(u8 *) (u32) (v0 + 115));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    v1 = 70;
    v0 = (s32) ((u32) v1 - (u32) v0);
    s0 = (s32) ((u32) s0 + (u32) v0);
L_009639D8:;
    a1 = (*(u16 *) (u32) (s2 + 288));
    a0 = (*(u16 *) (u32) (s2 + 38)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 16385;
    if (at != 0) { a0 = (*(u16 *) (u32) (s2 + 38)); goto L_00963A04; }
    v0 = 0; goto L_00963B7C;
L_009639FC:;
    v0 = 0; goto L_00963B7C;
L_00963A04:;
    a1 = s1; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 4097;
    if (at != 0) goto L_00963B78;
    at = v0 < 12288;
    if (at == 0) goto L_00963B78;
    f1.f = (*(f32 *) (u32) (s2 + 232));
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45c00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00963AA4;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = s1; goto L_00963A84; }
    a0 = s1;
    a1 = 16384; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00963AA4;
    v0 = 0; goto L_00963B7C;
L_00963A84:;
    a1 = 0xc000; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00963AA4;
    v0 = 0; goto L_00963B7C;
L_00963AA4:;
    f1.f = (*(f32 *) (u32) (s2 + 224));
    f2.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x462a0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00963B20;
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) { a0 = s1; goto L_00963B00; }
    a0 = s1;
    a1 = 0x8000; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00963B20;
    v0 = 0; goto L_00963B7C;
L_00963B00:;
    a1 = 0; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) goto L_00963B20;
    v0 = 0; goto L_00963B7C;
L_00963B20:;
    a1 = s1;
    a0 = s2;
    a2 = 8192;
    a3 = (s32) 0x1000000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 != 0) { a0 = s2; goto L_00963B44; }
    v0 = 0; goto L_00963B7C;
L_00963B44:;
    a1 = (s32) 0x900000U; v0 = func_009909D0(a0, a1);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = (s64) ((u64) s0 << 48); goto L_00963B60; }
    v0 = 1; goto L_00963B7C;
L_00963B60:;
    a0 = a0 >> 48; v0 = func_00BBB780(a0);
    if (v0 == 0) goto L_00963B78;
    v0 = 1; goto L_00963B7C;
L_00963B78:;
    v0 = 0;
L_00963B7C:;
    return v0;
}
