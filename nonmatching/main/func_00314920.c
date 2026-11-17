/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB5F20[];
s32 func_00311520(void);
s32 func_0030DB90(void);
s32 func_0030DA50(void);
void func_00310A50(u8 *, s32);
void func_0030E6C0(s32);
s32 func_0030DAF0(s32);
void func_003414D0(u8 *, s32, s32);
s32 func_00310400(s32);
s32 func_0030EA70(void);
s32 func_003395B0(s32);
s32 func_00340C80(f32);
void func_00334030(s32, s16 *, s32);
void func_00333FC0(s32, s16 *, s32, s32);
void func_00333E50(s32);
void func_00333770(s32, s32, s32);
void func_00333CE0(s32, s32, s32);
void func_00333870(s32, s32, s32, s32);
s32 func_0030E830(void);
s32 func_00333710(s32, s32);
void func_00313D80(s32, u8 *);
void func_00313F40(u8 *);

s32 func_00314920(u8 *a0, s32 a1) {
    u8 *s3 = *(u8 **)(a0 + 0x3C);
    u8 b;
    s16 h2[2];
    s16 h[2];
    s32 s0, s2, s5, s6, s1, i;
    u8 *p;
    u8 *q;

    s3[8] = func_00311520();
    s3[6] = func_0030DB90();
    s3[7] = func_0030DA50();
    func_00310A50(&b, s3[6] ? 4 : 3);
    func_0030E6C0(b);
    s0 = a1 & 0xFF;
    s2 = s0 << 1;
    h[s0] = func_0030DAF0(s0);
    s0 ^= 1;
    h[s0] = func_0030DAF0(s0);
    if (s3[8]) {
        *(s16 *)(s3 + s2) = h[a1 & 0xFF] + 1;
    } else {
        *(s16 *)(s3 + s2) = h[a1 & 0xFF];
    }
    *(s16 *)(s3 + (s0 << 1)) = h[s0];
    func_003414D0(s3 + 9, 3, a1);
    if (s3[8]) return 0;
    s3[4] = s3[5];
    s3[5] = a1;
    s1 = s3[5] ^ 1;
    if (s3[6]) {
        p = s3 + s1;
        p[0xC] = p[0xC] + 1;
        p[0xE] = 1;
    } else {
        s3[s1 + 0xC] = 0;
    }
    s0 = *(s32 *)(a0 + 0x40);
    s6 = *(s32 *)(a0 + 0x44);
    s5 = *(s32 *)(a0 + 0x4C);
    s3[0xA] = b;
    *(u16 *)(s3 + 0x40) = *(u16 *)(s3 + 0x3E);
    *(u16 *)(s3 + 0x3E) = *(u16 *)(s3 + 0x3C);
    *(u16 *)(s3 + 0x3C) = func_00310400(b);
    s2 = a1 & 0xFF;
    q = s3 + s2 * 2;
    q[0x39] = q[0x38];
    q[0x38] = func_0030EA70();
    s1 = func_003395B0(s5);
    if (s1 < func_00340C80(60.0f)) {
        if (!s3[6]) s3[s2 + 0x42] = 1;
    }
    h2[0] = func_0030DAF0(0);
    h2[1] = func_0030DAF0(1);
    func_00334030(s0, h2, 1);
    func_00333FC0(s0, h2, s3[5], *(u16 *)(s3 + 0x3C));
    func_00333E50(s0);
    func_00333770(s0, a1, *(u16 *)(s3 + 0x3C));
    func_00333CE0(s0, a1, *(s32 *)s6);
    func_00333870(s0, *(u16 *)(s3 + 0x3C), s3[6], s3[5]);
    if (func_0030E830() >= 2) {
        if (func_00333710(s0, s3[5]) == 0x10) s3[0x10] = s3[0x10] + 1;
    }
    func_00313D80(s3[0xA], s3 + 0x18);
    func_00313F40(s3);
    p = (u8 *)D_00CB5F20;
    for (i = 0; i < 10; i++) {
        if (p[8] != 0xFF) { s3[0x25] = p[8]; break; }
        p += 0x40;
    }
    return 1;
}
