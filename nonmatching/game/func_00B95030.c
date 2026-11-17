/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern s32 func_00BDBBD0(s32, f32, f32, f32);
extern s32 func_00A1B990(char *);
extern s32 func_00288670(s32, s32);
extern u32 func_009B33A0(char *, s32, s32, s64);

extern char *D_003E7574;
extern char D_00CBCDE3[];
extern char D_0058E5C4[];
extern char D_0058E7F0[];
extern char D_00592980[];

s32 func_00B95030(void) {
    s32 neq4;
    s32 v;
    s32 sy;
    s32 ok;
    s32 same;
    s32 i;
    char *p;
    s32 q;
    s32 sx;
    s32 t;
    s32 start;
    s32 id;

    neq4 = *(u16 *)(D_003E7574 + 0x84) != 4;
    id = *(u8 *)D_00CBCDE3;
    if (id == 0xFF)
        t = 1;
    else
        t = id % 23;

    same = *(s16 *)(D_0058E5C4 + t * 576) == func_00BDBBD0(func_002AE670(0xE0), 0.0f, 0.0f, 0.0f);

    if (same && neq4) {
        ok = 1;
        for (i = 0; i < func_002AE670(0xE0); i++) {
            f32 f = *(f32 *)(D_003E7574 + i * 4 + 0x47C);
            s32 n = (s32)f;
            if (!(n > 0))
                n = -n;
            if (13465.0f < (f32)n) {
                start = i;
                break;
            }
        }
        sx = (s32) * (f32 *)(D_003E7574 + i * 4 + 0x47C);
        sy = (s32) * (f32 *)(D_003E7574 + i * 4 + 0xB7C);
        p = D_0058E7F0;
        for (i = 0; i < 22; i++) {
            s64 a;
            u64 sq;
            t = start;
            if (func_00A1B990(p))
                t = start - 10;
            v = func_00288670(*(u8 *)(D_00592980 + *(u8 *)(p + 0x12) * 26880 + *(u8 *)(p + 0x11) * 840 + 0x6F) & 0x7F, 50);
            q = (6400 - *(u8 *)(p + 0x5C) * 12) / (*(u8 *)(p + 0x5E) + 40 - v / 10);
            q = (0x2100 - *(s32 *)(p + 0x1C)) / q;
            t = t - q / 2;
            if (t < 0)
                t = 0;
            a = (s32)(t * 33);
            sq = a * a;
            if ((u64)func_009B33A0(p, sx, sy, sq) < sq) {
                ok = 0;
                break;
            }
            p += 0x240;
        }
        return ok;
    }
    return 0;
}
