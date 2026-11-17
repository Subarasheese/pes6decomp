/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DC900(s32);
void func_001EE890(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);

void func_00C89360(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    at = (u64) a0 < (u64) (s64) 127;
    { s32 c_ = at == 0; s1 = a1; if (c_) goto L_00C89430; }
    v1 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffce4cU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = s1 == 0; s0 = (*(volatile s32 *) (u32) v1); if (c_) goto L_00C89430; }
    v0 = (*(volatile u16 *) (u32) (s1 + 20));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00C893AC; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00C893C4;
L_00C893AC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00C893C4:;
    v0 = (*(volatile u16 *) (u32) (s1 + 22));
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00C893DC; }
    f0.i = (s32) v0;
    f0.f = (f32) f0.i; goto L_00C893F4;
L_00C893DC:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_00C893F4:;
    (*(volatile f32 *) (u32) (sp + 48)) = f12.f;
    a0 = s1;
    (*(volatile f32 *) (u32) (sp + 52)) = f13.f;
    (*(volatile f32 *) (u32) (sp + 56)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 60)) = f0.f; v0 = func_001DC900(a0);
    a1 = v0;
    a0 = s0; func_001EEAC0(a0, a1);
    a1 = (s32) ((u32) s1 + 0x1cU);
    a0 = s0; func_001EE890(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x30U); func_001EF370(a0, a1);
L_00C89430:;
    return;
}
