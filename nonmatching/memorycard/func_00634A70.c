/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DEEF0(s32);
void func_001DF030(s32, s32);
void func_001DF2F0(s32);
f32 func_001E4E30(s32, s32, s32, s32);
void func_0063AD20(s32, s32, s32, s32);
void memset(s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00634A70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = 16;
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x50U);
    { s32 c_ = a0 == 0; s0 = a1; if (c_) goto L_00634ABC; }
L_00634AA0:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00634AA0;
L_00634ABC:;
    if (s1 == 0) { ; goto L_00634BAC; }
    if (s0 != 0) { v1 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_00634AD8; }
    goto L_00634BA8;
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
L_00634AD8:;
    if (v1 == 0) goto L_00634BA8;
    v1 = (*(volatile s32 *) (u32) (s0 + 12));
    if (v1 != 0) goto L_00634AF4;
    goto L_00634BA8;
L_00634AF4:;
    a0 = (s32) 0x660000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffcd60U);
    a2 = 256; memset(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 12)); f0.f = func_001E4E30(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    f21.i = f0.i; f0.f = func_001E4E30(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    f20.i = f0.i;
    a1 = (s32) ((u32) sp + 0x50U); func_001DF030(a0, a1);
    f2.f = f21.f + f20.f;
    v1 = (s32) 0x41800000U;
    f1.i = (s32) v1;
    f1.f = f1.f + f2.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 88));
    fcc = f1.f < f0.f;
    if (fcc) goto L_00634BA8;
    a0 = (*(volatile s32 *) (u32) (s1 + 12)); v0 = func_001DEEF0(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    s2 = v0; v0 = func_001DEEF0(a0);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = s2;
    a3 = v0;
    a0 = (s32) ((u32) a0 + 0xffffcd60U);
    a1 = (s32) ((u32) a1 + 0xffffb000U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (s32) 0x660000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffcd60U); func_0063AD20(a0, a1, a2, a3);
    a1 = (s32) 0x660000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffffb008U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 12)); func_001DF2F0(a0);
L_00634BA8:;
L_00634BAC:;
    return;
}
