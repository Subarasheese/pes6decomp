/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00592980[];
extern char D_00591F1C[];
extern char D_00591F20[];
extern char D_00591BEC[];
extern char D_005926EC[];
extern s32 func_00288670(s32 a, s32 b, void *c);
extern u32 func_009B3350(void *g, s32 x, s32 y);
extern u32 func_009B33A0(s32 a, s32 x, s32 y);
extern void func_00285080(s32 a);
extern f32 func_001CD9E0(f32 a);

s32 func_00A731E0(u8 *a0, s32 a1, s16 a2, s16 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                  s32 p8, s16 p9, s32 p10, s32 p11)
{
    u32 sq = (u32)(p8 * p8);
    s32 s6, s7, s0, s1, a0v, x, y;
    u32 r;
    f32 f;

    s6 = func_00288670(((u8 *)D_00592980)[a0[0x12] * 26880 + a0[0x11] * 840 + 0x75] & 0x7F, 0x32, D_00592980) / 20;
    s7 = p10 * -188;
    s0 = 0;
    s1 = a7;
A:
    if (s1 == a7 || !(a4 < s1)) goto INIT;
B:
    if (a4 < s1) s1 = a4;
    *(s32 *)D_00591F1C = (s32)*(f32 *)(D_003E7574 + 0x1454);
    *(s32 *)D_00591F20 = (s32)*(f32 *)(D_003E7574 + 0x145C);
    *(s16 *)(D_003E7574 + 0x6E) = s0;
    return s1;
INIT:
    *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)(D_003E7574 + 0x47C);
    *(f32 *)(D_003E7574 + 0x1458) = *(f32 *)(D_003E7574 + 0x7FC);
    *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(D_003E7574 + 0xB7C);
    *(u16 *)(D_003E7574 + 0x1450) = a2;
    *(s16 *)(D_003E7574 + 0x144C) = 0;
    *(s32 *)(D_003E7574 + 0x1444) = s1;
    *(f32 *)(D_003E7574 + 0x1448) = (f32)s7;
    if (p10 == 0)
        *(u8 *)(D_003E7574 + 0x144F) = 2;
    else
        *(u8 *)(D_003E7574 + 0x144F) = 1;
    s0 = 0;
    *(s32 *)(D_003E7574 + 0x1440) = (s16)a3;
S:
    r = func_009B3350(D_003E7574, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    if (r < sq && *(s32 *)(D_003E7574 + 0x1444) > 0x800) {
        x = (s32)*(f32 *)(D_003E7574 + 0x1454);
        if (x <= 0) x = -x;
        if ((f32)x <= 13433.0f) {
            func_00285080(1);
            s0++;
            goto S;
        }
    }
    if (!(*(s32 *)(D_003E7574 + 0x1444) < a5)) goto B;
    r = func_009B3350(D_003E7574, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    if (r < sq) {
        s1 += 0x1000;
        goto F;
    }
    r = func_009B33A0(a1, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    f = func_001CD9E0((f32)r);
    a0v = (s32)((f32)p9 + (f32)(s32)f * *(f32 *)D_00591BEC / (f32)a6);
    if (a0v < 0x10) goto F;
    x = (s32)*(f32 *)(D_003E7574 + 0x1454);
    if (x <= 0) x = -x;
    if ((f32)x < 13321.0f) {
        y = (s32)*(f32 *)(D_003E7574 + 0x145C);
        if (y <= 0) y = -y;
        if ((f32)y < 8601.0f) goto G;
    }
    if (!(a0v + *(u8 *)D_005926EC < s0)) goto B;
G:
    if (a0v < s0 + s6) goto F;
    if (p11 == 0) goto B;
    if (a5 - 0x1000 < *(s32 *)(D_003E7574 + 0x1444)) goto B;
F:
    s1 += 0x100;
    goto A;
}
