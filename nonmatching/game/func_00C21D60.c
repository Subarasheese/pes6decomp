/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

u8 func_00C21D60(u8 *p) {
    f32 buf[64];
    s32 i, j, n, bi, bj;
    f32 best;
    for (i = 0; i < 64; i++) buf[i] = 0;
    n = p[0x300];
    i = 0;
    if (n > 8) {
        u8 *e = p;
        while (i < n - 8) {
            buf[(e[2] << 5) + e[3]] += *(f32 *)(e + 4);
            buf[(e[10] << 5) + e[11]] += *(f32 *)(e + 12);
            buf[(e[18] << 5) + e[19]] += *(f32 *)(e + 20);
            buf[(e[26] << 5) + e[27]] += *(f32 *)(e + 28);
            buf[(e[34] << 5) + e[35]] += *(f32 *)(e + 36);
            buf[(e[42] << 5) + e[43]] += *(f32 *)(e + 44);
            buf[(e[50] << 5) + e[51]] += *(f32 *)(e + 52);
            buf[(e[58] << 5) + e[59]] += *(f32 *)(e + 60);
            e += 64;
            i += 8;
        }
    }
    for (; i < n; i++) {
        u8 *e = p + i * 8;
        buf[(e[2] << 5) + e[3]] += *(f32 *)(e + 4);
    }
    best = -1000.0f;
    bi = 0;
    bj = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            if (best < buf[i * 32 + j]) {
                best = buf[i * 32 + j];
                bi = i;
                bj = j;
            }
        }
    }
    return (u8)((bi << 5) | (bj & 0x1f));
}
