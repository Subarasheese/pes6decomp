/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E1C90(s32 a);
extern s32 func_00BF6280(void);
extern s32 func_00BF6270(void);
extern s32 func_00BF6260(void);
extern s32 func_00C01090(s32 a);
extern s32 func_00292BF0(void);
extern s32 func_00292CD0(s32 a);
extern char D_00CBCDE1[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];
extern char D_0058E5B0[];
extern char D_0058E7F0[];
extern char D_00591DCD[];
extern char D_00592980[];
extern char D_00CB3300[];

s32 func_00B60960(void) {
    s32 s1 = 0;
    s32 s0 = 0;
    char *s3, *s2, *base, *q, *p;
    s32 v, idx, t, hd, i, sum;

    if ((func_009E1C90(1) & 0xFF) == 0xC && func_00BF6280() == 2) {
        v = func_00BF6270();
        idx = (v == 0xFF) ? 1 : v % 23;
        s3 = D_0058E5B0 + idx * 0x240;
        v = func_00BF6260();
        idx = (v == 0xFF) ? 1 : v % 23;
        s2 = D_0058E5B0 + idx * 0x240;
        if (func_00C01090(0xF)) s0 = 1;
    } else {
        v = *(u8 *)D_00CBCDE2;
        idx = (v == 0xFF) ? 1 : v % 23;
        s3 = D_0058E5B0 + idx * 0x240;
        v = *(u8 *)D_00CBCDE3;
        idx = (v == 0xFF) ? 1 : v % 23;
        s2 = D_0058E5B0 + idx * 0x240;
        if (*(u8 *)D_00CBCDE1 == 4) s0 = 1;
    }

    base = D_00592980 + *(u8 *)(s2 + 0x12) * 26880 + *(u8 *)(s2 + 0x11) * 840;
    t = (*(u8 *)(base + 0x89) >> 3) & 3;
    q = *(char **)D_00CB3300 + 8;
    hd = *(s16 *)(q + *(u8 *)(s3 + 0x12) * 756) - *(s16 *)(q + *(u8 *)(s2 + 0x12) * 756);

    if (*(u8 *)D_00591DCD == 0) {
        if (t == 1) {
            if (s0 != 1) return s1;
            if (hd > 0) s1 += 0x14;
            return s1;
        }
        if (t != 0) return s1;
        if (s0 != 0) {
            s1 += 0x28;
            return s1;
        }
        if (hd > 0) s1 += 0xA;
        return s1;
    }

    if (t == 3) return 0;
    if (t == 2) {
        if (s0 == 0) {
            if (hd > 0) s1 += 5;
        } else {
            if (hd > 0) s1 += 0xA;
        }
    } else if (t == 1) {
        if (s0 == 0) {
            if (hd >= 0) s1 += 5;
        } else {
            if (hd <= 0) s1 += 0x14;
            else s1 += 0x28;
        }
    } else if (t == 0) {
        if (s0 == 0) {
            if (hd >= 0) s1 += 0xA;
        } else {
            if (hd <= 0) s1 += 0x28;
            else s1 += 0x3C;
        }
    }

    sum = 0;
    p = D_0058E7F0;
    for (i = 0; i < 22; i++, p += 0x240) {
        base = D_00592980 + *(u8 *)(p + 0x12) * 26880 + *(u8 *)(p + 0x11) * 840;
        sum += *(u8 *)(base + 0xD5) + *(u8 *)(base + 0xD6);
    }
    if (sum >= 5) s1 += 0xA;
    if (func_00292BF0() != 0) s1 += 5;
    if (func_00292CD0(*(u8 *)(s3 + 0x13)) == 0) {
        s1 += 5;
    } else if (func_00292CD0(*(u8 *)(s2 + 0x13)) == 0) {
        s1 += 5;
    }
    return s1;
}
