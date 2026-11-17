/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002744C0(s32, s32, s32, f32, f32);
void func_00B9A770(s32, s32, s32, s32, s32, f32, f32);

void func_00B9CB40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = 1;
    v0 = (s32) 0xcc0000U;
    a3 = 0;
    s3 = a0;
    s2 = a1;
    s1 = a2;
    a4 = (*(volatile s32 *) (u32) (a2 + 4));
    a0 = (s32) ((u32) sp + 0x50U);
    a4 = (*(volatile s32 *) (u32) (a4 + 4));
    s0 = (*(volatile u8 *) (u32) (a4 + 12));
    (*(volatile u8 *) (u32) (v0 + -12812)) = (u8) v1;
    a4 = s0; func_00B9A770(a0, a1, a2, a3, a4, f12.f, f13.f);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9981));
    if (v1 != 0) goto L_00B9CBDC;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -12824));
    if (v1 != 0) goto L_00B9CBDC;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -11616));
    if (v1 != 0) goto L_00B9CBDC;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 7692));
    if (v1 == 0) goto L_00B9CBDC;
    a0 = s2;
    a1 = s1;
    a2 = (s32) ((u32) sp + 0x5cU); func_002744C0(a0, a1, a2, f12.f, f13.f);
L_00B9CBDC:;
    v1 = (*(volatile u16 *) (u32) (sp + 84));
    at = 0 < v1;
    if (at == 0) goto L_00B9CBFC;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -12826)) = (u8) s0;
    (*(volatile u8 *) (u32) (a0 + -12827)) = (u8) 0;
L_00B9CBFC:;
    f2.f = (*(volatile f32 *) (u32) (sp + 80));
    f1.f = (*(volatile f32 *) (u32) (sp + 84));
    f0.f = (*(volatile f32 *) (u32) (sp + 88));
    (*(volatile f32 *) (u32) s3) = f2.f;
    (*(volatile f32 *) (u32) (s3 + 4)) = f1.f;
    (*(volatile f32 *) (u32) (s3 + 8)) = f0.f;
    return;
}
