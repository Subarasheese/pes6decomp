/* compiler: mwcc-3.0.1b151 */
/* Written from the assembly; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

f32 func_0011D5E0(f32);
f32 func_0011D468(f32);

/* Quaternion slerp: dst = q1 * wa + q2 * wb, with the weights from the angle between q1 and q2 (their
 * dot product, taken positive; q2's weight is negated when it was negative), or 1 - t and t when the
 * two are almost parallel. The dot product and the blend are VU0 macro-mode instructions: no C form. */
void func_0012B610(void *dst, void *q1, void *q2, f32 t) {
    f32 dot, a, s, m;
    s32 neg;

    __asm__ volatile(
        "lqc2          $vf4, 0x0(%1)\n"
        "lqc2          $vf5, 0x0(%2)\n"
        "vmul.xyzw     $vf5, $vf4, $vf5\n"
        "vaddax.w      ACC, $vf5, $vf5x\n"
        "vmadday.w     ACC, $vf0, $vf5y\n"
        "vmaddz.w      $vf5, $vf0, $vf5z\n"
        "vaddw.x       $vf6, $vf0, $vf5w\n"
        "qmfc2.ni      $v0, $vf6\n"
        "mtc1          $v0, %0\n"
        : "=f"(dot) : "r"(q1), "r"(q2) : "v0", "memory");
    if (dot < 0.0f) {
        dot = -dot;
        neg = 1;
    } else {
        neg = 0;
    }
    if (1.0f - dot > 0.00001f) {
        a = func_0011D5E0(dot);
        s = func_0011D468(a);
        m = func_0011D468((1.0f - t) * a);
        dot = t * a;
        a = m / s;
        t = func_0011D468(dot) / s;
    } else {
        a = 1.0f - t;
    }
    if (neg) {
        t = -t;
    }
    __asm__ volatile(
        "lqc2          $vf4, 0x0(%1)\n"
        "lqc2          $vf5, 0x0(%2)\n"
        "mfc1          $t0, %3\n"
        "nop\n"
        "qmtc2.ni      $t0, $vf6\n"
        "mfc1          $t0, %4\n"
        "nop\n"
        "qmtc2.ni      $t0, $vf7\n"
        "vmulax.xyzw   ACC, $vf4, $vf6x\n"
        "vmaddx.xyzw   $vf12, $vf5, $vf7x\n"
        "sqc2          $vf12, 0x0(%0)\n"
        : : "r"(dst), "r"(q1), "r"(q2), "f"(a), "f"(t) : "t0", "memory");
}
