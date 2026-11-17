/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00591E4C[];
extern char D_00591E4F[];
extern char D_00591E70[];
extern char D_00591BEC[];
extern char D_005926D8[];
extern char D_005926DC[];
extern char D_005926E0[];
extern char D_005926E2[];
extern char D_005926FC[];
extern char D_00592980[];
extern char D_0058E5B0[];

s32 func_00A14EC0(void *a, void *b);
s32 func_00A15540(void *a, void *b);
s32 func_002AE670(s32 a);
s32 func_009B33A0(void *p, s32 x, s32 y);
u32 func_009B30B0(u32 a, u32 b);
void func_00AA9F90(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
f32 func_001CD9E0(f32 x);
u32 func_009B3480(void *p, s32 a1, s32 a2, s32 a3, f32 x, f32 y);
u32 func_009B33F0(void *a, void *b, s32 c, s32 d);
s32 func_00BBB990(s32 a, s32 b);
s32 func_00BBB9C0(s32 a, s32 b);
s32 func_00A09950(void *p);
void func_00A4E850(void *p, s32 a, s32 b, s32 c);
void func_009D8F10(void *p, void *q, s32 a);

void func_00C549E0(u8 *p) {
    s32 s1, s2, s3, s4;
    s32 v, a0, a1, ix, iy;
    u8 *q;
    f32 f20, f21;

    s2 = 0;
    if (*(u8 *)D_00591E4C == 0 && *(u32 *)(p + 0x114) > 0x1000) {
        if (*(f32 *)D_005926D8 <= (f32)*(u8 *)D_005926FC && *(s32 *)(D_003E7574 + 0x50) > 0x2000) {
            *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(p + 0xE0);
            *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(p + 0xE8);
            return;
        }
    }
    if (func_00A14EC0(p, p) == 0) {
        if (*(u16 *)(D_003E7574 + 0x84) == 4 && *(u16 *)(p + 0x30) != 0 && *(u32 *)(p + 0x114) < 0x1800) {
            a0 = (*(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0x8C) >> 2) + 0x94;
            *(f32 *)D_00591E70 = (f32)((a0 * -544) / 183);
            s2 = 2;
            s3 = 0x100;
            s1 = (*(s32 *)(p + 0x58) * 9) / 10;
        } else {
            a0 = (*(u8 *)(D_00592980 + p[0x12] * 26880 + p[0x11] * 840 + 0x8C) >> 2) + 0x94;
            *(f32 *)D_00591E70 = (f32)((a0 * -584) / 183);
            if (*(u8 *)D_00591E4C != 0 && func_00A09950(p) == 1) {
                a0 = *(u8 *)D_00591E4C;
                a1 = 1;
                if (a0 != 0xFF) {
                    a1 = a0 % 23;
                }
                q = (u8 *)D_0058E5B0 + a1 * 576;
                a1 = func_009B30B0(*(u16 *)(p + 0xA8), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF;
                a0 = *(u32 *)(q + 0x110);
                s1 = *(s32 *)(p + 0x58) - a1 * 24;
                if (a0 < 0x34901) {
                    s3 = (*(u32 *)(p + 0x110) < (u32)a0) ? 0x80 : 0x10;
                } else if (*(u32 *)(p + 0x110) < 0x190000) {
                    s3 = 0x80;
                } else {
                    s3 = (*(u32 *)(p + 0x110) < (u32)a0) ? 0x80 : 0x10;
                }
            } else {
                s1 = (*(s32 *)(p + 0x58) * 95) / 100;
                s3 = 0x80;
            }
        }
        v = func_002AE670(0x12);
        s4 = (s32)*(f32 *)(D_003E7574 + v * 4 + 0x47C);
        v = func_002AE670(0x12);
        v = func_009B33A0(p, s4, (s32)*(f32 *)(D_003E7574 + v * 4 + 0xB7C));
        if (v < 0x100000) {
            func_009B30B0(*(u16 *)(p + 0xA8), *(u16 *)(D_003E7574 + 0x58));
        }
        func_00AA9F90(p, p, s1, s2, s3, (s32)*(f32 *)D_00591E70);
        a1 = *(u8 *)D_005926E0;
        if (a1 < *(s32 *)(D_003E7574 + 0x78)) {
            *(s32 *)(D_003E7574 + 0x78) = *(s32 *)(D_003E7574 + 0x78) - a1;
        } else {
            *(s32 *)(D_003E7574 + 0x78) = 1;
        }
        ix = (s32)*(f32 *)(D_003E7574 + 0x1454);
        iy = (s32)*(f32 *)(D_003E7574 + 0x145C);
        v = func_009B33A0(p, ix, iy);
        *(s32 *)(p + 0xA0) = (s32)(*(f32 *)D_00591BEC * (f32)(s32)func_001CD9E0((f32)(u32)v) / (f32)*(s32 *)(D_003E7574 + 0x78));
        if (*(u8 *)D_00591E4C == 0) {
            a0 = p[0x13] ^ 1;
            v = ((u8 *)D_00591E4F)[a0 * 2];
            a0 = 1;
            if (v != 0xFF) {
                a0 = v % 23;
            }
            q = (u8 *)D_0058E5B0 + a0 * 576;
            ix = (s32)*(f32 *)(D_003E7574 + 0x1454);
            iy = (s32)*(f32 *)(D_003E7574 + 0x145C);
            s1 = func_009B33A0(q, ix, iy);
            s3 = func_009B3480(q, ix, iy, s2, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C)) & 0xFFFF;
            s4 = *(u16 *)(q + 0x10C);
            if (s1 >= 0x190001
                && (func_009B30B0(s4, s3) & 0xFFFF) >= 0x51
                && (func_009B30B0(s3, func_009B33F0(q, p, iy, s2)) & 0xFFFF) >= 0x51) {
                f20 = *(f32 *)(q + 0xE0) + *(f32 *)(q + 0xF0) * (f32)*(u8 *)D_005926E2;
                s1 = func_00BBB990(s4, 0x180);
                *(f32 *)(D_003E7574 + 0x1454) = f20 + (f32)s1;
                f20 = *(f32 *)(q + 0xE8) + *(f32 *)(q + 0xF8) * (f32)*(u8 *)D_005926E2;
                s1 = func_00BBB9C0(s4, 0x180);
                *(f32 *)(D_003E7574 + 0x145C) = f20 + (f32)s1;
                s1 = func_009B3480(p, 0x180, iy, s2, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C)) & 0xFFFF;
                v = func_00BBB990(s1, 0x180);
                *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(D_003E7574 + 0x1454) + (f32)v;
                v = func_00BBB9C0(s1, 0x180);
                *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(D_003E7574 + 0x145C) + (f32)v;
            }
        }
        f20 = *(f32 *)(D_003E7574 + 0x145C);
        f21 = *(f32 *)(D_003E7574 + 0x1454);
        if (*(f32 *)D_005926D8 <= (f32)*(u8 *)D_005926FC) {
        } else {
            if (*(u8 *)D_00591E4C != 0
                || (func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x71) {
                func_00A4E850(p, 0, iy, s2);
            }
        }
        if (*(u8 *)D_00591E4C != 0) {
            if ((func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x60) {
                v = func_009B33A0(p, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
                if ((u32)v < 0x40001) {
                    *(f32 *)(D_003E7574 + 0x1454) = f21;
                    *(f32 *)(D_003E7574 + 0x145C) = f20;
                }
            }
        }
        func_00A15540(p, p);
    }
    *(u8 *)(p + 0x46) = *(u8 *)D_005926DC;
    a0 = ((u8 *)D_00591E4F)[p[0x13] * 2];
    v = 1;
    if (a0 != 0xFF) {
        v = a0 % 23;
    }
    q = (u8 *)D_0058E5B0 + v * 576;
    if (*(f32 *)D_005926D8 < (f32)*(u8 *)D_005926FC) {
    } else {
        u32 r = *(u32 *)(p + 0x114);
        if (r < 0x200 && r < *(u32 *)(q + 0x114)) {
            func_009D8F10(p, q, 1);
        }
    }
}
