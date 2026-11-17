/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s16 v[8]; } Blk;
typedef struct { Blk *p; s32 key; } Ent;

s32 func_00320F10(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Ent ents[21];
    Blk tmp[20];
    Blk t2;
    Ent te;
    u8 *base;
    u8 *e;
    s32 i, j, k, g, m, mx, run, start, flag, n, r, idx;
    s16 prev;

    flag = 0;
    for (i = 0; i < arg3; i++) {
        e = arg0 + (arg2 + i) * 16;
        ents[i].p = (Blk *)(e + 4);
        ents[i].key = *(s16 *)(e + 0xA) - *(s16 *)(e + 0xC);
    }
    for (i = 0; i < arg3 - 1; i++) {
        mx = ents[i].key;
        m = i;
        for (j = i + 1; j < arg3; j++) {
            if (mx < ents[j].key) {
                mx = ents[j].key;
                m = j;
            }
        }
        te = ents[i];
        ents[i] = ents[m];
        ents[m] = te;
    }
    for (i = 0; i < arg3; i++) {
        tmp[i] = *ents[i].p;
    }
    for (i = 0; i < arg3; i++) {
        *(Blk *)(arg0 + arg2 * 16 + i * 16 + 4) = tmp[i];
    }

    k = 0;
    g = 1;
    for (i = 0; i < arg3; i++) {
        e = arg0 + (arg2 + i) * 16;
        e[0x12] = 0;
        if (i != 0 && (*(s16 *)(e + 0xA) - *(s16 *)(e + 0xC)) != (*(s16 *)(e - 6) - *(s16 *)(e - 4))) {
            k = g;
            g = i + 1;
        }
        e[0x11] = arg1 + k;
        *(s16 *)(e + 8) = (arg2 + g) & 0xFF;
    }

    base = arg0 + arg2 * 16;
    start = arg2;
    prev = *(s16 *)(base + 8);
    run = 0;
    for (i = 0; i < arg3; i++) {
        if (i != 0) {
            if (prev != *(s16 *)(base + i * 16 + 8)) {
                for (j = 0; j <= run; j++) arg0[(start + j) * 16 + 0x12] = run;
                prev = *(s16 *)(base + i * 16 + 8);
                run = 0;
                start = i + arg2;
            } else {
                flag = 1;
                run++;
                if (i == arg3 - 1) {
                    for (j = 0; j <= run; j++) arg0[(start + j) * 16 + 0x12] = run;
                }
            }
        }
    }

    if (flag != 0) {
        for (idx = arg2; idx < arg2 + arg3; idx++) {
            u8 *row = arg0 + idx * 16;
            r = row[0x12];
            if (r != 0) {
                n = r + 1;
                for (i = 0; i < n - 1; i++) {
                    s16 *p = (s16 *)(row + i * 16);
                    s16 mk = p[5];
                    m = i;
                    for (j = i + 1; j < n; j++) {
                        s16 kk = *(s16 *)(row + j * 16 + 0xA);
                        if (mk < kk) {
                            mk = kk;
                            m = j;
                        }
                    }
                    t2 = *(Blk *)(row + i * 16 + 4);
                    *(Blk *)(row + i * 16 + 4) = *(Blk *)(row + m * 16 + 4);
                    *(Blk *)(row + m * 16 + 4) = t2;
                }
                if (idx != 0) prev = *(s16 *)(row - 8);
                else prev = 0;
                k = 0;
                g = 1;
                {
                    u8 *q = row;
                    for (i = 0; i < n; i++) {
                        q[0x12] = 0;
                        if (i != 0 && *(s16 *)(q - 6) != *(s16 *)(q + 0xA)) {
                            prev = *(s16 *)(q - 8);
                            g = i + 1;
                        }
                        q[0x11] = prev;
                        *(s16 *)(q + 8) = (idx + g) & 0xFF;
                        q += 16;
                    }
                }
                {
                    s16 pv = *(s16 *)(base + 8);
                    s32 rr = 0;
                    s32 st = arg2;
                    for (i = 0; i < arg3; i++) {
                        if (i != 0) {
                            if (pv != *(s16 *)(base + i * 16 + 8)) {
                                for (j = 0; j <= rr; j++) arg0[(st + j) * 16 + 0x12] = rr;
                                pv = *(s16 *)(base + i * 16 + 8);
                                rr = 0;
                                st = i + arg2;
                            } else {
                                rr++;
                                if (i == arg3 - 1) {
                                    for (j = 0; j <= rr; j++) arg0[(st + j) * 16 + 0x12] = rr;
                                }
                            }
                        }
                    }
                }
                idx += n - 1;
            }
        }
    }
    return 1;
}
