/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDD00(s32, s32, s32, s32);
void func_001EE890(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);

void func_00C89BB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (u64) a0 < (u64) (s64) 127;
    s2 = a1;
    s1 = a2;
    s0 = a4;
    f21.i = f12.i;
    { s32 c_ = v1 != 0; f20.i = f13.i; if (c_) goto L_00C89BF4; }
    s3 = 0; goto L_00C89C64;
L_00C89BF4:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffce4cU);
    a0 = a3;
    s3 = (s32) ((u32) v0 + (u32) v1); v0 = func_001EDD00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    a0 = v0;
    s3 = v0;
    a1 = 1; func_001EF900(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 112)) = f21.f;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    (*(volatile f32 *) (u32) (sp + 116)) = f20.f;
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) 0; func_001EF860(a0, a1);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0; func_001EF370(a0, a1);
    a1 = s0;
    a0 = s3; func_001EEAC0(a0, a1);
L_00C89C64:;
    if (s3 == 0) { ; goto L_00C89C90; }
    a1 = s2;
    a0 = s3; func_001EF370(a0, a1);
    if (s1 == 0) goto L_00C89C8C;
    a0 = s3;
    a1 = s1; func_001EE890(a0, a1);
L_00C89C8C:;
L_00C89C90:;
    return;
}
