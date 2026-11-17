/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002B8B50(s32);
extern s32 func_002B8AA0(s32);
extern s32 func_002B89E0(s32);
extern s32 func_00292F30(s32, s32);
extern s32 func_0028F860(s32, void *, s32, s32);
extern void func_001C6158(void *, s32, s32, void *);
extern void func_0028DD60(void);
extern u8 D_003E7578;

void func_0028D9B0(s32 a0, u8 *a1, u8 *a2, u8 *a3, s32 a4) {
    u8 cnt = 0;
    u8 n = 0;
    s32 ent[96];
    s32 *e;
    s32 i, j, k;
    s32 cnt_all;
    s32 s4;
    s32 first, second;
    s32 best, bestIdx;
    u8 *p;
    u8 *q;
    u8 *tbl;
    s32 loopi;
    s32 *cur;
    s32 ok;
    s32 c2;

    s4 = func_002B8B50(a4) & 0xFF;
    if (s4 <= 0) {
        return;
    }
    first = func_002B8AA0(a4) & 0xFF;
    second = func_002B89E0(a4) & 0xFF;
    e = ent;
    p = a1;
    for (i = 0; i < 0x20; i++) {
        if (a3[i] != 0) {
            cnt++;
        }
        if (i == first && i != second) {
            e[0] = 0x7D0;
            e[2] = i;
        } else {
            u8 *fp = *(u8 **)(p + 0xA8);
            if (fp != 0 && (fp[1] >> 4) == 0) {
                goto blk;
            }
            if (i != second) {
                bestIdx = 0;
                best = -1;
                for (j = 0; j < 0xD; j++) {
                    if (a2[j + 0xAF] != 0) {
                        k = func_0028F860(a0, fp, j & 0xFF, 0x64);
                        if (best < k) {
                            best = k;
                            bestIdx = j;
                        }
                    }
                }
                e[1] = bestIdx & 0xFF;
                e[0] = best + a1[i + 0x167] * 5;
            } else {
blk:
                e[0] = 0;
                e[1] = fp[1] >> 4;
            }
            e[2] = i;
        }
        n++;
        p += 4;
        e += 3;
    }
    cnt_all = cnt;
    if (cnt_all < 0xC) {
        return;
    }
    func_001C6158(ent, n, 0xC, (void *)func_0028DD60);
    if (cnt_all < s4 + 0xB) {
        s4 = (cnt_all - 0xB) & 0xFF;
    }
    tbl = &D_003E7578 + a4;
    cur = ent;
    for (loopi = 0; loopi < cnt_all; loopi++) {
        if ((s4 & 0xFF) <= 0) {
            return;
        }
        j = 0;
        k = cur[2];
        do {
            if (func_00292F30(*(s32 *)(a1 + k * 4 + 0xA8), j & 0xFF) != 0) {
                u8 c = 0;
                s32 m;
                for (m = 0; m < 0x20; m++) {
                    if (a3[m] != 0) {
                        if (func_00292F30(*(s32 *)(a1 + m * 4 + 0xA8), j & 0xFF) != 0) {
                            c = (c + 1) & 0xFF;
                        }
                    }
                }
                if (a2[j + 0xAF] < c) {
                    j++;
                    if (j >= 0xD) break;
                    continue;
                }
                break;
            }
            j++;
        } while (j < 0xD);
        if (j == 0xD) {
            a3[k] = 0;
            a2[k + 0x84] = 1;
            s4 = (s4 - 1) & 0xFF;
            if (*tbl == 0xFF) {
                *tbl = k;
            }
        }
        cur += 3;
    }
}
