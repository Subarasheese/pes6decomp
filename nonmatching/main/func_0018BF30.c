/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00182000(s32);
s32 func_00188FB0(s32, s32);
void func_001CEA60(s32, s32, s32, s32);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBD0(s32);
void func_001CEC30(void);
void func_001CEC60(s32);
void func_001CEC70(void);
void func_001CECC0(s32);
void func_001D3FF0(s32, s32, s32, s32);

void func_0018BF30(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    s4 = 0;
    s3 = 8;
    s2 = 0;
    s1 = (s32) ((u32) sp + 0x60U);
    s0 = 0;
L_0018BF60:;
    a0 = s3; v0 = func_00182000(a0);
    if (v0 != 0) { a0 = s1; goto L_0018C04C; }
L_0018BF70:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 4;
    s3 = (s32) ((u32) s3 + 0x1U);
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_0018BF60; }
    v0 = (s32) ((u32) s0 << 4);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) v0 + 0x188U); func_001CECC0(a0);
    func_001CEB90();
    func_001CEC30();
    a0 = 2; func_001CEBD0(a0);
    a0 = 72; func_001CEC60(a0);
    func_001CEAB0();
    a0 = 11006; func_001CEA60(a0, a1, a2, a3);
    v0 = 1;
    v1 = (s32) 0x390000U;
    (*(volatile u32 *) (u32) (sp + 168)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0x7370U);
    v0 = (s32) ((u32) sp + 0xbcU);
    (*(volatile u32 *) (u32) (sp + 164)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v0;
    v1 = 255;
    v0 = (s32) 0x44480000U;
    at = 0 < s0;
    (*(volatile u8 *) (u32) (sp + 188)) = (u8) v1;
    s1 = 0;
    (*(volatile u8 *) (u32) (sp + 189)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 190)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 191)) = (u8) v1;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 156)) = (u32) v0; if (c_) goto L_0018C068; }
    s2 = (s32) ((u32) sp + 0x60U);
L_0018C014:;
    f2.f = (*(volatile f32 *) (u32) s2);
    a0 = (s32) ((u32) sp + 0x90U);
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.f = (*(volatile f32 *) (u32) (s2 + 8));
    (*(volatile f32 *) (u32) (sp + 144)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f; func_001D3FF0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0xcU); if (c_) goto L_0018C014; }
    goto L_0018C068;
L_0018C04C:;
    a1 = s2; v0 = func_00188FB0(a0, a1);
    if (v0 == 0) goto L_0018BF70;
    s1 = (s32) ((u32) s1 + 0xcU);
    s0 = (s32) ((u32) s0 + 0x1U); goto L_0018BF70;
L_0018C068:;
    func_001CEC70();
    return;
}
