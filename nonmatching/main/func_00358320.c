/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030D990(u8);
extern s32 func_0030E6C0(u8);
extern s32 func_0030E710(u8);
extern s32 func_0030EA70(void);
extern void func_0030F7F0(s32 *, u8);
extern s32 func_00311390(u8);
extern s32 func_003260A0(s32, u8);
extern u8 *func_00335370(void);
extern u8 func_003389D0(void *, s32);
extern s32 func_00340BF0(f32, f32);
extern s32 func_00340F30(void *);
extern s32 func_00341040(void *);
extern s32 func_00341090(void *);
extern s32 func_00341120(void *, s32, s32, s32);
extern s32 func_00341390(void *);
extern void func_00341B10(s32 *, s32);
extern s32 func_0098F8D0(u8, u8);
extern void func_00991F40(void *, u8 *);
extern char D_0058E5B0[];
extern char D_0061C718[];
extern char D_00CB5F20[];
extern char D_00CB5F24[];

s32 func_00358320(void *arg0) {
    s32 spA0;
    s32 spB8[2];
    s32 spC0;
    s32 spC4;
    u8 spCF;
    u8 *g = (u8 *)D_0061C718;
    u8 *c = (u8 *)D_00CB5F24;
    u8 *s1;
    u8 *s4;
    s32 fp, k, i, a, s0, s5, s6, s7, q, mode, g4, sum;
    u8 t, v;

    k = c[4];
    if (k != 0xFF) {
        k = k % 23;
    } else {
        k = 1;
    }
    s1 = (u8 *)D_0058E5B0 + k * 0x240;
    fp = *(s32 *)((u8 *)arg0 + 0x3C);
    mode = *(s32 *)c;
    if (mode == 6) {
        g[9] = (g[9] & ~0x10) | 0x10;
        func_00991F40(s1, &spCF);
        g[9] = (g[9] & ~0x20) | ((spCF & 1) << 5);
        g[9] = (g[9] & ~0x40) | 0x40;
    } else if (mode == 15) {
        if (g[1] == 4) {
            g[9] = (g[9] & ~4) | 4;
        } else if (g[1] == 3) {
            g[9] = (g[9] & ~2) | 2;
        } else {
            g[9] = (g[9] & ~8) | 8;
        }
    } else if (mode == 10) {
        a = c[0x22];
        g[8] = (g[8] & ~0x10) | 0x10;
        g[6] = (g[6] & ~8) | ((((a >> 3) & 3) == 1) << 3);
        g[6] = (g[6] & ~0x20) | ((((a >> 3) & 3) == 2) << 5);
        g[6] = (g[6] & ~0x40) | ((((a >> 2) & 1) == 1) << 6);
        g[6] = (g[6] & ~0x80) | (((a & 3) == 2) << 7);
    }
    t = s1[0x12];
    g[7] = (g[7] & ~1) | ((func_0098F8D0(t, t) & 0xFF) >= 5);
    s4 = 0;
    for (i = 0; i < 10; i++) {
        v = *(u8 *)(D_00CB5F20 + i * 0x40 + 8);
        if (v == 0xFF) continue;
        a = v % 23;
        t = *(u8 *)(D_0058E5B0 + a * 0x240 + 0x12);
        if (t != s1[0x12]) {
            s4 = (u8 *)D_00CB5F20 + i * 0x40 + 4;
            break;
        }
    }
    if (s4 == 0) return 0;
    s0 = s4[4];
    if (s0 == 0) return 0;
    func_00335370()[0x1000] = s0;
    s6 = func_00341390(s4);
    spA0 = func_00340F30(s4);
    s7 = func_00341040(s4);
    s0 = func_00341090(s4);
    if (s0 != 0) return 0;
    q = func_003260A0(fp, func_003389D0(arg0, 0));
    g[9] = (g[9] & ~0x80) | ((q & 1) << 7);
    s5 = 0;
    {
        f32 f2 = (f32)*(s16 *)(s1 + 0x14);
        f32 f12 = *(f32 *)(s1 + 0xE0) * f2;
        f32 f13 = *(f32 *)(s1 + 0xE8) * f2;
        if (func_00340BF0(f12, f13) != 0 && s0 == 0) s5 = 1;
    }
    g[7] = (g[7] & ~2) | ((s5 & 1) << 1);
    mode = *(s32 *)s4;
    if (mode == 4) {
        g[6] = (g[6] & ~4) | 4;
    } else if (mode == 1) {
        if (s0 == 0) {
            g[7] = (g[7] & ~0x20) | 0x20;
        }
        g[6] = (g[6] & ~2) | 2;
        if ((s7 | (spA0 | s6)) != 0) {
            g[7] = (g[7] & ~0x40) | ((s7 & 1) << 6);
            g[10] = (g[10] & ~1) | (s6 & 1);
            g[8] = (g[8] & ~0x20) | 0x20;
            g[10] = (g[10] & ~0x40) | 0x40;
            g[7] = (g[7] & ~0x80) | 0x80;
            g[11] = (g[11] & ~1) | (g[0] == 0);
            g[11] = (g[11] & ~2) | ((g[0] == 1) << 1);
            g[11] = (g[11] & ~4) | ((g[0] == 2) << 2);
            g[11] = (g[11] & ~8) | ((g[0] == 3) << 3);
            v = g[11];
            g[10] = (g[10] & ~0x80) | ((((v >> 3) & 1) | (((v >> 2) & 1) | ((v & 1) | ((v >> 1) & 1)))) << 7);
            a = 1;
            if (g[0] != 1 && (s32)g[0] < 3) a = 0;
            g[8] = (g[8] & ~2) | ((a & 1) << 1);
            a = 1;
            if (g[0] != 2 && (s32)g[0] < 3) a = 0;
            g[8] = (g[8] & ~4) | ((a & 1) << 2);
            g[8] = (g[8] & ~8) | (((s32)g[0] >= 3) << 3);
            g[9] = (g[9] & ~1) | 1;
            v = g[8];
            g[8] = (g[8] & ~1) | ((((v >> 3) & 1) | (((v >> 2) & 1) | ((v >> 1) & 1))) & 1);
            g[8] = (g[8] & ~0x40) | ((g[1] == 4) << 6);
            g[8] = (g[8] & ~0x80) | ((g[1] == 3) << 7);
        } else if (func_00341120(s4, -3, 1, 2) != 0 && s0 == 0) {
            g[7] = (g[7] & ~4) | 4;
            s0 = func_0030E710(s4[4]);
            if (s0 == func_0030E710(c[4])) {
                g[7] = (g[7] & ~8) | 8;
            } else {
                g[7] = (g[7] & ~0x10) | 0x10;
            }
        }
    }
    g[4] = s4[4];
    func_00341B10(spB8, func_0030E6C0(g[4]));
    if (func_0030D990(g[4]) != 3) return 1;
    if (func_0030EA70() < 0xF) return 1;
    if (func_00311390(g[4]) == 0) return 1;
    if (func_003260A0(fp, g[4]) != 0) return 1;
    if (spB8[1] == 7 || spB8[1] == 3 || spB8[1] == 10) {
        func_0030F7F0(&spC0, g[4]);
        g4 = g[4];
        if (((g4 - 1) % 11) != 10) {
            func_0030F7F0(&spC4, (g4 + 1) & 0xFF);
            if (func_00311390((g[4] + 1) & 0xFF) == 0) return 1;
        } else {
            func_0030F7F0(&spC4, (g4 - 1) & 0xFF);
            if (func_00311390((g[4] - 1) & 0xFF) == 0) return 1;
        }
        sum = spC0 + spC4;
        if (sum < 8) return 1;
        if (sum >= 0x14) return 1;
        g[6] = (g[6] & ~0x10) | 0x10;
    } else {
        g[6] = (g[6] & ~0x10);
    }
    return 1;
}
