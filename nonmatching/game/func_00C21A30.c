/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00C21A30(u8 *p) {
    f32 buf[64];
    s32 n, i, r, c, br, bc;
    f32 best;
    for (i = 0; i < 64; i++) buf[i] = 0;
    n = p[0x300];
    br = 0; bc = 0;
    best = -1000.0f;
    for (i = 0; i < n; i++) {
        u8 *e = p + i * 8;
        buf[e[2] * 32 + e[3]] += *(f32 *)(e + 4);
    }
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 32; c++) {
            f32 v = -buf[r * 32 + c];
            if (best < v) {
                best = v;
                br = r;
                bc = c;
            }
        }
    }
    return (u8)(((br & 0xFF) << 5) | (bc & 0x1F));
}
