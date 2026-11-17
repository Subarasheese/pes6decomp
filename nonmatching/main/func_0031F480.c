/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00310A50(u8 *a, s32 b);
extern s32 func_0030E6C0(s32 a);
extern s32 func_00311260(s32 a);
extern s32 func_00311180(s32 a);
extern void func_0030DC00(f32 *a, s32 b);
extern void func_0030EE30(void *a);
extern f32 func_0030EBB0(s32 a, s32 b, f32 f);
extern s32 func_003112A0(s32 a);
extern s32 func_00311310(void);
extern void func_0030F270(f32 *a);
extern void func_0030F290(f32 *a);
extern void func_0030FE30(u8 **a, s32 b);
extern s32 func_003410E0(u8 *a);
extern s32 func_00311250(void);
extern void func_00313A80(void *a, s32 b, void *c);
extern void func_003139F0(void *a, s32 b);
extern s32 func_00333030(s32 a);
extern void func_00313B30(void *a, s32 b, s32 c);
extern s32 func_0030E780(void);
extern s32 func_00333440(s32 a, void *b, s32 c);
extern void func_00338940(u32 a);
extern void func_00338930(s32 a);
extern u8 *D_003E7574;

s32 func_0031F480(s32 arg0) {
    struct {
        char buf[0x20];
        s32 arr[2];
        char c8[16];
        u8 *p;
        f32 dc, e0, e4;
        u8 e8[7];
        u8 ef;
    } l;
    char *b = l.buf;
    s32 s0, s1, s2, s3, s5, s6, a2;
    f32 f20, f21, x;

    func_00310A50(&l.ef, 5);
    s0 = func_0030E6C0(l.ef);
    s2 = func_00311260(l.ef);
    l.arr[0] = func_00311180(0);
    l.arr[1] = func_00311180(1);
    func_0030DC00(&l.dc, l.ef);
    func_0030EE30(l.c8);
    f21 = func_0030EBB0(l.ef, 1, ((f32 *)l.c8)[2]);
    s1 = func_003112A0(l.ef);
    s6 = func_00311310();
    func_0030F270(&l.e0);
    func_0030F290(&l.e4);
    l.e0 = func_0030EBB0(l.ef, 1, l.e0);
    f20 = (l.e0 < 0.0f ? -l.e0 : l.e0);
    func_0030FE30(&l.p, 0);
    s3 = func_003410E0(l.p);
    s5 = func_00311250() & 0xFF;
    func_00313A80(b, 0x12, l.e8);
    func_003139F0(b, s0 & 0xFF);
    func_00313B30(b, 0, func_00333030(0x5DC0));
    a2 = l.arr[s0] == 1;
    if (a2) {
        a2 = (func_0030E780() != 0) ^ 1;
    }
    func_00313B30(b, 1, a2);
    s0 = (s3 != 0) ^ 1;
    func_00313B30(b, 3, s0);
    a2 = 0;
    if (s5 < 0x40) {
        s32 v = !(f21 <= 0.0f);
        if (v) v = s1 != 0;
        if (v) v = s6 == 0;
        if (!v) {
            v = !(f21 <= 0.0f);
            if (v) v = s1 == 0;
            if (v) v = s6 != 0;
        }
        if (v) a2 = 1;
    }
    func_00313B30(b, 4, a2);
    func_00313B30(b, 5, (s5 < 0x40) ^ 1);
    a2 = s2 == 5;
    if (a2) {
        a2 = D_003E7574 ? ((f32 *)D_003E7574)[12] < -8000.0f : 0;
    }
    func_00313B30(b, 6, a2);
    a2 = (s0 & (l.p[6] & 1)) != 0;
    if (!a2) a2 = s2 == 7;
    func_00313B30(b, 7, a2);
    func_00313B30(b, 9, s3);
    x = l.e0 * l.dc;
    {
        s32 n = ((((l.p[6] & 1) | s3) != 0) ^ 1);
        s32 a0 = n & (x < 0.0f);
        func_00313B30(b, 0xA, !(f20 <= 2344.0f) & a0);
    }
    {
        s32 n = ((((l.p[6] & 1) | s3) != 0) ^ 1);
        func_00313B30(b, 0xB, n & (f20 < 2344.0f));
    }
    x = l.e0 * l.dc;
    {
        s32 n = ((((l.p[6] & 1) | s3) != 0) ^ 1);
        s32 a0 = n & !(x <= 0.0f);
        func_00313B30(b, 0xC, !(f20 <= 2344.0f) & a0);
    }
    if (func_00333440(0x2D, b, 1)) {
        func_00338940(0x80000011);
    }
    func_00338930(arg0);
    return 1;
}
