/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];
extern char D_00CBCC70[];
extern char D_00CBCC90[];
extern char D_00CBCCB0[];
void func_009B37F0(s32);
void func_00B2A5F0(s32, s32, s32, s32, s32, f32, f32);
void func_00B84790(s32, s32, s32, s32, s32, f32);

void func_00B8DE20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    u8 *o = *(u8 **)a0;
    f32 f22 = *(f32 *)(o + 0xE0);
    u16 s0 = *(u16 *)(o + 0x26);
    f32 f21 = *(f32 *)(o + 0xE8);
    f32 f20;
    u8 buf[16];

    if (a4 == 0) {
        u8 *q = *(u8 **)(o + 4);
        f20 = *(f32 *)(q + 0x38);
        *(f32 *)(q + 0x38) = (f32)(u32)a3;
    } else {
        func_00B2A5F0(a0, (s32)buf, (s32)(buf + 14), a2, a3, fa12, fa13);
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE0) = *(f32 *)buf;
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE8) = *(f32 *)(buf + 4);
        o = *(u8 **)a0;
        *(f32 *)(o + 0x88) = *(f32 *)(o + 0xE0);
        o = *(u8 **)a0;
        *(f32 *)(o + 0x8C) = *(f32 *)(o + 0xE8);
        o = *(u8 **)a0;
        *(u16 *)(o + 0x26) = *(u16 *)(buf + 14);
        func_009B37F0(*(s32 *)a0);
    }
    o = *(u8 **)a0;
    {
        u8 *q = *(u8 **)(o + 4);
        func_00B84790(a0, *(u16 *)(q + 0x30), *(u16 *)(o + 0x26), *(u8 *)(q + 0x2D), 1, (f32)(u32)(a1 << 1));
    }
    ((f32 *)D_00CBCC70)[a1] = *(f32 *)D_00591E6C;
    ((f32 *)D_00CBCC90)[a1] = *(f32 *)D_00591E70;
    ((f32 *)D_00CBCCB0)[a1] = *(f32 *)D_00591E74;
    if (a4 != 0) {
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE0) = *(f32 *)(o + 0xE0) - *(f32 *)(o + 0xF0);
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE8) = *(f32 *)(o + 0xE8) - *(f32 *)(o + 0xF8);
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE0) = f22;
        o = *(u8 **)a0;
        *(f32 *)(o + 0xE8) = f21;
        o = *(u8 **)a0;
        *(u16 *)(o + 0x26) = s0;
    } else {
        *(f32 *)(*(u8 **)(*(u8 **)a0 + 4) + 0x38) = f20;
    }
}
