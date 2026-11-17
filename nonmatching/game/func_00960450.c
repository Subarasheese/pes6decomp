/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_00CB537C[];
extern char D_00CB537E[];
extern char D_00CB5390[];
extern char D_00CB5372[];
extern char D_00CB5397[];
extern char D_00CB5308[];
extern char D_00CB5300[];
extern char D_00CB5382[];
extern char D_00CB5383[];
extern char D_00591DC4[];
extern char D_005926E0[];
extern char D_00591DCD[];
extern char D_00591E4F[];
extern char D_00591E88[];
extern char D_00591E90[];
extern char D_0058E5B0[];
extern char D_005A2167[];
extern char D_005A2168[];
extern char D_005A2169[];
extern char D_005A216A[];
extern char D_005A216B[];
extern char D_005A2186[];
extern char D_00CB3300[];
extern u8 *D_003E7A08;

s32 func_00288670(s32, s32);
s32 func_002AE670(s32);
u8 *func_0098EC40(s32);
s32 func_0098F530(u8 *);
s32 func_00BBB8C0(s32);
s32 func_0098F4A0(u8 *);
s32 func_0098ED30(s32);
s32 func_0098F410(u8 *);
s32 func_0098F7E0(u8 *);
s32 func_00290B80(s32, s32);
s32 func_0095FDA0(u8 *, s32);
s32 func_00991380(s32);
s32 func_009A0270(void);

s32 func_00960450(u8 *p) {
    s32 s1, s2, s3, r, x, t, idx;
    u8 *q;
    u8 *a1;
    f32 f0, f1, f2;

    s3 = func_00288670(*(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0x81) & 0x7F, 0x28);
    s2 = func_00288670(*(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0x72) & 0x7F, 0x28);
    s1 = p[0x13];
    if (D_003E7A08[s1] != 0) {
        if (s1 != func_0098EC40(1)[0x13]) {
            D_00CB5390[s1] = 1;
            goto chk_done;
        }
    }
    if (*(s32 *)(p + 0x1E0) == 0xD) {
        D_00CB5390[s1] = 1;
    }
chk_done:
    a1 = (u8 *)D_00CB537C + p[0x13];
    if (*a1 != 0) {
        if (*(u32 *)D_00591DC4 % *(u8 *)D_005926E0 == 0) {
            *a1 = *a1 - 1;
        } else if (*(u8 *)D_00CB5397 != 0 || *(u8 *)D_00CB5308 != 0 || D_003E7A08[p[0x13]] != 0) {
            *a1 = *a1 - 1;
        }
        return *(u8 *)(D_00CB537E + p[0x13]);
    }
    D_00CB537C[p[0x13]] = func_002AE670(0x80);
    if (D_003E7A08[p[0x13]] == 0) {
        if (*(u8 *)(D_00CB5372 + p[0x13]) != 0) {
            D_00CB5390[p[0x13]] = 0;
        } else {
            t = *(u8 *)(D_00CB537E + p[0x13]);
            if (t == 3) {
                idx = p[0x13] ^ 1;
                x = *(u8 *)(D_00591E4F + idx * 2);
                x = (x == 0xFF) ? 1 : x % 23;
                q = (u8 *)(D_0058E5B0 + x * 576);
                r = func_00288670(*(u8 *)(D_00592980 + q[0x12] * 26880 + q[0x11] * 840 + 0x6B) & 0x7F, 0x14);
                r = func_00BBB8C0((300 - s3 * 3) + (s2 - r) * 10);
                if (r != 0) {
                    if ((func_0098ED30(p[0]) & 0xFF) == 5) {
                        D_00CB5390[p[0x13]] = 1;
                    }
                } else {
                    D_00CB5390[p[0x13]] = 1;
                }
                goto l884;
            } else if (t == 0xD) {
                if (func_0098F530(p) == 0) goto l884;
                idx = p[0x13] ^ 1;
                x = *(u8 *)(D_00591E4F + idx * 2);
                x = (x == 0xFF) ? 1 : x % 23;
                q = (u8 *)(D_0058E5B0 + x * 576);
                r = func_00288670(*(u8 *)(D_00592980 + q[0x12] * 26880 + q[0x11] * 840 + 0x6B) & 0x7F, 0x14);
                r = func_00BBB8C0((400 - s3 * 3) + (s2 - r) * 10);
                if (r == 0 && p[0x10] >= 10) {
                    D_00CB5390[p[0x13]] = 1;
                }
                goto l884;
            } else {
                D_00CB5390[p[0x13]] = 0;
            }
l884:
            if (func_0098F4A0(p) != 0) {
                u8 *w = (u8 *)(*(s32 *)D_00CB3300 + 8);
                if (*(s16 *)(w + p[0x12] * 756) < *(s16 *)(w + (u8)(p[0x12] ^ 1) * 756)
                    && *(u8 *)D_00591DCD != 0 && s2 >= 0x32
                    && func_00BBB8C0(300 - s3 * 3) == 0 && p[0x10] >= 10) {
                    D_00CB5390[p[0x13]] = 1;
                }
            }
        }
    }
    s1 = *(u8 *)D_00CB5300;
    if (s1 < func_002AE670(0x3C)) {
        t = *(u8 *)(D_00CB537E + p[0x13]);
        if (t != 0 && t < 7) return t;
        s1 = func_0098F7E0(p) ? 0 : 10;
        s1 += func_00290B80(*(u8 *)(D_005A2167 + p[0x12] * 360), *(u8 *)(D_005A2186 + p[0x12] * 360)) & 0xFF;
        if (*(u8 *)D_00CB5382 >= 5) s1 += 0x1E;
        if (*(u8 *)(D_00CB5383 + p[0x12]) != 0) s1 += 0x1E;
        if (s1 >= 0x65) s1 = 0x64;
        r = func_00BBB8C0(0x64);
        {
            s32 lo = (r < s1);
            s32 tt = p[0x13];
            s32 v;
            s1 = 0;
            f0 = *(f32 *)(p + 0xE0);
            f1 = f0 - *(f32 *)(D_00591E90 + tt * 4);
            f2 = f1 < 0.0f ? -f1 : f1;
            if (f2 < 2048.0f) {
                v = (s32)f1;
                if (v <= 0) v = -v;
                v = 0x800 - v;
                s1 = v / 64;
            }
            r = func_00BBB8C0(0x64);
            if (lo) {
                if (r < s1 + *(u8 *)(D_005A2169 + p[0x12] * 360)) return 2;
                r = func_00BBB8C0(0x64);
                if (r < s1 + (*(u8 *)(D_005A2168 + p[0x12] * 360) >> 1)) return 1;
                return 3;
            } else {
                if (r < s1 + *(u8 *)(D_005A2169 + p[0x12] * 360)) return 5;
                r = func_00BBB8C0(0x64);
                if (r < s1 + (*(u8 *)(D_005A2168 + p[0x12] * 360) >> 1)) return 4;
                return 6;
            }
        }
    } else {
        if (func_0098F530(p) == 0) return 2;
        s1 = *(u8 *)D_00CB5300;
        if (!(s1 < func_002AE670(0xC0))) return 2;
        D_00CB537C[p[0x13]] = func_002AE670(0xC0);
        if (func_0098F410(p) == 0 && *(u8 *)D_00CB5308 == 0) {
            r = func_00BBB8C0(0x96);
            if (r < *(u8 *)(D_005A216B + p[0x12] * 360)) return 7;
        }
        s1 = func_0095FDA0(p, 0xD) & 0xFF;
        if (func_00BBB8C0(0x64) < s1) return 0xD;
        f0 = *(f32 *)(p + 0xE8);
        f1 = f0 < 0.0f ? -f0 : f0;
        if (!(f1 <= 5160.0f)) {
            r = func_00BBB8C0(0x64);
            if (r < *(u8 *)(D_005A216A + p[0x12] * 360)) return 8;
        }
        {
            s32 go;
            if (*(u8 *)D_00591DCD == 1) {
                go = ((func_009A0270() & 0xFF) >= 0x1F);
            } else {
                go = (*(u8 *)D_00591DCD >= 2);
            }
            if (go) {
                s1 = func_00991380(p[0x12]);
                r = func_00991380((u8)(p[0x12] ^ 1));
                if (r < s1) {
                    f32 h = (f32)*(s16 *)(p + 0x14);
                    f0 = *(f32 *)(p + 0xE0);
                    f1 = *(f32 *)(D_00591E88 + p[0x13] * 4);
                    f0 = f0 * h;
                    f1 = f1 * h;
                    if (f0 <= f1) return 9;
                    return 0xE;
                }
            }
        }
        s1 = func_0095FDA0(p, 0xC) & 0xFF;
        if (func_00BBB8C0(0x64) < s1) return 0xC;
        s1 = func_0095FDA0(p, 0xB) & 0xFF;
        if (func_00BBB8C0(0x64) < s1) return 0xB;
        s1 = func_0095FDA0(p, 0xF) & 0xFF;
        if (func_00BBB8C0(0x64) < s1) return 0xF;
        s1 = func_0095FDA0(p, 0xA) & 0xFF;
        if (func_00BBB8C0(0x64) < s1) return 0xA;
        return 2;
    }
}
