/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_00129820(f32 y, f32 x);
f32 sqrtf(f32);

void func_0012B420(void *out, void *a, void *b, f32 t) {
    f32 buf[4] __attribute__((aligned(16)));
    f32 poly[4] __attribute__((aligned(16)));
    f32 w[8] __attribute__((aligned(16)));
    f32 dot, c, s, f1, f2, theta;
    s32 neg;

    __asm__ volatile(
        "lqc2          $vf4, 0x0(%1)\n"
        "lqc2          $vf5, 0x0(%2)\n"
        "vmul.xyzw     $vf5, $vf4, $vf5\n"
        "vaddax.w      ACC, $vf5, $vf5x\n"
        "vmadday.w     ACC, $vf0, $vf5y\n"
        "vmaddz.w      $vf5, $vf0, $vf5z\n"
        "vaddw.x       $vf6, $vf0, $vf5w\n"
        "sqc2          $vf6, 0x0(%0)\n"
        : : "r"(buf), "r"(a), "r"(b) : "memory");
    dot = buf[0];
    neg = 0;
    if (dot < 0.0f) {
        dot = -dot;
        neg = 1;
    }
    f1 = 1.0f - dot;
    f2 = t;
    if (!(f1 <= 0.00001f)) {
        c = 1.0f - dot * dot;
        s = sqrtf(c);
        theta = func_00129820(s, dot);
        w[0] = (1.0f - t) * theta;
        w[1] = t * theta;
        w[2] = 0.0f;
        w[3] = 0.0f;
        __asm__ volatile(
            "lqc2          $vf4, 0x0(%0)\n"
            "qmtc2.ni      %2, $vf10\n"
            "vmul.xyzw     $vf5, $vf4, $vf4\n"
            "vaddax.xyzw   ACC, $vf4, $vf0x\n"
            "qmtc2.ni      %3, $vf11\n"
            "vmul.xyzw     $vf4, $vf5, $vf4\n"
            "vmul.xyzw     $vf6, $vf5, $vf5\n"
            "vmul.xyzw     $vf5, $vf4, $vf5\n"
            "vmul.xyzw     $vf7, $vf4, $vf4\n"
            "qmtc2.ni      %4, $vf12\n"
            "vmaddax.xyzw  ACC, $vf4, $vf10x\n"
            "vmul.xyzw     $vf4, $vf4, $vf6\n"
            "vmaddax.xyzw  ACC, $vf5, $vf11x\n"
            "qmtc2.ni      %5, $vf10\n"
            "vmul.xyzw     $vf6, $vf5, $vf6\n"
            "vmul.xyzw     $vf8, $vf5, $vf7\n"
            "vmaddax.xyzw  ACC, $vf4, $vf12x\n"
            "qmtc2.ni      %6, $vf11\n"
            "vmul.xyzw     $vf5, $vf4, $vf7\n"
            "vmaddax.xyzw  ACC, $vf6, $vf10x\n"
            "vmaddax.xyzw  ACC, $vf8, $vf11x\n"
            "qmtc2.ni      %7, $vf12\n"
            "vmaddx.xyzw   $vf4, $vf5, $vf12x\n"
            "sqc2          $vf4, 0x0(%1)\n"
            : : "r"(w), "r"(poly), "r"(0xBE2AAAAB), "r"(0x3C088889), "r"(0xB9500D01),
                "r"(0x3638EF1D), "r"(0xB2D72F34), "r"(0x2F2EC9D3) : "memory");
        f1 = poly[0] / s;
        f2 = poly[1] / s;
    } else {
        f1 = 1.0f - t;
    }
    if (neg) {
        f2 = -f2;
    }
    w[0] = f1;
    w[4] = f2;
    __asm__ volatile(
        "lqc2          $vf4, 0x0(%1)\n"
        "lqc2          $vf5, 0x0(%2)\n"
        "lqc2          $vf6, 0x0(%3)\n"
        "lqc2          $vf7, 0x10(%3)\n"
        "vmulax.xyzw   ACC, $vf4, $vf6x\n"
        "vmaddx.xyzw   $vf12, $vf5, $vf7x\n"
        "sqc2          $vf12, 0x0(%0)\n"
        : : "r"(out), "r"(a), "r"(b), "r"(w) : "memory");
}
