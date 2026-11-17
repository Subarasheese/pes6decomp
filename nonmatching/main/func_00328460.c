/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00324920(void *p);
extern s32 func_002371A0(s32 a);
extern void func_003246C0(void *a, void *b, s32 c);
extern void func_00324620(void *a, s32 b, s32 c);
extern s32 func_00236630(void);
extern s32 func_00234370(void);
extern void func_00323B90(void *p);
extern s32 func_002308F0(s32 a);
extern s32 func_0030DA70(s32 a);
extern s32 func_0022CD10(s32 a, s32 b);
extern f32 func_002955F0(void);
extern s32 func_002955A0(void);
extern void func_00323900(void *p, s32 a);
extern void func_00322F70(void *p);
extern void func_00324320(void *p);
extern s32 func_00324100(s32 a);
extern s32 func_00292C50(void);
extern void func_00323E50(void *p);
extern void func_00323CC0(void *p);
extern u8 *func_00335370(void);
extern s32 func_0022D6A0(s32 a, s32 b);
extern s32 func_00324B20(void *a, s32 b);
extern s32 func_0022D590(s32 a);

extern char D_00591BB0[];
extern char D_00591BBF[];
extern char D_00591BBD[];
extern char D_00591BBE[];
extern char D_00591C09[];
extern char D_00591BB7[];
extern char D_00591BB6[];
extern u8 *D_003E77B0;
extern char D_003B72D0[];
extern char D_003B72D4[];
extern char D_003B72D8[];
extern char D_003B72DC[];
extern char D_003B72E0[];
extern char D_003B72E4[];
extern char D_003B72E8[];
extern char D_003B72EC[];
extern char D_003B72F0[];

s32 func_00328460(u8 *s0)
{
    s32 mode;
    s32 i;
    s32 x;
    s32 s1;
    s32 e;
    s32 sel;
    s32 idx;
    s32 arr[2];
    f32 tab[3][3];
    f32 fl;
    u8 *t;

    func_00324920(s0);
    {
        u16 *p = (u16 *)D_00591BB0;
        s16 *q = (s16 *)(s0 + 0x3A);
        for (i = 0; i < 2; i++) {
            u16 v = *p;
            if (v == 0x127 || v == 0x126) {
                *q = func_002371A0(v);
            } else {
                *q = v;
            }
            p++;
            q++;
        }
    }
    x = *(u8 *)D_00591BBF;
    if (x == 0) {
        if (*(u8 *)D_00591BBD == 0) mode = 4; else mode = 3;
    } else if (x == 2) {
        mode = 2;
    } else if (x == 1) {
        mode = 1;
    }
    *(s32 *)(s0 + 4) = mode;
    *(s32 *)(s0 + 8) = (*(u8 *)D_00591BBE != 0);
    func_003246C0(s0 + 0x14, s0 + 0x1C, *(s32 *)s0);
    func_00324620(s0 + 0x18, *(s32 *)(s0 + 0x14), *(s32 *)(s0 + 0x1C));
    if ((u32)(*(s32 *)s0 - 6) < 2) {
        s1 = func_00236630() & 0xFF;
        e = func_00234370() & 0xFF;
    } else {
        s1 = 0xFF;
        e = 0xFF;
    }
    s0[0xD] = s1;
    s0[0xE] = e;
    func_00323B90(s0);
    x = *(u8 *)D_00591C09;
    if (x == 4 || x == 0xE || x == 2 || x == 1) {
        e = func_002308F0(x) & 0xFF;
    } else {
        e = 0x3B;
    }
    *(s32 *)(s0 + 0x2C) = e;
    arr[1] = func_0030DA70(1);
    arr[0] = func_0030DA70(0);
    for (i = 0; i < 2; i++) {
        if (arr[i ^ 1] < arr[i]) {
            *(s32 *)(s0 + 0x8DC + i * 4) = 1;
        } else if (arr[0] != arr[1]) {
            *(s32 *)(s0 + 0x8DC + i * 4) = 2;
        } else {
            *(s32 *)(s0 + 0x8DC + i * 4) = 3;
        }
    }
    if (*(u8 *)D_00591C09 == 0xE) {
        if ((u32)(*(s32 *)(s0 + 0x2C) - 0x28) < 7) {
            *(s32 *)(s0 + 0x48) = (*(u16 *)(s0 + 0x3A) == 0x35) ? 3 : 2;
            *(s32 *)(s0 + 0x4C) = (*(u16 *)(s0 + 0x3C) == 0x35) ? 3 : 2;
        } else {
            *(s32 *)(s0 + 0x48) = 1;
            *(s32 *)(s0 + 0x4C) = 1;
        }
    } else {
        *(s32 *)(s0 + 0x48) = 1;
        *(s32 *)(s0 + 0x4C) = 1;
    }
    s0[0x8D0] = 0xFF;
    s0[0x8D1] = 0xFF;
    if ((*(s32 *)(s0 + 0x48) == 2 || *(s32 *)(s0 + 0x4C) == 2) && *(s32 *)s0 == 7) {
        s1 = (u8)(s0[0xD] + 1);
        if (s1 < 6) {
            s0[0x8D0] = func_0022CD10(D_003E77B0[0x2C], s1);
            s0[0x8D1] = func_0022CD10(D_003E77B0[0x2D], s1);
        }
    }
    fl = func_002955F0();
    if (fl < 15.0f) {
        *(s32 *)(s0 + 0x24) = 1;
    } else if (fl < 25.0f) {
        *(s32 *)(s0 + 0x24) = 2;
    } else {
        *(s32 *)(s0 + 0x24) = 3;
    }
    i = func_002955A0() & 0xFF;
    if (i < 0x1E) {
        *(s32 *)(s0 + 0x28) = 1;
    } else if (i < 0x3C) {
        *(s32 *)(s0 + 0x28) = 2;
    } else {
        *(s32 *)(s0 + 0x28) = 3;
    }
    tab[0][0] = *(f32 *)D_003B72D0;
    tab[0][1] = *(f32 *)D_003B72D4;
    tab[0][2] = *(f32 *)D_003B72D8;
    tab[1][0] = *(f32 *)D_003B72DC;
    tab[1][1] = *(f32 *)D_003B72E0;
    tab[1][2] = *(f32 *)D_003B72E4;
    tab[2][0] = *(f32 *)D_003B72E8;
    tab[2][1] = *(f32 *)D_003B72EC;
    tab[2][2] = *(f32 *)D_003B72F0;
    sel = *(s32 *)(s0 + 0x28);
    idx = *(s32 *)(s0 + 0x24);
    *(f32 *)(s0 + 0x20) = tab[sel - 1][idx - 1];
    func_00323900(s0, sel);
    func_00322F70(s0);
    func_00324320(s0);
    if (*(s32 *)s0 == 1) {
        *(s32 *)(s0 + 0x34) = *(s32 *)(s0 + 0x34) + 1;
    }
    s0[0x8D3] = s0[0x8D2];
    x = *(u8 *)D_00591BB7;
    if (x == 2) {
        s0[0x8D2] = 3;
    } else if (x == 1) {
        s0[0x8D2] = 2;
    } else if (x == 0) {
        s0[0x8D2] = 1;
    }
    *(s32 *)(s0 + 0x8D4) = func_00324100(0);
    *(s32 *)(s0 + 0x8D8) = func_00324100(1);
    s0[0xF] = (*(u8 *)D_00591BB6 == 1);
    s0[0xC] = func_00292C50();
    func_00323E50(s0);
    s0[0x10] = 0;
    func_00323CC0(s0);
    t = func_00335370();
    x = *(s32 *)s0;
    if (x == 0xB || x == 0xA || x == 6 || x == 7) {
        *(s16 *)(t + 0x104C) = func_0022D6A0(2, 0);
        *(s16 *)(t + 0x104E) = func_0022D6A0(2, 1);
        if (func_00324B20(t + 0x1050, *(s32 *)(s0 + 0x2C)) == 0) {
            *(s16 *)(t + 0x104C) = 0;
            *(s16 *)(t + 0x104E) = 0;
        }
    } else {
        *(s16 *)(t + 0x104C) = 0;
        *(s16 *)(t + 0x104E) = 0;
    }
    x = *(s32 *)s0;
    if (x == 0xC || x == 0xB || x == 0xA || x == 6 || x == 7) {
        *(s16 *)(s0 + 0x38) = func_0022D590(1);
    } else {
        *(s16 *)(s0 + 0x38) = 0x7530;
    }
    return 0;
}
