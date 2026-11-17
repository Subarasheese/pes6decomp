/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* VU0 four-component dot product a.xyzw . b.xyzw, summed through ACC in the order w, x, y, z.
 * VU0 macro-mode instructions: no C form. */
f32 func_0012BEF0(void *a, void *b) {
    union { s32 i; f32 f; } r;

    __asm__ volatile(
        "lqc2         $vf4, 0x0(%1)\n"
        "lqc2         $vf5, 0x0(%2)\n"
        "vmul.xyzw    $vf5, $vf4, $vf5\n"
        "vaddax.w     ACC, $vf5, $vf5x\n"
        "vmadday.w    ACC, $vf0, $vf5y\n"
        "vmaddz.w     $vf5, $vf0, $vf5z\n"
        "vaddw.x      $vf6, $vf0, $vf5w\n"
        "qmfc2.ni     %0, $vf6\n"
        : "=r"(r.i) : "r"(a), "r"(b));
    return r.f;
}
