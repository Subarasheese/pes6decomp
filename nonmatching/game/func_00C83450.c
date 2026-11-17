/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C85950(s32);
s32 func_00C8B100(s32);
void memcpy(s32, s32, s32);

void func_00C83450(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0xcd0000U;
    a2 = (s32) ((u32) a2 + 0xffffcc54U);
    s1 = a0;
    v1 = (s32) ((u32) s1 << 2);
    a3 = (s32) ((u32) v1 + (u32) s1);
    a0 = (s32) ((u32) a3 << 1);
    s0 = (s32) ((u32) a3 << 6);
    v1 = (s32) 0xcd0000U;
    a3 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) ((u32) v1 + 0xffffc2a0U);
    a3 = (s32) ((u32) a3 << 2);
    a0 = (s32) ((u32) v1 + (u32) s0);
    a2 = (s32) ((u32) a2 + (u32) a3);
    v1 = (*(volatile s32 *) (u32) a0);
    a2 = (*(volatile s32 *) (u32) a2);
    if (a2 != v1) goto L_00C834AC;
    if (a1 == 0) { ; goto L_00C8359C; }
L_00C834AC:;
    v1 = (s32) 0xcd0000U;
    at = a2 < 10;
    v1 = (s32) ((u32) v1 + 0xffffc200U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) v1) = (u32) 0; if (c_) goto L_00C83598; }
    (*(volatile u32 *) (u32) a0) = (u32) a2;
    v0 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a2 << 4);
    a0 = (s32) ((u32) v1 + 0xa8U);
    v0 = (s32) ((u32) v0 + 0x4dd0U);
    a2 = 48;
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x4dd8U);
    v0 = (s32) ((u32) v0 + (u32) a1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f1.f = (*(volatile f32 *) (u32) v1);
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x4dd4U);
    v1 = (s32) 0x3f800000U;
    v0 = (s32) ((u32) v0 + (u32) a1);
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1;
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v1;
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v1;
    f1.f = (*(volatile f32 *) (u32) v0);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) v1;
    (*(volatile f32 *) (u32) (sp + 52)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x4ddcU);
    v0 = (s32) ((u32) v0 + (u32) a1);
    f0.f = (*(volatile f32 *) (u32) v0);
    a1 = (s32) ((u32) sp + 0x30U);
    (*(volatile f32 *) (u32) (sp + 60)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    (*(volatile f32 *) (u32) (sp + 88)) = f0.f; memcpy(a0, a1, a2);
    v0 = (s32) 0xcd0000U;
    a2 = (s32) 0x41300000U;
    v0 = (s32) ((u32) v0 + 0xffffc2f4U);
    v1 = (s32) 0x41400000U;
    a1 = (s32) ((u32) v0 + (u32) s0);
    a0 = s1;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) a1) = (u32) a2;
    v0 = (s32) ((u32) v0 + 0xffffc2f8U);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) v0) = (u32) v1; func_00C85950(a0);
    a0 = 1; v0 = func_00C8B100(a0);
    v1 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 + 0xffffc2e8U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_00C83598:;
L_00C8359C:;
    return;
}
