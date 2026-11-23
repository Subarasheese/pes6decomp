/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0025FD10(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    if (a0 == 0) goto L_0025FE18;
    if (a1 == 0) goto L_0025FE18;
    v1 = (s32) 0x590000U;
    a6 = (s32) 0x3e0000U;
    a7 = (*(volatile s32 *) (u32) (v1 + -11552));
    a6 = (s32) ((u32) a6 + 0xffff91a0U);
    a5 = (*(volatile s16 *) (u32) (a0 + 2));
    a3 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) 0x590000U;
    a6 = (s32) ((u32) a6 + (u32) a7);
    a4 = (*(volatile s16 *) (u32) (v1 + -11546));
    a6 = (*(volatile u8 *) (u32) a6);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a4 = (s32) a4 >> 1;
    f1.f = (*(volatile f32 *) (u32) (v1 + -11540));
    a4 = (s32) ((u32) a5 - (u32) a4);
    a4 = (s64) ((u64) a4 << 48);
    a4 = a4 >> 48;
    v1 = (s32) 0x590000U;
    a2 = (*(volatile s16 *) (u32) (v1 + -11548));
    f1.i = (s32) f1.f;
    v1 = (s32) 0x590000U;
    a2 = (s32) a2 >> 1;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11544));
    a2 = (s32) ((u32) a3 - (u32) a2);
    a2 = (s64) ((u64) a2 << 48);
    a3 = (s32) ((u32) a4 << (a6 & 31));
    a2 = a2 >> 48;
    a4 = (s64) ((u64) a3 << 48);
    a2 = (s32) ((u32) a2 << (a6 & 31));
    a4 = a4 >> 48;
    a3 = (s64) ((u64) a2 << 48);
    a2 = f1.i;
    a3 = a3 >> 48;
    f0.i = (s32) f0.f;
    v1 = (s32) 0x590000U;
    a2 = (s64) ((u64) a2 << 48);
    a2 = a2 >> 48;
    a2 = (s32) ((u32) a4 + (u32) a2);
    a4 = (s64) ((u64) a2 << 48);
    a4 = a4 >> 48;
    a2 = f0.i;
    f0.f = (*(volatile f32 *) (u32) (a0 + -11532));
    f0.i = (s32) f0.f;
    a0 = (s64) ((u64) a2 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a3 + (u32) a0);
    a2 = (s64) ((u64) a0 << 48);
    a2 = a2 >> 48;
    a0 = f0.i;
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a2 + (u32) a0);
    (*(volatile u16 *) (u32) a1) = (u16) a0;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11528));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    v1 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v1;
L_0025FE18:;
    return v0;
}
