/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E7574;
extern u8 D_003E9F14;
extern u8 D_003E9F15;
extern char D_00591BC4[];

s32 func_00310A50(u8 *, s32);
s32 func_0030E6C0(s32);
s32 func_00311180(s32);
s32 func_003414D0(u8 *, s32, s32);
s32 func_00333710(s32, s32);
s32 func_0030EA70(void);
s32 func_00339440(s32, s32, s32);
s32 func_00333700(s32, s32);
s32 func_00313A80(char *, s32, char *);
s32 func_003139F0(char *, s32);
s32 func_00333600(s32);
s32 func_00313B30(char *, s32, s32);
s32 func_0030E830(void);
s32 func_0030E780(void);
s32 func_003336F0(s32);
s32 func_00340C80(f32);
s32 func_00333440(s32, char *, s32);
s32 func_003333F0(s32);
s32 func_00338930(s32);

s32 func_0031F8B0(s32 a0) {
    struct { char buf[24]; s32 arr[2]; char b2[14]; u8 c2; u8 c1; } L;
    s32 s3 = *(s32 *)(a0 + 0x44);
    s32 x = *(s32 *)(a0 + 0x40);
    char *bp;
    u8 p, q;
    s32 s0, s5, s2, s1, fp, s6, s7, t, a2, v;

    bp = L.buf;
    func_00310A50(&L.c1, 5);
    p = func_0030E6C0(L.c1);
    L.arr[0] = func_00311180(0);
    L.arr[1] = func_00311180(1);
    func_003414D0(&L.c2, 2, 0xff);
    q = p;
    s2 = q;
    s1 = func_00333710(s3, s2);
    s0 = func_0030EA70();
    fp = func_00339440(x, 6, s2);
    s6 = func_00333700(s3, s2);
    s7 = (s2 == 0);
    func_00313A80(bp, 0x24, L.b2);
    func_003139F0(bp, p);
    func_00313B30(bp, 0, func_00333600(5));
    s5 = L.arr[s2];
    func_00313B30(bp, 1, s5 == 0);
    v = func_0030E830() ^ 1;
    a2 = (v == 0);
    if (a2 != 0) {
        a2 = (func_0030E780() == 0);
    }
    func_00313B30(bp, 2, a2);
    a2 = (L.c2 == (s2 ^ 1));
    if (a2 != 0) {
        a2 = (s1 == 16);
        if (a2 == 0) a2 = (s1 == 15);
    }
    if (a2 != 0) a2 = (D_003E9F14 == 0);
    func_00313B30(bp, 3, a2);
    a2 = (L.c2 == s2);
    if (a2 != 0) {
        a2 = (s1 == 10);
        if (a2 == 0) a2 = (s1 == 11);
    }
    if (a2 != 0) a2 = (D_003E9F15 == 0);
    func_00313B30(bp, 6, a2);
    func_00313B30(bp, 9, !((s0 % 45) < 26));
    t = s7 & s6;
    func_00313B30(bp, 10, t & ((s0 / 5) < s5));
    v = (*(f32 *)(D_003E7574 + 0x10) < 0.0f);
    v = v & t;
    func_00313B30(bp, 13, (*(u8 *)D_00591BC4 != 0) & v);
    func_00313B30(bp, 16, func_003336F0(s3));
    func_00313B30(bp, 18, fp < func_00340C80(30.0f));
    a2 = !(s0 < 89);
    if (a2 != 0) a2 = !(s1 < 10);
    if (a2 != 0) a2 = (s1 < 14);
    func_00313B30(bp, 19, a2);
    if (func_00333440(44, bp, 1) != 0) {
        if (func_003333F0(3) != 0) D_003E9F14 = 1;
        if (func_003333F0(6) != 0) D_003E9F15 = 1;
    }
    func_00338930(a0);
    return 1;
}
