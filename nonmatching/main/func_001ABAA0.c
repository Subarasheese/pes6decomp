/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char *D_003E98B8;

void func_001ABAA0(char *a0)
{
    f32 *in = (f32 *)(a0 + 0x5C);
    f32 *out = (f32 *)(a0 + 0x80);
    f32 f0 = 2.0f * *(f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B9] * 72 + 0x44);
    s32 i;

    for (i = 0; i < 19; i++, out += 4) {
        f32 *e;
        if (i == 16) {
            out[0] = *(f32 *)(a0 + 0x70);
            out[1] = *(f32 *)(a0 + 0x74);
            out[2] = *(f32 *)(a0 + 0x78);
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B0] * 72);
            out[3] = *(f32 *)(a0 + 0x7C) * e[0];
        } else if (i == 11) {
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B1] * 72);
            out[0] = in[1];
            out[1] = in[0] * e[1];
            out[2] = in[2] * e[1];
            out[3] = in[1];
        } else if (i == 7 || i == 8) {
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B3] * 72);
            out[0] = in[1] * e[4];
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B4] * 72);
            out[1] = in[0] * e[2];
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B2] * 72);
            out[2] = in[2] * e[3];
            out[3] = in[1] * e[3];
        } else if (i == 9 || i == 10 || i == 14 || i == 15) {
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B6] * 72);
            out[0] = in[1];
            out[1] = in[0] * e[6];
            out[2] = in[2] * e[5];
            out[3] = in[1];
        } else if (i == 6) {
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[0x1B4] * 72);
            out[0] = in[1];
            out[1] = in[0] * e[7];
            out[2] = in[2] * e[8];
            out[3] = in[1];
        } else if (i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5) {
            s32 k = (i == 0) ? 0x1B5 : (i == 1) ? 0x1B5 : (i < 4) ? 0x1B7 : 0x1B8;
            s32 j = (i == 0) ? 9 : (i == 1) ? 11 : (i < 4) ? 13 : 15;
            e = (f32 *)(*(char **)(D_003E98B8 + 0x10) + ((s8 *)a0)[k] * 72);
            out[0] = in[1] * f0;
            out[1] = in[0] * e[j];
            out[2] = in[2] * e[j + 1];
            out[3] = in[1] * f0;
        } else if (i == 12 || i == 13) {
            out[0] = in[1] * f0;
            out[1] = in[0];
            out[2] = in[2];
            out[3] = in[1] * f0;
        } else {
            out[0] = in[1];
            out[1] = in[0];
            out[2] = in[2];
            out[3] = in[1];
        }
        out[0] = out[0] / 8.0f;
        out[1] = out[1] / 8.0f;
        out[2] = out[2] / 8.0f;
        out[3] = out[3] / 8.0f;
    }
}
