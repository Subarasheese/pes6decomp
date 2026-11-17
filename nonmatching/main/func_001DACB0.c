/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u64 __udivdi3(u64 a, u64 b);
extern u64 __umoddi3(u64 a, u64 b);
extern f32 func_00100230(u64 a);

void func_001DACB0(void *arg0, void *arg1) {
    u8 *d = (u8 *)arg0;
    u8 *s = (u8 *)arg1;
    u32 base = (u32)arg1;
    u32 v;
    u8 *e;
    u8 *q;
    s32 i, j, k;
    f32 v0[3];
    f32 v1[3];
    u64 mul, num, quo;
    u8 b4, b5, b6, b7;

    *(void **)d = arg1;
    v = *(u32 *)(s + 8);
    *(s32 *)(s + 8) = v ? (s32)(v + base) : 0;
    e = (u8 *)*(s32 *)(s + 8);
    for (i = 0; i < 3; i++) {
        v = *(u32 *)(e + 4);
        *(s32 *)(e + 4) = v ? (s32)(v + base) : 0;
        v = *(u32 *)(e + 8);
        *(s32 *)(e + 8) = v ? (s32)(v + base) : 0;
        q = (u8 *)*(s32 *)(e + 8);
        for (j = 0; j < *(u16 *)e; j++) {
            v = *(u32 *)(q + 4);
            *(s32 *)(q + 4) = v ? (s32)(v + base) : 0;
            q += 8;
        }
        e += 12;
    }

    v0[0] = 0.0f;
    v0[1] = 0.0f;
    v0[2] = 1.0f;
    d[0x48] = s[4];
    d[0x49] = s[5];
    d[0x4A] = s[6];
    d[0x4B] = s[7];
    b4 = s[4];
    b5 = s[5];
    b6 = s[6];
    b7 = s[7];

    mul = 10;
    for (k = 0; k < 4; k++) mul *= 10;
    num = (u64)(b6 >> 1) + (u64)b4 * mul;
    quo = __udivdi3(num, b6);
    v1[0] = func_00100230(__umoddi3(quo, mul)) / func_00100230(mul) + func_00100230(__udivdi3(quo, mul));

    mul = 10;
    for (k = 0; k < 4; k++) mul *= 10;
    num = (u64)(b7 >> 1) + (u64)b5 * mul;
    quo = __udivdi3(num, b7);
    v1[1] = func_00100230(__umoddi3(quo, mul)) / func_00100230(mul) + func_00100230(__udivdi3(quo, mul));
    v1[2] = 1.0f;

    *(f32 *)(d + 0x4) = v0[0];
    *(f32 *)(d + 0x8) = v0[1];
    *(f32 *)(d + 0xC) = v0[2];
    *(f32 *)(d + 0x10) = v0[0];
    *(f32 *)(d + 0x14) = v0[1];
    *(f32 *)(d + 0x18) = v0[2];
    *(f32 *)(d + 0x10) = v1[0];
    *(f32 *)(d + 0x1C) = v0[0];
    *(f32 *)(d + 0x20) = v0[1];
    *(f32 *)(d + 0x24) = v0[2];
    *(f32 *)(d + 0x20) = v1[1];
    *(f32 *)(d + 0x28) = v1[0];
    *(f32 *)(d + 0x2C) = v1[1];
    *(f32 *)(d + 0x30) = v1[2];
    *(s16 *)(d + 0x34) = 0;
    *(s16 *)(d + 0x36) = 0;
    *(s16 *)(d + 0x38) = s[4];
    *(s16 *)(d + 0x3A) = 0;
    *(s16 *)(d + 0x3C) = 0;
    *(s16 *)(d + 0x3E) = s[5];
    *(s16 *)(d + 0x40) = s[4];
    *(s16 *)(d + 0x42) = s[5];
}
