/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009A0270(s32);
extern void func_00987BF0(s32, void *, s32);
extern void func_00A08ED0(void *, s32, void *);
extern s32 func_009F42B0(void *, s32);
extern s32 func_009B3480(f32, f32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00B69A50(void);
extern s32 func_00B69A80(void);
extern s32 func_002DCA30(void);
extern s32 func_00BA8380(void);
extern s32 func_00BBB8C0(s32);
extern char D_0059237C[];
extern char D_00591E57[];
extern char D_00591E54[];
extern char D_00591E53[];
extern char D_00591E79[];
extern char D_0058E5B0[];
extern char D_00CB3300[];
extern char *D_003E7574;

s32 func_00B6A540(void **ctx, s32 flag) {
    char *p;
    char *p4;
    char *s1;
    char *s2;
    char *t;
    s32 idx;
    s32 b;
    s32 s3;
    s32 v;
    s32 r;
    f32 buf[3];
    f32 a;
    f32 c;
    f32 e;
    f32 g;
    f32 k;
    s32 x1, x2, z1, z2;
    s32 d1, d2;
    s32 i1, i2;

    if (*(u8 *)D_0059237C != 0) return 0;
    p4 = (char *)ctx[0];
    b = *(u8 *)D_00591E57;
    idx = (b == 0xFF) ? 1 : b % 23;
    s1 = D_0058E5B0 + idx * 0x240;
    s3 = func_009A0270(idx) & 0xFF;
    p = (char *)ctx[0];
    if (*(u8 *)(p + 0x10) != 0) return 0;
    if (flag == 0) {
        if (*(s16 *)(p + 0x14) != *(s16 *)(s1 + 0x14)) goto L5F0;
        goto Lade0;
    }
    if (flag != 1) goto Lade0;
    if (*(s16 *)(p + 0x14) != *(s16 *)(s1 + 0x14)) goto Lade0;
L5F0:
    func_00987BF0(*(u8 *)(p + 0x13), p, 0);
    b = *(u8 *)(D_00591E54 + *(u8 *)(p4 + 0x13) * 2);
    idx = (b == 0xFF) ? 1 : b % 23;
    p = (char *)ctx[0];
    s2 = D_0058E5B0 + idx * 0x240;
    func_00987BF0((*(u8 *)(p + 0x13) ^ 1) & 0xFF, p, 0);
    b = *(u8 *)(D_00591E53 + ((*(u8 *)(p4 + 0x13) ^ 1) << 1));
    idx = (b == 0xFF) ? 1 : b % 23;
    s1 = D_0058E5B0 + idx * 0x240;
    func_00A08ED0(ctx[0], 12, buf);
    v = func_009F42B0(ctx[0], -0xA0);
    if (buf[1] < (f32)v) goto LB;
    if (0.0f != *(f32 *)((char *)ctx[0] + 0xE4)) goto LB;
    if (*(u8 *)ctx[0] == *(u8 *)D_00591E57) {
        r = func_00B69A50();
        if (s3 - r < 2) {
            if (func_00B69A50() != 0) goto L7B0;
        }
        if (func_00B69A80() == 0) goto L874;
        p = (char *)ctx[0];
        t = *(char **)D_00CB3300 + 8;
        i1 = *(u8 *)(p + 0x12);
        i2 = (i1 ^ 1) & 0xFF;
        v = *(s16 *)(t + i1 * 756) - *(s16 *)(t + i2 * 756);
        if (v == 0) goto L7B0;
        if (v != 1) goto L874;
L7B0:
        if (func_002DCA30() != 0) {
            p = (char *)ctx[0];
            v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
            p = (char *)ctx[0];
            *(s16 *)(p + 0x2C) = v;
            *(u8 *)((char *)ctx[1] + 0x4C) = 0x45;
            return 1;
        }
        if (func_00BBB8C0(3) == 0) {
            p = (char *)ctx[0];
            v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
            p = (char *)ctx[0];
            *(s16 *)(p + 0x2C) = v;
            *(u8 *)((char *)ctx[1] + 0x4C) = 0x45;
            return 1;
        }
        p = (char *)ctx[0];
        a = *(f32 *)(p + 0xE0);
        c = *(f32 *)(p + 0xE8);
        if (a < 0.0f) {
            if (c < 0.0f) *(s16 *)(p + 0x2C) = 0x3000;
            else *(s16 *)(p + 0x2C) = 0xD000;
        } else {
            if (c < 0.0f) *(s16 *)(p + 0x2C) = 0x5000;
            else *(s16 *)(p + 0x2C) = 0xB000;
        }
        p = (char *)ctx[0];
        if (*(u8 *)(*(char **)(p + 4) + 0x2D) ==
            (((u16)(*(u16 *)(p + 0x26) - *(u16 *)(p + 0x2C) + 0x10000)) < 0x8001)) {
            v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
            p = (char *)ctx[0];
            *(s16 *)(p + 0x2C) = v;
            *(u8 *)((char *)ctx[1] + 0x4C) = 0x45;
            return 1;
        }
        *(u8 *)((char *)ctx[1] + 0x4C) = 0x44;
        *(u8 *)((char *)ctx[0] + 0x4E) = 0;
        return 1;
    }
L874:
    if (func_00BBB8C0(2) != 0) {
        p = (char *)ctx[0];
        v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
        p = (char *)ctx[0];
        *(s16 *)(p + 0x2C) = v;
        *(u8 *)((char *)ctx[1] + 0x4C) = 0x49;
        return 1;
    }
    p = (char *)ctx[0];
    v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
    p = (char *)ctx[0];
    *(s16 *)(p + 0x2C) = v;
    *(u8 *)((char *)ctx[1] + 0x4C) = 0x40;
    return 1;

LB:
    if (func_00BBB8C0(2) == 0) {
        p = (char *)ctx[0];
        a = *(f32 *)(p + 0xE0);
        if ((a < 0.0f ? -a : a) < 13529.0f) {
            f32 f2c, f4c;
            g = *(f32 *)(p + 0xE8);
            k = a - *(f32 *)(s2 + 0xE0);
            f4c = a - *(f32 *)(s1 + 0xE0);
            f2c = g - *(f32 *)(s1 + 0xE8);
            e = g - *(f32 *)(s2 + 0xE8);
            x2 = (s32)k;
            x1 = (s32)f4c;
            z1 = (s32)f2c;
            z2 = (s32)e;
            d2 = x2 * x2 + z2 * z2;
            d1 = x1 * x1 + z1 * z1;
            if (d1 < d2) {
                if (func_00BA8380() != 0) {
                    *(u8 *)((char *)ctx[1] + 0x4C) = 0;
                    p = (char *)ctx[0];
                    *(u8 *)(p + 0x16) = 0x47;
                    *(s16 *)((char *)ctx[0] + 0x18) = 6;
                    return 1;
                }
                goto Lcommon;
            }
        }
    }
    if (func_00BBB8C0(100) >= 0x15) return 0;
Lcommon:
    b = 0;
    r = *(u8 *)D_00591E79;
    if (r != 8 && r != 0xF && *(u16 *)(D_003E7574 + 0x84) != 9) {
        v = *(u16 *)(*(char **)((char *)ctx[0] + 4) + 0x30);
        if (v == 0x383 || v == 0x11D || v == 0x12E || v == 0x114 || v == 0x381 ||
            v == 0x112 || v == 0 || v == 0x489 || v == 0x2ED || v == 0x1BF)
            b = 1;
    }
    if (b == 0) {
        p = (char *)ctx[0];
        if (*(u16 *)(*(char **)(p + 4) + 0x30) != 0x38C) return 0;
        *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
        *(u8 *)((char *)ctx[1] + 0x4C) = 10;
        return 1;
    }
    p = (char *)ctx[0];
    v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
    p = (char *)ctx[0];
    v = func_009B30B0(*(u16 *)(p + 0x26), v) & 0xFFFF;
    if (v < 0x10) {
        p = (char *)ctx[0];
        *(u8 *)(p + 0x4E) = 0;
        *(u8 *)((char *)ctx[1] + 0x4C) = 0x27;
        return 1;
    }
    p = (char *)ctx[0];
    v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
    p = (char *)ctx[0];
    v = func_009B30B0(*(u16 *)(p + 0x26), v) & 0xFFFF;
    if (v >= 0x40) return 0;
    p = (char *)ctx[0];
    v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
    p = (char *)ctx[0];
    *(s16 *)(p + 0x2C) = v;
    p = (char *)ctx[0];
    *(u8 *)(p + 0x4E) = 0;
    *(u8 *)((char *)ctx[1] + 0x4C) = 0x28;
    return 1;

Lade0:
    func_00A08ED0(p, 12, buf);
    v = func_009F42B0(ctx[0], -0xA0);
    if (buf[1] < (f32)v) return 0;
    p = (char *)ctx[0];
    if (0.0f != *(f32 *)(p + 0xE4)) return 0;
    v = func_009B3480(0.0f, *(f32 *)(p + 0xE8));
    p = (char *)ctx[0];
    *(s16 *)(p + 0x2C) = v;
    *(u8 *)((char *)ctx[1] + 0x4C) = 0x49;
    return 1;
}
