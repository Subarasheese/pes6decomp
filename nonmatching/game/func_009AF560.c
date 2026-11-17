/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CAA3C0[];
extern char D_00CAA3C4[];
extern char D_00CAA3C8[];
extern char D_00CAA410[];
extern char D_00CAA414[];
extern char D_00CAA418[];

void func_009AF560(f32 *out, f32 *in, s32 idx) {
    f32 a, b, t, d, e, c, f11, f12, v;

    a = (in[0] - 13440.0f) / 495.0f;
    c = in[1] / -640.0f;
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;
    d = in[2] - -979.0f;
    if (d < 0.0f)
        return;
    t = a * *(f32 *)(D_00CAA410 + idx * 40);
    e = a * *(f32 *)(D_00CAA414 + idx * 40);
    if (d < t) {
        out[0] = in[9] * *(f32 *)D_00CAA3C0;
        out[1] = in[10] * *(f32 *)D_00CAA3C4;
        out[2] = in[11] * *(f32 *)D_00CAA3C8;
        out[0] = out[0] * 0.7f;
        out[1] = out[1] * 0.7f;
        out[2] = out[2] * 0.7f;
        if (!(in[10] <= 0.0f))
            out[1] = 0.0f;
        if (in[11] <= 0.0f)
            out[2] = 0.0f;
        out[2] = out[2] + -0.06f;
    }
    f11 = d - t;
    f12 = *(f32 *)(D_00CAA418 + idx * 40);
    v = (-2.0e-05f * (in[1] - -576.0f)) * f11;
    out[1] = (0.0f + out[1]) + v * f12;
    v = (-8.0e-06f * (in[0] - 13673.0f)) * f11;
    out[0] = (0.0f + out[0]) + v * f12;
    out[0] = (0.0f + out[0]) + in[9] * *(f32 *)D_00CAA3C0;
    if (in[10] < 0.0f)
        out[1] = (0.0f + out[1]) + in[10] * *(f32 *)D_00CAA3C4;
    v = in[11];
    if (v < 0.0f)
        out[2] = (0.0f + out[2]) + 1.5f * (v * *(f32 *)D_00CAA3C8);
    else
        out[2] = (0.0f + out[2]) + v * *(f32 *)D_00CAA3C8;
    if (e < d) {
        if (!(in[11] <= 0.0f))
            out[2] = in[11] * -1.2f;
    }
    if (in[11] < -7.0f)
        return;
    out[2] = (0.0f + out[2]) + 35.0f * (-0.06f * (1.0f - c) + -0.08f * c);
}
