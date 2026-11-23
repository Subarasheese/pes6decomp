/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00134120(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0;

    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) a0) : "memory");
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) a1) : "memory");
    __asm__ volatile("lqc2 $vf9, 16(%0)" : : "r"((u32) a1) : "memory");
    v1 = 63;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf8x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf9z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf8x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf9y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf8x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf9z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf9y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf8x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf9x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf9z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf9x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf9y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf9x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf9z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf9y");
    __asm__ volatile("vmaddx.xyzw $vf1, $vf4, $vf9x");
    __asm__ volatile("vclipw.xyz $vf1, $vf1w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    v1 = v1 & v0;
    v0 = (u64) 0 < (u64) v1; return;
}
