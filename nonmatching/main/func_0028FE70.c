/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0028CB70(void *p);
extern void func_002CA0F0(void *ctx);
extern s32 func_002937A0(s32 x);
extern s32 func_0028F230(void *ctx, void *pl, s32 a, void *arr, s32 pct);
extern s32 func_0028F860(void *ctx, void *pl, s32 a, s32 pct);
extern char D_003D9DE0[];
extern char D_003D9D60[];
extern char D_003D9DA0[];
extern char D_003D9E18[];

void func_0028FE70(u8 *p)
{
    u8 ctx[16];
    s32 arr[3];
    u8 counts[14];
    s32 n, flagA, cnt, nsel, i, j, k, a0, a5, a2, sum, s4, s3, bestidx, v, pct, m, s6, s2, s1, r;
    u8 *fp, *q;
    s32 p3;
    u8 id;
    u8 *pl;

    if (p == 0) return;
    if (func_0028CB70(p) == 0) return;
    func_002CA0F0(ctx);
    n = p[2];
    flagA = p[0] != 0;
    if (n < 11) n = 0x17;
    p3 = p[3];
    cnt = 0;
    for (a0 = 0; a0 < 11; a0++) {
        if (p[p[5 + a0] + 0x85] != 0) cnt = (u8)(cnt + 1);
    }
    fp = counts;
    q = fp;
    a0 = 0;
    do {
        q[0] = 0; a0 += 7; q[1] = 0; q[2] = 0; q[3] = 0; q[4] = 0; q[5] = 0; q[6] = 0;
        q += 7;
    } while (a0 < 14);
    for (i = 0; i < 11; i++) {
        r = (u8)func_002937A0(p[0x128 + i]);
        id = p[5 + i];
        counts[r] = counts[r] + 1;
        if (p[0x25 + id] != 0) {
            if (p[0] == 0) continue;
            if (p[0x45 + id] == 0) continue;
        }
        s4 = 0;
        bestidx = 0;
        for (s2 = 11; s2 < 32; s2++) {
            a0 = p[5 + s2];
            if (p[0x25 + a0] == 0) continue;
            pl = *(u8 **)(p + 0xA8 + a0 * 4);
            if (!(s2 < n) && p[0x85 + id] == 0 && !(cnt < p3) && p[0x85 + a0] != 0) continue;
            if (p[1] != 0) {
                pct = (100 - p[0x167 + a0] / 3) * p[0x147 + a0] / 100;
            } else {
                pct = 100;
            }
            s1 = p[0x128 + i];
            r = (u8)func_002937A0(s1);
            for (k = 0; k < 3; k++) {
                if (k == 2) arr[k] = ((s32 *)D_003D9D60)[r];
                else if (k == 1) arr[k] = ((s32 *)D_003D9DE0)[r];
                else arr[k] = ((s32 *)D_003D9DA0)[r];
            }
            v = func_0028F230(ctx, pl, s1, arr, pct);
            if (p[0x45 + a0] != 0) v = v / 3;
            if (s4 < v) {
                s4 = v;
                bestidx = s2;
            }
        }
        if (s4 != 0) {
            u8 old = p[5 + bestidx];
            p[5 + bestidx] = id;
            p[5 + i] = old;
        }
    }
    nsel = 0;
    for (a0 = 0; a0 < 11; a0++) {
        if (p[p[5 + a0] + 0x85] != 0) nsel = (u8)(nsel + 1);
    }
    if (n < 0x20 && flagA) {
        a5 = n - 11;
        for (k = 0; k < 14; k++) {
            sum = 0;
            for (a0 = 0; a0 < 14; a0++) if (counts[a0] != 0) sum++;
            if (!(a5 < sum)) break;
            counts[(u8)D_003D9E18[k]] = 0;
        }
        do {
            sum = 0;
            for (a0 = 0; a0 < 14; a0++) sum += counts[a0];
            if (!(n - 11 < sum)) break;
            a2 = 0;
            for (a0 = 0; a0 < 14; a0++) {
                if (counts[a0] >= 2) {
                    counts[a0] = counts[a0] - 1;
                    sum--;
                    a2++;
                    if (!(n - 11 < sum)) break;
                }
            }
        } while (a2 != 0);
        s2 = 11;
        fp = counts;
        for (s6 = 0; s6 < 14; s6++, fp++) {
            for (m = 0; m < *fp; m++) {
                s3 = 0xFF;
                s4 = 0;
                if (s2 < 32) {
                    for (s1 = s2; s1 < 32; s1++) {
                        a0 = p[5 + s1];
                        if (p[0x85 + a0] != 0 && !((u8)nsel < p[4])) continue;
                        if (p[1] != 0) {
                            pct = (100 - p[0x167 + a0] / 3) * p[0x147 + a0] / 100;
                        } else {
                            pct = 100;
                        }
                        v = func_0028F860(ctx, *(void **)(p + 0xA8 + a0 * 4), s6, pct);
                        if (p[0x45 + a0] != 0) v = v / 3;
                        if (s4 < v) {
                            s4 = v;
                            s3 = s1;
                        }
                    }
                }
                if (s3 != 0xFF) {
                    u8 t = p[5 + s2];
                    u8 u = p[5 + s3];
                    p[5 + s2] = u;
                    p[5 + s3] = t;
                    s2++;
                    if (p[0x85 + u] != 0) nsel = (u8)(nsel + 1);
                }
            }
        }
    }
    if (n >= 12) {
        for (j = 11; j < n; j++) {
            id = p[5 + j];
            if (p[0x25 + id] != 0) continue;
            s3 = 0;
            s2 = n;
            pl = *(u8 **)(p + 0xA8 + id * 4);
            bestidx = 0;
            for (; s2 < 32; s2++) {
                a0 = p[5 + s2];
                if (p[0x25 + a0] == 0) continue;
                if (p[0x85 + id] == 0 && !((u8)nsel < p[4]) && p[0x85 + a0] != 0) continue;
                if (p[1] != 0) {
                    pct = (100 - p[0x167 + a0] / 3) * p[0x147 + a0] / 100;
                } else {
                    pct = 100;
                }
                v = func_0028F860(ctx, *(void **)(p + 0xA8 + a0 * 4), (pl[1] >> 4) & 0xF, pct);
                if (p[0x45 + a0] != 0) v = v / 3;
                if (s3 < v) {
                    s3 = v;
                    bestidx = s2;
                }
            }
            if (s3 != 0) {
                p[5 + j] = p[5 + bestidx];
                p[5 + bestidx] = id;
            }
        }
    }
    for (i = 0; i < 32; i++) {
        s1 = p[5 + i];
        if (p[0x65 + s1] == 0) continue;
        for (k = i + 1; k < 32; k++) {
            s2 = p[5 + k];
            if (p[0x65 + s2] == 0 || s2 < n) {
                p[5 + i] = s2;
                p[5 + k] = s1;
                break;
            }
        }
    }
    func_0028CB70(p);
}
