/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern s32 D_003E74CC;
s32 func_00288670(s32, s32);
s32 func_00BBB7F0(s32);
s32 func_009B30B0(s32, s32);
void func_00209A00(s32, s32, s32);
void func_00207390(s32, s32);
s32 func_009B3480(s32, f32, f32);
s32 func_002AE670(s32);
s32 func_009F4DC0(s32, f32);
s32 func_009B3070(s32, s32);
void func_00AADED0(s32, s32, s32, s32);

void func_009ECBE0(s32 a0) {
    s32 s0, s2, v, a, sign;
    u8 *o = (u8 *)a0;
    s32 sub;

    if (o[0x24] == 0) {
        s0 = *(u16 *)(o + 0xA0);
    } else {
        s0 = *(u16 *)(o + 0x2E);
    }
    v = func_00288670(D_00592980[o[0x12] * 26880 + o[0x11] * 840 + 0x7B] & 0x7F, 0x32);
    v = func_00BBB7F0((99 - v) * 18 + 0x100);
    v = s0 + (u16)v;
    *(u16 *)(o + 0x2C) = v;
    *(s32 *)(o + 0xA0) = (u16)v;
    v = (u16)func_009B30B0(*(u16 *)(o + 0x26), (u16)v);
    if (v < 0x30) {
        a = 0x246;
    } else if (o[0x4D] < 0x40) {
        a = 0x106;
    } else {
        a = 0x247;
    }
    func_00209A00(*(s32 *)(o + 4), (u16)a, 0);
    func_00207390(*(s32 *)(o + 4), 6);
    sub = (u16)func_009B3480(a0, 13465.0f * (f32) * (s16 *)(o + 0x14), 0.0f);
    {
        s32 d = (u16)(*(u16 *)(o + 0x26) - sub + 0x10000);
        *(u8 *)(*(s32 *)(o + 4) + 0x2D) = d < 0x8001;
    }
    s0 = func_002AE670(*(u16 *)(*(s32 *)(*(s32 *)(o + 4) + 4) + 8) << 1);
    {
        u8 *p = *(u8 **)(o + 4);
        s2 = func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(p + 0x30) * 4 + 0x2FD8) - 2, *(f32 *)(p + 0x28));
    }
    v = (u16)func_009B3070(*(u16 *)(o + 0x26), *(u16 *)(o + 0x2C));
    *(u16 *)(o + 0x38) = v / s2;
    sign = *(u8 *)(*(s32 *)(o + 4) + 0x2D) ? -1 : 1;
    v = sign * (*(u16 *)(o + 0x38) * s0);
    func_00AADED0(a0, (u16)(*(u16 *)(o + 0x26) + v), 0, s0);
}
