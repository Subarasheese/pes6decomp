/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_0011D468(s32, f32);
extern void func_002E0E90(void *, s32, s32);
extern s32 func_002E1540(void *, void *);
extern void func_002E18C0(void *, void *);
extern void func_002E1920(void *, f32, f32);

void func_002E0900(u8 *p) {
    f32 sp[4];
    f32 tp[4];
    f32 x, d;
    s32 n;

    if (p[8] == 1) {
        n = (s8)p[9];
        *(f32 *)(p + 0x10) = func_0011D468(n, 3.1415927f * (2.0f * ((f32)n / 40.0f) - 0.5f));
        x = (0.0f + 2.5f) + 2.5f * *(f32 *)(p + 0x10);
        d = 2.0f * x;
        sp[0] = *(f32 *)(p + 0x18) - x;
        sp[1] = *(f32 *)(p + 0x1C) - x;
        sp[2] = *(f32 *)(p + 0x20) + d;
        sp[3] = *(f32 *)(p + 0x24) + d;
        func_002E18C0(p + 0x28, sp);
        func_002E1540(p + 0x28, sp);
        func_002E1920(p + 0x28, (0.0f + *(f32 *)(p + 0x18)) - 0.5f * (sp[2] - *(f32 *)(p + 0x20)),
                      (0.0f + *(f32 *)(p + 0x1C)) - 0.5f * (sp[3] - *(f32 *)(p + 0x24)));
        if ((s8)p[9] >= 40) {
            p[9] = 0;
        }
    } else if (p[8] == 0) {
        n = (s8)p[9];
        *(f32 *)(p + 0x10) = func_0011D468(n, 3.1415927f * (2.0f * ((f32)n / 12.0f) - 0.5f));
        x = (0.0f + -20.0f) + 20.0f * *(f32 *)(p + 0x10);
        d = 2.0f * x;
        tp[0] = *(f32 *)(p + 0x18) - x;
        tp[1] = *(f32 *)(p + 0x1C) - x;
        tp[2] = *(f32 *)(p + 0x20) + d;
        tp[3] = *(f32 *)(p + 0x24) + d;
        func_002E18C0(p + 0x28, tp);
        func_002E1540(p + 0x28, tp);
        func_002E1920(p + 0x28, (0.0f + *(f32 *)(p + 0x18)) - 0.5f * (tp[2] - *(f32 *)(p + 0x20)),
                      (0.0f + *(f32 *)(p + 0x1C)) - 0.5f * (tp[3] - *(f32 *)(p + 0x24)));
        func_002E0E90(p, 0, (u8)(u32)((0.0f + 127.0f) + 127.0f * *(f32 *)(p + 0x10)));
        if ((s8)p[9] >= 6) {
            p[9] = 0;
            p[8] = 1;
        }
    }
}
