/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EEE60(s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
void func_008BAC60(s32);
s32 func_008BB870(s32, s32, s32, s32);

void func_008D5A50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (a0 + 80));
    { s32 c_ = v1 == 0; s0 = a2; if (c_) goto L_008D5B54; }
    a0 = a1 & 0xff;
    at = a0 < 11;
    if (at == 0) { ; goto L_008D5B58; }
    v1 = s0 & 0xff;
    at = v1 < 11;
    if (at == 0) goto L_008D5B54;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 112));
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    v0 = s0 & 0xff;
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile f32 *) (u32) (sp + 80)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 84)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 156));
    a1 = (s32) ((u32) sp + 0x30U); func_001EE5D0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 48));
    a1 = 0;
    f0.f = (*(volatile f32 *) (u32) (sp + 52));
    (*(volatile f32 *) (u32) (sp + 72)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s0 = v0;
    a1 = (s32) ((u32) sp + 0x50U);
    a0 = s0;
    a2 = (s32) ((u32) sp + 0x48U);
    a3 = 5; v0 = func_008BB870(a0, a1, a2, a3);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x5cU);
    v0 = 255;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) 0; func_001EEE60(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = (s32) ((u32) sp + 0x48U);
    a3 = 3; v0 = func_008BB870(a0, a1, a2, a3);
    s0 = v0;
    a0 = (s32) ((u32) sp + 0x5cU); func_008BAC60(a0);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
    (*(volatile u32 *) (u32) (s1 + 252)) = (u32) s0;
L_008D5B54:;
L_008D5B58:;
    return;
}
