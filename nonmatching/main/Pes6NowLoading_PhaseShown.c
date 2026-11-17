/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9930;
void func_001D76B0(s32, s32);
s32 func_001520F0(void);
s32 func_001C0160(s32);
void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32);
void func_001DF420(s32, s32);
f32 func_0011D468(f32);

void Pes6NowLoading_PhaseShown(u8 *p) {
    s32 s0;
    s32 v;
    s32 q;
    s32 a;
    s0 = *(s32 *)(p + 0x28);
    v = *(s32 *)(p + 0x2C) + *(s32 *)(p + 0x78);
    if (v >= 0xFF) v = 0xFF;
    *(s32 *)(p + 0x2C) = v;
    func_001D76B0(*(s32 *)(p + 0x38), v & 0xFF);
    if (func_001520F0() == 0) {
        a = p[0x88];
        p[0x88] = (a & ~2) | 2;
    } else {
        a = 0;
    }
    if (func_001C0160(a) != 0) {
        *(s32 *)(p + 0x24) = 5;
    }
    if ((p[0x88] >> 1) & 1) {
        p[0x88] = p[0x88] & ~1;
        p[0x88] = p[0x88] & ~2;
        *(s32 *)(p + 0x7C) = 0;
        *(s32 *)(p + 0x24) = 6;
        func_001D7D60(*(s32 *)(p + 0x34), 0);
    }
    *(s32 *)(p + 0x28) = s0;
    q = *(s32 *)(p + 0x44);
    if (q != 0) {
        if ((f32)p[0x50] < 51.0f) {
            p[0x50] = p[0x50] + 1;
            func_001DF420(*(s32 *)(q + 0xC), p[0x50]);
        } else {
            f32 f = *(f32 *)(p + 0x4C) + 0.0997330993f;
            *(f32 *)(p + 0x4C) = f;
            f = func_0011D468(f);
            p[0x50] = (u8)(u32)(0.0f + 153.0f + 102.0f * f);
            func_001DF420(*(s32 *)(q + 0xC), p[0x50]);
        }
    }
    if (*(s32 *)(p + 0x40) != 0) {
        func_001D7D80(*(s32 *)(p + 0x40), (s16)(D_003E9930 / 4));
        D_003E9930 = D_003E9930 + 1;
        if (D_003E9930 >= 0x51) D_003E9930 = 0;
    }
}
