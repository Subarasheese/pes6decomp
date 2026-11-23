/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00182000(s32);
s32 func_001839A0(s32, s32, s32, s32);
void func_0018EA60(s32, s32, s32, s32);
void func_0018EC00(s32, s32, s32, s32);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBD0(s32);
void func_001CEBF0(void);
void func_001CEC60(s32);
void func_001CEC70(void);
void func_001CECC0(s32);

void func_0018E6F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s32 fcc = 0;
    f32 acc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 544));
    if (v1 == 0) goto L_0018E900;
    s5 = (s32) ((u32) v1 + 0x1cU);
    s4 = 0;
    s2 = (s32) ((u32) sp + 0x74U);
    s1 = (s32) ((u32) sp + 0x78U);
    s0 = (s32) ((u32) sp + 0x7cU);
L_0018E734:;
    v0 = (*(volatile u8 *) (u32) s5);
    if (v0 == 0) goto L_0018E798;
    f1.f = (*(volatile f32 *) (u32) (s5 + 4));
    v0 = (s32) 0xc3160000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; s3 = 0; if (c_) goto L_0018E7CC; }
    v0 = (s32) 0x43160000U;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0018E788;
    a0 = 8; v0 = func_00182000(a0);
    if (v0 != 0) goto L_0018E788;
    s3 = 1;
L_0018E788:;
    if (s3 == 0) goto L_0018E7E8;
L_0018E790:;
    (*(volatile u8 *) (u32) (s5 + 1)) = (u8) s3;
L_0018E798:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 12;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x448U); if (c_) goto L_0018E734; }
    func_0018EC00(a0, a1, a2, a3);
    v1 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 544));
    v1 = (*(volatile s32 *) (u32) (v1 + 13188));
    if (v1 != 0) goto L_0018E858;
    goto L_0018E900;
L_0018E7CC:;
    a0 = 9; v0 = func_00182000(a0);
    if (v0 != 0) goto L_0018E788;
    s3 = 1; goto L_0018E788;
L_0018E7E8:;
    v0 = (s32) 0x41200000U;
    f2.f = (*(volatile f32 *) (u32) (s5 + 4));
    a0 = 1;
    f3.i = (s32) v0;
    a1 = (s32) ((u32) sp + 0x70U);
    f0.i = (s32) 0;
    a2 = a0;
    v0 = (s32) 0x41940000U;
    v0 = v0 | 0xcccd;
    f1.i = (s32) v0;
    (*(volatile f32 *) (u32) (sp + 112)) = f2.f;
    f2.f = (*(volatile f32 *) (u32) (s5 + 8));
    f4.f = (*(volatile f32 *) (u32) (s5 + 28));
    acc = f0.f + f2.f;
    f0.f = acc + f3.f * f4.f;
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s5 + 12));
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s5 + 28));
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) s0) = f0.f; v0 = func_001839A0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0018E790;
    s3 = v1; goto L_0018E790;
L_0018E858:;
    a0 = 96; func_001CECC0(a0);
    func_001CEB90();
    a0 = 72; func_001CEC60(a0);
    func_001CEBF0();
    a0 = 1; func_001CEBD0(a0);
    func_001CEAB0();
    func_001CEC70();
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 544));
    v1 = (*(volatile s32 *) (u32) (a0 + 13188));
    at = 0 < v1;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_0018E8E8; }
    s1 = 0;
L_0018E8AC:;
    v1 = (s32) ((u32) a0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v1 + 13292));
    v1 = (*(volatile u8 *) (u32) (a0 + 2));
    v1 = v1 & 0x2;
    if (v1 != 0) goto L_0018E8F0;
L_0018E8C8:;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v1 + 544));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (a0 + 13188));
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_0018E8AC; }
L_0018E8E8:;
    goto L_0018E900;
L_0018E8F0:;
    func_0018EA60(a0, a1, a2, a3);
    goto L_0018E8C8;
L_0018E900:;
    return;
}
