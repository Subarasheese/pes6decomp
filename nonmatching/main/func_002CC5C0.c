/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AC7F0[];
extern char D_003AE8E0[];
extern char D_003AE900[];
s32 Pes6Random_Below(s32);

s32 func_002CC5C0(s32 a0, s32 *a1, s32 a2, s32 *a3, s32 a4, s32 *a5, s32 a6, s32 *a7,
                  s32 b0, s32 *b1, s32 b2, s32 *b3) {
    s32 cand[81];
    s32 tmp[81];
    s32 hi[6];
    s32 lo[6];
    s32 n, i, j, m, found, c, k;

    for (i = 0; i < 6; i++) {
        hi[i] = ((s32 *)D_003AE8E0)[i];
        lo[i] = ((s32 *)D_003AE900)[i];
    }
    for (i = 0; i < 81; i++) cand[i] = i;
    n = 81;

    if (a0 > 0) {
        m = 0;
        for (i = 0; i < 81; i++) {
            c = cand[i];
            for (j = 0; j < a0; j++) {
                if (*(u16 *)(D_003AC7F0 + c * 104 + 4) == a1[j]) {
                    tmp[m++] = c;
                    break;
                }
            }
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n > 0 && a2 > 0) {
        m = 0;
        for (i = 0; i < n; i++) {
            c = cand[i];
            for (j = 0; j < a2; j++) {
                k = a3[j];
                if (!(c < hi[k]) && c < lo[k]) {
                    tmp[m++] = c;
                    break;
                }
            }
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n > 0 && a4 > 0) {
        m = 0;
        for (i = 0; i < n; i++) {
            c = cand[i];
            for (j = 0; j < a4; j++) {
                if (c == a5[j]) {
                    tmp[m++] = c;
                    break;
                }
            }
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n > 0 && a6 > 0) {
        m = 0;
        for (i = 0; i < n; i++) {
            c = cand[i];
            found = 0;
            for (j = 0; j < a6; j++) {
                if (*(u16 *)(D_003AC7F0 + c * 104 + 4) == a7[j]) {
                    found = 1;
                    break;
                }
            }
            if (!found) tmp[m++] = c;
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n > 0 && b0 > 0) {
        m = 0;
        for (i = 0; i < n; i++) {
            c = cand[i];
            found = 0;
            for (j = 0; j < b0; j++) {
                k = b1[j];
                if (!(c < hi[k]) && c < lo[k]) {
                    found = 1;
                    break;
                }
            }
            if (!found) tmp[m++] = c;
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n > 0 && b2 > 0) {
        m = 0;
        for (i = 0; i < n; i++) {
            c = cand[i];
            found = 0;
            for (j = 0; j < b2; j++) {
                if (c == b3[j]) {
                    found = 1;
                    break;
                }
            }
            if (!found) tmp[m++] = c;
        }
        n = m;
        for (i = 0; i < n; i++) cand[i] = tmp[i];
    }
    if (n <= 0) return 0;
    return cand[Pes6Random_Below(n & 0xffff) & 0xffff];
}
