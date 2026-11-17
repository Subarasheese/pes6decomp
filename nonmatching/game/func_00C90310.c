/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);
s32 func_002DCA30(void);

void func_00C90310(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0xcd0000U;
    s4 = 0;
    s2 = (s32) 0xcd0000U;
    s2 = (s32) ((u32) s2 + 0xffffce4cU);
    s1 = 0;
    s0 = (*(volatile s32 *) (u32) (v0 + -10064));
    s3 = s2;
L_00C9034C:;
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = (s32) ((u32) sp + 0x70U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) 0; func_001EF860(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00C9034C; }
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -10080));
    at = (u64) s0 < (u64) (s64) 2;
    (*(volatile u32 *) (u32) (v1 + -10032)) = (u32) 0;
    v1 = (s32) 0xcd0000U;
    a0 = a0 | 0x10;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + -10080)) = (u32) a0; if (c_) goto L_00C9043C; }
    v1 = 1;
    if (s0 == v1) goto L_00C903C4;
    if (s0 == 0) { v1 = (s32) 0xc1a00000U; goto L_00C903B8; }
    v1 = 1; goto L_00C903E0;
L_00C903B8:;
    f20.i = (s32) v1;
    goto L_00C903DC;
L_00C903C4:;
    v0 = func_002DCA30();
    if (v0 == 0) { s1 = 1; goto L_00C903DC; }
    v1 = (s32) 0x420c0000U;
    f20.i = (s32) v1;
L_00C903DC:;
    v1 = 1;
L_00C903E0:;
    if (s1 == v1) { ; goto L_00C90440; }
    s0 = 0;
L_00C903EC:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) sp + 0x80U); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 132));
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = (s32) ((u32) sp + 0x80U);
    f0.f = f0.f + f20.f;
    (*(volatile f32 *) (u32) (sp + 132)) = f0.f; func_001EF860(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 2;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00C903EC; }
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile f32 *) (u32) (a0 + -10032)) = f20.f;
    a0 = (*(volatile s32 *) (u32) (v1 + -10080));
    v1 = (s32) 0xcd0000U;
    a0 = a0 | 0x10;
    (*(volatile u32 *) (u32) (v1 + -10080)) = (u32) a0;
L_00C9043C:;
L_00C90440:;
    return;
}
