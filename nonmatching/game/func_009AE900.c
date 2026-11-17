/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CAA3F0[];
extern char D_00CAA3F4[];
extern char D_00CAA3F8[];
extern char D_00CAA420[];
extern char D_00CAA424[];
void memset(void *p, s32 v, s32 n);
u8 func_009B0190(f32 *out, f32 *in, s32 idx);
u8 func_009AFE60(f32 *out, f32 *in, s32 idx);
u8 func_009AF8B0(f32 *out, f32 *in, s32 idx);
u8 func_009AF2E0(f32 *out, f32 *in, s32 idx);

u8 func_009AE900(f32 *dst, f32 *in, s32 idx) {
    f32 p[3];
    u8 r = 0;
    u8 v;

    memset(dst, 0, 12);
    v = func_009B0190(p, in, idx);
    if (v) { r |= v; dst[0] = dst[0] + p[0]; dst[1] = dst[1] + p[1]; dst[2] = dst[2] + p[2]; }
    v = func_009AFE60(p, in, idx);
    if (v) { r |= v; dst[0] = dst[0] + p[0]; dst[1] = dst[1] + p[1]; dst[2] = dst[2] + p[2]; }
    v = func_009AF8B0(p, in, idx);
    if (v) { r |= v; dst[0] = dst[0] + p[0]; dst[1] = dst[1] + p[1]; dst[2] = dst[2] + p[2]; }
    v = func_009AF2E0(p, in, idx);
    if (v) { r |= v; dst[0] = dst[0] + p[0]; dst[1] = dst[1] + p[1]; dst[2] = dst[2] + p[2]; }
    {
        f32 d = in[1] - (-612.0f);
        u8 a4;
        if (d <= 0.0f) {
            f32 a = in[9] * *(f32 *)D_00CAA3F0;
            f32 b = in[10] * *(f32 *)D_00CAA3F4;
            f32 c = in[11] * *(f32 *)D_00CAA3F8;
            f32 f9 = *(f32 *)(D_00CAA424 + idx * 40);
            f32 f1 = *(f32 *)(D_00CAA420 + idx * 40);
            f32 nd = -d;
            f32 e;
            p[0] = a;
            p[1] = b;
            p[2] = c;
            e = p[1] * f9;
            a = a * f9;
            c = p[2] * f9;
            p[0] = a;
            p[1] = (0.0f + e) + (-0.1f * d) * (1.0f + f1);
            p[2] = c;
            p[2] = (0.0f + p[2]) + (-2.0e-5f * in[2]) * nd;
            p[0] = (0.0f + a) + (-4.0e-5f * (in[0] - 13673.0f)) * nd;
            a4 = 4;
        } else {
            p[0] = 0.0f; p[1] = 0.0f; p[2] = 0.0f;
            a4 = 0;
        }
        if (a4) {
            r |= a4; dst[0] = dst[0] + p[0]; dst[1] = dst[1] + p[1]; dst[2] = dst[2] + p[2];
        }
    }
    return r;
}
