/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00290B80(u8 a, u8 b);
extern s32 func_0098ED30(u8 a);
extern s32 func_0098F7E0(void *a);
extern s32 func_00990590(void *a, u16 b, s32 c, s32 d, s32 e);
extern s32 func_009B3070(u16 a, u16 b);
extern s32 func_00A1B990(void *a);
extern s32 func_00AFBAB0(u8 a);
extern s32 func_00C5E780(void *a);
extern char *D_003E7574;
extern char *D_003E7A08;
extern char D_0058E5B0[];
extern char D_00591BBC[];
extern char D_00591E4C[];
extern char D_00591E4F[];
extern char D_0059227C[];
extern char D_005A216F[];
extern char D_005A2183[];
extern char D_00CB5397[];

s32 func_00C5EAB0(char *T) {
    char *s2;
    char *s1;
    u32 v;
    u32 a0;
    s32 a;
    s32 b;
    s32 e;
    s32 s3;
    s32 r;
    s32 a1;
    s32 t;

    if ((f32)*(s16 *)(T + 0x14) * *(f32 *)D_0059227C <= 0.0f) {
        if (*(u8 *)(T + 0x1DD) != 0x29)
            goto L_F138;
    } else {
        return 0;
    }
L_EB04:
    if (*(u8 *)(T + 0x24) == 1 && *(u8 *)D_00591BBC < 2)
        return 0;
    if (*(u8 *)D_00591E4C == 0) {
        a1 = *(u8 *)(T + 0x13) ^ 1;
        t = *(u8 *)(D_00591E4F + a1 * 2);
        a = (t == 0xFF) ? 1 : t % 23;
        s1 = D_0058E5B0 + a * 0x240;
        if (*(u8 *)(D_003E7A08 + a1) == 0) {
            if (!((f32)*(u32 *)(s1 + 0x124) <= 26625600.0f))
                return 0;
        }
        if (!(__builtin_fabsf(*(f32 *)(s1 + 0xE8)) <= 5160.0f))
            return 0;
    }
    if (func_0098F7E0(T) == 0)
        return 0;
    r = func_0098ED30(*(u8 *)T) & 0xFF;
    if (r == 2 || r == 3)
        goto L_EF28;
    if (r == 4)
        goto L_EF10;
    if (r != 5)
        goto L_EF28;

    /* case 5 */
    b = *(u8 *)(D_00591E4F + *(u8 *)(T + 0x13) * 2);
    a = (b == 0xFF) ? 1 : b % 23;
    s2 = D_0058E5B0 + a * 0x240;
    e = *(u8 *)D_00591E4C;
    if (e > 0 && e < 0x17) {
        a1 = 0;
        a = (e == 0xFF) ? 1 : e % 23;
        s1 = D_0058E5B0 + a * 0x240;
        if (b > 0 && b < 0x17) {
            if (*(u32 *)(s1 + 0x124) - *(u32 *)(s2 + 0x11C) < 0x190000 &&
                __builtin_fabsf(*(f32 *)(s1 + 0xE8)) > 2580.0f)
                a1 = 1;
        }
        if (a1 == 0) {
            a0 = *(u32 *)(s1 + 0x124);
            if (a0 < *(u32 *)(T + 0x11C))
                return 1;
            if ((f32)a0 < 5494336.0f) {
                r = func_009B3070(*(u16 *)(T + 0x118), *(u16 *)(s1 + 0x120)) & 0xFFFF;
                if (r < 0x1000) {
                    v = *(u32 *)(s1 + *(u8 *)T * 4 + 0x158);
                    if (v < 0x190000)
                        return 1;
                }
            }
            v = *(u32 *)(s1 + 0x124);
            if ((f32)v < 17842176.0f) {
                if ((func_00A1B990(s2) & 0xFF) == 1)
                    return 1;
            }
            a0 = *(u32 *)(s1 + 0x124);
            if (a0 < *(u32 *)(s2 + 0x11C) && (f32)a0 < 7929856.0f)
                return 1;
            if (*(u8 *)(D_003E7A08 + (*(u8 *)(T + 0x13) ^ 1)) != 0)
                return 1;
        }
    }
    if (*(u8 *)(T + 0x16) != 7)
        return 1;
    if (*(u8 *)D_00591E4C != 0) {
        t = *(u8 *)D_00591E4C;
        a = (t == 0xFF) ? 1 : t % 23;
        s1 = D_0058E5B0 + a * 0x240;
        r = func_009B3070(*(u16 *)(s1 + *(u8 *)s2 * 2 + 0x128), *(u16 *)(s1 + 0x120)) & 0xFFFF;
        if (r > 0x2000)
            return 1;
    }
    if (func_00C5E780(T) != 0)
        return 0;
    return 1;

L_EF10:
    if (func_00C5E780(T) != 0)
        return 0;
    r = func_00AFBAB0(*(u8 *)T) & 0xFF;
    if (r == 0xFF) {
        a = 1;
    } else {
        a = (func_00AFBAB0(*(u8 *)T) & 0xFF) % 23;
    }
    s2 = D_0058E5B0 + a * 0x240;
    if (!((func_00990590(s2, *(u16 *)(s2 + 0x120), 0x1800, 0x02400000, 1) & 0xFF) <
          (func_00990590(s2, *(u16 *)(s2 + 0x120), 0x1800, 0x02400000, 2) & 0xFF)))
        goto L_F110;
    if (*(u8 *)(T + 0x16) != 7)
        goto L_EF28;
    if (__builtin_fabsf(*(f32 *)(D_003E7574 + 0x18)) <= 5160.0f)
        goto L_EF28;
    if (*(u8 *)(D_003E7A08 + (*(u8 *)(T + 0x13) ^ 1)) == 0)
        goto L_F110;

L_EF28:
    if (func_0098F7E0(T) == 0)
        goto L_F110;
    if (*(u8 *)(T + 0x16) != 7)
        return 1;
    t = *(u8 *)(D_00591E4F + (*(u8 *)(T + 0x13) ^ 1) * 2);
    a = (t == 0xFF) ? 1 : t % 23;
    s2 = D_0058E5B0 + a * 0x240;
    a1 = *(u8 *)(T + 0x12) * 0x168;
    s3 = (func_00290B80((*(u8 *)(D_005A216F + a1) + 0x21) & 0xFF, *(u8 *)(D_005A2183 + a1)) & 0xFF) * 0x18 + 0x1000;
    t = *(u8 *)(D_00591E4F + *(u8 *)(T + 0x13) * 2);
    a = (t == 0xFF) ? 1 : t % 23;
    s1 = D_0058E5B0 + a * 0x240;
    if ((func_009B3070(*(u16 *)(s2 + 0x120), *(u16 *)(s2 + *(u8 *)s1 * 2 + 0x128)) & 0xFFFF) > 0x1000 &&
        *(u32 *)(s2 + *(u8 *)s1 * 4 + 0x158) >= 0x240001)
        s3 += 0x400;
    if (*(u32 *)(s2 + 0x124) < (u32)(s3 * s3))
        return 1;
    if (*(u8 *)(D_003E7A08 + (*(u8 *)(T + 0x13) ^ 1)) != 0)
        return 1;
    if (*(u8 *)D_00CB5397 != 0) {
        if ((func_0098ED30(*(u8 *)T) & 0xFF) >= 3)
            return 1;
    }
    if (*(u8 *)(T + 0x1DD) == 0x27) {
        if (*(u8 *)(T + 0x1D5) == *(u8 *)(D_00591E4F + *(u8 *)(T + 0x13) * 2))
            return 1;
    }
L_F110:
    if (*(u32 *)(T + 0x114) < 0x200)
        return 1;
    return 0;

L_F138:
    if (*(u8 *)D_00591E4C != 0)
        goto L_EB04;
    t = *(u16 *)(D_003E7574 + 0x84);
    if (t == 3 || t == 2)
        return 0;
    if ((func_0098ED30(*(u8 *)T) & 0xFF) != 4)
        goto L_EB04;
    if (__builtin_fabsf(*(f32 *)(D_003E7574 + 0x18)) <= 5160.0f)
        goto L_EB04;
    return 0;
}
