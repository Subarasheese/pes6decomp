/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001A4AF0(void);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBF0(void);
void func_001CEC60(s32);
void func_001CEC70(void);
void func_001CECC0(s32);
void func_001CED30(s32, s32, s32, s32, f32);

void func_0018C530(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    f0.f = func_001A4AF0();
    v1 = (s32) 0x3d8f0000U;
    v1 = v1 | 0x5c29;
    f1.i = (s32) v1;
    fcc = f0.f < f1.f;
    if (fcc) goto L_0018C694;
    v0 = (s32) 0x3e0f0000U;
    v0 = v0 | 0x5c29;
    f1.i = (s32) v0;
    fcc = f0.f <= f1.f;
    if (fcc) goto L_0018C57C;
    f0.i = f1.i;
L_0018C57C:;
    v0 = (s32) 0x3d8f0000U;
    v1 = (s32) 0x437a0000U;
    v0 = v0 | 0x5c29;
    a3 = (s32) ((u32) sp + 0x12U);
    f1.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x11U);
    f0.f = f0.f - f1.f;
    v0 = 128;
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    (*(volatile u8 *) (u32) a1) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 16)) = (u8) v0;
    f2.f = f0.f / f1.f;
    v0 = (s32) 0x4f000000U;
    f1.i = (s32) v1;
    f0.i = (s32) v0;
    f1.f = f1.f * f2.f;
    fcc = f0.f <= f1.f;
    { s32 c_ = fcc; a0 = (s32) ((u32) sp + 0x13U); if (c_) goto L_0018C5DC; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xff; goto L_0018C5F8;
L_0018C5DC:;
    f0.f = f1.f - f0.f;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xff;
L_0018C5F8:;
    a2 = (*(volatile u8 *) (u32) a1);
    a5 = (s32) ((u32) sp + 0x18U);
    (*(volatile u8 *) (u32) a0) = (u8) v1;
    v0 = (s32) ((u32) sp + 0x14U);
    v1 = (*(volatile u8 *) (u32) a0);
    a4 = (*(volatile u8 *) (u32) (sp + 16));
    (*(volatile u8 *) (u32) (sp + 22)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 21)) = (u8) 0;
    a1 = (*(volatile u8 *) (u32) a3);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
    (*(volatile u8 *) (u32) (a5 + 1)) = (u8) a2;
    a0 = 256;
    (*(volatile u8 *) (u32) (a5 + 3)) = (u8) v1;
    a2 = (*(volatile u8 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v0 + 2));
    (*(volatile u8 *) (u32) (a5 + 2)) = (u8) a1;
    a3 = (s32) ((u32) sp + 0x1cU);
    a1 = (*(volatile u8 *) (u32) (v0 + 1));
    (*(volatile u8 *) (u32) (sp + 23)) = (u8) 0;
    (*(volatile u8 *) (u32) a5) = (u8) a4;
    (*(volatile u8 *) (u32) a3) = (u8) a2;
    (*(volatile u8 *) (u32) (a3 + 2)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    (*(volatile u8 *) (u32) (a3 + 1)) = (u8) a1;
    (*(volatile u8 *) (u32) (a3 + 3)) = (u8) v0; func_001CECC0(a0);
    func_001CEB90();
    a0 = 72; func_001CEC60(a0);
    func_001CEBF0();
    func_001CEAB0();
    f12.i = (s32) 0;
    a0 = (s32) ((u32) sp + 0x10U); func_001CED30(a0, a1, a2, a3, f12.f);
    func_001CEC70();
L_0018C694:;
    return;
}
