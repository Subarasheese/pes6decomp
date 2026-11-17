/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0030DCC0(f32 *out, f32 *out2, u8 a);
extern void func_0030ED20(s32 *out, u8 a);
extern void func_0030EC10(s32 *out, u8 a);
extern void func_003111D0(s32 *out, s32 a);
extern void func_00311210(s32 *out, s32 a);
extern void func_0030D880(s32 *out, u8 a);
extern char D_00CBCDE1[];
extern s32 func_0030FAB0(u8 a);
extern s32 func_00311BA0(s32 a);
extern u8 func_0022F210(u8 a);
extern void func_003257E0(s32 *out, void *a, u8 b);
extern void func_00313A80(void *buf, s32 n, void *p);
extern void func_003139F0(void *buf, s32 a);
extern void func_00313B30(void *buf, s32 id, s32 v);
extern s32 func_0030E690(u8 a);
extern s32 func_00340590(f32 a, f32 b);
extern s32 func_0030EA70(void);
extern s32 func_003260A0(void *a, u8 b);
extern s32 func_00326070(void *a);
extern void func_00333440(s32 a, void *b, s32 c);
extern void func_00338930(void *a);

s32 func_003474A0(void *arg)
{
    u8 *s0 = *(u8 **)((u8 *)arg + 0x4C);
    s32 *s4 = *(s32 **)((u8 *)arg + 0x40);
    s32 buf[15];
    s32 arr[4];
    s32 v104, v108, v10C;
    f32 f100, ffc;
    s32 s5, s1, s2, s3, s6, s7, fp, i, a, c;
    u8 k;
    s32 f8;

    func_0030DCC0(&f100, &ffc, s0[0x16]);
    func_0030ED20(&v10C, s0[0x15]);
    func_0030EC10(&v108, s0[0x15]);
    func_003111D0(&arr[2], 0);
    func_003111D0(&arr[3], 1);
    func_00311210(&arr[0], 0);
    func_00311210(&arr[1], 1);
    func_0030D880(&v104, s0[0x15]);
    k = *(u8 *)D_00CBCDE1;
    if (k == 4) s5 = 4;
    else if (k == 3) s5 = 3;
    else if (k == 2) s5 = 2;
    else if (k == 1) s5 = 1;
    else if (k == 0) s5 = 1;
    s1 = func_0030FAB0(s0[0x15]) & 0xFF;
    s2 = 0;
    for (i = 0; i < 11; i++) {
        if (func_00311BA0(s1)) s2++;
        s1++;
    }
    a = (s5 == 3);
    s1 = arr[2 + s0[0x13]];
    s3 = v104;
    if (s4[0x30 / 4] == 6) {
        s6 = 0;
    } else {
        u32 x = s4[0];
        if (x >= 15) {
            s6 = 0;
        } else if (x == 6 || x == 7 || x == 10 || x == 11 || x == 12) {
            s6 = (s3 == func_0022F210(((u8 *)s4)[0x2C]));
        } else {
            s6 = 0;
        }
    }
    func_003257E0(&f8, s4, s0[0x15]);
    s7 = !(f8 < 1);
    fp = (*(s32 *)(s0 + 0x28) != 5);
    func_00313A80(buf, 0x3C, &buf[0]);
    func_003139F0(buf, s0[0x13]);
    func_00313B30(buf, 0, s5 >= 2);
    func_00313B30(buf, 1, v10C | v108);
    c = (v10C == 1);
    if (c) c = (a != 0);
    func_00313B30(buf, 2, c);
    func_00313B30(buf, 3, *(s32 *)(s0 + 0x28) == 4);
    func_00313B30(buf, 4, v10C == 2);
    c = (s0[0x12] == s0[0x11]);
    if (c) c = (a != 0);
    func_00313B30(buf, 5, c);
    func_00313B30(buf, 9, v108);
    c = ((arr[2] + arr[3] + arr[0] + arr[1]) == 1);
    if (c) c = (a != 0);
    if (c) c = !(fp != 0);
    func_00313B30(buf, 10, c);
    c = (func_0030E690(s0[0x16]) != 0);
    if (c) c = !(s5 < 3);
    if (c) c = (func_00340590(f100, ffc) != 0);
    func_00313B30(buf, 11, c);
    c = (func_0030E690(s0[0x15]) != 0);
    if (c) c = (s5 == 4);
    func_00313B30(buf, 12, c);
    c = (v10C == 2);
    if (!c) c = (v108 != 0);
    func_00313B30(buf, 16, c);
    func_00313B30(buf, 17, s2 != 11);
    func_00313B30(buf, 18, s2 == 10);
    func_00313B30(buf, 19, func_0030EA70() < 16);
    func_00313B30(buf, 21, s2 == 9);
    func_00313B30(buf, 22, s2 == 8);
    func_00313B30(buf, 23, s2 == 7);
    func_00313B30(buf, 24, !(func_003260A0(s4, s0[0x16]) != 0));
    c = (s1 < 7);
    if (c) c = !(s1 < 2);
    if (c) c = (s5 == 3);
    if (c) c = !(fp != 0);
    func_00313B30(buf, 33, c);
    func_00313B30(buf, 35, s1 == 2);
    func_00313B30(buf, 36, s1 == 3);
    func_00313B30(buf, 37, s1 == 4);
    func_00313B30(buf, 38, s1 == 5);
    func_00313B30(buf, 39, s1 == 6);
    c = (s6 != 0);
    if (c) c = (s5 == 3);
    if (c) c = !(fp != 0);
    func_00313B30(buf, 41, c);
    func_00313B30(buf, 44, v104 == 2);
    func_00313B30(buf, 45, v104 == 3);
    func_00313B30(buf, 46, v104 == 4);
    func_00313B30(buf, 47, v104 == 5);
    func_00313B30(buf, 48, v104 == 8);
    func_00313B30(buf, 49, v104 == 12);
    c = (v104 == 1);
    if (c) c = (s7 != 0);
    func_00313B30(buf, 50, c);
    c = (v104 == 2);
    if (c) c = (s7 != 0);
    func_00313B30(buf, 51, c);
    c = (v104 == 3);
    if (c) c = (s7 != 0);
    func_00313B30(buf, 52, c);
    func_00313B30(buf, 53, s6);
    func_00313B30(buf, 54, s6);
    func_00313B30(buf, 55, v104 == 11);
    func_00313B30(buf, 57, func_00326070(s4));
    func_00333440(0x48, buf, 1);
    func_00338930(arg);
    return 1;
}
