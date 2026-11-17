/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern f32 *D_003E74CC;
extern u8 *D_003E7574;
extern char D_00592980[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591BEC[];
extern char D_005926DE[];
s32 func_009F4B70(s32 a, s32 b, f32 c);
s32 func_009B30B0(s32 a, s32 b);
s32 func_009B3480(void *a, f32 b, f32 c);
s32 func_009B36C0(void *a, s32 b, s32 c, s32 d, s32 e);
s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
s32 func_009B3070(s32 a, s32 b);
void func_00209A00(void *a, s32 b, s32 c);
void func_00207390(void *a, s32 b);
f32 func_001CD9E0(f32 a);
s32 func_00288670(s32 a, s32 b);

s32 func_00AE3680(u8 *p, u8 *q) {
    s32 s1, s0, s2, s4, s5, s6;
    f32 f21, f20;
    s1 = *(s32 *)(p + 0x58);
    s0 = func_009F4B70(0x2D8, 0, *D_003E74CC);
    f21 = *(f32 *)(D_003E7574 + s0 * 4 + 0x47C);
    f20 = *(f32 *)(D_003E7574 + s0 * 4 + 0xB7C);
    if ((u16)func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) < 0x11) {
        s5 = ((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1;
    } else {
        s5 = (u16)(*(u16 *)(p + 0x26) - *(u16 *)(p + 0x2A)) < 0x8001;
    }
    s4 = (u16)func_009B3480(p, f21, f20);
    func_009B36C0(p, 0x2D8, s0, s4, s5 & 0xFF);
    s6 = (u16)func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74, f21, f20);
    if ((u16)func_009B30B0(s6, *(u16 *)(p + 0x28)) >= 0x30)
        return 0;
    *(f32 *)(q + 0xC) = f21;
    *(f32 *)(p + 0x88) = f21;
    *(f32 *)(q + 0x14) = f20;
    *(f32 *)(p + 0x8C) = f20;
    func_00209A00(*(void **)(p + 4), 0x2D8, 0);
    func_00207390(*(void **)(p + 4), 6);
    p[0x5D] = s0;
    *(u16 *)(p + 0x2C) = s4;
    (*(u8 **)(p + 4))[0x2D] = s5;
    {
        s32 x = (u16)func_009B3070(*(u16 *)(p + 0x2C), *(u16 *)(p + 0x26));
        *(u16 *)(p + 0x38) = s0 ? x / s0 : -1;
    }
    {
        f32 dx = *(f32 *)D_00591E74 - *(f32 *)(q + 0x14);
        f32 dy = *(f32 *)D_00591E6C - *(f32 *)(q + 0xC);
        f32 r = func_001CD9E0(dx * dx + dy * dy);
        f32 t = *(f32 *)D_00591BEC * (f32)(s32)r;
        u8 *a = (u8 *)D_00592980 + p[0x12] * 26880 + p[0x11] * 840;
        s2 = (s32)(t / (f32)(s0 + 1));
        s0 = *(s32 *)(p + 0x1C);
        if (s1 >= s0 + 0x200 + func_00288670(a[0x6B] & 0x7F, 0x14) * 2) {
            s0 = *(s32 *)(p + 0x1C);
            s1 = s0 + 0x200 + func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x6B] & 0x7F, 0x14) * 2;
        }
    }
    if (s2 < s1) s1 = s2;
    if (s1 + 0xA00 < s0) s1 = s0 - 0xA00;
    p[0x66] = 0;
    p[0x4E] = *(u8 *)D_005926DE;
    *(s32 *)(p + 0x1C) = s1;
    *(u16 *)(p + 0x28) = s6;
    p[0x48] = 0;
    *(u16 *)(p + 0x18) = 2;
    return 1;
}
