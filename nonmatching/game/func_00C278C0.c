/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern u8 D_003E7AD8;
extern u8 D_003E7AD9;
extern u8 D_003E7ADA;
extern u8 D_003E7ADB;

extern u32 func_002937A0(u32 a, u32 b, u32 c, u32 d);
extern void func_0028F9E0(void *a, void *b, void *c, void *d);
extern s32 func_0028F230(s32 a, void *b, u32 c, void *d, s32 e);
extern s32 func_00C32010(u8 *p, s32 idx);
extern u32 func_009A0270(void);
extern s32 func_00277220(void *a, s32 b);

s32 func_00C278C0(u8 *p, s32 ctx, s32 sel)
{
    s32 cnt[4];
    s32 out[36];
    u8 t[4];
    u8 b[11];
    u8 f[11];
    s32 best;
    s32 i, j, k;
    s32 minv, bestv, mode, v, pri, bp;
    u8 *tbl;
    u8 *tb2;
    u8 *e2;
    u8 *e;
    u8 *q;
    u32 ty, want, got;
    s32 r;

    tbl = (u8 *)D_00592980 + sel * 26880;
    cnt[0] = 0;
    cnt[1] = 0;
    cnt[2] = 0;
    cnt[3] = 0;
    t[0] = D_003E7AD8;
    t[1] = D_003E7AD9;
    t[2] = D_003E7ADA;
    t[3] = D_003E7ADB;

    for (i = 0; i < 11; i++) {
        if (tbl[p[0x8C + i] * 840 + 0xD4] != 0) {
            ty = func_002937A0(p[0xC0 + i], t[2], t[1], t[0]) & 0xFF;
            if (ty == 6) {
                cnt[3]++;
            } else if (ty == 8) {
                cnt[2]++;
            } else if (ty == 7) {
                cnt[1]++;
            } else if (ty == 5) {
                cnt[0]++;
            }
        }
    }

    if (cnt[0] + cnt[1] + cnt[2] + cnt[3] == 0) {
        return -1;
    }

    best = -1;
    minv = 0x7FFFFFFF;
    tb2 = (u8 *)D_00592980 + p[0] * 26880;
    for (i = 0; i < 11; i++) {
        b[i] = p[0xC0 + i];
        e = tb2 + p[0x8C + i] * 840;
        if (e[0xD6] != 0) {
            f[i] = 0;
        } else if (e[0xD5] < 2) {
            f[i] = 1;
        }
    }
    func_0028F9E0(&out[0], f, b, p + 0xAC);

    if (cnt[0] != 0) {
        for (i = 0; i < 11; i++) {
            s32 pidx = p[0x8C + i];
            e = tbl + pidx * 840;
            e2 = (u8 *)D_00592980 + p[0] * 26880 + pidx * 840;
            if (e[0xD4] != 0) {
                u8 *ptr = p + 0xC0 + i;
                if ((func_002937A0(p[0xC0 + i], 0, 0, 0) & 0xFF) == 5) {
                    s32 div = *(s32 *)(e + 0x18) / 100;
                    s32 a4 = *(s32 *)(e + 0xD8) / div;
                    if (a4 >= 0x3D) {
                        a4 = 100;
                    }
                    v = func_0028F230(ctx, e2 + 0x68, *ptr, &out[i * 3], a4);
                    if (func_00C32010(p, pidx) == 0) {
                        mode = 0;
                    } else if (e2[0xF8] != 0 || e2[0xF9] != 0) {
                        mode = 0;
                    } else {
                        s32 x = e2[0x102];
                        if ((s32)(func_009A0270() & 0xFF) - 5 < x) {
                            mode = 0;
                        } else {
                            mode = func_00277220(e2 + 0xF0, 1);
                        }
                    }
                    if (mode == 2) {
                        v = v / 2;
                    }
                    if (!(minv < v)) {
                        minv = v;
                        best = i;
                    }
                }
            }
        }
        if (best >= 0) {
            if (cnt[0] >= 2 && cnt[0] < 4) {
                for (j = 0; j < 11; j++) {
                    if (tbl[p[0x8C + j] * 840 + 0xD4] != 0 && best != j) {
                        u8 *ptr = p + 0xC0 + j;
                        if ((func_002937A0(p[0xC0 + j], 0, 0, 0) & 0xFF) == 5) {
                            if (cnt[0] == 3) {
                                if (*ptr == 0xC) {
                                    *ptr = p[0xC0 + best];
                                }
                            } else if (cnt[0] == 2) {
                                *ptr = 0xC;
                            }
                        }
                    }
                }
            }
            return best;
        }
    }

    for (k = 1; k < 4; k++) {
        if (cnt[k] == 0) {
            continue;
        }
        bp = -0x19;
        for (i = 0; i < 11; i++) {
            s32 pidx = p[0x8C + i];
            e = tbl + pidx * 840;
            e2 = (u8 *)D_00592980 + p[0] * 26880 + pidx * 840;
            if (e[0xD4] != 0) {
                q = p + 0xC0 + i;
                want = t[k];
                got = func_002937A0(p[0xC0 + i], 0, 0, 0) & 0xFF;
                if (want == got) {
                    if (want == 6 || want == 8) {
                        pri = 1;
                    } else if (want == 7) {
                        pri = 2;
                    } else {
                        pri = 0;
                    }
                    if (pri >= bp) {
                        s32 div, a4;
                        if (bp < pri) {
                            bp = pri;
                            best = i;
                            div = *(s32 *)(e + 0x18) / 100;
                            a4 = *(s32 *)(e + 0xD8) / div;
                            if (a4 >= 0x3D) {
                                a4 = 100;
                            }
                            r = func_0028F230(ctx, e2 + 0x68, *q, &out[i * 3], a4);
                            minv = r;
                            if (func_00C32010(p, pidx) == 0) {
                                mode = 0;
                            } else if (e2[0xF8] != 0 || e2[0xF9] != 0) {
                                mode = 0;
                            } else {
                                s32 x = e2[0x102];
                                if ((s32)(func_009A0270() & 0xFF) - 5 < x) {
                                    mode = 0;
                                } else {
                                    mode = func_00277220(e2 + 0xF0, 1);
                                }
                            }
                            if (mode == 2) {
                                minv = minv / 2;
                            }
                        } else {
                            div = *(s32 *)(e + 0x18) / 100;
                            a4 = *(s32 *)(e + 0xD8) / div;
                            if (a4 >= 0x3D) {
                                a4 = 100;
                            }
                            r = func_0028F230(ctx, e2 + 0x68, *q, &out[i * 3], a4);
                            if (func_00C32010(p, pidx) == 0) {
                                mode = 0;
                            } else if (e2[0xF8] != 0 || e2[0xF9] != 0) {
                                mode = 0;
                            } else {
                                s32 x = e2[0x102];
                                if ((s32)(func_009A0270() & 0xFF) - 5 < x) {
                                    mode = 0;
                                } else {
                                    mode = func_00277220(e2 + 0xF0, 1);
                                }
                            }
                            if (mode == 2) {
                                r = r / 2;
                            }
                            if (!(minv < r)) {
                                minv = r;
                                best = i;
                            }
                        }
                    }
                }
            }
        }
        if (best < 0) {
            continue;
        }
        if (bp == 2 && cnt[k] >= 2 && cnt[k] < 4) {
            for (j = 0; j < 11; j++) {
                if (tbl[p[0x8C + j] * 840 + 0xD4] != 0 && best != j) {
                    u8 *ptr = p + 0xC0 + j;
                    if ((func_002937A0(p[0xC0 + j], 0, 0, 0) & 0xFF) == 7) {
                        if (cnt[k] == 3) {
                            if (*ptr == 0x13) {
                                *ptr = p[0xC0 + best];
                            }
                        } else if (cnt[k] == 2) {
                            *ptr = 0x13;
                        }
                    }
                }
            }
        }
        return best;
    }
    return -1;
}
