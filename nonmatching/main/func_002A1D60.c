/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 fabsf(f32 x);
f32 func_0011D138(f32 a);
f32 func_0011D468(f32 a);
void func_002A0ED0(f32 *v, u32 a);
s32 func_002A1110(u32 a);

extern f32 *D_003E74CC;
extern char D_005E19B0[];
extern char D_005E19B2[];
extern char D_005E19B4[];
extern char D_005E19B8[];
extern char D_005E19C8[];
extern char D_005E19CC[];
extern char D_005E19D0[];
extern char D_005E19D4[];
extern char D_005E19D8[];
extern char D_005E1D20[];
extern char D_005E2220[];
extern char D_005E2230[];
extern char D_005E2240[];
extern char D_005E2250[];

/* t = v - c * 0 (xyzw) */
static inline void vsub0(f32 *t, f32 *v, char *c) {
    __asm__ volatile(
        "lqc2 $vf4, 0x0(%2)\n"
        "qmtc2.ni %3, $vf5\n"
        "vmulx.xyzw $vf6, $vf4, $vf5x\n"
        "sqc2 $vf6, 0x0(%0)\n"
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%0)\n"
        "vsub.xyzw $vf6, $vf4, $vf5\n"
        "sqc2 $vf6, 0x0(%0)\n"
        : : "r"(t), "r"(v), "r"(c), "r"(0) : "memory");
}

static inline f32 dot3(f32 *t, char *c) {
    union { f32 f; s32 i; } u;
    s32 r;
    __asm__ volatile(
        "lqc2 $vf4, 0x0(%1)\n"
        "lqc2 $vf5, 0x0(%2)\n"
        "vmul.xyz $vf5, $vf4, $vf5\n"
        "vaddy.x $vf5, $vf5, $vf5y\n"
        "vaddz.x $vf5, $vf5, $vf5z\n"
        "qmfc2.ni %0, $vf5\n"
        : "=r"(r) : "r"(t), "r"(c) : "memory");
    u.i = r;
    return u.f;
}

void func_002A1D60(f32 *p0, f32 *p1, f32 fx, f32 fy) {
    f32 w[4] __attribute__((aligned(16)));
    f32 v[4] __attribute__((aligned(16)));
    f32 t[4] __attribute__((aligned(16)));
    f32 ang, f2, f3, d4, d8, m, sum, k, delta, nm;
    f32 *p;

    w[0] = 0.0f;
    w[1] = 0.0f;
    w[2] = 0.0f;
    w[3] = 0.0f;
    if (!(*(f32 *)D_005E19C8 <= 0.0f)) {
        ang = (3.14159274f * (f32)(u32)(func_002A1110(*(u8 *)D_005E19B2) & 0xffff)) / 32768.0f;
        v[0] = func_0011D138(ang);
        v[3] = 0.0f;
        v[1] = 0.0f;
        v[2] = -func_0011D468(ang);
        vsub0(t, v, D_005E2250);
        w[0] = dot3(t, D_005E2230);
        w[1] = -dot3(t, D_005E2240);
        w[2] = dot3(t, D_005E2220);
        w[3] = -t[3];
        if (*(u8 *)D_005E19B4 < 2 && *(s32 *)D_005E19B8 == 0) {
            f2 = w[0];
            if (f2 < 0.0f) {
                if (f2 <= -0.4f) {
                    w[0] = (*(f32 *)D_005E19C8 * (0.4f + f2)) / 0.6f;
                } else {
                    w[0] = 0.0f;
                }
            } else {
                if (f2 < 0.4f) {
                    w[0] = 0.0f;
                } else {
                    w[0] = (*(f32 *)D_005E19C8 * (f2 - 0.4f)) / 0.6f;
                }
            }
            f2 = w[1];
            if (f2 < 0.0f) {
                if (f2 <= -0.4f) {
                    w[1] = (*(f32 *)D_005E19C8 * (0.4f + f2)) / 0.6f;
                } else {
                    w[1] = 0.0f;
                }
            } else {
                if (f2 < 0.4f) {
                    w[1] = 0.0f;
                } else {
                    w[1] = (*(f32 *)D_005E19C8 * (f2 - 0.4f)) / 0.6f;
                }
            }
        } else {
            w[1] = 0.0f;
            w[0] = 0.0f;
        }
    }

    if (!(*(f32 *)D_005E19CC <= 0.0f)) {
        func_002A0ED0(v, *(u8 *)D_005E19B0);
        v[3] = 0.0f;
        vsub0(t, v, D_005E2250);
        v[0] = dot3(t, D_005E2230);
        v[1] = -dot3(t, D_005E2240);
        v[2] = dot3(t, D_005E2220);
        f2 = v[0] / (fx / 25.0f);
        v[3] = -t[3];
        v[0] = f2;
        if (f2 <= 1.0f) {
            if (f2 < -1.0f) f2 = -1.0f;
        } else {
            f2 = 1.0f;
        }
        v[0] = f2;
        v[1] = v[1] / (fy / 25.0f);
        f3 = v[1];
        if (f3 <= 1.0f) {
            if (f3 < -1.0f) f3 = -1.0f;
        } else {
            f3 = 1.0f;
        }
        k = *(f32 *)D_005E19CC;
        v[0] = v[0] * k;
        v[1] = f3 * k;

        m = (fabsf(v[0]) <= fabsf(w[0])) ? fabsf(w[0]) : fabsf(v[0]);
        sum = v[0] + w[0];
        if (sum <= m) {
            nm = -m;
            if (!(sum < nm)) nm = sum;
            w[0] = nm;
        } else {
            w[0] = m;
        }
        m = (fabsf(v[1]) <= fabsf(w[1])) ? fabsf(w[1]) : fabsf(v[1]);
        sum = v[1] + w[1];
        if (sum <= m) {
            nm = -m;
            if (!(sum < nm)) nm = sum;
            w[1] = nm;
        } else {
            w[1] = m;
        }
    }

    if (*(f32 *)D_005E19D0 != 0.0f) {
        v[0] = 0.0f;
        v[1] = *(f32 *)D_005E19D0;
        v[2] = 0.0f;
        v[3] = 0.0f;
        vsub0(t, v, D_005E2250);
        v[0] = dot3(t, D_005E2230);
        v[1] = -dot3(t, D_005E2240);
        v[2] = dot3(t, D_005E2220);
        w[1] = w[1] + v[1];
        v[3] = -t[3];
        w[0] = w[0] + v[0];
    }

    p = D_003E74CC;
    f3 = *p;
    if (*(f32 *)D_005E1D20 < f3) {
        *(f32 *)D_005E19D8 = w[1];
        *(f32 *)D_005E19D4 = w[0];
    } else {
        k = 0.03f * f3;
        d4 = *(f32 *)D_005E19D4;
        d8 = *(f32 *)D_005E19D8;
        *(f32 *)D_005E19D4 = d4 + k * (w[0] - d4);
        *(f32 *)D_005E19D8 = d8 + k * (w[1] - d8);
    }

    d4 = *(f32 *)D_005E19D4;
    if (d4 != 0.0f) {
        if (d4 <= 0.0f) {
            if (d4 < -1.0f) {
                delta = (0.0f + -p1[2]) + (1.0f + d4) * ((2.0f + p1[0]) - p1[2]);
            } else {
                delta = p1[2] * d4;
            }
        } else {
            if (d4 <= 1.0f) {
                delta = -p1[0] * d4;
            } else {
                delta = (0.0f + -p1[0]) + (d4 - 1.0f) * ((2.0f + p1[0]) - p1[2]);
            }
        }
        p0[0] = p0[0] + fx * delta;
        p1[0] = p1[0] + delta;
        p1[2] = p1[2] + delta;
        if (!(p1[0] <= -0.25f)) p1[0] = -0.25f;
        if (p1[2] < 0.25f) p1[2] = 0.25f;
    }

    d8 = *(f32 *)D_005E19D8;
    if (d8 != 0.0f) {
        if (d8 <= 0.0f) {
            if (d8 < -1.0f) {
                delta = (0.0f + -p1[3]) + (1.0f + d8) * ((2.0f + p1[1]) - p1[3]);
            } else {
                delta = p1[3] * d8;
            }
        } else {
            if (d8 <= 1.0f) {
                delta = -p1[1] * d8;
            } else {
                delta = (0.0f + -p1[1]) + (d8 - 1.0f) * ((2.0f + p1[1]) - p1[3]);
            }
        }
        p0[1] = p0[1] + fy * delta;
        p1[1] = p1[1] + delta;
        p1[3] = p1[3] + delta;
        if (!(p1[1] <= -0.25f)) p1[1] = -0.25f;
        if (p1[3] < 0.25f) p1[3] = 0.25f;
    }
}
