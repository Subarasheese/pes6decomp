/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_005A2164[];
extern char D_005A2165[];
extern char D_005A2166[];
extern char D_0058E5B0[];
extern char D_00CB5382[];
extern char D_00591DC4[];
extern f32 fabsf(f32 x);

extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_00952420(void *p, s32 a, s32 b, s32 c);
extern s32 func_00288670(s32 a, s32 b);
extern u32 func_002AE670(s32 a);
extern void func_00953060(s32 a);
extern s32 func_0098F530(void *p);
extern s32 func_0098F410(void *p);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_00AFBAB0(s32 a);
extern s32 func_00905270(void *p);
extern s32 func_0098ED30(s32 a);

void func_00950B20(u8 *p, s32 mode)
{
    s32 s0 = 0;
    s32 s1;
    u8 *s2;
    s32 v, a0, a5, t3;
    f32 t;

    mode &= 0xFF;
    if (mode == 2) {
        if (*(f32 *)(p + 0xE8) <= 0.0f) {
            func_00953060(1);
        } else {
            func_00953060(0);
        }
        return;
    }
    if (mode == 0) {
        if ((func_009B3070(*(u16 *)(p + 0x26), 0x4000) & 0xFFFF) <= 0x1000 ||
            (func_009B3070(*(u16 *)(p + 0x26), 0xC000) & 0xFFFF) <= 0x1000) {
            if (func_00952420(p, *(u16 *)(p + 0x26), 0x1400, 0x400000) == 0) {
                s0 = 0x32;
            }
        }
        v = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x74] & 0x7F, 0x1E);
        if (*(u32 *)D_00591DC4 % func_002AE670((0x63 - v) * 2 + 0xB4 - *(u8 *)D_00CB5382 * 20 - s0) != 0) {
            return;
        }
    }

    if (func_0098F530(p) != 0) {
        v = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x72] & 0x7F, 0x28);
        if (func_00BBB8C0(v / 10) != 0 && *(u8 *)D_00CB5382 != 0) {
            if (*(f32 *)(p + 0xE8) < 5657.0f) {
                if ((func_009B3070(*(u16 *)(p + 0x26), 0x4000) & 0xFFFF) <= 0x2000) {
                    func_00953060(1);
                    return;
                }
            }
            if (!(*(f32 *)(p + 0xE8) <= -5657.0f)) {
                if ((func_009B3070(*(u16 *)(p + 0x26), 0xC000) & 0xFFFF) <= 0x2000) {
                    func_00953060(0);
                    return;
                }
            }
        }
    }

    s0 = (u16)((u16)(((u8 *)D_005A2164)[p[0x12] * 360] + ((u8 *)D_005A2165)[p[0x12] * 360]) +
               ((u8 *)D_005A2166)[p[0x12] * 360]);
    if (func_0098F410(p) == 0 && (s0 & 0xFFFF) != 0) {
        a5 = func_00BBB8C0(s0 & 0xFFFF) & 0xFFFF;
        t3 = ((u8 *)D_005A2164)[p[0x12] * 360];
        if (a5 < t3) {
            if (fabsf(*(f32 *)(p + 0xE8)) < 2344.0f) {
                func_00953060(p[0x13] == 0);
                return;
            }
        } else if (a5 < t3 + ((u8 *)D_005A2165)[p[0x12] * 360]) {
            if (fabsf(*(f32 *)(p + 0xE8)) < 2344.0f) {
                func_00953060(p[0x13] != 0);
                return;
            }
        }
    }

    s0 = 0xFF;
    if (((func_00AFBAB0(p[0]) & 0xFF) + 1) == 0xFF) {
        a0 = 1;
    } else {
        a0 = (func_00AFBAB0(p[0]) & 0xFF) + 1;
    }
    s2 = (u8 *)D_0058E5B0 + a0 * 576;
    for (s1 = 0; s1 < 10; s1++, s2 += 0x240) {
        if (*(u8 *)(*(u32 *)(s2 + 4) + 0x2C) != 0 && p != s2) {
            t = (f32)*(s16 *)(p + 0x14);
            if (t * *(f32 *)(p + 0xE0) < 2048.0f + *(f32 *)(s2 + 0xE0) * t &&
                fabsf(*(f32 *)(p + 0xE8)) < 4136.0f &&
                func_00905270(p) != 0) {
                if ((func_009B3070(0x4000, *(u16 *)(p + s2[0] * 2 + 0x128)) & 0xFFFF) < 0x4000) {
                    s0 = 0;
                } else {
                    s0 = 1;
                }
                break;
            }
        }
    }

    if ((s0 & 0xFFFF) == 0xFF) {
        if (func_00BBB8C0(0x20) != 0) {
            return;
        }
    } else {
        func_00953060(s0 & 0xFF);
        return;
    }

    a0 = func_0098ED30(p[0]) & 0xFF;
    if (a0 == 0 || a0 == 1) {
        s0 = 0x1000;
    } else if (a0 == 2) {
        s0 = 0xC00;
    } else if (a0 == 3) {
        s0 = 0x800;
    } else {
        s0 = 0x600;
    }

    if (!(*(f32 *)(p + 0xE8) <= 2344.0f)) {
        if (func_00952420(p, 0x4000, 0x1400, s0 * s0) != 0) {
            func_00953060(0);
        }
        if (func_00952420(p, 0x4000, 0x1E00, (s0 >> 1) * (s0 >> 1)) != 0) {
            func_00953060(0);
        }
    }
    if (*(f32 *)(p + 0xE8) < -2344.0f) {
        if (func_00952420(p, 0xC000, 0x1400, s0 * s0) != 0) {
            func_00953060(1);
        }
        if (func_00952420(p, 0xC000, 0x1E00, (s0 >> 1) * (s0 >> 1)) != 0) {
            func_00953060(1);
        }
    }
}
