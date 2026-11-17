/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef unsigned int V128 __attribute__((mode(TI)));

extern char D_003ABDC0[];
extern f32 *D_003E74CC;
extern f32 D_003E7590;
extern char D_005E16C0[];
extern char D_005E1970[];
extern u8 D_005E19B0[];
extern u8 D_005E19DC[];
extern u8 D_005E1D32[];
extern f32 D_005E220C[];
extern f32 D_005E2210[];
extern char D_005E2300[];
extern char D_005E2304[];
extern char D_005E2308[];
extern char D_005E2310[];
extern char D_005E2314[];
extern char D_005E2318[];
extern f32 D_005E2320[];
extern f32 D_005E2324[];

extern void func_001A4210(void *, s32, s32, s32, s32, f32, f32);
extern f32 func_001A4890(void);
extern void func_001A54F0(f32 *);
extern void func_001A55C0(f32 *);
extern f32 func_001A5660(void);
extern void func_0029A290(void *, s32, void *, f32);
extern void func_0029A770(void *, s32, void *, f32);
extern void func_002A82B0(u8, s32, s32, s32);

void func_002A7040(u8 *p, s32 a1, s32 a2, s32 a3) {
    struct { f32 vecs[20]; f32 pairs[8]; f32 res[4]; f32 ev[4]; } L;
    f32 f20, f21, f2, f3, f1, f0, f12, s;
    s32 n, k, i, cnt;
    u32 s1;
    u8 s2;
    u8 *s0;
    u8 t;

    t = p[2] & 0xF;
    if (t == 5) {
        void (*fn)(void *, void *, void *, u32, u32, f32);
        s2 = D_005E19B0[0];
        s1 = *(u16 *)p;
        s0 = (u8 *)D_005E1970 + s1;
        f12 = (*(f32 *)(p + 0x200) * *D_003E74CC) / 60.0f;
        if (*s0 != s2) {
            fn = *(void (**)(void *, void *, void *, u32, u32, f32))(D_003ABDC0 + s1 * 20);
            if (fn != 0) fn(D_005E16C0 + s1 * 16, p + 0x60, p + 0x70, s1, s2, -2.0f);
        } else {
            fn = *(void (**)(void *, void *, void *, u32, u32, f32))(D_003ABDC0 + s1 * 20);
            if (fn != 0) fn(D_005E16C0 + s1 * 16, p + 0x60, p + 0x70, s1, s2, f12);
        }
        *s0 = s2;
        *(V128 *)(p + 0x50) = *(V128 *)(D_005E16C0 + s1 * 16);
        *(V128 *)D_005E2300 = *(V128 *)(p + 0x10);
        *(V128 *)D_005E2310 = *(V128 *)(p + 0x50);
        D_005E2324[0] = *(f32 *)(p + 0x90);
        D_005E2320[0] = *(f32 *)(p + 0xC4);
        return;
    }

    if (t == 4) {
        n = p[0x234];
        f20 = *(f32 *)(p + 0x21C + n * 4);
        f0 = *(f32 *)(p + 0x204);
        if (f0 <= f20) f20 = f0;
    } else {
        n = p[0x234];
        f20 = *(f32 *)(p + 0x204) * (*(f32 *)(p + 0x21C + n * 4) / *(f32 *)(p + 0x208));
    }

    k = p[0x235];
    if (k != 0) f21 = *(f32 *)(p + 0x21C + (k & 0xFF) * 4);
    else f21 = 0.0f;
    f0 = *(f32 *)(p + 0x220 + k * 4);
    if (f20 < f21) {
        s32 v = k - 1;
        for (;;) {
            if (v == 0) f21 = 0.0f;
            else f21 = *(f32 *)(p + 0x21C + v * 4);
            if (!(f20 < f21)) { p[0x235] = v; break; }
            v--;
        }
        func_002A82B0(p[2], *(s32 *)(p + 0x20C + p[0x235] * 4), a2, a3);
    } else if (f0 < f20) {
        s32 v = k + 1;
        if (v < n) {
            do {
                f0 = *(f32 *)(p + 0x220 + v * 4);
                if (f20 <= f0) break;
                v++;
            } while (v < n);
        }
        p[0x235] = v;
        f21 = *(f32 *)(p + 0x21C + p[0x235] * 4);
        func_002A82B0(p[2], *(s32 *)(p + 0x20C + p[0x235] * 4), a2, a3);
    }

    f20 = f20 - f21;
    t = p[2] & 0xF;
    f3 = *(f32 *)(p + 0x220 + p[0x235] * 4) - f21;

    if (t == 4) {
        if (p[5] & 4) f20 = f3 - f20;
        func_001A4210(p + 0xD0, 0, 0, 0, 5, D_003E7590, f20);
        func_001A54F0(L.ev);
        *(f32 *)D_005E2300 = L.ev[0];
        *(f32 *)D_005E2304 = L.ev[1];
        *(f32 *)D_005E2308 = L.ev[2];
        func_001A55C0(L.ev);
        *(f32 *)D_005E2314 = L.ev[1];
        *(f32 *)D_005E2310 = L.ev[0];
        *(f32 *)D_005E2318 = L.ev[2];
        D_005E2324[0] = func_001A5660();
        D_005E2320[0] = 57.2957763671875f * func_001A4890();
    } else if (t == 3 || t == 2) {
        f20 = f20 / f3;
        cnt = (D_005E1D32[0] & 0xF) + 1;
        cnt &= 0xFF;
        if (p[5] & 4) f20 = 1.0f - f20;
        {
            s32 m = cnt - 1;
            for (i = 0; i < m; i++) {
                if (!(f20 <= *(f32 *)(p + 0xA4 + i * 4))) continue;
                f3 = *(f32 *)(p + 0xA0 + i * 4);
                f1 = *(f32 *)(p + 0xA4 + i * 4);
                f0 = (f32)i;
                f2 = f1 - f3;
                f1 = f20 - f3;
                f1 = f1 / f2;
                f20 = f0 + f1;
                break;
            }
        }
        func_0029A290(p + 0x50, cnt, D_005E2310, f20);
        if (!(D_005E19DC[0] & 1)) {
            for (i = 0; i < cnt; i++) {
                __asm__ volatile(
                    "lqc2 $vf4, 0x0(%0)\n"
                    "lqc2 $vf5, 0x0(%1)\n"
                    "vsub.xyzw $vf6, $vf4, $vf5\n"
                    "sqc2 $vf6, 0x0(%2)\n"
                    : : "r"(p + 0x10 + i * 16), "r"(p + 0x50 + i * 16), "r"(L.vecs + i * 4) : "memory");
            }
        }
        func_0029A290(L.vecs, cnt, D_005E2300, f20);
        if (!(D_005E19DC[0] & 1)) {
            __asm__ volatile(
                "lqc2 $vf4, 0x0(%0)\n"
                "lqc2 $vf5, 0x0(%1)\n"
                "vadd.xyzw $vf6, $vf4, $vf5\n"
                "sqc2 $vf6, 0x0(%0)\n"
                : : "r"(D_005E2300), "r"(D_005E2310) : "memory");
        }
        for (i = 0; i < cnt; i++) {
            L.pairs[i * 2] = *(f32 *)(p + 0x90 + i * 4);
            L.pairs[i * 2 + 1] = *(f32 *)(p + 0xB0 + i * 4);
        }
        func_0029A770(L.pairs, cnt, L.res, f20);
        f2 = *(f32 *)(p + 0x90);
        f1 = L.res[0] * f2;
        if (f1 < 0.0f) {
            if (f2 <= 0.0f) L.res[0] = -200.0f;
            else L.res[0] = 200.0f;
        }
        D_005E2324[0] = L.res[0];
        D_005E2320[0] = *(f32 *)(p + 0xC4);
        f1 = *(f32 *)(p + 0xC0);
        if (!(f1 <= 0.0f)) {
            D_005E2210[0] = f1;
            D_005E220C[0] = L.res[1];
        }
    } else if (t == 1) {
        f0 = f3 - f20;
        if (p[5] & 4) { f2 = f20; f20 = f0; }
        else f2 = f0;
        f1 = 1.0f / f3;
        if (f2 == 0.0f) {
            *(V128 *)D_005E2300 = *(V128 *)(p + 0x20);
            *(V128 *)D_005E2310 = *(V128 *)(p + 0x60);
            D_005E2324[0] = *(f32 *)(p + 0x94);
        } else if (f20 == 0.0f) {
            *(V128 *)D_005E2300 = *(V128 *)(p + 0x10);
            *(V128 *)D_005E2310 = *(V128 *)(p + 0x50);
            D_005E2324[0] = *(f32 *)(p + 0x90);
        } else {
            s = *(f32 *)(p + 0x20) * f20 + *(f32 *)(p + 0x10) * f2;
            *(f32 *)D_005E2300 = f1 * s;
            s = *(f32 *)(p + 0x24) * f20 + *(f32 *)(p + 0x14) * f2;
            *(f32 *)D_005E2304 = f1 * s;
            s = *(f32 *)(p + 0x28) * f20 + *(f32 *)(p + 0x18) * f2;
            *(f32 *)D_005E2308 = f1 * s;
            s = *(f32 *)(p + 0x60) * f20 + *(f32 *)(p + 0x50) * f2;
            *(f32 *)D_005E2310 = f1 * s;
            s = *(f32 *)(p + 0x64) * f20 + *(f32 *)(p + 0x54) * f2;
            *(f32 *)D_005E2314 = f1 * s;
            s = *(f32 *)(p + 0x68) * f20 + *(f32 *)(p + 0x58) * f2;
            *(f32 *)D_005E2318 = f1 * s;
            s = *(f32 *)(p + 0x94) * f20 + *(f32 *)(p + 0x90) * f2;
            D_005E2324[0] = f1 * s;
        }
        D_005E2320[0] = *(f32 *)(p + 0xC4);
        f0 = *(f32 *)(p + 0xC0);
        if (!(f0 <= 0.0f)) {
            D_005E2210[0] = f0;
            s = *(f32 *)(p + 0xB4) * f20 + *(f32 *)(p + 0xB0) * f2;
            D_005E220C[0] = f1 * s;
        }
    } else {
        *(V128 *)D_005E2300 = *(V128 *)(p + 0x10);
        *(V128 *)D_005E2310 = *(V128 *)(p + 0x50);
        D_005E2324[0] = *(f32 *)(p + 0x90);
        D_005E2320[0] = *(f32 *)(p + 0xC4);
        f1 = *(f32 *)(p + 0xC0);
        if (!(f1 <= 0.0f)) {
            D_005E2210[0] = f1;
            D_005E220C[0] = *(f32 *)(p + 0xB0);
        }
        goto tail;
    }
    goto tail;
tail:
    if (p[5] & 1) {
        *(f32 *)D_005E2318 = *(f32 *)D_005E2318 * -1.0f;
        *(f32 *)D_005E2308 = *(f32 *)D_005E2308 * -1.0f;
    }
    if (p[5] & 2) {
        *(f32 *)D_005E2310 = *(f32 *)D_005E2310 * -1.0f;
        *(f32 *)D_005E2300 = *(f32 *)D_005E2300 * -1.0f;
    }
}
