/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCDE0[];
extern char D_0058E5C6[];
extern char D_0058E5D6[];
extern char D_0058E5D8[];
extern char D_0058E5B0[];
extern char D_0058E6D8[];

void func_0030EE80(void *out);
f32 func_0030EBB0(s32 a, s32 b, f32 f);
s32 func_003405E0(f32 a, f32 b);
void func_0030DCC0(f32 *a, f32 *b, s32 c);
s32 func_00333710(void *a, s32 b);
s32 func_00340880(f32 a, f32 b);
s32 func_00340980(f32 a, f32 b);
void func_00325CE0(s32 *out, void *a, s32 c);
void func_0030ED20(s32 *out, s32 a);
void func_00313A80(void *bs, s32 n, void *buf);
void func_003139F0(void *bs, s32 a);
s32 func_00333190(s32 a);
void func_003332D0(s32 a);
s32 func_00333030(s32 a);
void func_00313B30(void *bs, s32 idx, s32 val);
s32 func_0030E830(void);
s32 func_0030E780(void);
s32 func_00311570(s32 a);
s32 func_003260E0(void *a, s32 b);
s32 func_002AE670(s32 a);
s32 func_00341880(s32 a, s32 b);
s32 func_00310CF0(s32 a);
s32 func_003407B0(s32 a, f32 b, f32 c);
s32 func_009B3070(s32 a, s32 b);
s32 func_00311730(s32 a, s32 b);
s32 func_0030D990(s32 a);
s32 func_003336E0(void *a, s32 b);
void func_00333440(s32 a, void *b, s32 c);
void func_00338930(void *a);

s32 func_00348010(char *a0)
{
    u8 *s3 = *(u8 **)(a0 + 0x4c);
    void *s1 = *(void **)(a0 + 0x40);
    void *fp = *(void **)(a0 + 0x44);
    f32 fz, fx;
    s32 n114, n110;
    u32 buf[4];
    f32 pos[4];
    u32 bsa[8];
    u32 *bs = bsa;
    f32 f20, f21;
    s32 s0, s2, s4, s6, s7, v, t, i, j, a, b;
    s32 vtab;

    func_0030EE80(pos);
    f20 = func_0030EBB0(s3[22], 1, pos[0]);
    f21 = func_0030EBB0(s3[22], 1, pos[2]);
    s0 = func_003405E0(f20, f21);
    func_0030DCC0(&fz, &fx, s3[22]);
    s2 = func_00333710(fp, s3[19]);
    s6 = func_00340880(f20, f21);
    s7 = func_00340980(f20, f21);
    func_00325CE0(&n114, s1, s3[20]);
    s4 = (s3[19] ^ s3[20]) == 0;
    vtab = *(s32 *)(s3 + s3[19] * 8 + 0x18);
    func_0030ED20(&n110, s3[21]);
    func_00313A80(bs, 75, buf);
    func_003139F0(bs, s3[19]);
    t = s0 != 0;
    if (t) {
        t = func_00333190(24000) != 0;
    }
    func_003332D0(t);
    v = func_00333030(24000);
    func_00313B30(bs, 0, s0 | v);
    func_00313B30(bs, 1, s0);

    t = (func_0030E830() ^ 1) == 0;
    if (t) {
        t = !(func_0030E780() != 0);
    }
    if (t) {
        t = (s2 ^ 13) == 0;
    }
    func_00313B30(bs, 2, t);

    t = f20 < 9497.0f;
    if (!t) {
        f32 ab = f21 < 0 ? -f21 : f21;
        t = !(ab <= 4904.0f);
    }
    func_00313B30(bs, 3, t);
    func_00313B30(bs, 4, func_00311570(s3[22]));
    func_00313B30(bs, 5, !(s0 != 0));
    func_00313B30(bs, 6, func_003260E0(s1, s3[22]));

    t = (*(u8 *)D_00CBCDE0 ^ 1) == 0;
    if (t) {
        t = func_00341880(func_002AE670(224), 6) != 0;
    }
    func_00313B30(bs, 7, t);

    t = !(f20 <= 8985.0f);
    if (t) {
        f32 ab = f21 < 0 ? -f21 : f21;
        t = ab < 5416.0f;
    }
    func_00313B30(bs, 8, t);

    s0 = s6 | s7;
    func_00313B30(bs, 9, s0);

    a = func_00310CF0(0);
    b = func_00310CF0(1);
    v = (a + b) != 0;
    if (v) {
        t = v ^ 1;
    } else {
        v = func_003407B0(s3[21], f20, f21) != 0;
        t = v ^ 1;
    }
    if (t) {
        t = vtab < 2;
    }
    func_00313B30(bs, 10, t);

    t = (s0 != 0) ^ 1;
    if (t) {
        if (s3[21] == 255) i = 1; else i = s3[21] % 23;
        if (s3[22] == 255) j = 1; else j = s3[22] % 23;
        if (*(u8 *)(D_0058E5C6 + i * 576) != 13) {
            v = 0;
        } else {
            if ((func_009B3070(*(u16 *)(D_0058E5D6 + j * 576), *(u16 *)(D_0058E5D8 + i * 576)) & 0xffff) < 0x3000
                && (func_009B3070(*(u16 *)(D_0058E5D8 + j * 576), *(u16 *)(D_0058E5D8 + i * 576)) & 0xffff) < 0x3000
                && (func_009B3070(*(u16 *)(D_0058E5D6 + j * 576),
                                  *(u16 *)(D_0058E6D8 + i * 576 + *(u8 *)(D_0058E5B0 + j * 576) * 2)) & 0xffff) < 0x3000) {
                v = 1;
            } else {
                v = 0;
            }
        }
        t = v != 0;
    }
    func_00313B30(bs, 12, t);

    func_00313B30(bs, 13, func_00311730(s3[21], s3[22]));

    t = func_0030D990(s3[22]) == 0;
    if (t) {
        v = fz < -9241.0f;
        if (v) {
            f32 ab = fx < 0 ? -fx : fx;
            v = ab < 5160.0f;
        }
        t = v != 0;
    }
    func_00313B30(bs, 14, t);

    func_00313B30(bs, 15, (*(s32 *)(s3 + 0x28) ^ 5) == 0);

    t = !(n114 < 5);
    if (t) {
        t = !(s2 < 10);
        if (t) {
            t = s2 < 17;
        }
    }
    func_00313B30(bs, 16, t);

    func_00313B30(bs, 17, s4 == 0);
    func_00313B30(bs, 19, s4);
    func_00313B30(bs, 22, (func_003336E0(fp, s3[19] ^ 1) ^ 13) == 0);
    func_00313B30(bs, 23, s4 == 0);
    func_00313B30(bs, 24, s4);
    func_00313B30(bs, 28, s4);
    func_00313B30(bs, 29, s4 == 0);
    func_00313B30(bs, 38, vtab < 3);
    func_00313B30(bs, 39, 4488.33349609375f < f20);
    func_00313B30(bs, 40, !(vtab < 3));
    func_00333440(57, bs, 1);
    func_00338930(a0);
    return 1;
}
