/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E7574;
extern char D_00591C09[];
extern char D_00591E4E[];
extern char D_0058E5B0[];
extern char D_005E3811[];
extern char D_00591730[];

extern void func_00987A80(s32, s32, f32, f32);
extern s32 func_00B29350(void);
extern s32 func_00AA0060(void *);
extern s32 func_009B3440(void *, f32, f32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_00BBB990(s32, s32);
extern s32 func_00BBB9C0(s32, s32);
extern void func_00209A00(s32, s32, s32);
extern s32 func_002CA7A0(void *);
extern s32 func_00B29CB0(void);
extern void func_00188910(void *);
extern s32 func_00AFBAB0(s32);
extern void func_00286A60(void);

void func_00B281B0(char *a0) {
    char *s4;
    char *s5;
    s32 i;
    s32 idx;
    s32 s1;
    s32 a1;
    s32 d;
    f32 f1;
    s32 bufE[8];
    s32 bufC[8];
    s32 bufA[8];

    func_00987A80(*(u8 *)(a0 + 0x13), 0, *(f32 *)(*(char **)&D_003E7574 + 0x10), *(f32 *)(*(char **)&D_003E7574 + 0x18));
    if (*(u8 *)D_00591C09 == 5 && func_00B29350() != 0) {
        idx = *(u8 *)D_00591E4E;
        if (idx != 0xFF) {
            idx = idx % 23;
        } else {
            idx = 1;
        }
    } else {
        if ((func_00AA0060(a0) & 0xFF) == 0xFF) {
            idx = 1;
        } else {
            idx = (func_00AA0060(a0) & 0xFF) % 23;
        }
    }
    s4 = D_0058E5B0 + idx * 0x240;
    *(u8 *)D_005E3811 = *(u8 *)s4;
    a1 = func_009B3440(*(void **)&D_003E7574, 13465.0f * (f32)*(s16 *)(a0 + 0x14), 0.0f) & 0xFFFF;
    f1 = (f32)*(s16 *)(a0 + 0x14) * *(f32 *)(*(char **)&D_003E7574 + 0x10);
    d = (u16)((a1 - *(u16 *)(a0 + 0x2A)) + 0x10000);
    if (f1 < 9241.0f) {
        if (d < 0x8001) {
            s1 = (u16)(a1 - 0x2000);
        } else {
            s1 = (u16)(a1 + 0x2000);
        }
    } else {
        if (d < 0x8001) {
            s1 = (u16)(a1 + 0x2000);
        } else {
            s1 = (u16)(a1 - 0x2000);
        }
    }
    *(f32 *)(s4 + 0xE0) = *(f32 *)(*(char **)&D_003E7574 + 0x10) + (f32)func_00BBB990(s1, 0xC00);
    f1 = *(f32 *)(*(char **)&D_003E7574 + 0x18) + (f32)func_00BBB9C0(s1, 0xC00);
    *(f32 *)(s4 + 0xE8) = f1;
    if (!(f1 <= 8601.0f)) {
        *(f32 *)(s4 + 0xE8) = 8601.0f;
    } else if (f1 < -8601.0f) {
        *(f32 *)(s4 + 0xE8) = -8601.0f;
    }
    f1 = (f32)*(s16 *)(a0 + 0x14) * *(f32 *)(s4 + 0xE0);
    if (f1 <= -9241.0f) {
        *(f32 *)(s4 + 0xE0) = -8985.0f * (f32)*(s16 *)(a0 + 0x14);
    }
    {
        f32 f2 = *(f32 *)(s4 + 0xE0);
        s32 w = (s32)f2;
        if (w <= 0) {
            w = -w;
        }
        if (12057.0f < (f32)w) {
            s32 sg;
            if (f2 < 0.0f) {
                sg = -1;
            } else {
                sg = 1;
            }
            *(f32 *)(s4 + 0xE0) = 12057.0f * (f32)sg;
        }
    }
    *(u16 *)(s4 + 0x26) = func_009B3480(s4, *(f32 *)(*(char **)&D_003E7574 + 0x10), *(f32 *)(*(char **)&D_003E7574 + 0x18));
    *(s32 *)(s4 + 0x1C) = 0;
    *(u8 *)(s4 + 0x16) = 0x30;
    *(u16 *)(s4 + 0x18) = 0x31;
    func_00209A00(*(s32 *)(s4 + 4), 0, 0);
    *(u8 *)D_00591E4E = *(u8 *)s4;
    func_009B3480(a0, 13465.0f, 0.0f);

    s5 = D_00591730;
    for (i = 0; i < 22; i++, s5 -= 0x240) {
        if (a0 == s5) {
            continue;
        }
        if (*(u8 *)s5 == 12 && func_002CA7A0(s5) != 0) {
            *(f32 *)(s5 + 0xE0) = 13337.0f;
            *(f32 *)(s5 + 0xE8) = 0.0f;
            *(s16 *)(s5 + 0x1CE) = (s32)*(f32 *)(s5 + 0xE0);
            *(s16 *)(s5 + 0x1D0) = (s32)*(f32 *)(s5 + 0xE8);
            func_00209A00(*(s32 *)(s5 + 4), 0x114, 2);
            continue;
        }
        if (s5 == s4) {
            continue;
        }
        {
            s32 v;
            f32 f20;
            f32 f0;
            s32 m;
            if (func_00B29CB0() == 0) {
                func_00188910(bufE);
                v = bufE[6];
            } else {
                v = 0;
            }
            if (v == 0) {
                func_00209A00(*(s32 *)(s5 + 4), 0x1BF, 0);
            } else {
                func_00209A00(*(s32 *)(s5 + 4), 0x457, 0);
            }
            *(s32 *)(s5 + 0x1C) = 0;
            *(u16 *)(s5 + 0x26) = 0x4000;
            if (func_00B29CB0() != 0) {
                f20 = 1280.0f;
            } else {
                func_00188910(bufC);
                if (*(u8 *)(s5 + 0x13) != 0) {
                    f20 = *(f32 *)((char *)bufC + 0xC);
                } else {
                    f20 = *(f32 *)bufC;
                }
            }
            m = (*(u8 *)s5 - (func_00AFBAB0(*(u8 *)s5) & 0xFF)) * -*(s16 *)(s5 + 0x14);
            *(f32 *)(s5 + 0xE0) = f20 + (f32)(m * 200);
            if (func_00B29CB0() != 0) {
                f0 = 9497.0f;
            } else {
                func_00188910(bufA);
                if (*(u8 *)(s5 + 0x13) != 0) {
                    f0 = *(f32 *)((char *)bufA + 0x14);
                } else {
                    f0 = *(f32 *)((char *)bufA + 8);
                }
            }
            *(f32 *)(s5 + 0xE8) = f0;
            *(u8 *)(s5 + 0x16) = 0xFF;
            *(u16 *)(s5 + 0x18) = 0;
        }
    }
    func_00286A60();
}
