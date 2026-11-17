/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002075B0(s32, s32, s32, s32);
void func_00207BE0(s32);
s32 func_00B2A420(s32);
void func_00B2ACF0(s32, s32, s32, s32);
s32 func_00BB1310(s32, s32, s32, s32);

void func_00B56180(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s1 = a0;
    a0 = 0; v0 = func_00B2A420(a0);
    s0 = v0;
    a0 = s1; func_00B2ACF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00207BE0(a0);
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    a0 = 210;
    v1 = (*(volatile u16 *) (u32) (v1 + 62));
    if (v1 != a0) goto L_00B56228;
    a1 = (*(volatile s32 *) (u32) s1);
    v1 = 1030;
    a1 = (*(volatile s32 *) (u32) (a1 + 4));
    a1 = (*(volatile u16 *) (u32) (a1 + 48));
    if (a1 != v1) goto L_00B562A0;
    a1 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) 0x42980000U;
    f0.i = (s32) v1;
    v1 = (*(volatile s32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (v1 + 56));
    fcc = f1.f < f0.f;
    if (fcc) goto L_00B562A0;
    v0 = func_00BB1310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = v0 & 0xffff;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
L_00B56220:;
    goto L_00B562A4;
L_00B56228:;
    a0 = 111; v0 = func_00BB1310(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s1);
    v1 = 1166;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (*(volatile u16 *) (u32) (a0 + 48));
    { s32 c_ = a0 != v1; a1 = v0 & 0xffff; if (c_) goto L_00B562A0; }
    v1 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    if (v1 != a1) goto L_00B562A0;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x41800000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00B562A0;
    a0 = 211; v0 = func_00BB1310(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = v0 & 0xffff;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B56220;
L_00B562A0:;
L_00B562A4:;
    return;
}
