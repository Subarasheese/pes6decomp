/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_008BAC60(s32);
void func_008E34E0(s32, s32, s32, s32);
void func_008E3950(s32);
void func_008E5BC0(s32, s32);

void func_008E5D20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    if (s0 == 0) { ; goto L_008E5DC4; }
    s2 = 0;
    s1 = s0;
L_008E5D48:;
    f0.f = (*(volatile f32 *) (u32) (s1 + 188));
    a0 = s0;
    a1 = s2;
    (*(volatile f32 *) (u32) (s1 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s1 + 192));
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f; func_008E5BC0(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x8U); if (c_) goto L_008E5D48; }
    v1 = (*(volatile u8 *) (u32) (s0 + 478));
    v0 = 5;
    if (v1 != v0) { a0 = s0; goto L_008E5D90; }
    a0 = s0; func_008E34E0(a0, a1, a2, a3);
    a0 = s0;
L_008E5D90:;
    func_008E3950(a0);
    a0 = (s32) ((u32) sp + 0x4cU); func_008BAC60(a0);
    s1 = 0;
L_008E5DA4:;
    a0 = (*(volatile s32 *) (u32) (s0 + 1744));
    a1 = (s32) ((u32) sp + 0x4cU); func_001EEE60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008E5DA4; }
L_008E5DC4:;
    return;
}
