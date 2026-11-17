/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char **func_00B2A420(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB7F0(s32);
extern s32 func_009B3480(void *, char *, char *, s32, f32, f32);
extern s32 func_00BB1310(s32, s32, char *);
extern void func_00209A00(void *, s32, s32);
extern void func_001AAF50(void *, s32);
extern void func_001AAF40(void *, s32);
extern u8 D_00CBBE04;
extern u8 D_00CBBE05;
extern char D_00592980[];
extern char *D_003E7574;

void func_00B77DA0(void)
{
    char **p;
    s32 i, s0, s1, k;
    f32 x, y;
    char *o;
    s32 v;
    s32 r;

    s0 = 0;
    s1 = 0;
    p = func_00B2A420(1);
    for (i = 0; i < 22; i++, p += 2) {
        o = p[0];
        v = *(u8 *)o;
        if (v == D_00CBBE04) {
            if (func_00BBB8C0(2) == 0) {
                o = p[0];
                *(s16 *)(o + 0x28) = 0x8000;
                o = p[0];
                *(s16 *)(o + 0x26) = 0x8000;
                *(f32 *)(p[0] + 0xE0) = 544.0f + *(f32 *)(D_003E7574 + 0x10);
                *(f32 *)(p[0] + 0xE8) = *(f32 *)(D_003E7574 + 0x18);
                o = p[0];
                if ((*(u8 *)(D_00592980 + (*(u8 *)(o + 0x12) * 32 + *(u8 *)(o + 0x11)) * 840 + 0x68) & 1) == 0)
                    *(u8 *)(*(char **)(o + 4) + 0x2D) = 0;
                else
                    *(u8 *)(*(char **)(o + 4) + 0x2D) = 1;
                r = func_00BB1310(0x13, *(u8 *)(o + 0x12) * 105, o);
                func_00209A00(*(void **)(p[0] + 4), r & 0xFFFF, 0);
            } else {
                o = p[0];
                *(s16 *)(o + 0x28) = 0x8000;
                o = p[0];
                *(s16 *)(o + 0x26) = 0x8000;
                *(f32 *)(p[0] + 0xE0) = 544.0f + *(f32 *)(D_003E7574 + 0x10);
                *(f32 *)(p[0] + 0xE8) = *(f32 *)(D_003E7574 + 0x18);
                o = p[0];
                if ((*(u8 *)(D_00592980 + (*(u8 *)(o + 0x12) * 32 + *(u8 *)(o + 0x11)) * 840 + 0x68) & 1) == 0)
                    *(u8 *)(*(char **)(o + 4) + 0x2D) = 0;
                else
                    *(u8 *)(*(char **)(o + 4) + 0x2D) = 1;
                r = func_00BB1310(0x14, *(u8 *)(o + 0x12) * 105, o);
                func_00209A00(*(void **)(p[0] + 4), r & 0xFFFF, 0);
            }
            *(u8 *)(p[0] + 0x16) = 0x4A;
            *(s16 *)(p[0] + 0x18) = 1;
            continue;
        }
        if (v == D_00CBBE05) {
            if (func_00BBB8C0(2) == 0) {
                r = func_00BB1310(0x155, 0, 0);
                func_00209A00(*(void **)(p[0] + 4), r & 0xFFFF, 0);
            } else {
                r = func_00BB1310(0x156, 0, 0);
                func_00209A00(*(void **)(p[0] + 4), r & 0xFFFF, 0);
            }
            *(u32 *)(p[0] + 0xE0) = 0xC64FE400;
            *(u32 *)(p[0] + 0xE4) = 0;
            *(u32 *)(p[0] + 0xE8) = 0;
            *(s16 *)(p[0] + 0x26) = 0;
            *(u32 *)(p[0] + 0x1C) = 0;
            *(u8 *)(p[0] + 0x16) = 0x4A;
            *(s16 *)(p[0] + 0x18) = 2;
            continue;
        }
        if (*(u8 *)(D_00592980 + (*(u8 *)(o + 0x12) * 32 + *(u8 *)(o + 0x11)) * 840 + 0xD4) == 0)
            continue;
        if (v == 1 || v == 12) {
            if (v == 1) {
                *(u32 *)(o + 0xE0) = 0xC64A6400;
                *(u32 *)(p[0] + 0xE8) = 0xC5A14000;
            } else {
                *(u32 *)(o + 0xE0) = 0xC64A6400;
                *(u32 *)(p[0] + 0xE8) = 0x45A14000;
            }
            *(s16 *)(p[0] + 0x26) = func_009B3480(p[0], D_00592980 + *(u8 *)(o + 0x12) * 26880, D_00592980, *(u8 *)(o + 0x12) * 105, -13465.0f, 0.0f);
            *(u32 *)(p[0] + 0x1C) = 0;
            *(u8 *)(*(char **)(p + 1) + 0x4C) = 8;
            *(u8 *)(p[0] + 0x4E) = 0xFF;
        } else {
            if (s0 < 3) {
                if (func_00BBB8C0(10) < 3) {
                    *(u8 *)(p[1] + 0x4C) = 0x1D;
                    s0++;
                } else {
                    *(u8 *)(p[1] + 0x4C) = 0x25;
                }
            } else {
                *(u8 *)(p[1] + 0x4C) = 0x25;
            }
            r = func_00BBB8C0(0x700);
            *(f32 *)(p[0] + 0xE0) = (f32)(-r);
            v = *(u8 *)p[0];
            k = v < 12 ? v : v - 11;
            if (*(u8 *)p[0] < 12) {
                r = func_00BBB7F0(0x100);
                *(f32 *)(p[0] + 0xE8) = (f32)(-0x300 - r - k * 256);
            } else {
                r = func_00BBB7F0(0x100);
                *(f32 *)(p[0] + 0xE8) = (f32)(k * 256 + (r + 0x300));
            }
            *(u32 *)(p[0] + 0x1C) = 0;
            *(s16 *)(p[0] + 0x26) = 0x8000;
        }
        *(u8 *)(p[0] + 0x16) = 0x4A;
        *(s16 *)(p[0] + 0x18) = 0;
        v = *(u8 *)(p[1] + 0x4C);
        if (v < 0x34) {
            o = p[0];
            if (v == 0 || v == 1 || v == 3 || v == 4 || v == 8 || v == 9 || v == 12 || v == 38)
                *(s16 *)(o + 0x18) = 0xE;
            else if (v >= 15 && v <= 17)
                *(s16 *)(o + 0x18) = 0x11;
            else if (v >= 39 && v <= 47)
                *(s16 *)(o + 0x18) = 0x15;
            else
                *(s16 *)(o + 0x18) = 0xC;
        }
        func_001AAF50(*(void **)(*(char **)(p[0] + 4)), 1);
        func_001AAF40(*(void **)(*(char **)(p[0] + 4)), 1);
    }

    p = func_00B2A420(func_00BBB8C0(2) == 0 ? 1 : 0xC);
    s1 = 0;
    for (i = 0; i < 11; i++, p += 2) {
        o = p[0];
        v = *(u8 *)o;
        if (v == 1 || v == 12 || v == D_00CBBE04 || v == D_00CBBE05)
            continue;
        if (*(u8 *)(D_00592980 + (*(u8 *)(o + 0x12) * 32 + *(u8 *)(o + 0x11)) * 840 + 0xD4) == 0)
            continue;
        if (s1 >= 3)
            continue;
        if (s1 == 0) {
            *(u8 *)(p[1] + 0x4C) = 0x19;
            o = p[0];
            *(f32 *)(o + 0xE0) = *(f32 *)(o + 0xE0) - 1024.0f;
        } else if (s1 == 1) {
            *(u8 *)(p[1] + 0x4C) = 0x1A;
            *(f32 *)(p[0] + 0xE0) = 16.0f + x;
            *(f32 *)(p[0] + 0xE8) = y - 96.0f;
        } else {
            *(u8 *)(p[1] + 0x4C) = 0x1B;
            *(f32 *)(p[0] + 0xE0) = 20.0f + x;
            *(f32 *)(p[0] + 0xE8) = y - 192.0f;
        }
        o = p[0];
        x = *(f32 *)(o + 0xE0);
        y = *(f32 *)(o + 0xE8);
        v = *(u8 *)(p[1] + 0x4C);
        s1++;
        if (v < 0x34) {
            if (v == 0 || v == 1 || v == 3 || v == 4 || v == 8 || v == 9 || v == 12 || v == 38)
                *(s16 *)(o + 0x18) = 0xE;
            else if (v >= 15 && v <= 17)
                *(s16 *)(o + 0x18) = 0x11;
            else if (v >= 39 && v <= 47)
                *(s16 *)(o + 0x18) = 0x15;
            else
                *(s16 *)(o + 0x18) = 0xC;
        }
    }
}
