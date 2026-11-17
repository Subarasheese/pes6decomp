/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4C[];
extern char D_00591E4F[];
extern char D_00591E53[];
extern char D_0058E5B0[];
extern char D_0059226E[];
extern char D_005926EC[];
extern char *D_003E7574;
extern f32 *D_003E74CC;

extern s32 func_00A9B980(void *a);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_002AE670(s32 a);
extern u32 func_009B3480(void *a, f32 x, f32 y);
extern s32 func_00A9C660(void *a);
extern s32 func_00AB38D0(void *a);
extern u32 func_009B30B0(u32 a, u32 b);
extern void func_00987A90(s32 a, s32 b);
extern void func_00987A40(s32 a, s32 b, s32 c, f32 x, f32 y);
extern s32 func_00BBB990(s32 a, s32 b);
extern s32 func_00BBB9C0(s32 a, s32 b);
extern s32 func_009F4C40(s32 a, f32 x);
extern s32 func_009F42B0(void *a, s32 b);
extern s32 func_00A9E080(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_00AF8180(void *a, s32 b);
extern void func_00209A00(void *a, s32 b, s32 c);
extern char *func_00208310(s32 a);
extern u32 func_009B32D0(u32 a, u32 b, s32 c);
extern s32 func_00A13E50(s32 a, s32 b);
extern void func_00207390(void *a, s32 b);

s32 func_00A5BA90(char *s4, u32 s3)
{
    u32 s2;
    char *s1;
    s32 s0;
    s32 s5;
    s32 s6;
    s32 i, k;
    char *g;

    if (*(u8 *)s4 == *(u8 *)D_00591E4C)
        return 0;

    i = (s32)*(f32 *)(s4 + 0xE0);
    if (i <= 0) i = -i;
    if ((f32)i <= 12825.0f) {
        i = (s32)*(f32 *)(s4 + 0xE8);
        if (i <= 0) i = -i;
        if ((f32)i <= 8089.0f)
            goto ok;
    }
    g = D_003E7574;
    if (*(f32 *)(g + 0x14) < -896.0f && *(s32 *)(g + 0x50) >= 0x680)
        return 0;
ok:
    s0 = 0xFFFF;
    if (s3 < 6) {
        if (s3 == 0) {
            if (func_00A9B980(s4) >= 0x190001)
                return 0;
            goto big;
        } else if (s3 == 1) {
            u32 t = D_00591E4F[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
            i = (t == 0xFF) ? 1 : (s32)t % 23;
            s1 = D_0058E5B0 + i * 0x240;
            k = func_002AE670(16 - func_00BBB8C0(4));
            g = D_003E7574;
            s2 = func_009B3480(s4, *(f32 *)(g + 0x47C + k * 4), *(f32 *)(g + 0xB7C + k * 4)) & 0xFFFF;
            func_00A9C660(s1);
            goto l_beb0;
        } else if (s3 == 2) {
            u32 t;
            if (func_00AB38D0(s4) != 4) {
                g = D_003E7574;
                if ((func_009B30B0(*(u16 *)(s4 + 0x28), *(u16 *)(g + 0x58)) & 0xFFFF) <= 0x20) {
                    if (func_00A9B980(s4) >= 0x1000001)
                        return 0;
                }
            }
            func_00987A90((*(u8 *)(s4 + 0x13) ^ 1) & 0xFF, 1);
            t = D_00591E53[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
            i = (t == 0xFF) ? 1 : (s32)t % 23;
            s1 = D_0058E5B0 + i * 0x240;
            func_00A9C660(s1);
            s2 = *(u16 *)(s4 + 0x28);
        } else if (s3 == 3) {
            u32 t;
            func_00987A90((*(u8 *)(s4 + 0x13) ^ 1) & 0xFF, 1);
            t = D_00591E53[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
            s2 = *(u16 *)(s4 + 0x28);
            i = (t == 0xFF) ? 1 : (s32)t % 23;
            s1 = D_0058E5B0 + i * 0x240;
        } else if (s3 == 4) {
            u32 t = D_00591E4F[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
            i = (t == 0xFF) ? 1 : (s32)t % 23;
            s1 = D_0058E5B0 + i * 0x240;
            func_00A9C660(s1);
            s2 = *(u16 *)D_0059226E;
        } else {
            u32 t;
            f32 f20;
            func_00987A90((*(u8 *)(s4 + 0x13) ^ 1) & 0xFF, 1);
            t = D_00591E53[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
            i = (t == 0xFF) ? 1 : (s32)t % 23;
            s1 = D_0058E5B0 + i * 0x240;
            s2 = func_00A9C660(s1) & 0xFFFF;
            f20 = *(f32 *)(s1 + 0xE0) + (f32)func_00BBB990(s2, 0x100);
            s2 = func_009B3480(s4, f20, *(f32 *)(s1 + 0xE8) + (f32)func_00BBB9C0(s2, 0x100)) & 0xFFFF;
        }
    }
    goto beac;
big:
    {
        u32 t;
        f32 fa, fb;
        g = D_003E7574;
        fa = *(f32 *)(g + 0x47C + *(u8 *)D_005926EC * 4);
        fb = *(f32 *)(g + 0xB7C + *(u8 *)D_005926EC * 4);
        func_00987A40((*(u8 *)(s4 + 0x13) ^ 1) & 0xFF, 1, 0, fa, fb);
        t = D_00591E53[((*(u8 *)(s4 + 0x13)) ^ 1) * 2] & 0xFF;
        i = (t == 0xFF) ? 1 : (s32)t % 23;
        s1 = D_0058E5B0 + i * 0x240;
        s5 = *(s32 *)(s4 + 0x158 + *(u8 *)s1 * 4);
        if (s5 >= 0x240000)
            return 0;
        t = *(u8 *)(s1 + 0x16);
        if (t == 0x21) {
            k = func_002AE670(func_00BBB8C0(8) + 0x12);
        } else if (t == 0x22) {
            if (*(u16 *)(s1 + 0x18) != 1)
                return 0;
            k = func_002AE670(func_00BBB8C0(4) + 0xC);
        } else if (t == 0x27) {
            if (*(u16 *)(s1 + 0x18) >= 4)
                return 0;
            k = func_002AE670(func_00BBB8C0(2) + 8);
        } else if (t == 0x40) {
            if (*(u32 *)(s1 + 0x114) >= 0x111)
                return 0;
            k = func_002AE670(func_00BBB8C0(2) + 8);
        } else {
            return 0;
        }
        g = D_003E7574;
        s2 = func_009B3480(s4, *(f32 *)(g + 0x47C + k * 4), *(f32 *)(g + 0xB7C + k * 4)) & 0xFFFF;
        if ((func_009B30B0(s2, *(u16 *)(s4 + 0x10C)) & 0xFFFF) >= 0x40) {
            g = D_003E7574;
            if ((func_009B30B0(*(u16 *)(s4 + 0x26), *(u16 *)(g + 0x58)) & 0xFFFF) >= 0x60) {
                g = D_003E7574;
                if ((func_009B30B0(*(u16 *)(g + 0x58), *(u16 *)(s4 + 0x10C)) & 0xFFFF) >= 0x60)
                    s2 = *(u16 *)(s4 + 0x10C);
            }
        }
        g = D_003E7574;
        if (*(s32 *)(g + 0x50) > 0x2000 && *(u32 *)(s1 + 0x114) < 0x180)
            return 0;
        {
            u32 a1 = func_00A9C660(s1) & 0xFFFF;
            if (s5 >= 0x90001) {
                if ((func_009B30B0(s2, a1) & 0xFFFF) < 0x30)
                    return 0;
            }
        }
        if ((func_009B30B0(*(u16 *)(s4 + 0x26), s2) & 0xFFFF) >= 0x40)
            return 0;
    }
beac:
l_beb0:
    if ((func_009B30B0(s2, *(u16 *)(s4 + 0x28)) & 0xFFFF) >= 0x20)
        return 0;

    {
        s32 s7;
        char *g5;
        s32 kind;
        f32 fl;
        u32 v;
        char *p4;

        fl = *D_003E74CC;
        s7 = func_009F4C40(0x76, fl);
        g5 = D_003E7574;
        fl = (f32)func_009F42B0(s4, -0x180);
        if (!(*(f32 *)(g5 + s7 * 4 + 0x7FC) <= fl))
            return 0;
        if ((func_009B30B0(*(u16 *)(s4 + 0x10C), *(u16 *)(g5 + 0x58)) & 0xFFFF) >= 0x70 && s3 != 3 &&
            *(u32 *)(s4 + *(u8 *)s1 * 4 + 0x158) >= 0x40000)
            return 0;
        if ((func_009B30B0(s2, *(u16 *)(s4 + 0x26)) & 0xFFFF) >= 0x30)
            return 0;
        v = func_009B30B0(*(u16 *)(s4 + 0x26), *(u16 *)(s4 + *(u8 *)s1 * 2 + 0x128)) & 0xFFFF;
        if (v >= 0x58)
            return 0;
        s5 = func_00A9E080(s4, s2, *(u16 *)(s4 + 0x28), *(s32 *)(s4 + 0x1C) + 0x200, 0x40, 0);

        if (s3 == 3 || s3 == 5) {
            if ((func_009B30B0(*(u16 *)(s4 + 0x26), *(u16 *)(s1 + 0x26)) & 0xFFFF) < 0x30) {
                kind = 0xA;
            } else {
                if (*(s32 *)(s4 + 0x1C) >= 0xF01)
                    func_009B30B0(*(u16 *)(s4 + 0x26), *(u16 *)(s4 + 0x28));
                kind = 0xC;
            }
        } else if (func_00AB38D0(s4) == 4) {
            kind = 1;
        } else {
            kind = func_00BBB8C0(5);
        }

        if (kind == 0xD) {
            s0 = 0x21D;
            s6 = 0xCB;
        } else if (kind == 0xC) {
            s0 = 0x21E;
            s6 = 0xCC;
        } else if (kind == 0xB) {
            s0 = 6;
            s6 = 0xCD;
        } else if (kind == 0xA) {
            func_00209A00(*(void **)(s4 + 4), 0x84, 0);
            *(u16 *)(s4 + 0x36) = *(u8 *)s1;
            *(u8 *)(s4 + 0x16) = 0xC;
            *(u16 *)(s4 + 0x18) = 0xC0;
        } else if (kind == 4) {
            if (func_00AF8180(s4, s2) != 0) {
                p4 = *(char **)(s4 + 4);
                *(u8 *)(p4 + 0x2D) ^= 1;
            }
            func_00209A00(*(void **)(s4 + 4), 0xA3, 0);
            *(u16 *)(s4 + 0x36) = *(u8 *)s1;
            *(u8 *)(s4 + 0x16) = 0xC;
            *(u16 *)(s4 + 0x18) = 0xC4;
        } else if (kind == 3) {
            func_00209A00(*(void **)(s4 + 4), 0x9B, 0);
            *(u16 *)(s4 + 0x36) = *(u8 *)s1;
            *(u8 *)(s4 + 0x16) = 0xC;
            *(u16 *)(s4 + 0x18) = 0xC3;
        } else if (kind == 2) {
            if (func_00AF8180(s4, s2) != 0) {
                p4 = *(char **)(s4 + 4);
                *(u8 *)(p4 + 0x2D) ^= 1;
            }
            *(u16 *)(s4 + 0x36) = *(u8 *)s1;
            if (func_00BBB8C0(2) == 0 && s5 < 0x1700 - *(u8 *)(s4 + 0x5C) * 12) {
                func_00209A00(*(void **)(s4 + 4), 0x9A, 0);
                *(u8 *)(s4 + 0x16) = 0xC;
                *(u16 *)(s4 + 0x18) = 0xC2;
            } else {
                func_00209A00(*(void **)(s4 + 4), 0x9C, 0);
                *(u8 *)(s4 + 0x16) = 0xC;
                *(u16 *)(s4 + 0x18) = 0xC1;
            }
        } else if (kind == 1) {
            func_00209A00(*(void **)(s4 + 4), 0x9C, 0);
            *(u16 *)(s4 + 0x36) = *(u8 *)s1;
            *(u8 *)(s4 + 0x16) = 0xC;
            *(u16 *)(s4 + 0x18) = 0xC1;
        } else if (kind == 0) {
            *(u16 *)(s4 + 0x36) = 0;
            if (s3 != 0 || (func_009B30B0(s2, *(u16 *)(s1 + 0x26)) & 0xFFFF) >= 0x31) {
                func_00209A00(*(void **)(s4 + 4), 0x84, 0);
                *(u8 *)(s4 + 0x16) = 0xC;
                *(u16 *)(s4 + 0x18) = 0xC0;
            } else if (func_00BBB8C0(2) != 0 || s5 >= 0x1700 - *(u8 *)(s4 + 0x5C) * 12) {
                func_00209A00(*(void **)(s4 + 4), 0x9C, 0);
                *(u8 *)(s4 + 0x16) = 0xC;
                *(u16 *)(s4 + 0x18) = 0xC1;
            } else {
                if (func_00AF8180(s4, s2) != 0) {
                    p4 = *(char **)(s4 + 4);
                    *(u8 *)(p4 + 0x2D) ^= 1;
                }
                func_00209A00(*(void **)(s4 + 4), 0x9A, 0);
                *(u8 *)(s4 + 0x16) = 0xC;
                *(u16 *)(s4 + 0x18) = 0xC2;
            }
        }

        if ((u16)s0 != 0xFFFF) {
            char *o = func_00208310((u16)s0);
            s32 q = func_002AE670(*(u16 *)(o + 8) * 2);
            u32 r;
            g5 = D_003E7574;
            q = q / 2;
            r = func_009B3480(s4, *(f32 *)(g5 + 0x47C + q * 4), *(f32 *)(g5 + 0xB7C + q * 4));
            if ((func_009B30B0(*(u16 *)(s4 + 0x26), r) & 0xFFFF) >= 0x39)
                return 0;
            func_00209A00(*(void **)(s4 + 4), s0, 0);
            *(u8 *)(s4 + 0x16) = 0xC;
            *(u16 *)(s4 + 0x18) = s6;
        }

        *(u16 *)(s4 + 0x2C) = s2;
        *(s32 *)(s4 + 0x1C) = s5;
        *(u16 *)(s4 + 0x26) = func_009B32D0(*(u16 *)(s4 + 0x2C), *(u16 *)(s4 + 0x26), 0xC00);
        *(u16 *)(s4 + 0x28) = func_009B32D0(*(u16 *)(s4 + 0x2C), *(u16 *)(s4 + 0x28), 0x1000);
        *(u8 *)(s4 + 0x66) = 3;
        if (0x1B00 - *(u8 *)(s4 + 0x5C) * 12 < *(s32 *)(s4 + 0x1C)) {
            *(s32 *)(s4 + 0x1C) = *(s32 *)(s4 + 0x1C) * 95 / 100;
        } else {
            *(s32 *)(s4 + 0x1C) = *(s32 *)(s4 + 0x1C) + 0x400;
            *(s32 *)(s4 + 0x1C) = func_00A13E50(*(s32 *)(s4 + 0x1C), 0x1900 - *(u8 *)(s4 + 0x5C) * 12);
        }
        *(s32 *)(s4 + 0x20) = *(s32 *)(s4 + 0x1C);
        func_00207390(*(void **)(s4 + 4), 6);
        return 1;
    }
}
