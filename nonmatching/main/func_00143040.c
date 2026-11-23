/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Camera_GetViewMatrix(s32, s32, s32, s32);
s32 func_00129B60(s32, s32, s32, s32);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_00143040(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) (a0 + 96));
    { s32 c_ = v0 != 0; v1 = a1; if (c_) goto L_00143060; }
    v0 = 0; goto L_00143124;
L_00143060:;
    s0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    if (v0 != 0) { a1 = a2; goto L_00143078; }
    v0 = 0; goto L_00143124;
L_00143078:;
    a2 = (*(volatile s32 *) (u32) (v1 + 28));
    a0 = (s32) ((u32) sp + 0x20U); v0 = sceVu0MulMatrix(a0, a1, a2);
    v0 = Pes6Camera_GetViewMatrix(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = v0;
    a2 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    v0 = func_00129B60(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = v0;
    a2 = a0; v0 = sceVu0MulMatrix(a0, a1, a2);
    v0 = (s32) ((u32) sp + 0x20U);
    __asm__ volatile("lqc2 $vf4, 0(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf5, 16(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf6, 32(%0)" : : "r"((u32) v0) : "memory");
    __asm__ volatile("lqc2 $vf7, 48(%0)" : : "r"((u32) v0) : "memory");
    a0 = 63;
    v1 = 0;
L_001430D0:;
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("vmulaw.xyzw ACC, $vf7, $vf0w");
    __asm__ volatile("vmaddaz.xyzw ACC, $vf6, $vf8z");
    __asm__ volatile("vmadday.xyzw ACC, $vf5, $vf8y");
    __asm__ volatile("vmaddx.xyzw $vf8, $vf4, $vf8x");
    __asm__ volatile("vclipw.xyz $vf8, $vf8w");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    __asm__ volatile("vnop");
    { s32 t_; __asm__ volatile("cfc2.ni %0, $vi18" : "=r"(t_)); v0 = t_; }
    a0 = a0 & v0;
    if (a0 != 0) { v1 = (s32) ((u32) v1 + 0x1U); goto L_00143114; }
    v0 = 0; goto L_00143124;
L_00143114:;
    v0 = v1 < 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x10U); if (c_) goto L_001430D0; }
    v0 = 1;
L_00143124:;
    return;
}
