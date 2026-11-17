/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A310[];
extern char D_00591DC4[];
extern char D_005926DC[];
extern char D_0058E5B0[];
extern char D_00592980[];
extern char D_00591E00[];
extern char D_00591E4C[];
extern char D_00CB52A0[];
extern u8 *D_003E7A08;
extern u8 *D_003E7574;

extern s32 func_00967760(u8 *p);
extern s32 func_002AE670(s32 n);
extern s32 func_0098FFA0(u8 *p, s32 a, s32 b);
extern s32 func_00AFBA70(s32 n);
extern s32 func_00288670(s32 a, s32 b);
extern s32 func_00BDB8B0(u8 *e);
extern f32 func_001CD9E0(f32 x);
extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_009B34C0(s32 a, s32 b, s32 c, s32 d, f32 x, f32 y, f32 z, f32 w);
extern f32 func_009835C0(f32 a, f32 b, f32 c);
extern s32 func_0098F7E0(u8 *p);

void func_00953400(u8 *p) {
    s32 tbl[21];
    s32 cand[8];
    s32 saved;
    u32 c0;
    s32 off;
    s32 j;
    u16 ang;
    f32 f20, f21, f22, f23;
    u8 *e;
    s32 fp;
    s32 i;
    s32 r;
    u32 t;
    u32 k;
    s32 *s6;
    u8 *ptr;
    s32 idx;
    s32 n;
    f32 fl;
    s32 d;

    r = 0;
    for (i = 0; i < 21; i++) {
        tbl[i] = ((s32 *)D_00C9A310)[i];
    }
    func_00967760(p);
    ptr = D_003E7A08;
    fl = 6.0f;
    n = 0;
    if (ptr[8] == p[0]) {
        s32 q = *(s32 *)(ptr + 4);
        if (q == 4 || q == 5) {
            s32 dd = *(s32 *)(ptr + 0x1C) - *(s32 *)D_00591DC4;
            if (dd < 0) {
                dd = -dd;
            }
            if (dd < 15) {
                n = 1;
                fl += (f32)(15 - dd);
            }
        }
    }
    if (n == 0) {
        fl += (f32)(*(s32 *)(p + 0x1C) / 1024);
    }
    d = (s32)fl;
    if (d <= 0x20) {
        f20 = (f32)(s32)((u8 *)D_005926DC)[d];
    } else {
        f20 = (f32)func_002AE670(d);
    }
    for (i = 0; i < 8; i++) {
        cand[i] = 0;
    }
    f23 = f20;
    saved = func_0098FFA0(p, 1, 1) & 0xFF;
    if ((func_00AFBA70(p[0]) & 0xFF) == 0xFF) {
        idx = 1;
    } else {
        idx = (func_00AFBA70(p[0]) & 0xFF) % 0x17;
    }
    e = (u8 *)D_0058E5B0 + idx * 0x240;
    r = func_00288670((u8)((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x72] & 0x7F, 0x28);
    fp = 0;
    r = (0x63 - r) * 4;
    for (i = 1; i <= 6; i++) {
        tbl[3 * i] += r;
    }
    for (fp = 0; fp < 11; fp++, e += 0x240) {
        u8 *tb = (u8 *)D_00591E00 + ((p[0x13] ^ 1) << 1);
        u32 mode;
        u32 dist;
        u8 e0 = e[0];
        if (e0 == tb[0x4F] || e0 == tb[0x50] || e0 == saved || e[0x10] == 0) {
            u32 v = *(u32 *)(p + 0x158 + e0 * 4);
            if (v < 0x24000) {
                mode = 2;
            } else {
                mode = 1;
            }
            if (v < 0x10000) {
                mode = 0;
            }
        } else {
            if (p[0] != *(u8 *)D_00591E4C) {
                continue;
            }
            mode = 0;
        }
        if (func_00BDB8B0(e) == 0) {
            continue;
        }
        if (mode == 2) {
            f32 a, b, c, dd;
            s32 x, y;
            f22 = *(f32 *)(e + 0xE0) + *(f32 *)(e + 0xF0) * f20 / 2.0f;
            f21 = *(f32 *)(e + 0xE8) + *(f32 *)(e + 0xF8) * f20 / 2.0f;
            a = *(f32 *)(p + 0xE0) + *(f32 *)(p + 0xF0) * f20 / 4.0f;
            b = *(f32 *)(p + 0xE8) + *(f32 *)(p + 0xF8) * f20 / 4.0f;
            x = (s32)(a - f22);
            y = (s32)(b - f21);
            dist = x * x + y * y;
        } else if (mode == 1) {
            f32 a, b;
            s32 x, y;
            a = *(f32 *)(p + 0xE0) + *(f32 *)(p + 0xF0) * f20 / 2.0f;
            f22 = (0.0f + *(f32 *)(e + 0xE0)) + *(f32 *)(e + 0xF0) * f20;
            x = (s32)(a - f22);
            b = *(f32 *)(p + 0xE8) + *(f32 *)(p + 0xF8) * f20 / 2.0f;
            f21 = (0.0f + *(f32 *)(e + 0xE8)) + *(f32 *)(e + 0xF8) * f20;
            y = (s32)(b - f21);
            dist = x * x + y * y;
        } else {
            f22 = *(f32 *)(e + 0xE0);
            f21 = *(f32 *)(e + 0xE8);
            dist = *(u32 *)(p + 0x158 + e[0] * 4);
        }
        if (dist >= 0x1440000) {
            continue;
        }
        c0 = (u32)(s32)func_001CD9E0((f32)dist);
        if (c0 < 0x200) {
            f20 = f23 / 2.0f;
        } else {
            f20 = f23;
        }
        {
            s32 w = func_009B3070(*(u16 *)(e + 0x26), *(u16 *)(p + 0x128 + e[0] * 2)) & 0xFFFF;
            if (w < 0x3000) {
                c0 += (0x3000 - w) / 24;
            }
            if (mode != 0) {
                ang = (u16)func_009B34C0(w, *(u16 *)(p + 0x128 + e[0] * 2), 0, 0,
                                         (0.0f + *(f32 *)(p + 0xE0)) + *(f32 *)(p + 0xF0) * f20,
                                         (0.0f + *(f32 *)(p + 0xE8)) + *(f32 *)(p + 0xF8) * f20,
                                         f22, f21);
            } else {
                ang = *(u16 *)(p + 0x128 + e[0] * 2);
            }
        }
        s6 = cand;
        off = 0;
        for (j = 0; j < 8; j++, s6++) {
            u32 s0v;
            s32 s3v;
            s32 w3;
            s0v = 0;
            s3v = func_009B3070(ang, (u16)off) & 0xFFFF;
            for (i = 1; i < 7; i++) {
                if (c0 < (u32)tbl[3 * i]) {
                    s32 lo0 = tbl[3 * (i - 1)];
                    u32 den = (u32)(tbl[3 * i] - lo0);
                    u32 q = (u32)((c0 - lo0) * 100);
                    u32 rr;
                    f32 g;
                    rr = den ? q / den : 0xFFFFFFFF;
                    g = func_009835C0((f32)tbl[3 * (i - 1) + 1], (f32)tbl[3 * i + 1], (f32)(s32)rr);
                    s0v = (u32)g & 0xFFFF;
                    r = (s32)func_009835C0((f32)tbl[3 * (i - 1) + 2], (f32)tbl[3 * i + 2], (f32)(s32)rr);
                    w3 = s0v & 0xFFFF;
                    if (s3v < w3) {
                        s32 dv = s3v * 20;
                        s32 lo = w3 ? dv / w3 : (dv >= 0 ? -1 : 1);
                        r = (s32)func_009835C0((f32)r, 0.0f, (f32)lo);
                    } else if (s3v < w3 + 0x1000) {
                        s32 dv = (s3v + 0x1000) * 80;
                        s32 lo = w3 ? dv / w3 : (dv >= 0 ? -1 : 1);
                        r = (s32)func_009835C0((f32)r, 0.0f, (f32)(lo + 20));
                    }
                    if (r == 0) {
                        r = 1;
                    }
                    break;
                }
            }
            if (s3v < (s32)(s0v & 0xFFFF)) {
                if (*s6 < r) {
                    *s6 = r;
                }
            }
            off += 0x2000;
        }
    }
    {
        f32 x0 = (0.0f + *(f32 *)(p + 0xE0)) + 8.0f * *(f32 *)(p + 0xF0);
        if (!(x0 <= 10393.0f)) {
            if (cand[0] <= 0) cand[0]++;
            if (cand[1] <= 0) cand[1]++;
            if (cand[7] <= 0) cand[7]++;
        }
        x0 = (0.0f + *(f32 *)(p + 0xE0)) + 8.0f * *(f32 *)(p + 0xF0);
        if (x0 < -10393.0f) {
            for (i = 3; i < 6; i++) {
                if (cand[i] <= 0) cand[i]++;
            }
        }
        x0 = (0.0f + *(f32 *)(p + 0xE8)) + 8.0f * *(f32 *)(p + 0xF8);
        if (x0 < -5657.0f) {
            for (i = 1; i < 4; i++) {
                if (cand[i] <= 0) cand[i]++;
            }
        }
        x0 = (0.0f + *(f32 *)(p + 0xE8)) + 8.0f * *(f32 *)(p + 0xF8);
        if (!(x0 <= 5657.0f)) {
            for (i = 5; i < 8; i++) {
                if (cand[i] <= 0) cand[i]++;
            }
        }
    }
    {
        s32 a1 = 0x1900 - p[0x5C] * 12;
        s32 w1c = *(s32 *)(p + 0x1C);
        if (a1 * 5 / 4 < w1c) {
            k = 0x400;
        } else if (a1 < w1c) {
            k = 0x200;
        } else {
            k = 0;
        }
        if (func_0098F7E0(p) != 0) {
            k += 0x200;
        }
        if (!(*(f32 *)(p + 0xE0) <= 11929.0f - (f32)k)) {
            cand[0] = 0x63;
        }
        if (*(f32 *)(p + 0xE0) < -11929.0f + (f32)k) {
            cand[4] = 0x63;
        }
        t = (u32)((*(s32 *)(p + 0x1C) + (0x1900 - p[0x5C] * 12)) / 24);
        if (!(*(f32 *)(p + 0xE0) <= 12441.0f - (f32)t)) {
            cand[1] = 0x63;
            cand[7] = 0x63;
        }
        if (*(f32 *)(p + 0xE0) < -12441.0f + (f32)t) {
            cand[3] = 0x63;
            cand[5] = 0x63;
        }
        if (*(f32 *)(p + 0xE8) < -7193.0f + (f32)t) {
            cand[2] = 0x63;
        }
        if (*(f32 *)(p + 0xE8) < -7705.0f + (f32)t) {
            cand[1] = 0x63;
            cand[3] = 0x63;
        }
        if (!(*(f32 *)(p + 0xE8) <= 7193.0f - (f32)t)) {
            cand[6] = 0x63;
        }
        if (!(*(f32 *)(p + 0xE8) <= 7705.0f - (f32)t)) {
            cand[5] = 0x63;
            cand[7] = 0x63;
        }
    }
    if (*(u8 *)D_00591E4C == 0 && *(s32 *)(D_003E7574 + 0x50) > 0x6000) {
        f32 ax = *(f32 *)(p + 0xE0);
        f32 ay;
        if (ax < 0.0f) ax = -ax;
        if (!(ax <= 12953.0f)) {
            cand[2] = 0x63;
            cand[5] = 0x63;
        }
        ay = *(f32 *)(p + 0xE8);
        if (ay < 0.0f) ay = -ay;
        if (!(ay <= 8217.0f)) {
            cand[0] = 0x63;
            cand[4] = 0x63;
        }
    }
    for (j = 0; j < 8; j++) {
        if (cand[j] >= 0x64) {
            cand[j] = 0x63;
        }
        D_00CB52A0[0xD4 + j] = (char)cand[j];
    }
}
