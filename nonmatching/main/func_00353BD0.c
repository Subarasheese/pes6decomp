/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9FA8;
extern u8 D_003E9FAC;
extern u8 D_003E9FB0;
extern u8 D_003E9FB1;
extern char D_00591BC3[];
extern char D_00591BC4[];
extern char D_00591BC5[];
extern char D_003E6448[];

void func_00313A80(void *set, s32 n, void *buf);
s32 func_00313B30(void *set, s32 idx, s32 val);
s32 func_00C228F0(s32 a);
s32 func_00C228C0(s32 a);
s32 func_0030EA70(void);
void func_00311EF0(u8 *p);
char *func_00335370(void);
void func_00311D90(u8 *p);
void func_00311E40(u8 *p);
void func_00311F80(u8 *p);
void func_00311F50(u8 *p);
s32 func_00333710(void *p, s32 a);
s32 func_003336F0(void *p);
s32 func_00C225F0(void);
s32 func_00C226F0(void);
s32 func_00C226C0(void);
s32 func_00311C50(s32 a, s32 b);
void func_003534A0(u8 *p);
void func_003107E0(s32 *p, s32 a);
void func_00353090(void *set, u8 *p);
s32 func_00333600(s32 a);
void func_003332D0(s32 a);
void func_00333440(s32 a, void *p, s32 c);
void func_00352430(void);
void func_003387D0(void *job, void *fn, void *tbl);

s32 func_00353BD0(char *job) {
    s32 x;
    char set[28];
    char buf[32];
    struct { u8 b[16]; s32 flags; u8 rest[12]; } st;
    char *s0;
    s32 v;

    func_00313A80(set, 0x9F, buf);
    s0 = *(char **)(job + 0x44);
    st.b[1] = func_00C228F0(0);
    st.b[2] = func_00C228F0(1);
    st.b[3] = func_00C228C0(0);
    st.b[4] = func_00C228C0(1);
    st.b[0] = func_0030EA70();
    func_00311EF0(&st.b[5]);
    *(s32 *)(func_00335370() + 0x1008) = st.b[5];
    *(s32 *)(func_00335370() + 0x1020) = st.b[5];
    func_00311D90(&st.b[7]);
    func_00311E40(&st.b[6]);
    func_00311F80(&st.b[8]);
    func_00311F50(&st.b[9]);
    v = func_00333710(s0, st.b[5]);
    st.flags = 0;
    if (v >= 14) st.flags = 0x20;
    if (v == 13) st.flags |= 1;
    if (v < 13) st.flags |= 2;
    if (func_003336F0(s0)) st.flags |= 8;
    if ((s8)func_00C225F0() == 1) st.flags |= 0x10;
    if (((s8)func_00C226F0()) | ((s8)func_00C226C0())) st.flags |= 4;
    if (func_00311C50(st.b[5], st.b[6])) st.flags |= 0x40;
    func_003534A0(st.b);
    func_003107E0(&x, st.b[5]);
    if (!func_00313B30(set, 0, D_003E9FA8 == 1)) {
        func_00313B30(set, 1, D_003E9FA8 == 2);
        func_00313B30(set, 2, st.b[1] & st.b[2]);
        func_00313B30(set, 0x97, st.b[1] >= 2 && st.b[2] >= 2);
        func_00313B30(set, 0x98, st.b[1] == 1 && st.b[2] == 1);
        func_00313B30(set, 0x99, x == *(u8 *)D_00591BC3);
        func_00313B30(set, 0x9A, (s8)st.b[3 + st.b[5]] >= 3);
        func_00313B30(set, 0x9B, (s8)st.b[3 + st.b[5]] == 2);
        func_00313B30(set, 0x9C, (s8)st.b[3 + st.b[5]] == 1 && x == 2);
        func_00313B30(set, 0x9D, (s8)st.b[3 + st.b[5]] == 1 && x == 1);
        func_00313B30(set, 3, D_003E9FAC == 1 && st.b[0] < 26);
        func_00313B30(set, 4, st.flags & 0x10);
        func_00313B30(set, 5, st.flags & 0x10);
        func_00313B30(set, 6, (*(u8 *)D_00591BC4 + *(u8 *)D_00591BC5 >= 5) && st.b[1] != 0);
        func_00313B30(set, 7, (st.flags & 0x10) == 0);
        func_00313B30(set, 8, D_003E9FB0 == D_003E9FB1);
        func_00353090(set, st.b);
    }
    if (!func_00333600(2)) {
        func_003332D0(D_003E9FA8 == 2);
        func_00333440(0x38, set, 1);
    }
    func_003387D0(job, func_00352430, D_003E6448);
    return 1;
}
