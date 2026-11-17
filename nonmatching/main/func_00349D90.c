/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030D990(u8 a);
extern s32 func_0030DAF0(s32 a);
extern s32 func_0030E6C0(u8 a);
extern s32 func_0030E750(u8 a);
extern void func_0030EE30(void *p);
extern s32 func_0030F380(void);
extern void func_003101E0(void *p, s32 a);
extern s32 func_003103C0(u8 a);
extern s32 func_00310400(u8 a);
extern s32 func_00310440(u8 a);
extern s32 func_003105C0(u8 a);
extern s32 func_00310860(u8 a);
extern s32 func_003108E0(u8 a);
extern s32 func_00310990(void);
extern void func_003139F0(void *p, s32 a);
extern void func_00313A80(void *p, s32 a, void *q);
extern s32 func_00313AF0(void *p, s32 a);
extern void func_00313B30(void *p, s32 a, s32 b);
extern void func_0031B880(void *p, s32 a, s32 b);
extern s32 func_00333030(s32 a);
extern s32 func_00333440(s32 a, void *p, s32 b);
extern s32 func_00333740(s32 a, s32 b);
extern void func_00338930(void *p);
extern void func_00338940(s32 a);
extern s32 func_003389D0(void *p, s32 a);
extern s32 func_00340E90(void *p, void *q, s32 a);
extern s32 func_00340F30(void *p);
extern s32 func_00341090(void *p);
extern s32 func_00341260(void *p);
extern s32 func_00341280(void *p);
extern s32 func_003412D0(void *p);
extern s32 func_00341480(u8 a, u8 b);
extern s32 func_00341810(void *p);
extern u8 D_00591BD0;

s32 func_00349D90(void *arg0) {
    char *p19C;
    char *p198;
    char *p194;
    s16 sp190[2];
    char sp178[8];
    char sp160[24];
    char sp180[16];
    char *q;
    u32 spF0, spE0, spD0, spC0;
    u64 spB0;
    s32 sp140, sp130, sp120, sp110, sp100;
    char *s2;
    s32 s0, s1, s3, s4, s5, s6, s7, fp, a2, v;
    f32 f20, f21, d;
    s16 *pa, *pb;

    s0 = *(s32 *)((char *)arg0 + 0x40);
    s2 = *(char **)((char *)arg0 + 0x50);
    sp140 = *(s32 *)((char *)arg0 + 0x48);
    if (func_0030F380() != 0) {
        func_0031B880(&p194, s0, func_003389D0(arg0, 2));
        s6 = func_003103C0(*(u8 *)(p194 + 4));
        spF0 = func_00310400(*(u8 *)(p194 + 4)) & 0xFFFF;
        func_00340E90(&p19C, p194, 1);
        spE0 = func_00340E90(&p198, p194, 2);
        func_003101E0(&sp190[0], *(u8 *)(p194 + 4));
        func_003101E0(&sp190[1], func_0030E750(*(u8 *)(p194 + 4)));
        spD0 = func_00310440(*(u8 *)(p194 + 4));
        s1 = func_00310860(*(u8 *)(p194 + 4));
        s3 = func_00341260(p19C);
        spC0 = func_00341280(p19C);
        s4 = func_0030E6C0(*(u8 *)(p194 + 4));
        s7 = func_00340F30(p19C);
        fp = func_00341090(p19C);
        func_0030EE30(sp180);
        s0 = 0;
        s5 = 0;
        if (*(s32 *)p19C == 9 && func_0030D990(*(u8 *)(p19C + 4)) == 1)
            s5 = 1;
        if (s5 != 0 && func_00341480(*(u8 *)(p19C + 4), *(u8 *)(p194 + 4)) != 0)
            s0 = 1;
        *(u8 *)(s2 + 0xB) = s0;
        q = sp160;
        func_00313A80(q, 0x3E, sp178);
        func_003139F0(q, s4 & 0xFF);
        func_00313B30(q, 0, func_00333030(0x5DC0));
        a2 = 0;
        if (*(s32 *)(p194 + 0x24) < 0x2710 && !(*(u8 *)(p194 + 6) & 1))
            a2 = 1;
        func_00313B30(q, 1, a2);
        func_00313B30(q, 4, s3);
        s6 = (s6 == 0);
        func_00313B30(q, 6, s6);
        s0 = spF0 & 0xFFFF;
        func_00313B30(q, 7, s0 == 0x12C);
        func_00313B30(q, 8, s0 == 0x257);
        func_00313B30(q, 9, s0 == 0xDB);
        func_00313B30(q, 0xA, s0 == 0x40C);
        func_00313B30(q, 0xC, func_003105C0(*(u8 *)(p194 + 4)) >= 0x5B);
        spB0 = ((u64)*(u8 *)(p194 + 0x2A) << 62) >> 63;
        func_00313B30(q, 0xF, spB0 & func_00310990());
        a2 = 0;
        if (*(u8 *)(p19C + 5) == 0x10 && *(s32 *)p19C == 6)
            a2 = 1;
        func_00313B30(q, 0x10, a2);
        func_00313B30(q, 0x16, (*(u8 *)(p194 + 0x21) == 2) & (spC0 & s3));
        a2 = (s0 == 0x4C4);
        if (a2) a2 = (s6 != 0);
        func_00313B30(q, 0x18, a2);
        func_00313B30(q, 0x19, s7 | fp);
        func_00313B30(q, 0x1A, s3 & func_00340F30(p198));
        s0 = (*(u8 *)(p19C + 6) & 1) & s3;
        func_00313B30(q, 0x23, s0 & func_00341810(p19C));
        a2 = (s1 == 0);
        if (a2) a2 = (*(u8 *)(p19C + 5) == 0xD);
        func_00313B30(q, 0x29, a2);
        a2 = (s1 != 0);
        if (a2) a2 = (*(u8 *)(p19C + 5) == 0xC);
        func_00313B30(q, 0x2A, a2);
        s0 = func_00313AF0(q, 0x29);
        func_00313B30(q, 0x27, s0 | func_00313AF0(q, 0x2A));
        s0 = func_00313AF0(q, 0x29);
        func_00313B30(q, 0x28, s0 | func_00313AF0(q, 0x2A));
        a2 = ((s32)spD0 < 4);
        if (a2) a2 = (s3 != 0);
        if (a2) {
            a2 = (func_00313AF0(q, 0x29) != 0);
            if (!a2) a2 = (func_00313AF0(q, 0x2A) != 0);
        }
        func_00313B30(q, 0x26, a2);
        s1 = s4 ^ 1;
        pa = &sp190[s4];
        pb = &sp190[s1];
        sp130 = 0;
        if (*pa < *pb) {
            if (func_00333740(sp140, s4) < 0x10) {} else sp130 = 1;
        }
        func_00313B30(q, 0x2C, sp130);
        func_00313B30(q, 0x2F, *(u8 *)(p194 + 0x21) == 3);
        s4 = 0;
        sp120 = 0;
        sp110 = 0;
        v = (*(u8 *)(s2 + 0xB) | func_003108E0(*(u8 *)(p194 + 4))) != 0;
        if (v) v = (spE0 != 0);
        if (v) {
            sp100 = 0;
            if (*(s32 *)p19C == 1 && func_00341480(*(u8 *)(p194 + 4), *(s32 *)p19C) != 0)
                sp100 = 1;
            if (!(sp100 != 0))
                sp110 = 1;
        }
        if (sp110 != 0 && *(s32 *)p19C != 0xA)
            sp120 = 1;
        if (sp120 != 0 && *(s32 *)p19C != 2)
            s4 = 1;
        func_00313B30(q, 0x30, s4);
        func_00313B30(q, 0x32, *(u8 *)(s2 + 0xB));
        func_00313B30(q, 0x33, s7);
        func_00313B30(q, 0x34, fp);
        v = (func_0030DAF0(s1) != 0);
        a2 = ((D_00591BD0 < *pb) & (s3 & !v)) != 0;
        if (a2) a2 = !(*pa < 3);
        func_00313B30(q, 0x35, a2);
        s4 = 0;
        s1 = 0;
        s0 = 0;
        v = (s3 | (*(u8 *)(s2 + 0xB) | func_003108E0(*(u8 *)(p194 + 4)))) != 0;
        if (v) v = (spE0 != 0);
        if (v) {
            s3 = 0;
            if (*(s32 *)p19C == 1 && func_00341480(*(u8 *)(p194 + 4), *(s32 *)p19C) != 0)
                s3 = 1;
            if (s3 == 0)
                s0 = 1;
        }
        if (s0 != 0 && *(s32 *)p19C != 0xA)
            s1 = 1;
        if (s1 != 0 && *(s32 *)p19C != 2)
            s4 = 1;
        func_00313B30(q, 0x3D, s4);
        f20 = *(f32 *)(p19C + 0x14) - *(f32 *)(p194 + 0x14);
        f21 = *(f32 *)(p19C + 0xC) - *(f32 *)(p194 + 0xC);
        v = func_003412D0(p19C);
        d = f20 * f20 + f21 * f21;
        a2 = 1;
        if (!(d < 65536.0f)) a2 = 0;
        func_00313B30(q, 0x37, v & a2);
        s0 = (func_00313AF0(q, 0x37) == 0);
        func_00313B30(q, 0x38, func_003412D0(p19C) & s0);
        if (func_00333440(0x1B, q, 1) != 0) {
            func_00338940(0x8000000E);
            func_00338940(0x80000062);
        }
    }
    *(u8 *)(s2 + 0xB) = 0;
    *(u8 *)(s2 + 0xA) = 0;
    func_00338930(arg0);
    return 1;
}
