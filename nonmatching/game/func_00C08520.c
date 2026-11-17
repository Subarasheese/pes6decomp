/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E7574;
extern s32 D_003E7A08;
extern char D_005926EC[];
extern char D_00591E4C[];
extern char D_00592980[];
extern char D_00CB5382[];

s32 func_00961D40(u8 *p, u8 *a, u8 *b);
void func_0096D0A0(u8 *p, s32 a, s32 b);
s32 func_00AFBA70(s32 a);
s32 func_009B33A0(u8 *p, s32 a, s32 b);
s32 func_00952420(u8 *p, s32 a, s32 b, s32 c);
s32 func_009909D0(u8 *p, s32 a);
s32 func_009B3070(s32 a, s32 b);
s32 func_00C04AD0(u8 *p, s32 a);
s32 func_009B3480(u8 *p, f32 a, f32 b);
void func_00C04F80(u8 *p, s32 a, s32 b);
void func_00C04E00(u8 *p, s32 a);
s32 func_00BBB8C0(s32 a);
s32 func_00962900(u8 *p, s32 a);
s32 func_00962BC0(u8 *p);
s32 func_00905270(u8 *p);
s32 func_0095D320(u8 *p, s32 a);
s32 func_00952A50(s32 a);
s32 func_009B32D0(s32 a, s32 b, s32 c);
void func_00961940(u8 *p, s32 a);

s32 func_00C08520(u8 *p, u8 *out) {
    u8 b1, b0;
    s32 s0, s1, s2, flag, v;
    u8 *t;

    b0 = 0;
    s2 = func_00961D40(p, &b1, &b0) & 0xffff;
    func_0096D0A0(p, s2, b1);
    s1 = *(s32 *)(p + 0x158 + (func_00AFBA70(p[0]) & 0xff) * 4);
    t = (u8 *)D_003E7574 + (u8)D_005926EC[0] * 4;
    flag = 0;
    if (func_009B33A0(p, (s32)*(f32 *)(t + 0x47c), (s32)*(f32 *)(t + 0xb7c)) < 0x100000) {
        if (*(u32 *)(p + 0x110) >= 0x100001) flag = 1;
    }
    if (p[0x16] == 11) {
        if (!(*(u16 *)((u8 *)D_003E7574 + 0x6e) < (u8)D_005926EC[0])) flag = 1;
    }
    if (D_00591E4C[0]) flag = 1;

    if (flag) {
        s0 = func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x120)) & 0xffff;
        if (s0 < 0x3000) {
            s32 s5 = func_00BBB8C0(100);
            s32 s6 = ((u8)D_00592980[p[0x12] * 26880 + p[0x11] * 840 + 0x86] & 1) * 5;
            if (s5 < (func_00962900(p, 14) & 0xff) + s6) b0 = 1;
            if (func_00962BC0(p) >= 4) b0 = 1;
        }
        if (s0 < 0x5000) {
            if (func_009909D0(p, 0x100000) != 0 || func_00952420(p, s2, 0x2000, 0x310000) == 0) {
                if (func_00962BC0(p) >= 4) b0 = 1;
            }
        }
    }

    if (*(u8 *)((u8 *)D_003E7A08 + p[0x13])) {
        if (func_00952420(p, *(u16 *)(p + 0x120), 0x2000, 0x240000)) {
            s0 = D_00591E4C[0] ? 0x800 : 0x500;
            v = s0 / 2;
            if (!(func_009909D0(p, v * v) & 0xff)) {
                if ((func_009B3070(*(u16 *)(p + 0x26), s2) & 0xffff) >= 0x2801) b0 = 0;
                if (func_00952420(p, *(u16 *)(p + 0x120), 0x3000, s0 * s0) != 0) b0 = 0;
                if (!(s1 < 0x640001)) b0 = 0;
            }
        }
    }

    if (!D_00591E4C[0]) {
        if ((func_009B3070(*(u16 *)(p + 0x10c), *(u16 *)(p + 0x120)) & 0xffff) >= 0x5001) b0 = 0;
        if ((func_009B3070(*(u16 *)(p + 0x10c), *(u16 *)(p + 0x26)) & 0xffff) >= 0x5001) b0 = 0;
        if (p[0x16] == 11) {
            if (*(u16 *)((u8 *)D_003E7574 + 0x6e) < 9) b0 = 0;
        }
    }

    if ((func_009B3070(*(u16 *)(p + 0x120), *(u16 *)(p + 0x2a)) & 0xffff) >= 0x3001
        && *(u32 *)(p + 0x124) >= 0x1000001) {
        func_00C04AD0(p, 3);
        func_00C04F80(p, 1, func_009B3480(p, *(f32 *)(p + 0xe0), 0.0f));
        out[9] = 0;
        return 3;
    }

    if (b0 == 0) return 3;
    if ((u8)D_00CB5382[0] >= 4) {
        if (!(func_00905270(p) & 0xff)
            || (func_009B3070(*(u16 *)(p + 0x2a), *(u16 *)(p + 0x120)) & 0xffff) >= 0x1801) {
            if (func_0095D320(p, 1)) return 1;
        }
        {
            s32 a = func_009B3480(p, *(f32 *)(p + 0xe0), 0.0f) & 0xffff;
            s32 b = func_009B32D0(*(u16 *)(p + 0x118), *(u16 *)(p + 0x120), 0x1000) & 0xffff;
            f32 x = *(f32 *)(p + 0xe8);
            u32 k = 0x45128000;
            if (x < 0) x = -x;
            if (!(x <= *(f32 *)&k)) {
                if ((func_00952A50(a) & 0xff) < 0x55) {
                    s2 = func_00952A50(a) & 0xff;
                    if (s2 < (func_00952A50(b) & 0xff)) {
                        if ((func_00952A50(*(u16 *)(p + 0x118)) & 0xff) < 0x32) {
                            if ((func_009B3070(*(u16 *)(p + 0x26), *(u16 *)(p + 0x120)) & 0xffff) >= 0x2801) {
                                func_00C04F80(p, 1, a);
                                func_00C04F80(p, 1, b);
                                func_00C04E00(p, 2);
                                return 4;
                            }
                        }
                    }
                }
            }
        }
    }
    func_00961940(p, 1);
    return 4;
}
