/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4C[];
extern u8 D_00591E4F[];
extern char D_0058E5B0[];
extern char D_005926E6[];
extern char D_005926E4[];
extern u8 D_005926DB[];
extern char D_00592980[];
extern char D_00591BEC[];
extern char D_00CB52C8[];
extern char D_00591BBC[];
extern char *D_003E7574;

extern s32 func_00284380(s32 a, s32 b);
extern u32 func_009B33A0(void *a, s32 b, s32 c, s32 d);
extern f32 func_001CD9E0(f32 x);
extern s32 func_002AE670(s32 a);
extern s32 func_00A14EC0(void *a, void *b);
extern void func_00AA9F90(void *a, void *b, s32 c, s32 d, s32 e, s32 f);

s32 func_0096FAC0(char *a0, s32 a1_, s32 a2_, s32 a3_)
{
    s32 s0, s1, s2, s3, s5;
    u32 t, idx;
    s32 x, v;
    char *B;
    char *p;
    f32 fa, ex, ey, yy;

    if ((*(u8 *)D_00591E4C) != 0) {
        t = (*(u8 *)D_00591E4C);
        if (t == 0xFF) idx = 1; else idx = t % 23;
        if (*(u32 *)(D_0058E5B0 + idx * 0x240 + 0x110) < *(u32 *)(a0 + 0x110))
            return 1;
    }
    if ((u32)*(u8 *)(a0 + 0x46) % (u32)(*(u8 *)D_005926E6) != 0)
        return 1;

    v = *(u8 *)(D_00592980 + *(u8 *)(a0 + 0x12) * 26880 + *(u8 *)(a0 + 0x11) * 840 + 0x8C) >> 2;
    x = -352 * (v + 0x94);
    s0 = func_00284380(x / 183, 3);

    p = D_003E7574;
    t = func_009B33A0(a0, (s32)*(f32 *)(p + 0x1454), (s32)*(f32 *)(p + 0x145C), a3_);
    {
        f32 r = func_001CD9E0((f32)t);
        f32 f2 = *(f32 *)D_00591BEC * (f32)(s32)r;
        f32 f1 = f2 / (f32)(s0 + 1);
        f32 f0 = (f32)(*(s32 *)(a0 + 0x58) - 0x80);
        if (f1 < f0) return 0;
    }

    t = D_00591E4F[(*(u8 *)(a0 + 0x13) ^ 1) << 1];
    if (t == 0xFF) idx = 1; else idx = t % 23;
    B = D_0058E5B0 + idx * 0x240;
    t = (*(u8 *)D_005926E4);
    p = D_003E7574;
    fa = (f32)t;
    ex = (0.0f + *(f32 *)(B + 0xE0)) + *(f32 *)(B + 0xF0) * fa - *(f32 *)(p + t * 4 + 0x47C);
    ey = (0.0f + *(f32 *)(B + 0xE8)) + *(f32 *)(B + 0xF8) * fa - *(f32 *)(p + t * 4 + 0xB7C);
    yy = ey * ey;
    s1 = (s32)func_001CD9E0(yy + ex * ex);
    {
        s32 a1 = *(s32 *)(B + 0x1C);
        s32 lim = 0x1900 - *(u8 *)(B + 0x5C) * 12;
        if (a1 < lim) a1 = lim;
        s3 = s1 / (a1 / 256 + 1);
    }
    if (func_002AE670(0xE0) - 1 < 0x21) {
        v = D_005926DB[func_002AE670(0xE0)];
    } else {
        v = func_002AE670(func_002AE670(0xE0) - 1);
    }
    if (v < s3) {
        if (func_002AE670(0xE0) - 1 < 0x21) {
            s3 = D_005926DB[func_002AE670(0xE0)];
        } else {
            s3 = func_002AE670(func_002AE670(0xE0) - 1);
        }
    }

    t = (*(u8 *)D_005926E4);
    p = D_003E7574;
    fa = (f32)t;
    ex = (0.0f + *(f32 *)(a0 + 0xE0)) + *(f32 *)(a0 + 0xF0) * fa - *(f32 *)(p + t * 4 + 0x47C);
    ey = (0.0f + *(f32 *)(a0 + 0xE8)) + *(f32 *)(a0 + 0xF8) * fa - *(f32 *)(p + t * 4 + 0xB7C);
    yy = ey * ey;
    s0 = (s32)func_001CD9E0(yy + ex * ex);
    {
        s32 a1 = *(s32 *)(a0 + 0x1C);
        s32 lim = 0x1900 - *(u8 *)(a0 + 0x5C) * 12;
        if (a1 < lim) a1 = lim;
        s2 = s0 / (a1 / 256 + 1);
    }
    if (func_002AE670(0xE0) - 1 < 0x21) {
        v = D_005926DB[func_002AE670(0xE0)];
    } else {
        v = func_002AE670(func_002AE670(0xE0) - 1);
    }
    if (v < s2) {
        if (func_002AE670(0xE0) - 1 < 0x21) {
            s2 = D_005926DB[func_002AE670(0xE0)];
        } else {
            s2 = func_002AE670(func_002AE670(0xE0) - 1);
        }
    }

    if (func_00A14EC0(a0, a0) == 0)
        func_00AA9F90(a0, a0, 0x2100, 0, 0, -0x100);

    s5 = *(u8 *)(D_003E7574 + 0x68);
    if (!(s5 < func_002AE670(0x30)))
        return 1;
    if ((s32)(*(u8 *)D_005926E4) < s5) {
        s5 = *(u8 *)(D_003E7574 + 0x68);
        if (s5 < func_002AE670(0x30) && s2 + (*(u8 *)D_005926E6) < s3)
            return 0;
    }
    {
        s32 a4 = (*(u8 *)D_005926E4);
        if ((*(u8 *)D_00CB52C8) < a4) return 1;
        if (*(u8 *)(a0 + 0x24) != 1) return 1;
        if ((*(u8 *)D_00591BBC) < 2) return 1;
        if (!(s2 < s3)) return 1;
        if (!(s0 < s1)) return 1;
        if (s3 - s2 < a4) return 3;
        return 2;
    }
}
