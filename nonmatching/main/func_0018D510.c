/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_00183590(s32, s32, s32, s32);
s32 func_001839A0(s32, s32, s32, s32);
void func_0018D640(s32, s32, s32, s32, f32);

void func_0018D510(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    a1 = (s32) 0x390000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x74c0U);
    a2 = 0;
    v0 = func_001839A0(a0, a1, a2, a3);
    s0 = (u64) 0 < (u64) v0;
    a1 = (s32) 0x390000U;
    v0 = (s32) 0x520000U;
    a0 = 0;
    (*(volatile u32 *) (u32) (v0 + 336)) = (u32) s0;
    a1 = (s32) ((u32) a1 + 0x752cU);
    a2 = 0; v0 = func_001839A0(a0, a1, a2, a3);
    a0 = (u64) 0 < (u64) s0;
    a1 = (u64) 0 < (u64) v0;
    v1 = (s32) 0x520000U;
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (v1 + 432)) = (u32) a1; if (c_) goto L_0018D574; }
    a0 = (u64) 0 < (u64) a1;
L_0018D574:;
    if (a0 != 0) goto L_0018D620;
    s2 = (s32) 0x520000U;
    s1 = (s32) 0x390000U;
    s2 = (s32) ((u32) s2 + 0x150U);
    s3 = 0;
    s1 = (s32) ((u32) s1 + 0x75b0U);
    s0 = s2;
L_0018D594:;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 == 0) goto L_0018D5C0;
L_0018D5A0:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 2;
    s2 = (s32) ((u32) s2 + 0x60U);
    s1 = (s32) ((u32) s1 + 0xcU);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x60U); if (c_) goto L_0018D594; }
    goto L_0018D620;
L_0018D5C0:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 320));
    v0 = (u64) 0 < (u64) v0;
    v1 = v0 ^ 0x1;
    if (v1 == 0) goto L_0018D5FC;
    a0 = s1; f0.f = func_00183590(a0, a1, a2, a3);
    v0 = (s32) 0x3f800000U;
    f1.i = (s32) v0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_0018D5FC; }
    v1 = 0;
L_0018D5FC:;
    v0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffca88U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s0; func_0018D640(a0, a1, a2, a3, f12.f);
    goto L_0018D5A0;
L_0018D620:;
    return;
}
