/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003109B0(void);
void func_00340E00(void *out, s32 a1, s32 a2);
s32 func_0030E750(s32 a0);
s32 func_0030E6C0(s32 a0);
s32 func_00311180(s32 a0);
s32 func_0030D990(s32 a0);
void func_0030EE80(void *a0);
void func_0030FEB0(s32 a0, void *a1, s32 a2);
f32 func_0030EBB0(s32 a0, s32 a1, f32 f12);
s32 func_00339440(s32 a0, s32 a1, s32 a2);
void func_00339470(void *out, s32 a1, s32 a2, s32 a3);
void func_00313A80(void *a0, s32 a1, void *a2);
void func_003139F0(void *a0, s32 a1);
void func_00313B30(void *a0, s32 a1, s32 a2);
s32 func_0030E830(void);
s32 func_00340C80(f32 f12);
s32 func_00340F30(void *a0);
s32 func_00333710(s32 a0, s32 a1);
s32 func_00341260(void *a0);
s32 func_003412D0(void *a0);
s32 func_00341390(void *a0);
s32 func_003419E0(void *a0);
s32 func_003411D0(void *a0);
s32 func_003419C0(void *a0);
void func_00333440(s32 a0, void *a1, s32 a2);
void func_00338930(s32 a0);

s32 func_0031FC30(s32 a0) {
    s32 s4 = *(s32 *)(a0 + 0x40);
    s32 s3 = *(s32 *)(a0 + 0x44);
    s32 s6 = *(s32 *)(a0 + 0x3C);
    s32 s2, s1, s0, s5, i;
    f32 f20;
    struct { s32 bs[8]; s32 z[4]; s32 arr[2]; s32 buf[3]; void *d4, *d8, *dc; } L;
    s32 a2;

    s2 = func_003109B0() & 0xff;
    func_00340E00(&L.d8, s2, 0);
    s1 = func_0030E6C0(func_0030E750(s2));
    L.arr[0] = func_00311180(0);
    L.arr[1] = func_00311180(1);
    s0 = (func_0030D990(s2) ^ 1) == 0;
    func_0030EE80(L.z);
    func_0030FEB0(s6 + 0x74, &L.d4, 1);
    f20 = func_0030EBB0(s2, -1, ((f32 *)L.z)[2]);
    s2 = func_00339440(s4, 6, s1);
    func_00339470(&L.dc, s4, s1, 1);
    func_00313A80(L.bs, 0x21, L.buf);
    func_003139F0(L.bs, s1 & 0xff);
    func_00313B30(L.bs, 1, (L.arr[0] + L.arr[1]) == 0);
    func_00313B30(L.bs, 2, func_0030E830() == 0);
    if (L.d8 == 0) {
    } else {
        a2 = 0;
        if (s0 != 0)
            a2 = *(s32 *)L.d8 == 2;
        func_00313B30(L.bs, 3, a2);
    }
    a2 = func_00340C80(2.0f);
    func_00313B30(L.bs, 4, a2 < *(s32 *)((u8 *)L.dc + 4));
    a2 = func_00340C80(30.0f);
    a2 = (s2 < a2) && (s2 != 0);
    func_00313B30(L.bs, 5, a2);
    a2 = func_00340F30(L.d4) != 0;
    if (a2 != 0)
        a2 = s0 != 0;
    func_00313B30(L.bs, 6, a2);
    func_00313B30(L.bs, 8, !(func_00333710(s3, s1) < 14));
    s1 = L.arr[s1];
    for (i = 1; i <= 9; i++)
        func_00313B30(L.bs, 13 + i, s1 == i);
    func_00313B30(L.bs, 0x18, !(f20 <= 0.0f));
    func_00313B30(L.bs, 0x19, f20 < 0.0f);
    func_00313B30(L.bs, 0x1a, s0);
    func_00313B30(L.bs, 0x1b, func_00341260(L.d4));
    func_00313B30(L.bs, 0x1c, func_003412D0(L.d4));
    func_00313B30(L.bs, 0x1d, func_003412D0(L.d8));
    s0 = func_00341390(L.d4);
    func_00313B30(L.bs, 0x1e, s0 & func_003419E0(L.d4));
    func_00313B30(L.bs, 0x1f, func_003411D0(L.d4));
    func_00313B30(L.bs, 0x20, func_003419C0(L.d8));
    func_00333440(0x2b, L.bs, 1);
    func_00338930(a0);
    return 1;
}
