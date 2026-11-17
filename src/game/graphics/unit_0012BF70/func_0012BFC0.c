/* compiler: ee-gcc-2.9 */
/* Written from the assembly; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

/* VU0 vector negate: out.xyz = -in.xyz, out.w = in.w (both multiplied, so the VU0's denormal flush
 * and quadword alignment apply as in the original). VU0 macro-mode instructions: no C form. */
void func_0012BFC0(void *out, void *in) {
    __asm__ volatile(
        "lqc2      $vf4, 0x0(%1)\n"
        "vsubw.x   $vf5, $vf0, $vf0w\n"
        "vmulx.xyz $vf6, $vf4, $vf5x\n"
        "vmulw.w   $vf6, $vf4, $vf0w\n"
        "sqc2      $vf6, 0x0(%0)\n"
        : : "r"(out), "r"(in) : "memory");
}
