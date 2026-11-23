/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0021CE30(s32, s32, s32, s32, s32, s32, s32);

s32 func_0021C730(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x540000U;
    v0 = (s32) 0x540000U;
    a2 = a1;
    s1 = (s32) 0x540000U;
    s2 = (*(volatile s32 *) (u32) (v1 + -32252));
    s1 = (s32) ((u32) s1 + 0xffff8250U);
    s0 = (*(volatile s32 *) (u32) (v0 + -32256));
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) a0;
    v1 = (s32) 0x540000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -32176));
    { s32 c_ = v1 == 0; v0 = 0; if (c_) goto L_0021C77C; }
L_0021C774:;
    goto L_0021C7DC;
L_0021C77C:;
    if (a2 == 0) goto L_0021C790;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a2 + 12)) = (u32) 0;
L_0021C790:;
    f0.f = (*(volatile f32 *) (u32) (gp + -32412));
    a1 = (s32) 0x220000U;
    a6 = (s32) 0x3b0000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffc720U);
    a4 = 0;
    a5 = 0;
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a3 = (*(volatile s32 *) (u32) (sp + 76));
    a6 = (s32) ((u32) a6 + 0xffff91d0U); func_0021CE30(a0, a1, a2, a3, a4, a5, a6);
    a0 = (*(volatile s16 *) (u32) (sp + 72));
    v0 = 1;
    v1 = (*(volatile s16 *) (u32) (sp + 74));
    (*(volatile u32 *) (u32) (s1 + 196)) = (u32) s0;
    (*(volatile u32 *) (u32) (s1 + 188)) = (u32) s2;
    (*(volatile u16 *) (u32) (s1 + 180)) = (u16) a0;
    (*(volatile u16 *) (u32) (s1 + 182)) = (u16) v1; goto L_0021C774;
L_0021C7DC:;
    return v0;
}
