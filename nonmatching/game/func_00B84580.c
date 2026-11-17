/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00B2A6E0(s32, s32, s32, s32, f32, f32);
void func_00B84790(s32, s32, s32, s32, s32, f32);

void func_00B84580(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = a2;
    a2 = (s32) ((u32) sp + 0x5eU);
    s2 = a0;
    s1 = a1;
    v0 = (*(volatile s32 *) (u32) a0);
    f21.f = (*(volatile f32 *) (u32) (v0 + 224));
    s0 = (*(volatile u16 *) (u32) (v0 + 38));
    f20.f = (*(volatile f32 *) (u32) (v0 + 232));
    a1 = (s32) ((u32) sp + 0x50U); func_00B2A6E0(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) ((u32) s1 << 1);
    a0 = s2;
    f0.i = (s32) v0;
    f1.f = (*(volatile f32 *) (u32) (sp + 80));
    v0 = (*(volatile s32 *) (u32) s2);
    f12.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 224)) = f1.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 84));
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v0 + 232)) = f0.f;
    v1 = (*(volatile u16 *) (u32) (sp + 94));
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile u16 *) (u32) (v0 + 38)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    a2 = (*(volatile u16 *) (u32) (v1 + 38));
    a1 = (*(volatile u16 *) (u32) (v0 + 48));
    a3 = (*(volatile u8 *) (u32) (v0 + 45));
    a4 = 1; func_00B84790(a0, a1, a2, a3, a4, f12.f);
    v1 = (s32) 0x590000U;
    a2 = (s32) ((u32) s1 << 2);
    f2.f = (*(volatile f32 *) (u32) (v1 + 7788));
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffcc70U);
    a1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) 0x590000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7792));
    (*(volatile f32 *) (u32) a1) = f2.f;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffcc90U);
    a0 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7796));
    (*(volatile f32 *) (u32) a0) = f1.f;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffccb0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    (*(volatile f32 *) (u32) v1) = f0.f;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v1 + 224)) = f21.f;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile f32 *) (u32) (v1 + 232)) = f20.f;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile u16 *) (u32) (v1 + 38)) = (u16) s0;
    return;
}
