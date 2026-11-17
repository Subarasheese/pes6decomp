/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
void func_001A5E00(s32, s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
void func_009E1CB0(s32, s32, s32, s32);
void func_009E1D30(s32, s32, s32, s32);

s32 func_001FB9A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    a0 = 2;
    s2 = 0; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    a0 = 2;
    if (v1 == a0) { s2 = 1; goto L_001FBA84; }
    v0 = 1;
    if (v1 == v0) goto L_001FBA68;
    if (v1 == 0) goto L_001FB9F8;
    a1 = 0;
    func_009E1D30(a0, a1, a2, a3);
L_001FB9F8:;
    v0 = (s32) 0x3b0000U;
    s0 = (s32) ((u32) sp + 0x50U);
    f0.f = (*(volatile f32 *) (u32) (v0 + -31296));
    s1 = 0;
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -31292));
    (*(volatile f32 *) (u32) (sp + 80)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -31288));
    (*(volatile f32 *) (u32) (sp + 84)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -31284));
    (*(volatile f32 *) (u32) (sp + 88)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 92)) = f0.f;
L_001FBA30:;
    v0 = 1;
    v0 = (s32) ((u32) v0 << (s1 & 31));
    v0 = s3 & v0;
    if (v0 == 0) goto L_001FBA50;
    a0 = (*(volatile s32 *) (u32) s0); func_001A5E00(a0, a1, a2, a3, a4);
L_001FBA50:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001FBA30; }
    a0 = 2; func_009E1CB0(a0, a1, a2, a3);
L_001FBA68:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 == 0) { v0 = s2; goto L_001FBA88; }
    a0 = 2; func_009E1CB0(a0, a1, a2, a3);
    s2 = 1;
L_001FBA84:;
    v0 = s2;
L_001FBA88:;
    return v0;
}
