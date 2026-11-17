/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_009A9A90(void *a);
extern s32 func_009A99F0(void *a);
extern s32 func_009AA5D0(f32 *a, f32 *b, void *c, s32 d);
extern s32 func_0011F4F8(f32 x);
extern s32 func_0011C7D0(s32 x);
extern s32 func_0011FFE0(s32 x);
extern s32 func_009A9D30(f32 *a, void *b, s32 c, s32 d);

s32 func_009A9050(u8 *out, u8 *base, void *p, s32 flag)
{
    s32 (*fn)(void *);
    f32 a[4];
    f32 b[4];
    u16 h[4];
    s32 s1, s2, s3, i;
    u32 *o = (u32 *)out;
    u32 kc = 0xC2D55555, k4 = 0x40800000;
    f32 *of = (f32 *)out;

    if ((s8)flag == 1)
        fn = func_009A9A90;
    else
        fn = func_009A99F0;

    if (!(((f32 *)p)[2] <= 0.0f))
        return 0;
    if (!func_009AA5D0(b, a, p, flag))
        return 0;

    s1 = func_0011FFE0(func_0011C7D0(func_0011F4F8(b[1] / *(f32 *)&kc)));
    if (s1 < 0 || s1 >= 6)
        return 0;

    s2 = (s1 * 4 + 0xBB) & 0xFFFF;
    for (s3 = 0; s3 < 4; s3++, s2++) {
        h[0] = 0; h[1] = 0; h[2] = 0; h[3] = 0;
        if (s1 != 5) {
            h[0] = s2 + 5;
            h[2] = s2 + 4;
        } else {
            h[0] = s3 + 0x78;
            h[2] = s3 + 0x77;
        }
        if (s3 != 3) {
            h[1] = s2 + 1;
        } else {
            h[1] = 6 - s1;
            h[0] = 5 - s1;
        }
        h[3] = s2;
        o[0] = (u32)(base + ((u32)h[0] << 5) + 0x70);
        o[1] = (u32)(base + ((u32)h[1] << 5) + 0x70);
        o[2] = (u32)(base + ((u32)h[2] << 5) + 0x70);
        o[3] = (u32)(base + ((u32)h[3] << 5) + 0x70);
        if (func_009A9D30(b, out, h[1], h[0]))
            goto found;
    }
    return 0;
found:
    if (!fn(out))
        return 0;
    of[10] = 0;
    of[11] = 0;
    of[12] = 0;
    for (i = 0; i < 4; i++) {
        f32 *q = (f32 *)o[i];
        of[10] = of[10] + q[1];
        of[11] = of[11] + q[2];
        of[12] = of[12] + q[3];
    }
    of[10] = of[10] / *(f32 *)&k4;
    of[11] = of[11] / *(f32 *)&k4;
    of[12] = of[12] / *(f32 *)&k4;
    of[4] = a[0]; of[5] = a[1]; of[6] = a[2];
    of[7] = b[0]; of[8] = b[1]; of[9] = b[2];
    return 1;
}
