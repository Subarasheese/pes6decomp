/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32 a, s32 b, s32 c);
extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_00952A50(s32 a);
extern s32 func_0096D0A0(void *p, s32 a, s32 b);
extern s32 func_00AFBA70(s32 a);
extern s32 func_009630D0(void *p);
extern s32 func_00288670(s32 a, s32 b);
extern s32 func_00BBB780(s32 a);
extern s32 func_00C04AD0(void *p, s32 a);
extern s32 func_00990590(void *p, s32 a, s32 b, s32 c, s32 d);
extern s32 func_009909D0(void *p, s32 a);
extern s32 func_00952420(void *p, s32 a, s32 b, s32 c);
extern s32 func_00C07F20(void *p);
extern s32 func_00962BC0(void *p);
extern s32 func_009916B0(void *p);
extern s32 func_00905270(void *p);
extern s32 func_0095D320(void *p, s32 a);
extern s32 func_00C04E00(void *p, s32 a);
extern f32 fabsf(f32 x);
extern char D_005926E0[];
extern char D_0058E5B0[];
extern char D_00592980[];
extern char D_00591E4C[];
extern char D_00CB5382[];

s32 func_00C07AA0(u8 *p, u8 *q) {
    s32 d2, s17, s18, s19, s22;
    s32 v, a, x, y;
    u8 *t;

    s22 = 0;
    s19 = 0;
    s18 = func_009B32D0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x120), 0x800) & 0xFFFF;
    if (!(fabsf(*(f32 *)(p + 0xE8)) <= 939.0f) && !(fabsf(*(f32 *)(p + 0xE0)) <= 9241.0f)) {
        d2 = func_009B32D0(*(u16 *)(p + 0x118), s18, 0x2000) & 0xFFFF;
        s17 = func_00952A50(d2) & 0xFF;
        v = func_00952A50(s18) & 0xFF;
        if (s17 < v) {
            s18 = d2 & 0xFFFF;
        }
    }
    if (*(u32 *)(q + 0x10) % *(u8 *)D_005926E0 == 0) {
        *(u16 *)(q + 0x30) = s18;
    }
    func_0096D0A0(p, *(u16 *)(q + 0x30), 0);
    a = func_00AFBA70(p[0]) & 0xFF;
    if (a == 0xFF) {
        a = 1;
    } else {
        a = (func_00AFBA70(p[0]) & 0xFF) % 0x17;
    }
    t = (u8 *)D_0058E5B0 + a * 576;
    s17 = *(s32 *)(t + 0x1C) / 64;
    x = (s32)(*(f32 *)(p + 0xE0) + *(f32 *)(p + 0xF0) - (*(f32 *)(t + 0xE0) + *(f32 *)(t + 0xF0)));
    y = (s32)(*(f32 *)(p + 0xE8) + *(f32 *)(p + 0xF8) - (*(f32 *)(t + 0xE8) + *(f32 *)(t + 0xF8)));
    d2 = x * x + y * y;
    v = func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x2A)) & 0xFFFF;
    if (v < 0x1000) {
        s22 = 1;
    }
    if (func_009630D0(p) > 0) {
        s22 = 0;
    }
    v = *(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0x80);
    v = func_00288670(v & 0x7F, 0x28);
    v = (s16)(0x63 - v);
    if (func_00BBB780(v) != 0) {
        s22 = 0;
    }
    if (s22 && (s17 + 0x5A0) * (s17 + 0x5A0) < d2 && d2 < (s17 + 0x5E0) * (s17 + 0x5E0)) {
        func_00C04AD0(p, 2);
        s19 = 1;
    } else if (d2 < (s17 + 0x5A0) * (s17 + 0x5A0)) {
        s19 = 1;
    }
    if ((func_00990590(p, *(u16 *)(p + 0x120), 0x1000, *(s32 *)(p + 0x124), 1) & 0xFF) >= 2) {
        s19 = 1;
    }
    if (func_009909D0(p, 0x90000) != 0) {
        s19 = 1;
    }
    if (func_00952420(p, *(u16 *)(p + 0x120), 0x4000, 0x100000) == 0) {
        s19 = 1;
    }
    if (func_00C07F20(p) != 0) {
        return 1;
    }
    a = func_00952A50(s18) & 0xFF;
    v = (((s18 & 0xFFFF) + 0x1000) & 0xE000) >> 13;
    if (q[0x28 + v] + 10 < a) {
        s19 = 1;
    }
    if (func_00962BC0(p) >= 5 && *(u8 *)D_00591E4C != p[0]) {
        s19 = 0;
    }
    if ((func_009909D0(p, 0x240000) & 0xFF) == 0) {
        if ((func_009916B0(p) & 0xFF) < 3) {
            s19 = 0;
        }
    }
    if (s19 == 0) {
        return 3;
    }
    if (*(u8 *)D_00CB5382 >= 4) {
        if ((func_00905270(p) & 0xFF) == 0 || (func_009B3070(*(u16 *)(p + 0x2A), *(u16 *)(p + 0x120)) & 0xFFFF) >= 0x1801) {
            if (func_0095D320(p, 1) != 0) {
                return 4;
            }
        }
    }
    func_00C04E00(p, 2);
    return 1;
}
