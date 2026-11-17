/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0099EAE0(u8 *);
extern void func_00944A50(u8 *);
extern s32 func_009B3480(u8 *, f32, f32);
extern s32 func_009B33F0(u8 *, u8 *, s32);
extern s32 func_009B3070(u16, u16);
extern s32 func_00949160(u8 *, u16, s32, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_0099E430(s32);
extern char D_00591E14[];
extern char D_005926E1[];
extern char D_0058E5B0[];
extern char D_00591E60[];
extern char D_005926F2[];
extern char D_005926D8[];
extern char D_00591BE4[];
extern char D_00592980[];
extern u8 *D_003E7574;

void func_00BEF810(u8 *p) {
    u8 *s2 = 0;
    u32 s3;
    s32 s1;
    s32 a7;
    s32 a2;
    s32 v;
    u32 x;
    f32 f;

    func_0099EAE0(p);
    if (p[0x24] == 0) return;
    if (p[0x48] == 0xFF || ((*(u32 *)D_00591E14) % (*(u8 *)D_005926E1)) == 0) {
        func_00944A50(p);
        v = func_009B3480(p, *(f32 *)(p + 0xE0), 0.0f);
        p[0x48] = func_00949160(p, v & 0xFFFF, 0xF0, 0x3400);
    }
    if (p[0x48] == 0xFF) {
        s3 = func_009B3480(p, *(f32 *)(p + 0xE0), 0.0f) & 0xFFFF;
    } else {
        s2 = (u8 *)D_0058E5B0 + ((s32)(p[0x48] % 0x17)) * 576;
        s3 = func_009B33F0(p, s2, a2) & 0xFFFF;
    }
    v = func_009B3070(*(u16 *)(p + 0x26), s3);
    if ((f32)(u32)v < 2184.5334f) {
        p[0x4E] = 0xFF;
    } else if ((((s3 & 0xFFFF) - *(u16 *)(p + 0x26) + 0x10000) & 0xFFFF) < 0x8001) {
        p[0x4E] = 1;
    } else {
        p[0x4E] = 0;
    }
    if (p[0x4E] == 1) {
        if ((*(f32 *)D_00591E60) <= 0.0f) *(u32 *)(p + 0xB0) |= 0x20;
        else *(u32 *)(p + 0xB0) |= 0x80;
    } else if (p[0x4E] == 0) {
        if ((*(f32 *)D_00591E60) <= 0.0f) *(u32 *)(p + 0xB0) |= 0x80;
        else *(u32 *)(p + 0xB0) |= 0x20;
    }
    if ((*(f32 *)D_005926D8) <= (f32)(*(u8 *)D_005926F2)) return;
    {
        a2 = (*(u8 *)D_00591BE4) * 3;
        a7 = 0;
        if ((u32)a2 < (*(u32 *)D_00591E14)) {
            a7 = 1;
        } else if (p[0x48] != 0xFF) {
            if ((u32)(a2 / 2 / 3) < (*(u32 *)D_00591E14)) {
                if (*(s32 *)(s2 + 0x1C) < 0x681) a7 = 1;
            }
        }
    }
    if (!a7) return;
    f = (f32)*(s16 *)(p + 0x14) * *(f32 *)(D_003E7574 + 0x10);
    if (f < 9241.0f) {
        s1 = 1;
    } else {
        if ((D_00592980[0x88 + p[0x12] * 26880 + p[0x11] * 840] >> 7) & 1) {
            if (func_00BBB8C0(3) == 0) s1 = 3;
            else s1 = 0;
        } else s1 = 2;
    }
    if (s1 == 0) {
        *(u32 *)(p + 0xB4) = 0x2000;
        *(s16 *)(p + 0x2C) = func_009B3480(p, 10649.0f * (f32)*(s16 *)(p + 0x14), 0.0f);
        return;
    }
    *(u32 *)(p + 0xB4) = 0x4000;
    if (p[0x48] == 0xFF) {
        *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
        return;
    }
    {
        u32 s4, s1b, r;
        s32 near;
        f32 f2, f3, f1;
        s32 c;
        c = func_009B33F0(p, s2, a2);
        *(s16 *)(p + 0x2C) = c;
        s4 = *(u16 *)(p + 0x2C);
        s1b = func_009B3480(p, *(f32 *)(p + 0xE0), 0.0f) & 0xFFFF;
        near = ((s4 - s1b + 0x10000) & 0xFFFF) < 0x8001;
        v = func_009B3070(s4, s1b);
        if ((f32)(u32)v < 8738.1338f) {
            r = s4;
        } else {
            f3 = near ? -1.0f : 1.0f;
            f2 = (f32)s1b;
            f1 = f2 - 8738.1338f * f3;
            r = (u32)f1 & 0xFFFF;
        }
        *(u16 *)(p + 0x2C) = r;
        *(u32 *)(p + 0xB4) |= func_0099E430(c & 0xFFFF);
        *(u32 *)(p + 0xB0) = *(u32 *)(p + 0xB4);
    }
}
