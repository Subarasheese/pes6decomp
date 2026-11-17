/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBBE00[];
extern char D_00CBBE01[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_00CBBDFF[];
extern char D_00CBBDFD[];
extern char D_00CB3300[];
extern char D_003B7AC0[];
extern char D_003E6490[];
extern u8 D_003E9FB8;
extern u8 D_003E9FB4;

s32 func_00341910(s32, s32, s32);
void func_00333320(s32);
void func_0030FE30(void *, s32);
s32 func_009E62D0(s32, s32);
void func_00313A80(void *, s32, void *);
void func_003139C0(void *, s32);
void func_00313B30(void *, s32, s32);
s32 func_00313AF0(void *, s32);
s32 func_003389D0(s32, s32);
void func_00333440(s32, void *, s32);
void func_00333620(s32, s32);
void func_00338930(s32);
void func_003387D0(s32, void *, void *);
void func_00357180(void);
f32 fabsf(f32);

s32 func_00357650(s32 job) {
    u8 *p;
    u8 aux[12];
    u8 bits[32];
    s8 tbl[36];
    s16 h;
    u64 mode;
    s32 s7, s4, a3, fp, ctl, s2, s3, s1, s0, v, i, tv, t, base;
    s32 neg;
    f32 f;
    s8 *src;
    s8 *dst;
    u8 *bp;

    s7 = *(u8 *)D_00CBBE00;
    if (s7 == 255) return 0;
    func_00333320(func_00341910(0, 5, 10));
    D_003E9FB8 = s7;
    base = *(s32 *)D_00CB3300;
    h = *(s16 *)(base + 12);
    func_0030FE30(&p, 0);
    D_003E9FB4 = p[4];
    s4 = func_009E62D0(h, *(s16 *)(base + 0x300)) & 0xff;
    v = *(u8 *)D_00CBBE01;
    if (v == 0x40) mode = 4;
    else if (v == 0x10) mode = 1;
    else if (v == 0x20) mode = 2;
    else if (v == 0x80) mode = 0;
    else if (v == 0x60) mode = 5;
    else if (v == 0xC0) mode = 3;
    else mode = 1;
    mode &= 0xff;
    a3 = 0;
    if (*(s32 *)p == 11) {
        t = p[32];
        if (t == 2 || t == 1) a3 = 1;
    }
    f = *(f32 *)(p + 20);
    fp = a3 & (fabsf(f) < 889.0f);
    ctl = *(u8 *)D_00CBBDFF;
    s2 = *(u8 *)D_00CBBDFD;
    neg = a3 & (fp == 0);
    src = (s8 *)D_003B7AC0;
    dst = tbl;
    for (i = 18; i > 0; i--) {
        dst[0] = src[0];
        dst[1] = src[1];
        src += 2;
        dst += 2;
    }
    if (v == 0x40) t = 4;
    else if (v == 0x10) t = 1;
    else if (v == 0x20) t = 2;
    else if (v == 0x80) t = 0;
    else if (v == 0x60) t = 5;
    else if (v == 0xC0) t = 3;
    else t = 1;
    tv = (u8)tbl[(ctl & 0xff) * 6 + (t & 0xff)];
    bp = bits;
    func_00313A80(bp, 41, aux);
    func_003139C0(bp, *(u8 *)D_00CBBE04);
    func_00313B30(bp, 1, s7 == 1);
    func_00313B30(bp, 2, s4);
    s3 = (s2 == 0);
    func_00313B30(bp, 3, s3 || (s2 & 0xff) == 1);
    func_00313B30(bp, 4, s3);
    func_00313B30(bp, 5, h != 0 && (s2 & 0xff) == 1);
    func_00313B30(bp, 6, func_003389D0(job, 1));
    s1 = ctl & 0xff;
    func_00313B30(bp, 8, s1 == 5 || s1 == 2);
    func_00313B30(bp, 9, s1 == 5 || s1 == 2);
    func_00313B30(bp, 10, s1 == 5);
    func_00313B30(bp, 11, s1 == 2);
    s0 = mode & 0xff;
    func_00313B30(bp, 12, s0 == 5 || s0 == 2);
    func_00313B30(bp, 14, s1 == 3 || s1 == 0);
    func_00313B30(bp, 15, s1 == 3 || s1 == 0);
    func_00313B30(bp, 16, s1 == 3);
    func_00313B30(bp, 17, s1 == 0);
    func_00313B30(bp, 18, s0 == 3 || s0 == 0);
    func_00313B30(bp, 20, s1 == 4 || s1 == 1);
    func_00313B30(bp, 21, s1 == 1);
    func_00313B30(bp, 22, s0 == 4);
    func_00313B30(bp, 23, tv);
    func_00313B30(bp, 24, s1 == 1);
    func_00313B30(bp, 26, s7 == 0);
    func_00313B30(bp, 27, p[4] == *(u8 *)D_00CBBE05);
    s2 &= 0xff;
    func_00313B30(bp, 28, func_003389D0(job, (s2 & 1) + 2) == 1);
    func_00313B30(bp, 29, s0 == 1 || s0 == 4);
    v = func_00313AF0(bp, 27);
    func_00313B30(bp, 31, (neg | fp | v) == 0);
    func_00313B30(bp, 32, s3 || s2 == 1);
    func_00313B30(bp, 33, s3);
    func_00313B30(bp, 34, h == 0 && s2 == 1);
    func_00313B30(bp, 35, s1 == 1);
    func_00313B30(bp, 37, neg);
    func_00313B30(bp, 38, fp);
    func_00313B30(bp, 39, s4);
    func_00313B30(bp, 40, s4);
    func_00333440(0x42, bits, 1);
    if (s4 != 0) {
        func_00333620(0x13, 0);
        func_00338930(job);
        return 0;
    }
    func_003387D0(job, (void *)func_00357180, D_003E6490);
    return 0;
}
