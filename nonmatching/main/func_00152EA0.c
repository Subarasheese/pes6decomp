/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 Pes6Math_Atanf(f32, s32, s32);
extern f32 func_0011D210(f32);

f32 func_00152EA0(f32 y, f32 x) {
    union { f32 f; s32 i; } uy, ux, c;
    s32 hy, hx, iy, ix, m, k;
    f32 z;

    uy.f = y;
    ux.f = x;
    hy = uy.i;
    hx = ux.i;
    iy = hy & 0x7FFFFFFF;
    ix = hx & 0x7FFFFFFF;
    if (hx == 0x3F800000) {
        return Pes6Math_Atanf(y, iy, hy);
    }
    m = ((hy >> 31) & 1) | ((hx >> 30) & 2);
    if (iy < 0x800000) {
        if (m == 3) {
            c.i = 0xC0490FDA;
            return c.f;
        }
        if (m == 2) {
            c.i = 0x40490FDA;
            return c.f;
        }
        if (m == 1 || m == 0) {
            return y;
        }
    }
    if (ix < 0x800000) {
        if (hy < 0) {
            c.i = 0xBFC90FDB;
        } else {
            c.i = 0x3FC90FDB;
        }
        return c.f;
    }
    k = (iy - ix) >> 23;
    if (k >= 0x3D) {
        c.i = 0x3FC90FDC;
        z = c.f;
    } else if (hx < 0 && k < -0x3C) {
        z = 0.0f;
    } else {
        z = Pes6Math_Atanf(func_0011D210(y / x), iy, hy);
    }
    if (m == 2) {
        c.i = 0x34222168;
        z = z - c.f;
        c.i = 0x40490FDA;
        return c.f - z;
    }
    if (m == 1) {
        return -z;
    }
    if (m == 0) {
        return z;
    }
    c.i = 0x34222168;
    z = z - c.f;
    c.i = 0x40490FDA;
    return z - c.f;
}
