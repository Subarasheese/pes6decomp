/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B33A0(s32, s32, s32);
void func_00BD3BE0(s32, s32);

void func_00B34F70(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };

    s1 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    v0 = (*(volatile s32 *) (u32) (a1 + 4));
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    s0 = (*(volatile u8 *) (u32) (v0 + 12)); v0 = func_009B33A0(a0, a1, a2);
    v1 = (u64) v0 < (u64) (s64) 16384;
    if (v1 != 0) goto L_00B35054;
    v1 = (s32) 0x20000U;
    v1 = v1 | 0x4000;
    v1 = (u64) v0 < (u64) v1;
    if (v1 != 0) goto L_00B35068;
    at = (s32) 0x90000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_00B350F4;
    at = (u64) s0 < (u64) (s64) 7;
    if (at == 0) goto L_00B35108;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbfa0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb35004U) goto L_00B35004; if (t_ == 0xb35018U) goto L_00B35018; if (t_ == 0xb3502cU) goto L_00B3502C; if (t_ == 0xb35040U) goto L_00B35040; if (t_ == 0xb3504cU) goto L_00B3504C; }
L_00B35004:;
    a0 = s1;
    a1 = 6; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B35018:;
    a0 = s1;
    a1 = 5; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B3502C:;
    a0 = s1;
    a1 = 4; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B35040:;
    a0 = s1;
    a1 = 3; func_00BD3BE0(a0, a1);
L_00B3504C:;
    goto L_00B3510C;
L_00B35054:;
    a1 = s0 & 0xff;
    a0 = s1; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B35068:;
    at = (u64) s0 < (u64) (s64) 7;
    if (at == 0) goto L_00B35108;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbf80U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb3504cU) goto L_00B3504C; if (t_ == 0xb35090U) goto L_00B35090; if (t_ == 0xb350a4U) goto L_00B350A4; if (t_ == 0xb350b8U) goto L_00B350B8; if (t_ == 0xb350ccU) goto L_00B350CC; if (t_ == 0xb350e0U) goto L_00B350E0; }
L_00B35090:;
    a0 = s1;
    a1 = 6; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B350A4:;
    a0 = s1;
    a1 = 5; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B350B8:;
    a0 = s1;
    a1 = 4; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B350CC:;
    a0 = s1;
    a1 = 3; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B350E0:;
    a0 = s1;
    a1 = 2; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B350F4:;
    a0 = s1;
    a1 = 6; func_00BD3BE0(a0, a1);
    goto L_00B3504C;
L_00B35108:;
L_00B3510C:;
    return;
}
