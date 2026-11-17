/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009F0020(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    v0 = 255;
    if (v1 == v0) { a1 = 1; goto L_009F0040; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a1 = hi;
L_009F0040:;
    a0 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 + (u32) a1);
    a5 = (s32) 0x590000U;
    a2 = (s32) ((u32) a1 << 6);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v0 = (s32) ((u32) v0 + (u32) a2);
    a0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 20));
    a7 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe7f0U);
    a1 = 0;
    a5 = (s32) ((u32) a5 + 0x1e00U);
    a3 = -9241;
    a2 = -8473;
    a6 = 255;
    a7 = (s32) ((u32) a7 + 0x2980U);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
L_009F0090:;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_009F0130;
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    t5 = (*(volatile u8 *) (u32) (a0 + 17));
    a4 = (s32) ((u32) v0 << 4);
    t4 = (s32) ((u32) a4 - (u32) v0);
    a4 = (s32) ((u32) t5 << 4);
    t5 = (s32) ((u32) a4 - (u32) t5);
    a4 = (s32) ((u32) t4 << 3);
    a4 = (s32) ((u32) a4 - (u32) t4);
    t4 = (s32) ((u32) t5 << 3);
    a4 = (s32) ((u32) a4 << 8);
    t4 = (s32) ((u32) t4 - (u32) t5);
    a4 = (s32) ((u32) a7 + (u32) a4);
    t4 = (s32) ((u32) t4 << 3);
    a4 = (s32) ((u32) t4 + (u32) a4);
    a4 = (*(volatile u8 *) (u32) (a4 + 212));
    if (a4 == 0) goto L_009F0130;
    a4 = (*(volatile u8 *) (u32) (a0 + 22));
    if (a4 == a6) goto L_009F0130;
    a4 = (*(volatile u8 *) (u32) a0);
    if (a4 == v1) goto L_009F0130;
    a4 = (s32) ((u32) a5 + (u32) v0);
    a4 = (*(volatile u8 *) (u32) (a4 + 103));
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    v0 = a3;
    if (a4 != 0) v0 = a2;
    f2.i = (s32) v0;
    f0.f = f1.f * f0.f;
    f2.f = (f32) f2.i;
    fcc = f0.f < f2.f;
    if (!fcc) goto L_009F0130;
    v0 = 1; goto L_009F0144;
L_009F0130:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 22;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x240U); if (c_) goto L_009F0090; }
    v0 = 0;
L_009F0144:;
    return v0;
}
