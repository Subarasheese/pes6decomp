/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E74CC;
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591BEC[];

s32 func_00A1B4A0(u8 *p);
s32 func_009B3480(u8 *p, f32 a, f32 b);
s32 func_009B30B0(s32 a, s32 b);
s32 func_00A09690(u8 *p);
u8 *func_00208310(s32 a);
void func_009B36C0(u8 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_00930080(u8 *p, s32 a, s32 b, f32 f, f32 g);
f32 func_001CD9E0(f32 x);
s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
void func_00209A00(u8 *p, s32 a, s32 b);
void func_00207390(u8 *p, s32 a);
s32 func_009B3070(s32 a, s32 b);

s32 func_00AA2020(u8 *p) {
    s32 t, cnt, s0, s1, s2, s3, s5, s6, d;
    f32 f20, f21, e8;
    u8 *q;

    if (*(s32 *)(p + 0x1c) == 0) return 0;
    if (func_00A1B4A0(p) != 0) return 0;
    t = (*(u8 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 13) >> 1);
    if (t == 4) return 0;
    if (t == 3) return 0;

    f21 = 13441.0f * (f32)((*(f32 *)(p + 0xe0) < 0.0f) ? -1 : 1);
    f20 = 951.0f * (f32)((*(f32 *)(p + 0xe8) < 0.0f) ? -1 : 1);
    cnt = 0;
    if ((func_009B30B0(*(u16 *)(p + 0x28), func_009B3480(p, f21, f20)) & 0xffff) >= 17) cnt++;
    s1 = func_00A09690(p);
    if ((func_009B30B0(s1, func_009B3480(p, f21, f20)) & 0xffff) >= 17) cnt++;
    if (cnt == 2) return 0;

    s3 = *(u16 *)(func_00208310(0x1cb) + 8) << 1;
    s0 = func_009B3480(p, f21, f20) & 0xffff;
    e8 = *(f32 *)(p + 0xe8);
    t = (s32)e8;
    if (t <= 0) t = -t;
    if ((f32)t < 939.0f) {
        s2 = ((e8 < 0.0f) ? -1 : 1) > 0;
    } else {
        s2 = ((e8 < 0.0f) ? -1 : 1) <= 0;
        if ((func_009B30B0(*(u16 *)(p + 0x28), func_009B3480(p, 0.0f, e8)) & 0xffff) >= 0x78)
            s2 ^= 1;
    }
    if (((*(f32 *)(p + 0xe0) < 0.0f) ? -1 : 1) > 0) s2 ^= 1;

    d = 0x7ff8 / *(s32 *)(D_003E74CC + 0x3704);
    s1 = s0 + (s2 ? -1 : 1) * ((d & 0xffff) * s3);
    func_009B36C0(p, 0x1cb, 0, s1 & 0xffff, s2 & 0xff);
    s0 = func_00930080(p, 0x1cb, s3, 12.0f, *(f32 *)D_003E74CC);
    {
        f32 dx = *(f32 *)D_00591E6C - f21;
        f32 dy = *(f32 *)D_00591E74 - f20;
        s5 = (s32)func_001CD9E0(dy * dy + dx * dx);
    }
    s6 = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74, f21, f20) & 0xffff;
    s0 = (s32)((256.0f * ((f32)s5 * *(f32 *)D_00591BEC)) / (f32)s0);
    if (*(s32 *)(p + 0x1c) < s0) return 0;
    func_00209A00(*(u8 **)(p + 4), 0x1cb, 12);
    func_00207390(*(u8 **)(p + 4), s3 - 12);
    *(s32 *)(p + 0x20) = s0;
    *(u16 *)(p + 0x28) = s6;
    *(u16 *)(p + 0x2c) = s1;
    *(u8 *)(*(u8 **)(p + 4) + 0x2d) = s2;
    *(u16 *)(p + 0x38) = (func_009B3070(*(u16 *)(p + 0x26), s1 & 0xffff) & 0xffff) / (s3 - 12);
    q = *(u8 **)(p + 4);
    *(u16 *)(p + 0x38) = (u32)((f32)(u32)*(u16 *)(p + 0x38) / (*(f32 *)D_003E74CC / *(f32 *)(q + 0x28)));
    *(u8 *)(p + 0x16) = 0x10;
    *(u16 *)(p + 0x18) = 0x40;
    return 1;
}
