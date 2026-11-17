/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0051FFB2[];
extern char D_0051FFB8[];
extern char D_0051FF52[];

void *func_00153FE0(s32, s32);
s32 func_001CDAA0(void);
void func_001A3850(f32 *);
f32 func_001A3890(void);
f32 func_001A38A0(void);
f32 func_001A38B0(void);
f32 func_00151CF0(f32);
void *memcpy(void *, void *, s32);
s32 Pes6Random_Below(s32);


void *func_00184A60(void) {
    void *r = 0;
    f32 c[4];
    f32 b[4];
    f32 a[4];
    char *p;
    f32 *s2;
    f32 *s1;
    s32 i;

    p = func_00153FE0(*(s16 *)D_0051FFB2, 0xDE4);
    *(char **)D_0051FFB8 = p;
    if (p == 0) return r;
    *(u16 *)(*(char **)D_0051FFB8 + 4) = 0x48;
    *(u16 *)(*(char **)D_0051FFB8 + 6) = 0x48;
    *(u16 *)(*(char **)D_0051FFB8 + 8) = 0;
    *(u16 *)(*(char **)D_0051FFB8 + 10) = 0;
    *(u8 *)(*(char **)D_0051FFB8 + 2) = 0;
    *(u8 *)(*(char **)D_0051FFB8 + 3) = 0;
    if (*(u8 *)D_0051FF52 == 1) {
        *(u16 *)*(char **)D_0051FFB8 = 0;
    } else if ((Pes6Random_Below(3) & 0xFFFF) == 0) {
        *(u16 *)*(char **)D_0051FFB8 = 0;
    } else {
        *(u16 *)*(char **)D_0051FFB8 = 1;
    }
    *(f32 *)(*(char **)D_0051FFB8 + 0x3C) = 4000.0f;
    *(f32 *)(*(char **)D_0051FFB8 + 0x44) = 4000.0f;
    *(s32 *)(*(char **)D_0051FFB8 + 0x40) = 0x456D8000;
    *(s32 *)(*(char **)D_0051FFB8 + 0x48) = 0x44BB8000;
    *(s32 *)(*(char **)D_0051FFB8 + 0x50) = 0x44BB8000;
    *(s32 *)(*(char **)D_0051FFB8 + 0x4C) = 0x44A28000;
    if (func_001CDAA0() == 0) {
        *(s32 *)(*(char **)D_0051FFB8 + 0xC) = 0x41000000;
        *(s32 *)(*(char **)D_0051FFB8 + 0x10) = 0x43200000;
        *(s32 *)(*(char **)D_0051FFB8 + 0x14) = 0x41000000;
    } else {
        *(s32 *)(*(char **)D_0051FFB8 + 0xC) = 0x4119999A;
        *(s32 *)(*(char **)D_0051FFB8 + 0x10) = 0x43400000;
        *(s32 *)(*(char **)D_0051FFB8 + 0x14) = 0x4119999A;
    }
    *(s32 *)(*(char **)D_0051FFB8 + 0x18) = 0xC1100000;
    *(s32 *)(*(char **)D_0051FFB8 + 0x1C) = 0xC3340000;
    *(s32 *)(*(char **)D_0051FFB8 + 0x20) = 0xC1100000;
    *(u16 *)(*(char **)D_0051FFB8 + 0x54) = 2;
    *(u16 *)(*(char **)D_0051FFB8 + 0x56) = 0x48;
    *(u8 *)(*(char **)D_0051FFB8 + 0x58) = 0xDB;
    *(u8 *)(*(char **)D_0051FFB8 + 0x59) = 0xDB;
    *(u8 *)(*(char **)D_0051FFB8 + 0x5A) = 0xDB;
    *(u8 *)(*(char **)D_0051FFB8 + 0x5B) = 0x30;
    *(char **)(*(char **)D_0051FFB8 + 0x5C) = *(char **)D_0051FFB8 + 0x64;
    *(s32 *)(*(char **)D_0051FFB8 + 0x60) = 0;
    s1 = (f32 *)(*(char **)D_0051FFB8 + 0x24);
    s2 = (f32 *)(*(char **)D_0051FFB8 + 0x30);
    func_001A3850(a);
    if (a[1] > 0.0f) a[1] = 0.0f;
    if (s2) {
        s2[0] = 2000.0f * a[0] + (0.0f + func_001A38B0());
        s2[1] = 2000.0f * a[1] + (0.0f + func_001A38A0());
        s2[2] = 2000.0f * a[2] + (0.0f + func_001A3890());
    }
    if (s1) {
        s1[0] = 7000.0f * a[0] + (0.0f + func_001A38B0());
        s1[1] = 7000.0f * a[1] + (0.0f + func_001A38A0());
        s1[2] = 7000.0f * a[2] + (0.0f + func_001A3890());
    }
    p = *(char **)D_0051FFB8;
    {
        f32 *pk = (f32 *)(p + 0x3C);
        f32 *pb = (f32 *)(p + 0x64);
        f32 *pc1 = c + 1;
        f32 *pc2 = c + 2;
        f32 f21, f20;
        f32 *q1 = b + 1;
        f32 *q2 = b + 2;
        b[0] = *(f32 *)(p + 0x24) - pk[0];
        b[1] = *(f32 *)(p + 0x28);
        b[2] = *(f32 *)(p + 0x2C);
        f21 = *q1 - pk[1];
        f20 = *q2 - pk[2];
        *q1 = f21;
        *q2 = f20;
        i = 0;
        do {
            f32 t, k;
            k = pk[0];
            t = func_00151CF0(2.0f);
            c[0] = b[0] + (k * t - k);
            k = pk[1];
            t = func_00151CF0(2.0f);
            *pc1 = f21 + (k * t - k);
            k = pk[2];
            t = func_00151CF0(2.0f);
            *pc2 = f20 + (k * t - k);
            r = memcpy(pb, c, 12);
            i++;
            pb[6] = c[0] + *(f32 *)(*(char **)D_0051FFB8 + 0x18);
            pb[7] = *pc1 + *(f32 *)(*(char **)D_0051FFB8 + 0x1C);
            pb[8] = *pc2 + *(f32 *)(*(char **)D_0051FFB8 + 0x20);
            pb += 12;
        } while (i < 0x48);
    }
    return r;
}
