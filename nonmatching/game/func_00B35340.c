/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00270500(s32);
void func_00270530(s32, s32);
void func_009A7000(s32, f32, f32, f32, f32);
s32 func_009A70B0(s32, f32, f32);
void func_00A08ED0(s32, s32, s32, s32, f32);

void func_00B35340(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0xca0000U;
    a2 = (s32) ((u32) a2 + 0xffffa620U);
    a1 = (s32) ((u32) sp + 0x90U);
    s0 = a0;
    a0 = 9;
L_00B35374:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x1U);
    if (a0 > 0) goto L_00B35374;
    a0 = (*(volatile s32 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x46520000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00B35444;
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x44700000U;
    v1 = v1 | 0xc000;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00B35444;
    a1 = (s32) ((u32) sp + 0x70U); func_00270530(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_00270500(a0);
    f12.f = (*(volatile f32 *) (u32) (sp + 112));
    f13.f = (*(volatile f32 *) (u32) (sp + 120));
    a0 = v0; v0 = func_009A70B0(a0, f12.f, f13.f);
    s3 = v0;
    s5 = 0;
    s4 = (s32) ((u32) sp + 0x90U);
    s2 = (s32) ((u32) sp + 0x88U);
    s1 = (s32) ((u32) sp + 0x84U);
L_00B35410:;
    a1 = (*(volatile u8 *) (u32) s4);
    a0 = (*(volatile s32 *) (u32) s0);
    a2 = (s32) ((u32) sp + 0x80U); func_00A08ED0(a0, a1, a2, a3, f12.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 128));
    f13.f = (*(volatile f32 *) (u32) s1);
    f14.f = (*(volatile f32 *) (u32) s2);
    a0 = s3; func_009A7000(a0, f12.f, f13.f, f14.f, f15.f);
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 9;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x1U); if (c_) goto L_00B35410; }
L_00B35444:;
    return;
}
