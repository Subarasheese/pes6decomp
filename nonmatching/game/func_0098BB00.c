/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_00983610(f32 a, f32 b, f32 c);
extern void func_009842D0(void *p, s32 r1, s32 r2, s32 r3, f32 a, f32 b);
extern void func_00C6A440(void *p);
extern char D_00CB52BE[];
extern u8 D_00591E4F[];
extern char D_0058E5B0[];
extern char D_00591E4C[];
extern char D_005926F2[];
extern char D_00591F38[];
extern char D_00591F3C[];
extern char D_00591DC4[];
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00CB5324[];
extern u8 *D_003E7574;

void func_0098BB00(u8 *p, s32 in1, s32 in2, s32 a3)
{
    f32 f21 = (f32)*(s16 *)(p + 0x14);
    u8 *s0;
    s32 a2;
    s32 a1;
    u8 *g;
    s32 r2;
    f32 ab1;

    if (p[0x1DE] == 0) {
        p[0x1DE] = 1;
    }
    if (p[0] != (*(u8 *)D_00CB52BE)) {
        func_00C6A440(p);
        return;
    }
    a1 = D_00591E4F[(p[0x13] ^ 1) << 1];
    if (a1 == 0xFF) {
        a2 = 1;
    } else {
        a2 = a1 % 23;
    }
    s0 = (u8 *)D_0058E5B0 + a2 * 576;
    r2 = a2 * 576;

    if ((*(u8 *)D_00591E4C) == 0) {
        g = D_003E7574;
        a1 = *(u16 *)(g + 0x84);
        r2 = (s32)g;
        if (a1 == 7 || a1 == 2) {
            if ((*(s32 *)D_00591F38) == 0x7FFF) {
                (*(f32 *)D_00CB5320) = func_00983610(*(f32 *)(g + 0x18), *(f32 *)(p + 0xE8), 5.0f);
                (*(f32 *)D_00CB531C) = *(f32 *)(s0 + 0xE0) - 2560.0f * f21;
            } else {
                (*(f32 *)D_00CB5320) = func_00983610((f32)(*(s32 *)D_00591F3C), *(f32 *)(p + 0xE8), 5.0f);
                (*(f32 *)D_00CB531C) = (f32)(*(s32 *)D_00591F38) - 2560.0f * f21;
            }
            { f32 t = (*(f32 *)D_00CB531C); if (t < 0.0f) t = -t; ab1 = t; }
            if (ab1 <= 9241.0f) {
                (*(f32 *)D_00CB5320) = func_00983610((*(f32 *)D_00CB5320), 0.0f, 1.0f);
            } else {
                s32 sg = ((*(f32 *)D_00CB531C) < 0.0f) ? -1 : 1;
                (*(f32 *)D_00CB531C) = func_00983610((*(f32 *)D_00CB531C), 9241.0f * (f32)sg, 5.0f);
                (*(f32 *)D_00CB5320) = func_00983610((*(f32 *)D_00CB5320), 0.0f, 2.0f);
            }
            {
                f32 d = *(f32 *)(p + 0xE8) - *(f32 *)(s0 + 0xE8);
                if ((d < 0.0f ? -d : d) < 1024.0f) {
                    s32 sg = (d < 0.0f) ? -1 : 1;
                    (*(f32 *)D_00CB5320) = *(f32 *)(s0 + 0xE8) + (f32)(sg << 10);
                }
            }
            func_009842D0(p, a1, (s32)g, a3, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
            return;
        }
    }
    if ((s32)p[0] % (*(u8 *)D_005926F2) != (*(u32 *)D_00591DC4) % (*(u8 *)D_005926F2)) {
        *(s32 *)(p + 0xB0) = *(s32 *)(p + 0xB8);
        return;
    }
    {
        f32 f5 = (*(f32 *)D_00CB5324);
        g = D_003E7574;
        (*(f32 *)D_00CB531C) = *(f32 *)(p + 0xE0) - 1024.0f * f5;
        if ((*(f32 *)D_00CB531C) * f5 < *(f32 *)(g + 0x10) * f5 - 2560.0f) {
            (*(f32 *)D_00CB531C) = *(f32 *)(g + 0x10) - 2560.0f * f5;
        }
        (*(f32 *)D_00CB5320) = *(f32 *)(p + 0xE8);
        func_009842D0(p, (s32)g, r2, a3, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
    }
}
