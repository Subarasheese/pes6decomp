/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB56AB[];
extern char D_00592980[];
extern char D_00591BBC[];
extern char D_0058E5B0[];
extern char D_00CA9874[];
extern char D_00CA9850[];
extern char D_00591E00[];
extern char D_00CB5397[];
extern u8 *D_003E7A08;

f32 fabsf(f32 x);
s32 func_00967760(u8 *p);
s32 func_0098F750(u8 *p);
s32 func_0098F4A0(u8 *p);
s32 func_0098F6C0(u8 *p);
s32 func_0098F7E0(u8 *p);
s32 func_0098F620(u8 *p);
s32 func_00288670(s32 a, s32 b);
s32 func_00BBB780(s32 a);
s32 func_00AFBA70(s32 a);
s32 func_00AFBAB0(s32 a);
s32 func_00BDB8B0(u8 *p);
f32 func_001CD9E0(f32 x);
s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
s32 func_009B3070(s32 a, s32 b);
s32 func_009513C0(u8 *p, s32 a, u8 *out);
s32 func_00A1B4A0(u8 *p);
f32 func_009835C0(f32 a, f32 b, f32 c);
s32 func_00952A90(s32 a, s32 b);

void func_00944A50(u8 *self) {
    s32 flag;
    u16 h130;
    u16 h140;
    s32 arr170[10];
    u16 arr150[10];
    s32 i;
    s32 j;
    s32 k;
    s32 idx;
    s32 big;
    u8 *p;
    u8 *q;
    u8 tmp;
    f32 f20;
    s32 s5;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 v0;
    s32 v1;
    s32 a1;
    s32 sq;
    s64 hh;
    s32 C0;
    s32 F0;
    s32 B0;
    s32 E0;
    s32 T0;
    s32 fp;
    s32 r;
    s32 X;
    s32 Y;
    s32 n;
    u32 w;
    s32 *tbl;
    u16 *pa;
    s32 *pb;

    flag = 0;
    D_00CB56AB[self[0x13]] = self[0];
    h130 = func_00967760(self);
    if (func_0098F750(self) == 0) {
        v0 = func_00288670(((u8 *)D_00592980)[self[0x12] * 26880 + self[0x11] * 840 + 0x74] & 0x7f, 30);
        if ((u8)func_00BBB780((s16)(v0 * 2)) == 0) {
            if ((u8)D_00591BBC[0] < 3) {
                flag = 2;
            }
        }
        if (func_0098F4A0(self) != 0) {
            if (fabsf(*(f32 *)(self + 0xE0)) < 9241.0f) {
                v0 = func_00288670(((u8 *)D_00592980)[self[0x12] * 26880 + self[0x11] * 840 + 0x74] & 0x7f, 30);
                if ((u8)func_00BBB780((s16)v0) == 0) {
                    flag = 2;
                }
            }
        }
    }

    if ((u8)func_00AFBA70(self[0]) + 1 == 255) {
        idx = 1;
    } else {
        idx = (u8)func_00AFBA70(self[0]) + 1;
    }
    q = (u8 *)D_0058E5B0 + idx * 576;
    pa = arr150;
    pb = arr170;
    for (i = 0; i < 10; i++, q += 0x240, pb++, pa++) {
        if (func_00BDB8B0(q) != 0) {
            w = *(u32 *)(self + 0x158 + q[0] * 4);
            *pb = (s32)func_001CD9E0((f32)w);
            *pa = func_009B34C0(
                *(f32 *)(self + 0xE0) + 10.0f * *(f32 *)(self + 0xF0),
                *(f32 *)(self + 0xE8) + 10.0f * *(f32 *)(self + 0xF8),
                *(f32 *)(q + 0xE0) + 10.0f * *(f32 *)(q + 0xF0),
                *(f32 *)(q + 0xE8) + 10.0f * *(f32 *)(q + 0xF8));
        }
    }

    if ((u8)func_00AFBAB0(self[0]) == 255) {
        idx = 1;
    } else {
        idx = (u8)func_00AFBAB0(self[0]) % 23;
    }
    p = (u8 *)D_0058E5B0 + idx * 576;
    big = *(s32 *)D_00CA9874;
    f20 = (f32)*(s16 *)(self + 0x14);

    for (j = 0; j < 11; j++, p += 0x240) {
        if (func_00BDB8B0(p) == 0) {
            p[0x202] = 1;
            continue;
        }
        if (self == p) {
            p[0x202] = 1;
            continue;
        }
        if (p[0x16] != 0x82) {
            if ((u8)func_00A1B4A0(p) != 0) {
                p[0x202] = 1;
                continue;
            }
        }
        if (D_003E7A08[self[0x13]] != 0 || D_00CB5397[0] != 0) {
            f32 a = *(f32 *)(p + 0xE0);
            f32 b = *(f32 *)(D_00591E00 + (p[0x13] ^ 1) * 4 + 0x90);
            a = a * f20;
            b = b * f20;
            if (!(a <= b)) {
                p[0x202] = 1;
                continue;
            }
        }
        if (!(fabsf(*(f32 *)(p + 0xE8)) <= 8729.0f)) {
            p[0x202] = 1;
            continue;
        }

        h140 = *(u16 *)(self + 0x128 + p[0] * 2);
        w = *(u32 *)(self + 0x158 + p[0] * 4);
        s5 = (s32)func_001CD9E0((f32)w);
        s0 = big;
        tbl = (s32 *)D_00CA9850;
        for (n = 1; n < 5; n++) {
            if (s5 < tbl[n * 2]) {
                s32 d = tbl[n * 2] - tbl[n * 2 - 2];
                s32 num = (s5 - tbl[n * 2 - 2]) * 100;
                s0 = (s32)func_009835C0((f32)tbl[n * 2 - 1], (f32)tbl[n * 2 + 1], (f32)(num / d));
                break;
            }
        }

        v0 = 99 - func_00288670(((u8 *)D_00592980)[self[0x12] * 26880 + self[0x11] * 840 + 0x74] & 0x7f, 30);
        v0 = v0 / 10;
        if (v0 < 10) {
            v0 = 10;
        }
        s2 = (s0 * v0) / 10;
        s1 = (u16)func_009B3070(h140, *(u16 *)(self + 0x2A));
        if (func_0098F6C0(self) != 0 || (u16)s1 >= 0x4401 || (func_0098F7E0(self) != 0 && (u16)s1 >= 0x2801)) {
            s0 = 1;
        } else {
            s0 = 0;
        }
        if (func_0098F620(self) != 0) {
            s0 = 2;
        }
        if ((u16)s1 >= 0x5001) {
            s0 = (u16)(s0 + (u16)(s5 / 4096));
        }
        if (s5 < 0x1000) {
            s0 = (u16)(s0 + (u16)((0x1000 - s5) / 1024));
        }
        if (func_0098F750(self) != 0) {
            sq = s5 * s5;
            if (sq < 0x1F4000 || sq >= 0x5100001) {
                p[0x202] = 1;
                continue;
            }
        } else {
            sq = s5 * s5;
            if (sq < 0x190000 || sq >= 0x5100001) {
                p[0x202] = 1;
                continue;
            }
        }
        if (p[0x10] != 0) {
            if (!(fabsf(*(f32 *)(p + 0xE0)) <= 12057.0f)) {
                p[0x202] = 1;
                continue;
            }
        }

        v0 = (u16)func_009B3070(h130, h140);
        if (v0 < 0x1800) {
            s1 = 0;
            p[0x20C] = 1;
        } else if (v0 < 0x3000) {
            s1 = 0x200;
            p[0x20C] = 1;
        } else if (v0 < 0x5000) {
            p[0x20C] = 4;
            s1 = 0x400;
        } else {
            p[0x20C] = 0;
            s1 = 0x800;
            if ((u8)func_00952A90(h140, 75) == 0) {
                p[0x202] = 1;
                continue;
            }
        }
        if (func_0098F7E0(self) != 0) {
            f32 f2 = *(f32 *)(p + 0xE0) * f20;
            f32 f1 = *(f32 *)(self + 0xE0) * f20;
            if (!(f1 <= f2)) {
                s1 = (u16)(s1 + 0x800);
            } else if (!(f1 <= f2 - 1280.0f)) {
                s1 = (u16)(s1 + 0x400);
            } else if (!(f1 <= f2 - 2560.0f)) {
                s1 = (u16)(s1 + 0x200);
            }
        }
        p[0x202] = 99;

        if ((u8)func_00AFBA70(self[0]) + 1 == 255) {
            idx = 1;
        } else {
            idx = (u8)func_00AFBA70(self[0]) + 1;
        }
        hh = h140;
        T0 = s2 + (u16)s1;
        C0 = (13 * T0) / 10;
        F0 = (6 * T0) / 10;
        B0 = T0 + ((u16)s0 << 10);
        E0 = (4 * T0) / 10;
        q = (u8 *)D_0058E5B0 + idx * 576;
        pa = arr150;
        pb = arr170;
        for (k = 0; k < 10; k++, q += 0x240, pa++, pb++) {
            if (func_00BDB8B0(q) == 0) {
                continue;
            }
            if (p[0x202] == 0) {
                break;
            }
            fp = *pa;
            s0 = *pb;
            v0 = func_009B3070(h140, fp);
            X = (u16)(fp - hh + 0x10000) < 0x8001;
            Y = (u16)(*(u16 *)(self + 0x120) - hh + 0x10000) < 0x8001;
            v0 = (u16)v0;
            if (X != Y) {
                v0 = (u16)((v0 * 5) / 4);
            }
            if (flag != 2 && s0 < s5 + 0xC0) {
                if (s0 < 0x801) {
                    a1 = 0x800;
                } else if (s0 < 0x1001) {
                    a1 = (u16)(0x800 - (u16)((s0 - 0x800) / 2));
                } else {
                    a1 = 0x400;
                }
                if ((u16)v0 < (u16)a1) {
                    p[0x202] = 0;
                    continue;
                }
                if (s0 < 0x100 && (u16)v0 < 0x4000) {
                    p[0x202] = 0;
                    continue;
                }
            }
            if (p[0x20C] == 4) {
                if (s0 < 0x300 && (u16)v0 < 0x3000) {
                    p[0x202] = 1;
                    continue;
                }
            } else if (p[0x20C] == 0) {
                if (s0 < 0x400) {
                    if ((u16)v0 < 0x3000) {
                        p[0x202] = 1;
                        continue;
                    }
                }
                if (s0 < 0x200 && (u16)v0 < 0x4800) {
                    p[0x202] = 1;
                    continue;
                }
            }
            if (s0 < 0x400) {
                a1 = F0;
                if (a1 < 0x800) {
                    a1 = 0x800;
                }
                v1 = (100 * ((u16)v0 - a1)) / (C0 - a1);
                if (v1 < 0) {
                    v1 = 0;
                }
                if (v1 >= 100) {
                    v1 = 99;
                }
                if (v1 < p[0x202]) {
                    p[0x202] = v1;
                }
            } else {
                a1 = E0;
                if (a1 < 0x800) {
                    a1 = 0x800;
                }
                v0 = (100 * ((u16)v0 - a1)) / (B0 - a1);
                if (s5 < s0) {
                    v1 = s0 - s5;
                    if (v1 > 0x180) {
                        v0 += (100 * (v1 - 0x180)) / 1664;
                    }
                }
                if (v0 < 0) {
                    v0 = 0;
                }
                if (v0 >= 100) {
                    v0 = 99;
                }
                if (v0 < p[0x202]) {
                    p[0x202] = v0;
                }
            }
            if (s5 < 0x800) {
                w = *(u32 *)(p + p[(p[0x13] ^ 1) * 11 + 0x1B4] * 4 + 0x158);
                if (w < 0x240000) {
                    if (p[0x202] >= 0x33) {
                        p[0x202] = 0x32;
                    }
                }
            }
            if (p[0x202] == 0) {
                p[0x202] = 1;
            }
        }
    }

    if ((u8)func_00AFBAB0(self[0]) == 255) {
        idx = 1;
    } else {
        idx = (u8)func_00AFBAB0(self[0]) % 23;
    }
    q = (u8 *)D_0058E5B0 + idx * 576;
    for (j = 0; j < 11; j++, q += 0x240) {
        if (func_00BDB8B0(q) != 0 && self != q && q[0x202] == 1) {
            s0 = *(u16 *)(self + 0x128 + q[0] * 2);
            s1 = (u16)func_009513C0(self, s0, &tmp);
            if ((u16)func_009B3070(h130, s0) >= 0x3000) {
                if ((u16)func_009B3070(s1, s0) > 0x3000) {
                    q[0x202] = 0;
                }
            }
        }
    }
}
