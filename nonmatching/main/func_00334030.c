/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030DA70(s32 k);
extern s32 func_00311330(void);
extern s32 func_00292A30(void);

s32 func_00334030(s32 *dst, s16 *src, s32 mode) {
    s32 P[4];
    s32 O[4];
    s32 r;
    s32 i, j, d, ad, c;

    P[0] = src[0];
    P[2] = src[1];
    P[1] = P[0] + func_0030DA70(0);
    P[3] = P[2] + func_0030DA70(1);
    if (mode == 1) {
        r = func_00311330();
    } else if (P[3] < P[1]) {
        r = 0;
    } else if (P[1] < P[3]) {
        r = 1;
    } else if (func_00292A30() == 0) {
        r = 2;
    } else if (P[1] != 0) {
        r = 0;
    } else {
        r = 2;
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            d = P[i * 2 + j] - P[(i ^ 1) * 2 + j];
            ad = d > 0 ? d : -d;
            if (ad >= 10) {
                O[i * 2 + j] = d > 0 ? 0x1A : 1;
            } else if (d == -9) O[i * 2 + j] = 2;
            else if (d == -8) O[i * 2 + j] = 3;
            else if (d == -7) O[i * 2 + j] = 4;
            else if (d == -6) O[i * 2 + j] = 5;
            else if (d == -5) O[i * 2 + j] = 6;
            else if (d == -4) O[i * 2 + j] = 7;
            else if (d == -3) O[i * 2 + j] = 8;
            else if (d == -2) O[i * 2 + j] = 9;
            else if (d == -1) O[i * 2 + j] = 10;
            else if (d == 1) O[i * 2 + j] = 0x10;
            else if (d == 2) O[i * 2 + j] = 0x11;
            else if (d == 3) O[i * 2 + j] = 0x12;
            else if (d == 4) O[i * 2 + j] = 0x13;
            else if (d == 5) O[i * 2 + j] = 0x14;
            else if (d == 6) O[i * 2 + j] = 0x15;
            else if (d == 7) O[i * 2 + j] = 0x16;
            else if (d == 8) O[i * 2 + j] = 0x17;
            else if (d == 9) O[i * 2 + j] = 0x18;
            else {
                if (j == 0) O[i * 2 + j] = 0xD;
                else if (r == i) O[i * 2 + j] = 0xF;
                else if (r == (i ^ 1)) O[i * 2 + j] = 0xB;
                else O[i * 2 + j] = 0xD;
            }
        }
    }
    dst[2] = O[0];
    dst[3] = O[2];
    dst[0] = dst[4];
    dst[1] = dst[5];
    dst[4] = O[1];
    dst[5] = O[3];
    return 1;
}
