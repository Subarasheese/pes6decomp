/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 fabsf(f32 x);

/* dst = v * s (all four lanes), VU0 macro mode. */
static inline void vscale(f32 *dst, f32 *v, f32 s) {
    union { f32 f; s32 i; } u;
    u.f = s;
    __asm__ volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "qmtc2.ni %2, $vf5\n"
        "vmulx.xyzw $vf6, $vf4, $vf5x\n"
        "sqc2 $vf6, 0x0(%0)\n"
        : : "r"(dst), "r"(v), "r"(u.i) : "memory");
}

/* dst = a + b */
static inline void vadd(f32 *dst, f32 *a, f32 *b) {
    __asm__ volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vadd.xyzw $vf6, $vf4, $vf5\n"
        "sqc2 $vf6, 0x0(%0)\n"
        : : "r"(dst), "r"(a), "r"(b) : "memory");
}

/* dst = a - b */
static inline void vsub(f32 *dst, f32 *a, f32 *b) {
    __asm__ volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vsub.xyzw $vf6, $vf4, $vf5\n"
        "sqc2 $vf6, 0x0(%0)\n"
        : : "r"(dst), "r"(a), "r"(b) : "memory");
}

void func_002A3D30(f32 *a0, f32 *a1, f32 *a2, f32 *a3, f32 *a4, f32 f12, f32 f13, f32 f14) {
    f32 t[4];
    f32 x1, y1, x2, y2, ratio, r, ax, ay, cx, cy, e;
    f32 p0, p1;

    x1 = f12 - fabsf(a1[0]);
    y1 = f13 - fabsf(a1[1]);
    x2 = f12 - fabsf(a2[0]);
    y2 = f13 - fabsf(a2[1]);
    ay = fabsf(a0[9]);
    ax = fabsf(a0[8]);
    ratio = ay / (ay + ax);
    if (!(ratio <= 0.7f)) {
        r = -(y1 + y2) / fabsf(a0[9]);
    } else if (ratio < 0.3f) {
        r = -(x1 + x2) / fabsf(a0[8]);
    } else {
        cy = -(y1 + y2) / fabsf(a0[9]);
        if (cy < 0.0f) {
            cy = 0.0f;
        }
        cx = -(x1 + x2) / fabsf(a0[8]);
        if (cx < 0.0f) {
            cx = 0.0f;
        }
        r = (cx * (0.7f - ratio) + cy * (ratio - 0.3f)) / 0.39999998f;
    }
    if (!(r <= 0.0f)) {
        if (f14 <= 0.5f) {
            vscale(t, a0 + 8, r);
            vsub(a1, a1, t);
        } else {
            vscale(t, a0 + 8, r);
            vadd(a2, a2, t);
        }
    }
    vadd(t, a1, a2);
    vscale(t, t, 0.5f);
    p0 = t[0];
    if (p0 <= a3[0]) {
        e = a4[0];
        if (!(p0 < e)) {
            e = p0;
        }
    } else {
        e = a3[0];
    }
    t[0] = e;
    p1 = t[1];
    if (p1 <= a3[1]) {
        e = a4[1];
        if (!(p1 < e)) {
            e = p1;
        }
    } else {
        e = a3[1];
    }
    t[1] = e;
    vadd(a0 + 12, a0 + 12, t);
    a1[0] = 0.5f * fabsf(a1[0] - a2[0]);
    a1[1] = 0.5f * fabsf(a1[1] - a2[1]);
    a1[2] = 0.5f * fabsf(a1[2] - a2[2]);
}
