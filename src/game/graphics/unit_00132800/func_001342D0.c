/* compiler: ee-gcc-2.9 */
/* Written from the assembly; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

/* VU0 3x3 transform: out = m[0]*v.x + m[1]*v.y + m[2]*v.z, all four lanes, accumulated in ACC.
 * VU0 macro-mode instructions: no C form. */
void func_001342D0(void *out, void *m, void *v) {
    __asm__ volatile(
        "lqc2          $vf4, 0x0(%1)\n"
        "lqc2          $vf5, 0x10(%1)\n"
        "lqc2          $vf6, 0x20(%1)\n"
        "lqc2          $vf8, 0x0(%2)\n"
        "vmulax.xyzw   ACC, $vf4, $vf8x\n"
        "vmadday.xyzw  ACC, $vf5, $vf8y\n"
        "vmaddz.xyzw   $vf9, $vf6, $vf8z\n"
        "sqc2          $vf9, 0x0(%0)\n"
        : : "r"(out), "r"(m), "r"(v) : "memory");
}
