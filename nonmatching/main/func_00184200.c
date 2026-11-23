/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001CEA60(s32, s32, s32, s32);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBD0(s32);
void func_001CEC30(void);
void func_001CEC70(void);
void func_001CECC0(s32);
void func_001D3FF0(s32, s32, s32, s32);

void func_00184200(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[30];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0x390000U;
    a3 = (s32) ((u32) a3 + 0x7110U);
    a2 = (s32) ((u32) sp + 0x80U);
    a1 = 8;
L_00184234:;
    a0 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x8U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_00184234; }
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -64));
    if (v1 == 0) goto L_00184390;
    v1 = (*(volatile u8 *) (u32) (v1 + 42));
    if (v1 == 0) goto L_00184390;
    v0 = 1;
    v1 = 200;
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) v0;
    a0 = 11816;
    v0 = (s32) ((u32) sp + 0xecU);
    (*(volatile u8 *) (u32) (sp + 236)) = (u8) v1;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0;
    (*(volatile u8 *) (u32) (sp + 237)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 238)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 239)) = (u8) v1; func_001CECC0(a0);
    func_001CEB90();
    func_001CEC30();
    a0 = 2; func_001CEBD0(a0);
    func_001CEAB0();
    a0 = 11009; func_001CEA60(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    s5 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -64));
    s4 = (s32) ((u32) sp + 0xccU);
    s3 = (s32) ((u32) sp + 0xd0U);
    s2 = (s32) ((u32) sp + 0xd4U);
    s1 = (s32) ((u32) sp + 0xc4U);
    s0 = (s32) ((u32) sp + 0xc8U);
    s6 = (s32) ((u32) v0 + 0x2cU);
L_001842E8:;
    v0 = (s32) 0x520000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -64));
    v0 = (s32) ((u32) a1 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 <= 0) goto L_00184320;
L_00184300:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 42;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0xcU); if (c_) goto L_001842E8; }
    func_001CEC70();
    goto L_00184390;
L_00184320:;
    v1 = s5 & 0x3;
    v0 = s5 & 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 << 5);
    v1 = (s32) ((u32) v1 + 0xcU);
    v0 = (s32) ((u32) v0 + (u32) sp);
    f0.i = (s32) v1;
    v0 = (s32) ((u32) v0 + 0x80U);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    a0 = (s32) ((u32) sp + 0xc0U);
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s4) = f0.f;
    (*(volatile f32 *) (u32) s3) = f0.f;
    f1.f = (*(volatile f32 *) (u32) s6);
    f0.f = (*(volatile f32 *) (u32) (a1 + 548));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) (sp + 192)) = f0.f;
    f1.f = (*(volatile f32 *) (u32) (s6 + 4));
    f0.f = (*(volatile f32 *) (u32) (a1 + 552));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a1 + 556));
    f1.f = (*(volatile f32 *) (u32) (s6 + 8));
    f0.f = f1.f + f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; func_001D3FF0(a0, a1, a2, a3);
    goto L_00184300;
L_00184390:;
    return;
}
