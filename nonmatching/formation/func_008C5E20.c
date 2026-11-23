/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_001D7BE0(s32, s32);
void func_001D7CE0(s32, s32);
void func_001EEF60(s32, s32);
void func_001EF900(s32, s32);
void func_002DF0A0(s32, s32);
void func_008B9AB0(s32, s32, s32, s32);
void func_008C5110(s32, s32);

void func_008C5E20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s6 = a2;
    s5 = a0;
    s4 = a1;
    s3 = 0;
    (*(volatile u8 *) (u32) (a0 + 80)) = (u8) s4;
    s0 = s5;
    (*(volatile u8 *) (u32) (a0 + 81)) = (u8) s6;
L_008C5E60:;
    s2 = (*(volatile s32 *) (u32) (s0 + 88));
    a1 = 0;
    s1 = (*(volatile u8 *) (u32) (s5 + 8));
    a0 = s2; func_001EF900(a0, a1);
    v0 = s3 ^ s4;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 == 0) goto L_008C5EA8;
    a0 = s2;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0x80U); func_008C5110(a0, a1);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x80U); func_001EEF60(a0, a1);
L_008C5EA8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008C5E60; }
    v0 = (s32) ((u32) sp + 0xa0U);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s5 + 124)); goto L_008C5F30; }
    v0 = s4 < 5;
    if (v0 != 0) { v0 = 3; goto L_008C5EE4; }
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) 0; goto L_008C5F2C;
L_008C5EE4:;
    if (s4 == v0) { v0 = 173; goto L_008C5F14; }
    v0 = 2;
    if (s4 == v0) { v0 = 171; goto L_008C5F14; }
    v0 = 1;
    if (s4 == v0) { v0 = 169; goto L_008C5F14; }
    if (s4 == 0) { v0 = 168; goto L_008C5F14; }
    v0 = s6 & 0xff;
    v0 = (s32) ((u32) v0 + 0xaeU);
L_008C5F14:;
    if (v0 < 0) goto L_008C5F2C;
    a0 = (*(volatile s32 *) (u32) (s5 + 120));
    a2 = v0 & 0xffff;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_001D7A20(a0, a1, a2);
L_008C5F2C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 124));
L_008C5F30:;
    a1 = (s32) ((u32) sp + 0x90U); func_001D7BE0(a0, a1);
    f1.f = (*(volatile f32 *) (u32) (sp + 160));
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s5 + 124));
    a1 = (s32) ((u32) sp + 0x90U); func_001D7CE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s5 + 124));
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 112));
    a1 = (s32) ((u32) sp + 0xa0U); func_002DF0A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s5 + 112));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s5 + 9));
    v1 = 255;
    if (a0 == v1) { ; goto L_008C5F9C; }
    a0 = (*(volatile s32 *) (u32) (s5 + 116));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
L_008C5F9C:;
    return;
}
