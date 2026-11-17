/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8 a);
extern s32 func_00292F00(u8 a);
extern s32 func_0028F230(void *a0, void *a1, s32 a2, void *a3, s32 a4);
extern s32 func_00C32010(void *p, s32 a);
extern s32 func_009A0270(void);
extern s32 func_00277220(void *p, s32 a);
extern s32 func_002C7280(void *p, s32 a);
extern char D_00592980[];
extern char D_00CB3870[];

s32 func_00C29A30(u8 *p, void *ctx, s32 idx) {
    s32 i, j;
    s32 cnt = 0;
    s32 best = 0;
    s32 bestIdx;
    s32 other;
    s32 flag;
    s32 r;
    u8 *base;
    u8 *q;
    u8 *t;
    u8 tmp[12];
    s32 *buf = (s32 *)tmp;
    s32 pos;

    u8 team = p[0];
    for (i = 0; i < 11; i++) {
        u8 k = func_002937A0(p[0xC0 + i]) & 0xFF;
        if (k == 3 || k == 2) cnt++;
    }
    flag = 0;
    other = -1;
    base = (u8 *)D_00592980 + team * 26880;
    for (i = 0; i < 11; i++) {
        u8 *s3 = p + 0xC0 + i;
        if ((func_002937A0(*s3) & 0xFF) == 4) {
            if (i != idx) {
                other = i;
                if (*s3 == 8) flag = 1;
            }
            if (base[p[0x8C + i] * 840 + 0xD4] != 0) cnt++;
        }
    }
    if (cnt >= 3) return 0;
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0x80012;
    bestIdx = -1;
    q = (u8 *)D_00CB3870;
    for (j = 0; j < 2 && bestIdx == -1; j++, q++) {
        for (i = 0; i < 11; i++) {
            u8 pl = p[0x8C + i];
            s32 off = pl * 840;
            u8 *e = base + off;
            if (e[0xD4] != 0 && *q == (func_00292F00(p[0xC0 + i]) & 0xFF)) {
                s32 a4, sc, k, sx;
                u8 *pp;
                for (k = 8; k < 10; k++) {
                    a4 = *(s32 *)(e + 0xD8) / (*(s32 *)(e + 0x18) / 100);
                    if (a4 >= 0x3D) a4 = 100;
                    pp = (u8 *)D_00592980 + p[0] * 26880 + off;
                    sc = func_0028F230(ctx, pp + 0x68, k, buf, a4);
                    if (func_00C32010(p, pl) == 0) {
                        r = 0;
                    } else if (pp[0xF8] != 0 || pp[0xF9] != 0) {
                        r = 0;
                    } else {
                        sx = pp[0x102];
                        if ((s32)((func_009A0270() & 0xFF) - 5) < sx) r = 0;
                        else r = func_00277220(pp + 0xF0, 1);
                    }
                    if (r == 2) sc = sc / 2;
                    if (best < sc) {
                        best = sc;
                        bestIdx = i;
                    }
                }
            }
        }
    }
    if (bestIdx == -1) return 0;
    if (other != -1) {
        t = p + bestIdx;
        r = func_002C7280(base + t[0x8C] * 840 + 0x68, 1);
        if ((r != 0) == (flag != 0)) {
            t = p + other;
            r = func_002C7280(base + t[0x8C] * 840 + 0x68, 1);
            if ((r != 0) == (flag != 0)) {
                u8 a = p[idx + 0x8C];
                u8 b = t[0x8C];
                p[idx + 0x8C] = b;
                t[0x8C] = a;
                idx = other;
            }
        }
    }
    {
        u8 *a0 = p + bestIdx;
        u8 *a2 = p + idx;
        u8 v3 = a0[0x8C];
        u8 a1 = a2[0x8C];
        a2[0x8C] = v3;
        a0[0x8C] = a1;
        p[0x14] = 1;
    }
    return 1;
}
