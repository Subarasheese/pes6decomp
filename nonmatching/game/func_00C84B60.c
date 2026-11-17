/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCCD98[];
extern char D_003F7794[];
extern char D_00CCC200[];
extern char D_00CA8840[];

extern void func_001CD870(f32 *a, f32 *b);
extern f32 func_001E5410(void);
extern f32 func_001CD9E0(f32 x);
extern s32 func_00C8B190(s32 a);
extern void func_001EF860(s32 a, f32 *b);
extern void func_001C4730(void *d, void *s, s32 n);
extern void func_001EF2C0(s32 a, f32 *b);
extern void func_001EF1E0(s32 a, void *b);
extern void func_00C89510(s32 a, void *b);
extern void func_00C89490(s32 a, void *b);
extern void func_00C85770(s32 a);

void func_00C84B60(void)
{
    f32 stk[20];
    u8 *p;
    u8 *q;
    u8 *o;
    f32 x, y, r, c, t, e, h;
    s32 s0, s2, s3, s4, a1, s5, i, cnt;
    u8 *s1;

    for (p = *(u8 **)D_00CCCD98; p != 0; p = *(u8 **)(p + 0x74)) {
        stk[18+0] = *(f32 *)(p + 0x3C);
        stk[18+1] = *(f32 *)(p + 0x40);
        func_001CD870(stk + 16, stk + 18);
        *(s32 *)(p + 0x50) = 0;
        *(s32 *)(p + 0x54) = 0;
        x = stk[18+0];
        y = stk[18+1];
        s0 = 0;
        if (!((-func_001E5410() / 2.0f) / ((f32)*(s16 *)D_003F7794 / 2.0f) <= y / x)
            || ((func_001E5410() / 2.0f) / ((f32)*(s16 *)D_003F7794 / 2.0f) < y / x)) {
            x = stk[18+0];
            y = stk[18+1];
            if (!((func_001E5410() / 2.0f) / ((f32)*(s16 *)D_003F7794 / 2.0f) <= y / x)) {
                s0 = 1;
            } else {
                x = stk[18+0];
                y = stk[18+1];
                if (((-func_001E5410() / 2.0f) / ((f32)*(s16 *)D_003F7794 / 2.0f) < y / x)) s0 = 1;
            }
        }
        if (s0 == 0) {
            f32 sc = (f32)*(s16 *)D_003F7794 / 2.0f;
            f32 f0 = (((y < 0 ? -y : y) * sc) / (x < 0 ? -x : x));
            r = func_001CD9E0(sc * sc + f0 * f0);
        } else {
            f32 ax = (x < 0 ? -x : x);
            f32 ay = (y < 0 ? -y : y);
            f32 b = (ax * (func_001E5410() / 2.0f)) / ay;
            f32 d = func_001E5410() / 2.0f;
            f32 f0 = func_001E5410() / 2.0f;
            r = func_001CD9E0(d * f0 + b * b);
        }
        t = r - *(f32 *)(p + 0x30) / 2.0f;
        *(f32 *)(p + 0x3C) = t * stk[16+0];
        *(f32 *)(p + 0x40) = t * stk[16+1];
        *(f32 *)(p + 0x34) = stk[16+0];
        *(f32 *)(p + 0x38) = stk[16+1];
        *(f32 *)(p + 0x58) = t;
    }

    for (q = *(u8 **)D_00CCCD98; q != 0; q = *(u8 **)(q + 0x74)) {
        s0 = *(s32 *)(q + 0x48);
        s4 = s0 + 0x5E;
        s3 = s0 + 2;
        s2 = func_00C8B190(s4);
        a1 = 0;
        for (o = *(u8 **)(q + 0x70); o != 0; o = *(u8 **)(o + 0x70)) {
            f32 dx = *(f32 *)(q + 0x3C) - *(f32 *)(o + 0x3C);
            f32 dy = *(f32 *)(q + 0x40) - *(f32 *)(o + 0x40);
            dx = dx < 0 ? -dx : dx;
            dy = dy < 0 ? -dy : dy;
            if (dx <= (*(f32 *)(q + 0x2C) + *(f32 *)(o + 0x2C)) / 2.0f
                && dy <= (*(f32 *)(q + 0x30) + *(f32 *)(o + 0x30)) / 2.0f) {
                cnt = *(s32 *)(o + 0x50) + 1;
                if (!(cnt < a1)) a1 = cnt;
                *(s32 *)(q + 0x54) = 1;
                *(s32 *)(o + 0x54) = 1;
            }
        }
        *(s32 *)(q + 0x50) = a1;
        *(f32 *)(q + 0x58) = *(f32 *)(q + 0x58) - *(f32 *)(q + 0x30) * (f32)a1;
        if (*(s32 *)(q + 0x44) == 0) *(s32 *)(q + 0x44) = 1;
        stk[4+0] = *(f32 *)(q + 0x58) * *(f32 *)(q + 0x34);
        stk[4+1] = *(f32 *)(q + 0x58) * *(f32 *)(q + 0x38);
        stk[4+2] = 0;
        stk[4+3] = 0;
        *(s32 *)&stk[4+2] = 0;
        *(s32 *)&stk[4+3] = 0;
        func_001EF860(s2, stk + 4);
        s1 = (u8 *)D_00CCC200 + s0 * 320;
        func_001C4730(s1 + 0x10, stk + 4, 0x10);
        *(s32 *)(s1 + 0x9C) |= 1;
        e = *(f32 *)(q + 0x68) + *(f32 *)(q + 0x6C);
        *(f32 *)(q + 0x68) = e;
        if (e < 0.67f) {
            *(f32 *)(q + 0x68) = 0.67f;
            *(u32 *)(q + 0x6C) = 0x3C343957;
        } else if (!(e <= 1.0f)) {
            *(f32 *)(q + 0x68) = 1.0f;
            *(u32 *)(q + 0x6C) = 0xBC343957;
        }
        h = *(f32 *)(q + 0x68);
        stk[0] = h;
        stk[1] = h;
        *(u32 *)&stk[2] = 0x3F800000;
        *(u32 *)&stk[3] = 0x3F800000;
        func_001EF2C0(s2, stk);
        func_001EF1E0(s2, q + 0x5C);
        func_00C89510(s4, q + 8);
        func_00C89490(s4, D_00CA8840 + *(s32 *)(q + 4) * 4);
        func_00C89490(s3, D_00CA8840 + *(s32 *)(q + 4) * 4);
    }

    s5 = 0;
    for (q = *(u8 **)D_00CCCD98; q != 0; q = *(u8 **)(q + 0x74)) {
        s4 = *(s32 *)(q + 0x48);
        if (*(s32 *)(q + 0x54) != 0) {
            f32 f20, f4;
            s1 = (u8 *)D_00CCC200 + s4 * 320;
            f20 = *(f32 *)(s1 + 0xF8);
            s0 = s5 + 3 + *(s32 *)(q + 0x50);
            if (*(s32 *)(q + 0x50) == 1) {
                stk[12+0] = -*(f32 *)(q + 0x38);
                stk[12+1] = -*(f32 *)(q + 0x34);
            } else {
                stk[12+0] = *(f32 *)(q + 0x38);
                stk[12+1] = *(f32 *)(q + 0x34);
            }
            stk[14+0] = -*(f32 *)(q + 0x34) + stk[12+0];
            stk[14+1] = -*(f32 *)(q + 0x38) + stk[12+1];
            func_001CD870(stk + 12, stk + 14);
            f4 = f20 * (f32)s0;
            *(f32 *)(s1 + 0x10) = *(f32 *)(s1 + 0x10) + stk[12+0] * f4;
            *(f32 *)(s1 + 0x14) = *(f32 *)(s1 + 0x14) + stk[12+1] * f4;
            func_001C4730(s1 + 0x10, s1 + 0x10, 0x10);
            *(s32 *)(s1 + 0x9C) |= 1;
            s5++;
        }
        func_00C85770(s4);
    }
}
