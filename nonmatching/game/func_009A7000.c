/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009A8760(s32, s32, s32, s32, f32, f32, f32, f32);

void func_009A7000(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = 0;
    if (a0 != 0) goto L_009A7024;
    v1 = 1;
L_009A7014:;
    if (v0 == v1) goto L_009A707C;
    v0 = 0; goto L_009A7098;
L_009A7024:;
    v1 = (s32) ((u32) sp + 0x10U);
    { s32 c_ = v1 == 0; v0 = 12; if (c_) goto L_009A704C; }
L_009A7030:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_009A7030;
L_009A704C:;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a0;
    (*(volatile f32 *) (u32) (sp + 16)) = f12.f;
    a1 = (*(volatile u8 *) (u32) (sp + 28));
    a0 = (s32) 0xcb0000U;
    a3 = (*(volatile s8 *) (u32) (sp + 29));
    a2 = (s32) ((u32) sp + 0x10U);
    (*(volatile f32 *) (u32) (sp + 20)) = f13.f;
    a0 = (s32) ((u32) a0 + 0x7730U);
    (*(volatile f32 *) (u32) (sp + 24)) = f14.f; v0 = func_009A8760(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v1 = 1; goto L_009A7014;
L_009A707C:;
    a0 = (s32) 0xcc0000U;
    v0 = v1;
    a0 = (s32) ((u32) a0 + 0xffffa918U);
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 214));
    v1 = v1 | 0x2;
    (*(volatile u8 *) (u32) (a0 + 214)) = (u8) v1;
L_009A7098:;
    return;
}
