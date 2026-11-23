/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0017FA00(s32, s32, s32, s32);
void func_00334500(s32);

s32 func_003349E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29584));
    at = (u64) a0 < (u64) (s64) 10;
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 29588));
    (*(volatile f32 *) (u32) (sp + 16)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29592));
    (*(volatile f32 *) (u32) (sp + 20)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29596));
    (*(volatile f32 *) (u32) (sp + 24)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29600));
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29604));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29608));
    (*(volatile f32 *) (u32) (sp + 36)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29612));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + 29616));
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 29620));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (sp + 52)) = f0.f; if (c_) goto L_00334AA8; }
    v0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0x5ec0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x334a84U) goto L_00334A84; if (t_ == 0x334aa8U) goto L_00334AA8; }
L_00334A84:;
    v0 = (s32) ((u32) v1 + (u32) sp);
    a1 = (s32) 0x330000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    a1 = (s32) ((u32) a1 + 0x4500U);
    a2 = 0;
    a3 = 0; v0 = func_0017FA00(a0, a1, a2, a3);
    goto L_00334AB8;
L_00334AA8:;
    a0 = 0; func_00334500(a0);
    v0 = 1;
L_00334AB8:;
    return v0;
}
