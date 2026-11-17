/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001A5670(s32 a0, s32 a1, s32 a2, s32 a3, void *a4, s32 a5, s32 a6, void *a7, f32 value);
extern s32 D_003E758C;
extern char D_00533040[];
extern char D_00533049[];
extern char D_0058E5B0[];
extern char D_00CBD269[];
extern char D_00CBD26A[];
extern char D_00CBD26C[];
extern char D_00CBD2A2[];

void func_00205BC0(f32 arg) {
    u8 buf[3];
    f32 mx = 0.0f;
    f32 dirf;
    s32 dir, diff, i, mode;
    f32 f1;
    char *last = 0;

    mode = (*(u8 *)D_00533040);
    buf[0] = (*(u8 *)D_00CBD269);
    buf[1] = (*(u8 *)D_00CBD26A);
    buf[2] = (*(s8 *)D_00533049);
    f1 = (f32)*(s16 *)((char *)D_003E758C + (*(u16 *)D_00CBD2A2) * 0x354 + (*(u8 *)D_00CBD269) * 0x24 + 4);
    if (!(f1 <= 0.0f)) dir = 1; else dir = -1;
    diff = (s32)(f1 - (*(f32 *)D_00CBD26C));
    dirf = (f32)(((s8)dir) * 50);
    for (i = 0; i < 3; i++) {
        s8 nx = (s8)(i + 1);
        u32 t, t2;
        s32 a, b;
        f32 f2, f4, f3, f0, d1, d2;
        if (nx >= 3) nx = 0;
        t = buf[i];
        if (t == 0xFF) a = 1; else a = (s32)t % 23;
        f2 = *(f32 *)(**(char ***)(D_0058E5B0 + a * 0x240 + 4) + 0x1CC);
        t2 = buf[nx];
        f4 = *(f32 *)(**(char ***)(D_0058E5B0 + a * 0x240 + 4) + 0x1D0);
        if (t2 == 0xFF) b = 1; else b = (s32)t2 % 23;
        last = **(char ***)(D_0058E5B0 + b * 0x240 + 4);
        f0 = *(f32 *)(last + 0x1CC);
        f3 = *(f32 *)(last + 0x1D0);
        if (i == 0) {
            s32 m = diff > 0 ? diff : -diff;
            if (m < 500) f2 = f2 + dirf;
        }
        d1 = f2 - f0;
        if (d1 < 0) d1 = -d1;
        d2 = f4 - f3;
        if (d2 < 0) d2 = -d2;
        if (d1 <= d2) d1 = d2;
        if (!(d1 <= mx)) mx = d1;
    }
    f1 = mx - 420.0f;
    if ((u8)mode == 3) {
    } else if ((u8)mode == 2) arg = 1020.0f;
    else if ((u8)mode == 1) arg = 1097.0f;
    else if ((u8)mode == 0) arg = 869.0f;
    if (!(f1 <= 0.0f)) {
        arg = arg - 0.6f * f1;
    }
    if (arg < 400.0f) {
        (*(u8 *)D_00533040) = 3;
        arg = 1025.0f;
    }
    func_001A5670(0x17, 0xFF, mode, diff, buf + 3, 3, -diff, last, arg);
}
