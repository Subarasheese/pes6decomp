/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001D7980(s64);
f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
void func_001DF460(s64, s64);
void func_001F3C80(s64);
void func_002DF0A0(s64, s64);
void func_008B9AB0(s64, s64, s64, s64);
s64 func_008C1490(s64, s64, s64, s64, f32);
s64 func_008C5050(s64);

void func_008D4B00(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    { s32 c_ = v1 == 0; s1 = 0; if (c_) goto L_008D4CDC; }
    v1 = (*(volatile s32 *) (u32) (s4 + 16));
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (s4 + 28)); goto L_008D4B50; }
    goto L_008D4CE0;
    v1 = (*(volatile s32 *) (u32) (s4 + 28));
L_008D4B50:;
    if (v1 == 0) goto L_008D4CDC;
    a0 = (*(volatile s32 *) (u32) (s4 + 32));
    if (a0 == 0) { v1 = 0; goto L_008D4B9C; }
    v0 = func_001D7980(a0);
    v0 = v0 & 0xff;
    v1 = 1;
    if (v0 != v1) goto L_008D4B98;
    if (s3 != 0) { s2 = 264; goto L_008D4B90; }
    s2 = 263; goto L_008D4B90;
    s2 = 264;
L_008D4B90:;
    s1 = 1; goto L_008D4BB0;
L_008D4B98:;
    v1 = 0;
L_008D4B9C:;
    if (s3 != 0) { s2 = 262; goto L_008D4BB0; }
    s2 = 261; goto L_008D4BB0;
    s2 = 262;
L_008D4BB0:;
    s0 = (s32) ((u32) v1 << 2);
    a2 = s2 & 0xffff;
    v0 = (s32) ((u32) s0 + (u32) s4);
    a1 = (s32) ((u32) sp + 0x90U);
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    s5 = (s32) ((u32) v0 + 0x1cU); v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s5);
    a1 = s2 & 0xffff; f0.f = func_001D79A0(a0, a1);
    f20.i = f0.i;
    a0 = 56;
    f1.f = (*(volatile f32 *) (u32) (sp + 144));
    a1 = (s32) ((u32) sp + 0x80U);
    f0.f = (*(volatile f32 *) (u32) (sp + 148));
    (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s2 = v0;
    a1 = (s64) ((u64) s1 << 48);
    a1 = a1 >> 48;
    a0 = s2; func_001D7D80(a0, a1, a2, a3);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = 265; v0 = func_001D7A20(a0, a1, a2);
    a0 = s2; func_001D7F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s4 + 8));
    f12.i = f20.i; func_001F3C80(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
    a1 = (s32) ((u32) sp + 0x90U); func_002DF0A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 16));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (a0 + 44));
    { s32 c_ = v1 == 0; s1 = (s32) ((u32) a0 + 0x2cU); if (c_) goto L_008D4CDC; }
    v1 = (*(volatile s32 *) (u32) (a0 + 52));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) a0 + 0x34U); if (c_) goto L_008D4CDC; }
    if (s3 != 0) { a0 = 1; goto L_008D4CAC; }
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    a0 = 1; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    goto L_008D4CDC;
    a0 = 1;
L_008D4CAC:;
    v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
    a0 = 0; v0 = func_008C5050(a0);
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF460(a0, a1);
L_008D4CDC:;
L_008D4CE0:;
    return;
}
