/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_008BAC60(s32);
s32 func_008BB870(s32, s32, s32, s32);

s32 func_008E3330(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile s32 *) (u32) (a0 + 484));
    { s32 c_ = v0 != 0; s0 = a1; if (c_) goto L_008E3354; }
    v0 = 0; goto L_008E34C4;
L_008E3354:;
    a5 = (*(volatile u8 *) (u32) (v0 + 35));
    a1 = a2 & 0xff;
    v0 = a1 < a5;
    if (v0 != 0) { v1 = a3 & 0xff; goto L_008E3370; }
    v0 = 0; goto L_008E34C4;
L_008E3370:;
    v0 = v1 < a5;
    if (v0 != 0) goto L_008E3384;
    v0 = 0; goto L_008E34C4;
L_008E3384:;
    if (a1 != v1) goto L_008E3394;
    v0 = 0; goto L_008E34C4;
L_008E3394:;
    v0 = (s32) 0x8f0000U;
    a1 = a4 & 0xff;
    v0 = (*(volatile u8 *) (u32) (v0 + -8728));
    at = v0 < a1;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_008E33D0; }
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffdde8U);
L_008E33B4:;
    v0 = (s32) ((u32) s1 + 0x1U);
    s1 = v0 & 0xff;
    v0 = (s32) ((u32) v1 + (u32) s1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = v0 < a1;
    if (at != 0) goto L_008E33B4;
L_008E33D0:;
    a1 = s1 & 0xff;
    if (a1 != 0) { v1 = a2 & 0xff; goto L_008E33E4; }
    v0 = 0; goto L_008E34C4;
L_008E33E4:;
    v0 = a3 & 0xff;
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 4));
    at = a1 < 2;
    (*(volatile f32 *) (u32) (sp + 64)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 8));
    (*(volatile f32 *) (u32) (sp + 68)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 8));
    { s32 c_ = at != 0; (*(volatile f32 *) (u32) (sp + 60)) = f0.f; if (c_) goto L_008E3454; }
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = (s32) ((u32) sp + 0x38U);
    a3 = 5; v0 = func_008BB870(a0, a1, a2, a3);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x4cU);
    v0 = 255;
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) 0; func_001EEE60(a0, a1);
L_008E3454:;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = (s32) ((u32) sp + 0x38U);
    a3 = 3; v0 = func_008BB870(a0, a1, a2, a3);
    v1 = (s32) 0x8f0000U;
    s0 = v0;
    a0 = s1 & 0xff;
    v1 = (s32) ((u32) v1 + 0xffffdde8U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 255;
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_008E34A8;
    a0 = (s32) ((u32) sp + 0x4cU); func_008BAC60(a0);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x4cU); func_001EEE60(a0, a1);
    v0 = s0; goto L_008E34C4;
L_008E34A8:;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc590U);
    a0 = s0;
    a1 = (s32) ((u32) v0 + (u32) v1); func_001EEE60(a0, a1);
    v0 = 0;
L_008E34C4:;
    return v0;
}
