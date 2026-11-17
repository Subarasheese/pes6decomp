/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_001CD9E0(f32 x);
extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_009B32D0(s32 a, s32 b, s32 c);
extern s32 func_009B33A0(char *p, s32 a, s32 b);
extern s32 func_009B3480(char *p, f32 a, f32 b);
extern s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
extern s32 func_009B9AE0(char *a, char *b);
extern s32 func_00A09950(char *p);
extern s32 func_00A1FE80(s32 a, s32 b);
extern s32 func_00A9B980(char *p);
extern s32 func_00A9BA00(char *p);
extern s32 func_00A9C660(char *p);
extern s32 func_00BBB990(s32 a, s32 b);
extern s32 func_00BBB9C0(s32 a, s32 b);

extern char D_0058E5B0[];
extern char D_00591E4C[];
extern char *D_003E7574;

void func_00C552F0(char *arg0, s32 arg1, s32 arg2) {
    u32 sel;
    s32 idx;
    char *s2;
    f32 f20, f21, f22;
    s32 s0, s1, s3, s5, t, sign, v1, a1;

    s3 = arg1;
    if (*(u8 *)D_00591E4C != 0 && func_00A09950(arg0) == 0) {
        idx = *(u8 *)D_00591E4C;
        if (idx != 0xFF) {
            idx = idx % 23;
        } else {
            idx = 1;
        }
        if (*(u32 *)(D_0058E5B0 + idx * 0x240 + 0x114) < 0x200 && *(u32 *)(arg0 + 0x114) < 0x200) {
            *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(arg0 + 0xE0) + *(f32 *)(arg0 + 0xF0);
            *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(arg0 + 0xE8) + *(f32 *)(arg0 + 0xF8);
            return;
        }
    }
    idx = *(u8 *)(arg0 + 0x1D5);
    f20 = *(f32 *)(D_003E7574 + 0x145C);
    f22 = *(f32 *)(D_003E7574 + 0x1454);
    if (idx != 0xFF) {
        idx = idx % 23;
    } else {
        idx = 1;
    }
    s2 = D_0058E5B0 + idx * 0x240;
    if ((f32)*(s16 *)(arg0 + 0x14) * f22 < -12185.0f) {
        f21 = -13401.0f * (f32)*(s16 *)(arg0 + 0x14);
    } else if ((func_009B30B0(*(u16 *)(arg0 + 0x2A), *(u16 *)(arg0 + 0x10C)) & 0xFFFF) < 0x31) {
        f21 = -13337.0f * (f32)*(s16 *)(arg0 + 0x14);
    } else {
        f21 = -13401.0f * (f32)*(s16 *)(arg0 + 0x14);
    }
    s0 = func_009B34C0(f21, 0.0f, f22, f20) & 0xFFFF;
    t = func_009B3070(*(u16 *)(arg0 + 0x2A), s0) & 0xFFFF;
    s1 = func_009B32D0((*(u16 *)(arg0 + 0x2A) + 0x7FFF + 1) & 0xFFFF, s0, (t >> 2) & 0xFFFF) & 0xFFFF;
    s0 = func_009B3070(*(u16 *)(arg0 + 0x2A), s1) & 0xFFFF;
    s5 = func_009B30B0(*(u16 *)(s2 + 0x26), func_009B3480(s2, f21, 2344.0f)) & 0xFFFF;
    a1 = func_009B30B0(*(u16 *)(s2 + 0x26), func_009B3480(s2, f21, -2344.0f)) & 0xFFFF;
    v1 = *(s32 *)(D_003E7574 + 0x50);
    if (v1 >= 0x1801 && s5 >= 0x38 && a1 < 0x2D) {
        sign = (*(f32 *)(D_003E7574 + 0x18) < 0.0f) ? -1 : 1;
        f20 = (f32)((s0 * sign) / 96 - 0x80);
    } else if (v1 >= 0x1801 && a1 >= 0x38 && s5 < 0x2D) {
        sign = (*(f32 *)(D_003E7574 + 0x18) < 0.0f) ? -1 : 1;
        f20 = (f32)((s0 * sign) / 96 + 0x80);
    } else {
        s1 = func_009B32D0((*(u16 *)(arg0 + 0x2A) + 0x7FFF + 1) & 0xFFFF, s1, 0x400) & 0xFFFF;
        sign = (*(f32 *)(D_003E7574 + 0x18) < 0.0f) ? -1 : 1;
        f20 = (f32)((s0 * sign) / 96);
    }
    s0 = func_009B32D0(s1, *(u16 *)(arg0 + 0x2A), 0x3800) & 0xFFFF;
    s1 = (s32)func_001CD9E0((f32)func_00A9BA00(s2));
    sel = arg2 & 0xFF;
    if (sel == 25) {
        s3 = (s3 * 8) / 10;
        *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s3);
    } else if (sel == 24) {
        *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s3 / 2);
        s3 = (s3 * 60) / 100;
    } else if (sel == 23) {
        s3 = func_009B3070(*(u16 *)(s2 + *(u8 *)arg0 * 2 + 0x128), func_00A9C660(s2));
        t = func_00BBB990(s3, (s32)func_001CD9E0((f32)*(u32 *)(arg0 + *(u8 *)s2 * 4 + 0x158)));
        if (s1 - 0x280 < t) {
            s3 = 0x280;
        } else {
            a1 = ((s1 - t) * 0x5F) / 100;
            s1 = a1;
            if (func_00A9B980(arg0) >= 0x900001) {
                s1 = (s1 * 9) / 10;
            }
            s3 = func_00A1FE80(s1, 0x200);
        }
        *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s3);
    } else if (sel == 21) {
        *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s3 / 3);
    } else {
        *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s3 / 8);
        s3 = s3 / 2;
    }
    *(f32 *)(D_003E7574 + 0x145C) = f20 + (f32)func_00BBB9C0(s0, s3);
    s1 = func_009B9AE0(arg0, s2) & 0xFFFF;
    if (*(u8 *)D_00591E4C != 0) {
        if (func_00A09950(arg0) == 1 && s1 < 0xD) {
            f32 fa, fb;
            t = func_009B33A0(arg0, (s32)f21, 0);
            s1 = (s32)func_001CD9E0((f32)(u32)t);
            fa = 0.0f - *(f32 *)(D_003E7574 + 0x145C);
            fb = f21 - *(f32 *)(D_003E7574 + 0x1454);
            s1 = (s1 * 0x46) / 100;
            if ((s32)func_001CD9E0(fa * fa + fb * fb) < s1) {
                *(f32 *)(D_003E7574 + 0x1454) = f21 + (f32)func_00BBB990(s0, s1);
                *(f32 *)(D_003E7574 + 0x145C) = (f32)func_00BBB9C0(s0, s1);
            }
        }
    }
    if (*(u8 *)D_00591E4C != 0) {
        if (func_00A09950(arg0) == 0) {
            *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(D_003E7574 + 0x1454) + 32.0f;
            *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(D_003E7574 + 0x1454) - (f32)((s32)*(f32 *)(D_003E7574 + 0x1454) % 64);
            *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(D_003E7574 + 0x145C) + 128.0f;
            *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(D_003E7574 + 0x145C) - (f32)((s32)*(f32 *)(D_003E7574 + 0x145C) % 256);
        }
    }
}
