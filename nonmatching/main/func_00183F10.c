/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s16 D_0051FFB2[];
f32 func_00151CF0(f32);
s32 func_00153FE0(s32, s32);
void func_001A3850(f32 *);
void func_001A38C0(f32 *);

void func_00183F10(void) {
    s32 i;
    u8 *base;
    f32 *p;
    f32 v[4];
    f32 w[4];
    f32 a, r, x, y, z;

    base = (u8 *)func_00153FE0(D_0051FFB2[0], 0x260);
    (*(u8 **)(D_0051FFB2 + 7)) = base;
    if (base == 0) return;
    base[0x2A] = 0;
    (*(u8 **)(D_0051FFB2 + 7))[0x2B] = 0x2A;
    p = (f32 *)((*(u8 **)(D_0051FFB2 + 7)) + 0x230);
    for (i = 0; i < 4; i++) {
        p[1] = 2.5f + (3.0f * (f32)i) / 3.0f;
        r = func_00151CF0(3.0f);
        a = -1.5f + r;
        if (a < 1.0f) { if (!(a < 0.0f)) a = a + 1.0f; }
        if (!(a <= -1.0f)) { if (a < 0.0f) a = a - 1.0f; }
        p[0] = a;
        r = func_00151CF0(3.0f);
        a = -1.5f + r;
        if (a < 1.0f) { if (!(a < 0.0f)) a = a + 1.0f; }
        if (!(a <= -1.0f)) { if (a < 0.0f) a = a - 1.0f; }
        p[2] = a;
        p += 3;
    }
    if ((*(u8 **)(D_0051FFB2 + 7)) == 0) return;
    p = (f32 *)((*(u8 **)(D_0051FFB2 + 7)) + 0x2C);
    for (i = 0; i < 42; i++) {
        (*(u8 **)(D_0051FFB2 + 7))[i] = 0;
        r = func_00151CF0(1.0f);
        p[1] = 900.0f * r;
        r = func_00151CF0(1.0f);
        p[0] = 1600.0f * r;
        r = func_00151CF0(1.0f);
        p[2] = 1600.0f * r;
        p += 3;
    }
    p = (f32 *)((*(u8 **)(D_0051FFB2 + 7)) + 0x224);
    func_001A38C0(v);
    func_001A3850(w);
    x = (0.0f + v[0]) + 2200.0f * w[0];
    y = (0.0f + v[1]) + 2200.0f * w[1];
    z = (0.0f + v[2]) + 2200.0f * w[2];
    p[0] = x - 800.0f;
    p[1] = y - 300.0f;
    p[2] = z - 800.0f;
    if (!(p[1] <= -900.0f)) p[1] = -900.0f;
}
