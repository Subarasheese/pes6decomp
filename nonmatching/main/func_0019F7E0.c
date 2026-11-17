/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern f32 func_0011D138(f32 x);
extern f32 func_0011D468(f32 x);
extern void func_001A5670(f32 x);
extern void func_001A5620(f32 *v);
extern void func_001A5550(f32 *v);

void func_0019F7E0(u8 *p, u32 n) {
    f32 v[3];
    f32 t, u;
    u32 ty;

    ty = *(u16 *)(p + 4);
    t = (f32)n / (f32)*(u32 *)p;
    if (ty == 3) {
        t = 0.5f * (1.0f + func_0011D138(3.1415927f * t + 3.1415927f));
    } else if (ty == 2) {
        t = func_0011D468(t * 1.5707964f);
    } else if (ty == 1) {
        t = 1.0f + func_0011D138(1.5707964f * t + 3.1415927f);
    }
    ty = *(u16 *)(p + 6);
    u = (f32)n / (f32)*(u32 *)p;
    if (ty == 3) {
        u = 0.5f * (1.0f + func_0011D138(3.1415927f * u + 3.1415927f));
    } else if (ty == 2) {
        u = func_0011D468(u * 1.5707964f);
    } else if (ty == 1) {
        u = 1.0f + func_0011D138(1.5707964f * u + 3.1415927f);
    }
    func_001A5670(*(f32 *)(p + 8) + t * (*(f32 *)(p + 0x24) - *(f32 *)(p + 8)));
    v[0] = *(f32 *)(p + 0xC) + t * (*(f32 *)(p + 0x28) - *(f32 *)(p + 0xC));
    v[1] = *(f32 *)(p + 0x10) + u * (*(f32 *)(p + 0x2C) - *(f32 *)(p + 0x10));
    v[2] = *(f32 *)(p + 0x14) + t * (*(f32 *)(p + 0x30) - *(f32 *)(p + 0x14));
    func_001A5620(v);
    v[0] = *(f32 *)(p + 0x18) + t * (*(f32 *)(p + 0x34) - *(f32 *)(p + 0x18));
    v[1] = *(f32 *)(p + 0x1C) + u * (*(f32 *)(p + 0x38) - *(f32 *)(p + 0x1C));
    v[2] = *(f32 *)(p + 0x20) + t * (*(f32 *)(p + 0x3C) - *(f32 *)(p + 0x20));
    func_001A5550(v);
}
