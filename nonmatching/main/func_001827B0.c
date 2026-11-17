/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00104148(s32, s32, s32, s32, f32);
s32 func_00141010(s32, s32);
s32 func_00141300(s32);
s32 func_00153FD0(s32, s32, s32, s32);

s32 func_001827B0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };

    (*(volatile u32 *) (u32) a0) = (u32) a1;
    s0 = a0;
    (*(volatile u8 *) (u32) (a0 + 80)) = (u8) a2;
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_00141300(a0);
    v1 = (s32) 0x520000U;
    a1 = 1;
    a0 = (*(volatile s16 *) (u32) (v1 + -80));
    a2 = v0; v0 = func_00153FD0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_00141010(a0, a1);
    a1 = (s32) 0x370000U;
    a2 = (s32) 0x390000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = (s32) ((u32) a1 + 0x5b30U);
    a2 = (s32) ((u32) a2 + 0x7070U); v0 = func_00104148(a0, a1, a2, a3, f12.f);
    v1 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 + 0x7060U);
    __asm__ volatile("lqc2 $vf8, 0(%0)" : : "r"((u32) v1) : "memory");
    __asm__ volatile("lqc2 $vf4, 16(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf5, 32(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf6, 48(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("lqc2 $vf7, 64(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("vmulx.xyzw $vf4, $vf4, $vf8x");
    __asm__ volatile("vmuly.xyzw $vf5, $vf5, $vf8y");
    __asm__ volatile("vmulz.xyzw $vf6, $vf6, $vf8z");
    __asm__ volatile("vmulw.xyzw $vf7, $vf7, $vf8w");
    __asm__ volatile("sqc2 $vf4, 16(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf5, 32(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf6, 48(%0)" : : "r"((u32) s0) : "memory");
    __asm__ volatile("sqc2 $vf7, 64(%0)" : : "r"((u32) s0) : "memory");
    return v0;
}
