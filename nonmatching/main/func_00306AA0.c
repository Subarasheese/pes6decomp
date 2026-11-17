/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00251B60(void);
extern char D_005EB270[];

s32 func_00306AA0(s32 idx, s32 *src, s32 mul) {
    s32 *b = (s32 *)((u8 *)D_005EB270 + idx * 600);
    s32 i, j, k, n, t;
    for (i = 0; i < 30; i++) {
        s32 w0 = src[0];
        s32 w1 = src[1];
        src += 2;
        b[0x10] = w0;
        b[0x11] = w1;
        b += 2;
    }
    b -= 60;
    b[0x47] = (b[0x47] * mul) / 100;
    b[0x51] = 0;
    t = b[0x12];
    b[0x12] = (t * func_00251B60()) / 1000;
    t = b[0x13];
    b[0x13] = (t * func_00251B60()) / 1000;
    t = b[0x14];
    b[0x14] = (t * func_00251B60()) / 1000;
    if (b[0x15] > 0) {
        b[0x60] = 1;
        t = b[0x15];
        t = (t * func_00251B60()) / 1000;
        b[0x62] = t;
        b[0x64] = 0x20000 / t;
    } else {
        b[0x60] = 0;
        b[0x62] = 0;
        b[0x64] = 0;
    }
    b[0x61] = b[0x60];
    b[0x53] = 0;
    b[0x54] = 0;
    for (i = 0; i < 8; i++) {
        if (b[i * 2 + 0x37]) {
            b[b[0x54] + 0x55] = i;
            b[0x53] += b[i * 2 + 0x38];
            b[0x54]++;
        }
    }
    for (j = 0; j < 32; j++) {
        b[j * 2 + 0x67] = 0;
        b[j * 2 + 0x66] = (b[0x47] * b[j + 0x17]) / 100;
        for (k = 0; k <= j; k++) b[j * 2 + 0x67] += b[0x13] / 32;
    }
    return 1;
}
