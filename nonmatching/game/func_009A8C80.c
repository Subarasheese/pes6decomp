/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_009A9A90(void *p);
extern s32 func_009A99F0(void *p);
extern s32 func_009AA060(void *a, void *b, void *c, s32 d);
extern s32 func_009A9C20(void *a, void *b, s32 c, s32 d);
extern s32 func_0011F4F8(f32 x);
extern s32 func_0011C7D0(s32 x);
extern s32 func_0011FFE0(s32 x);

s32 func_009A8C80(s32 *out, char *base, f32 *src, s32 flag) {
    s32 (*fn)(void *);
    f32 va[4];
    f32 vb[4];
    u16 idx[4];
    s32 s1, s3, s2;
    s32 i;
    f32 *p;

    if ((s8)flag == 1) fn = func_009A9A90; else fn = func_009A99F0;
    if (src[2] < 0.0f) return 0;
    if (!func_009AA060(vb, va, src, flag)) return 0;
    s1 = func_0011FFE0(func_0011C7D0(func_0011F4F8(vb[1] / -106.66667f)));
    if (s1 < 0 || s1 >= 6) return 0;
    s2 = (s1 * 4 + 0xD3) & 0xFFFF;
    for (s3 = 0; s3 < 4; s3++, s2++) {
        idx[0] = 0; idx[1] = 0; idx[2] = 0; idx[3] = 0;
        if (s1 != 5) {
            idx[0] = s2 + 4;
            idx[2] = s2 + 5;
        } else {
            idx[0] = s3 + 0xB7;
            idx[2] = s3 + 0xB8;
        }
        if (s3 != 3) {
            idx[3] = s2 + 1;
        } else {
            idx[3] = 0x76 - s1;
            idx[2] = 0x75 - s1;
        }
        idx[1] = s2;
        out[0] = (s32)(base + idx[0] * 32 + 0x70);
        out[1] = (s32)(base + idx[1] * 32 + 0x70);
        out[2] = (s32)(base + idx[2] * 32 + 0x70);
        out[3] = (s32)(base + idx[3] * 32 + 0x70);
        if (func_009A9C20(vb, out, idx[1], idx[0])) {
            f32 *o = (f32 *)out;
            if (!fn(out)) return 0;
            o[10] = 0; o[11] = 0; o[12] = 0;
            for (i = 0; i < 4; i++) {
                p = (f32 *)out[i];
                o[10] = o[10] + p[1];
                o[11] = o[11] + p[2];
                o[12] = o[12] + p[3];
            }
            o[10] = o[10] / 4.0f;
            o[11] = o[11] / 4.0f;
            o[12] = o[12] / 4.0f;
            o[4] = va[0]; o[5] = va[1]; o[6] = va[2];
            o[7] = vb[0]; o[8] = vb[1]; o[9] = vb[2];
            return 1;
        }
    }
    return 0;
}
