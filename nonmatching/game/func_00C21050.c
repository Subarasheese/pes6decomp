/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCAF80[];
extern char D_00CB3300[];
extern u32 func_00C17E60(s32 a);
extern u32 func_00C17D70(u32 a, u32 b);
extern u32 func_002C4C20(u32 a);
extern f32 func_001CD9E0(f32 x);
extern f32 func_0011D238(f32 x);

void func_00C21050(u32 a0, f32 f12, f32 f13, f32 f14)
{
    struct { f32 out[38]; s32 lim[2]; f32 off[2]; s32 cnt[2]; } L;
    s32 *cnt = L.cnt;
    f32 *off = L.off;
    s32 *lim = L.lim;
    f32 *out = L.out;
    f32 *base = (f32 *)D_00CCAF80;
    f32 mean, sum, var, scale, f;
    s32 i, j, n;
    s32 tot;
    u32 r;
    char *p;

    cnt[0] = (u8)func_00C17E60(0);
    cnt[1] = (u8)func_00C17E60(1);
    off[0] = f13;
    off[1] = -f13;
    {
        f32 g = base[0x94 / 4];
        f32 c1 = (f32)cnt[1];
        f32 c0 = (f32)cnt[0];
        tot = cnt[0] + cnt[1] + 0x32;
        mean = (c1 * (g - off[1]) + c0 * (g + f13)) / (f32)tot;
    }
    sum = 0.0f;
    for (i = 0; i < 2; i++) {
        n = cnt[i];
        if (n > 0) {
            f32 *b = base + i * 18;
            for (j = 0; j < n; j++) {
                f = (f13 + b[j]) - mean;
                sum += f * f;
            }
        }
    }
    {
        f32 y = 80.0f - mean;
        f32 x = -80.0f - mean;
        for (i = 0; i < 25; i += 5) {
            sum += y * y;
            sum += x * x;
            sum += y * y;
            sum += x * x;
            sum += y * y;
            sum += x * x;
            sum += y * y;
            sum += x * x;
            sum += y * y;
            sum += x * x;
        }
    }
    var = func_001CD9E0(sum / (f32)tot);
    if (var <= 0.1f) var = 0.1f;
    scale = 10.0f * (f14 / var);
    for (i = 0; i < 2; i++) {
        n = cnt[i];
        if (n > 0) {
            f32 *b = base + i * 18;
            f32 *o = out + i * 18;
            f32 fo = off[i];
            j = 0;
            do {
                f = (fo + b[j]) - mean;
                if (f < 0.0f) {
                    f = (-50.0f - f) / -50.0f;
                    if (f <= 0.0f) f = f * 0.85f;
                    else f = f * f;
                    f = 1.0f - f;
                    f = -50.0f * f;
                }
                if (!(f <= 200.0f)) {
                    f = 0.5f * (200.0f + f);
                }
                n = cnt[i];
                o[j] = f12 + f * scale;
                j++;
            } while (j < n);
        }
    }
    lim[0] = *(s16 *)(*(char **)D_00CB3300 + 8);
    lim[1] = *(s16 *)(*(char **)D_00CB3300 + 0x2FC);
    for (i = 0; i < 2; i++) {
        if (cnt[i] > 0) {
            f32 *o = out + i * 18;
            for (j = 0; j < cnt[i]; j++) {
                r = func_002C4C20(func_00C17D70(i & 0xFF, j & 0xFF));
                if (r < 2) {
                    o[j] = o[j] + 5.0f / (f32)(lim[i ^ 1] + 1);
                }
                if (r == 2) {
                    if (!(o[j] < 65.0f)) o[j] = o[j] - 5.0f;
                }
                if (r != 3) {
                } else {
                    o[j] = o[j] + 0.5f;
                }
            }
        }
    }
    p = D_00CCAF80;
    for (i = 0; i < 2; i++) {
        if (cnt[i] > 0) {
            f32 *o = out + i * 18;
            for (j = 0; j < cnt[i]; j++) {
                f = o[j];
                if (f < 30.0f) f = 30.0f;
                else if (!(f <= 100.0f)) f = 100.0f;
                f = func_0011D238(0.5f + (f * (f32)a0) / 100.0f);
                p[0x98 + j] = (u8)(u32)f;
            }
        }
        p += 0x12;
    }
}
