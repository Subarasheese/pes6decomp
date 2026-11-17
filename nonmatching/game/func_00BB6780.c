/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001A55F0(void);
void func_001A56D0(f32, f32);
s32 func_009B4580(void);
void func_00BB7100(s32, s32);

void func_00BB6780(s32 a0, s32 a1, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { 0 };
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0x3f800000U;
    (*(volatile u8 *) (u32) (v0 + -11792)) = (u8) 0;
    s0 = a0 & 0xffff;
    v0 = (s32) 0xcc0000U;
    a0 = (s32) 0x40800000U;
    (*(volatile u32 *) (u32) (v0 + -11724)) = (u32) v1;
    v0 = (s32) 0xcc0000U;
    v1 = 1;
    (*(volatile u32 *) (u32) (v0 + -11744)) = (u32) a0;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -11790)) = (u8) v1;
    v0 = s0 < 300;
    if (v0 != 0) goto L_00BB681C;
    v1 = 300;
    v0 = (s32) 0xcc0000U;
    (*(volatile u16 *) (u32) (v0 + -11788)) = (u16) v1;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -11791)) = (u8) 0;
L_00BB67DC:;
    a0 = 0;
    a1 = (s32) ((u32) sp + 0x20U); func_00BB7100(a0, a1);
    f13.f = (*(volatile f32 *) (u32) (sp + 36));
    f14.f = (*(volatile f32 *) (u32) (sp + 40));
    f12.f = (*(volatile f32 *) (u32) (sp + 32)); func_001A55F0();
    v0 = (s32) 0x461c0000U;
    v1 = (s32) 0x447a0000U;
    v0 = v0 | 0x4000;
    f12.i = (s32) v1;
    f13.i = (s32) v0;
    func_001A56D0(f12.f, f13.f);
    goto L_00BB68A8;
L_00BB681C:;
    v0 = func_009B4580();
    v0 = v0 & 0xffff;
    at = s0 < v0;
    if (at == 0) goto L_00BB6858;
    v0 = func_009B4580();
    v1 = v0 & 0xffff;
    v0 = 300;
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) s0 + (u32) v1);
    (*(volatile u16 *) (u32) (v0 + -11788)) = (u16) v1; goto L_00BB6870;
L_00BB6858:;
    v0 = func_009B4580();
    v1 = v0 & 0xffff;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) s0 - (u32) v1);
    (*(volatile u16 *) (u32) (v0 + -11788)) = (u16) v1;
L_00BB6870:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -11788));
    at = v0 < 18;
    if (at == 0) { v1 = 1; goto L_00BB689C; }
    v1 = 300;
    v0 = (s32) 0xcc0000U;
    (*(volatile u16 *) (u32) (v0 + -11788)) = (u16) v1;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -11791)) = (u8) 0; goto L_00BB67DC;
L_00BB689C:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -11791)) = (u8) v1; goto L_00BB67DC;
L_00BB68A8:;
    return;
}
