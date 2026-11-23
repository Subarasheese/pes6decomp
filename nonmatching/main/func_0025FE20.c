/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0025FE20(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[2];
    s64 sp = (s32) (u32) frame;

    if (a0 == 0) goto L_0025FF38;
    if (a1 == 0) goto L_0025FF38;
    v1 = (s32) 0x590000U;
    a4 = (s32) 0x3e0000U;
    a6 = (*(volatile s32 *) (u32) (v1 + -11552));
    a4 = (s32) ((u32) a4 + 0xffff91a0U);
    a7 = (*(volatile s16 *) (u32) a0);
    a2 = (s32) 0x590000U;
    a5 = (*(volatile s16 *) (u32) (a0 + 2));
    v1 = (s32) 0x590000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -11532));
    a0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (a0 + -11546));
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -11544));
    f2.i = (s32) f2.f;
    v1 = (s32) 0x590000U;
    a3 = (*(volatile s16 *) (u32) (v1 + -11548));
    f1.i = (s32) f1.f;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -11528));
    v1 = (s32) ((u32) a4 + (u32) a6);
    a4 = (s32) a3 >> 1;
    v1 = (*(volatile u8 *) (u32) v1);
    a6 = f2.i;
    a3 = (s32) a0 >> 1;
    f0.i = (s32) f0.f;
    a0 = (s64) ((u64) a6 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a7 - (u32) a0);
    a6 = (s64) ((u64) a0 << 48);
    a6 = a6 >> 48;
    a0 = f1.i;
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a6 - (u32) a0);
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    a0 = (s32) a0 >> (v1 & 31);
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a0 + (u32) a4);
    a4 = f0.i;
    (*(volatile u16 *) (u32) (sp + 12)) = (u16) a0;
    a0 = (*(volatile s16 *) (u32) (sp + 12));
    f0.f = (*(volatile f32 *) (u32) (a2 + -11540));
    f0.i = (s32) f0.f;
    a2 = (s64) ((u64) a4 << 48);
    (*(volatile u16 *) (u32) a1) = (u16) a0;
    a2 = a2 >> 48;
    a2 = (s32) ((u32) a5 - (u32) a2);
    a2 = (s64) ((u64) a2 << 48);
    a2 = a2 >> 48;
    a0 = f0.i;
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    a0 = (s32) ((u32) a2 - (u32) a0);
    a0 = (s64) ((u64) a0 << 48);
    a0 = a0 >> 48;
    v1 = (s32) a0 >> (v1 & 31);
    v1 = (s64) ((u64) v1 << 48);
    v1 = v1 >> 48;
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u16 *) (u32) (sp + 14)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (sp + 14));
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v1;
L_0025FF38:;
    return;
}
