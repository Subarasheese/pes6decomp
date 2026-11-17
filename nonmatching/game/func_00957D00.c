/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00C9A390[];
extern char D_00C9A394[];
extern char D_00C9A398[];
extern char D_00C9A39C[];
extern char D_0058E5B0[];
extern char D_00591E90[];
extern char D_00591BEC[];
extern s32 func_00AFBAB0(s32);
extern s32 func_00BDB8B0(void *);
extern s32 func_00BBB8C0(s32);
extern f32 func_001CD9E0(f32);
extern s32 func_00952420(void *, s32, s32, s32);
extern s32 func_009631C0(s32, s32, s32);
extern void func_00C04830(void *, s32, s32);

void func_00957D00(u8 *p) {
    s32 arrA[11];
    s32 arrB[11];
    s32 out[12];
    f32 tbl[4];
    s32 i, k, s0, s3;
    u8 *s4, *s2;
    s32 s1, idx, v;
    f32 f20, x, f1, f2;
    u32 u3;

    tbl[0] = *(f32 *)D_00C9A390;
    tbl[1] = *(f32 *)D_00C9A394;
    tbl[2] = *(f32 *)D_00C9A398;
    tbl[3] = *(f32 *)D_00C9A39C;
    v = *(s32 *)(p + 0x1E0);
    if (v == 10 || v == 14) return;
    v = p[0x21B];
    if (v != 0) {
        p[0x21B] = v + 1;
        if (p[0x21B] >= 11) p[0x21B] = 0;
        if (p[0x21B] != 0) return;
    }
    v = func_00AFBAB0(p[0]) & 0xFF;
    if (v == 0xFF) {
        idx = 1;
    } else {
        v = func_00AFBAB0(p[0]) & 0xFF;
        idx = v % 23;
    }
    s4 = (u8 *)D_0058E5B0 + idx * 0x240;
    {
        s32 *pa = arrA, *pb = arrB;
        s32 *qa = arrA, *qb = arrB;
        for (i = 0; i < 11; i++) {
            if (func_00BDB8B0(s4)) {
                *pa = s4[0x218];
                *pb = s4[0];
            } else {
                *pa = 0;
            }
            pa++;
            pb++;
            s4 += 0x240;
        }
        s0 = 0;
        for (i = 0; i < 11; i++) {
            if ((s0 & 0xFF) < arrA[i]) s0 = arrA[i] & 0xFF;
        }
        s3 = s0 & 0xFF;
        k = 0;
        for (i = 0; i < 11; i++) {
            if (s3 == *qa) {
                out[k] = *qb;
                k++;
            }
            qa++;
            qb++;
        }
    }
    idx = func_00BBB8C0(k);
    s1 = *(u8 *)&out[idx];
    if (s1 == p[0]) return;
    if (s1 == 0xFF) idx = 1; else idx = s1 % 23;
    s2 = (u8 *)D_0058E5B0 + idx * 0x240;
    v = p[0x21E];
    if (v != 0) {
        p[0x21E] = v + 1;
        if (!(p[0x21C] < s3)) {
            if (p[0x21E] >= 3) p[0x21E] = 0;
        } else {
            p[0x21E] = 0;
        }
        if (p[0x21E] != 0) return;
    }
    {
        s32 h = *(s32 *)&tbl[s0 & 0xFF];
        s32 r = 0;
        if (h) r = ((s32 (*)(void *, void *))h)(p, s2);
        if (r == 0) {
            p[0x21C] = s0;
            p[0x21D] = s1;
            p[0x21E] = 1;
            return;
        }
    }
    p[0x219] = s0;
    p[0x21A] = s1;
    p[0x21B] = 1;
    f1 = *(f32 *)(s2 + 0xE0);
    u3 = *(u32 *)(p + 0x158 + s2[0] * 4);
    f2 = (f32)*(s16 *)(s2 + 0x14);
    f20 = f2 * ((f32 *)D_00591E90)[s2[0x13] ^ 1] - f2 * f1;
    s0 = (s32)func_001CD9E0((f32)u3);
    *(s32 *)(p + 0x1E8) = s2[0];
    if (u3 < 0x5100000 &&
        func_00952420(p, *(u16 *)(p + 0x128 + (s1 & 0xFF) * 2), 0x800, u3)) {
        x = (f32)(func_009631C0(s0, 0x1F40, 0x60) + 0x1E);
        f1 = 384.0f / *(f32 *)D_00591BEC;
        f2 = (f32)*(s16 *)(s2 + 0x14) * *(f32 *)(s2 + 0xF0);
        f1 = f2 - f1;
        if (f20 < x * f1) func_00C04830(p, 1, s2[0]);
        else func_00C04830(p, 0, s2[0]);
    } else {
        x = (f32)(func_009631C0(s0, 0x1F40, 0x20) + 0x1E);
        f1 = 384.0f / *(f32 *)D_00591BEC;
        f2 = (f32)*(s16 *)(s2 + 0x14) * *(f32 *)(s2 + 0xF0);
        f1 = f2 - f1;
        if (f20 < x * f1) func_00C04830(p, 2, s2[0]);
        else func_00C04830(p, 3, s2[0]);
    }
}
