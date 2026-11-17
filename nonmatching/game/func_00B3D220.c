/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E6C[];

void func_00A08ED0(void *, s32, void *);
s32 func_009F42B0(void *, s32);
s32 func_009B3480(void *, s32, s32, s32, f32, f32);
void func_0027D0B0(void *, s32);

s32 func_00B3D220(u8 *obj) {
    f32 buf[3];
    u8 *s1;
    s32 s0, v, a, t;

    func_00A08ED0(obj, 12, buf);
    if (*(f32 *)(obj + 0xE4) != 0.0f) return 0;
    if (buf[1] < (f32)func_009F42B0(obj, -0xA0)) return 0;
    s1 = *(u8 **)(obj + 4);
    s0 = s1[0x2D];
    v = func_009B3480(obj, 0, 0, 0, 0.0f, *(f32 *)(obj + 0xE8));
    a = (*(u16 *)(obj + 0x26) - (v & 0xFFFF) + 0x10000) & 0xFFFF;
    if (s0 != (a < 0x8001)) return 0;
    t = *(u16 *)(s1 + 0x30);
    if (t == 0x16D || t == 0x12A || t == 0x254 || t == 0x2F9 ||
        t == 0x123 || t == 0x24E || t == 0x336 || t == 0x385) return 0;
    t = obj[0x16];
    if (t == 0x4F || t == 0x11) return 0;
    func_0027D0B0(obj, 0x10);
    if ((f32)*(s16 *)(obj + 0x14) * *(f32 *)D_00591E6C < -13433.0f && *(s32 *)(obj + 0x1C) > 0x800) return 0;
    t = *(u16 *)(obj + 0x26);
    if (*(f32 *)(obj + 0xE0) < 0.0f) {
        if (t < 0x3000) return 1;
        if (t < 0xD001) return 0;
        return 1;
    }
    if (t < 0x5001) return 0;
    if (t >= 0xB000) return 0;
    return 1;
}
