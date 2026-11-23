/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001047E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0;

    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a3) : "memory");
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a2) : "memory");
    __asm__ volatile("lqc2 $vf9, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf10, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf11, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf12, 0(%0)" : : "r"((u32) a1) : "memory");
L_00104804:;
    __asm__ volatile("vmulax.xyzw ACC, $vf4, $vf8x");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmaddw.xyzw $vf8, $vf7, $vf8w");
    __asm__ volatile("vmulw.xyz $vf11, $vf9, $vf8w");
    __asm__ volatile("vmulw.xyz $vf12, $vf10, $vf8w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("ctc2.ni %0, $vi16" : : "r"((s32) 0));
    __asm__ volatile("vsub.xyw $vf11, $vf8, $vf11");
    __asm__ volatile("vsub.xyw $vf12, $vf12, $vf8");
    __asm__ volatile("vmove.w $vf11, $vf9");
    __asm__ volatile("vmove.w $vf12, $vf10");
    __asm__ volatile("vnop");
    a3 = (s32) ((u32) a3 + 0x10U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a3) : "memory");
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi16" : "=r"(t_)); v0 = t_; }
    v0 = v0 & 0xc0;
    if (v0 == 0) goto L_00104864;
    if (0 != a4) goto L_00104804;
    v0 = 1;
L_00104864:;
    return v0;
}
