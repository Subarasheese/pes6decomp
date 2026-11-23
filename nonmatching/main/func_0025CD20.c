/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EF2C0(s32, s32);
void func_0025DCB0(void);

void func_0025CD20(s32 a0, s32 a1, s32 a2, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    v1 = (s32) ((u32) s0 << 4);
    a0 = (s32) ((u32) v1 - (u32) s0);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcfe0U);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) ((u32) v1 + (u32) a1);
    v1 = 16;
    f20.i = f12.i;
    { s32 c_ = a0 == 0; a2 = (s32) ((u32) a1 + 0x1cU); if (c_) goto L_0025CD7C; }
L_0025CD60:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_0025CD60;
L_0025CD7C:;
    v1 = 3;
    (*(volatile f32 *) (u32) (sp + 48)) = f20.f;
    { s32 c_ = s0 == v1; (*(volatile f32 *) (u32) (sp + 52)) = f20.f; if (c_) goto L_0025CDD8; }
    (*(volatile f32 *) (u32) (a2 + 40)) = f20.f;
    a0 = (*(volatile s32 *) (u32) a2);
    a1 = (s32) ((u32) sp + 0x30U); func_001EF2C0(a0, a1);
    v1 = 1;
    if (s0 == v1) goto L_0025CDB0;
L_0025CDA8:;
    goto L_0025CDDC;
L_0025CDB0:;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) ((u32) v0 + 0xffffd0b0U);
    a0 = (*(volatile s32 *) (u32) v0);
    (*(volatile f32 *) (u32) (v0 + 40)) = f20.f; func_001EF2C0(a0, a1);
    func_0025DCB0();
    goto L_0025CDA8;
L_0025CDD8:;
L_0025CDDC:;
    return;
}
