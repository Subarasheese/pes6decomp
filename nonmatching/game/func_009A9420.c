/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s64 func_0011F4F8(f32 x);
s64 func_0011C7D0(s64 x);
s32 func_0011FFE0(s64 x);
s32 func_009A99F0(u8 *p, s32 a1);
s32 func_009A9A90(u8 *p, s32 a1);
s32 func_009A9E40(f32 *v, u8 *p);
s32 func_009AAB40(f32 *a, f32 *b, s32 c);

s32 func_009A9420(u8 *p, s32 base, s32 rv, s64 flag) {
    f32 b[4];
    f32 a[4];
    s32 (*fn)(u8 *, s32);
    s32 s2 = base + 0x70;
    s32 v;
    s32 s3;
    s32 s4;
    f32 *q;
    f32 four;
    int k;

    if ((s8)flag == 1) fn = func_009A9A90;
    else fn = func_009A99F0;
    if (func_009AAB40(b, a, rv) == 0) return 0;
    v = func_0011FFE0(func_0011C7D0(func_0011F4F8((951.0f + b[2]) / 118.875f)));
    if (v < 0 || v >= 0x10) return 0;
    s4 = 0;
    s3 = (v * 4 + 0x77) & 0xFFFF;
    for (;;) {
        *(s32 *)(p + 0) = s2 + ((s3 + 4) << 5);
        *(s32 *)(p + 8) = s2 + (s3 << 5);
        if (s4 == 3) {
            *(s32 *)(p + 4) = s2 + (v + 1) * 0xE0;
            *(s32 *)(p + 0xC) = s2 + v * 0xE0;
        } else {
            *(s32 *)(p + 4) = s2 + ((s3 + 5) << 5);
            *(s32 *)(p + 0xC) = s2 + ((s3 + 1) << 5);
        }
        if (func_009A9E40(b, p) != 0) break;
        s4++;
        if (s4 >= 4) return 0;
        s3++;
    }
    if (fn(p, rv) == 0) return 0;
    *(f32 *)(p + 0x28) = 0;
    *(f32 *)(p + 0x2C) = 0;
    *(f32 *)(p + 0x30) = 0;
    four = 4.0f;
    for (k = 0; k < 4; k++) {
        q = *(f32 **)(p + k * 4);
        *(f32 *)(p + 0x28) = *(f32 *)(p + 0x28) + q[1];
        *(f32 *)(p + 0x2C) = *(f32 *)(p + 0x2C) + q[2];
        *(f32 *)(p + 0x30) = *(f32 *)(p + 0x30) + q[3];
    }
    *(f32 *)(p + 0x28) = *(f32 *)(p + 0x28) / four;
    *(f32 *)(p + 0x2C) = *(f32 *)(p + 0x2C) / four;
    *(f32 *)(p + 0x30) = *(f32 *)(p + 0x30) / four;
    *(f32 *)(p + 0x10) = a[0];
    *(f32 *)(p + 0x14) = a[1];
    *(f32 *)(p + 0x18) = a[2];
    *(f32 *)(p + 0x1C) = b[0];
    *(f32 *)(p + 0x20) = b[1];
    *(f32 *)(p + 0x24) = b[2];
    return 1;
}
