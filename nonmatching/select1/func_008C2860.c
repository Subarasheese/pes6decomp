/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00246550(s64);
void func_008B2F30(s64, s64, s64, s64);
s64 func_008B2F50(s64, s64, s64, s64);
void func_008B31A0(s64, s64);
void func_008B31E0(s64, s64, s64, s64);
void func_008B3210(s64, s64, s64);
s64 func_008B3310(s64, s64, s64, s64, s64, s64);
void sprintf(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008C2860(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[144];
    s64 sp = (s32) (u32) frame;

    v1 = 1024;
    s4 = a0;
    s3 = (s32) 0x540000U;
    a0 = (s32) ((u32) sp + 0x80U);
    s3 = (s32) ((u32) s3 + 0xffffc300U);
    s0 = a1;
    s1 = 15;
    s2 = (s64) ((u64) s0 << 56);
    { s32 c_ = a0 == 0; s2 = s2 >> 56; if (c_) goto L_008C28C4; }
L_008C28A8:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008C28A8;
L_008C28C4:;
    v1 = (s32) 0x8e0000U;
    a0 = (s64) ((u64) a2 << 56);
    f0.f = (*(volatile f32 *) (u32) (v1 + -24288));
    a0 = a0 >> 56;
    v1 = (s32) 0x8e0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -24284));
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    v1 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -24280));
    (*(volatile f32 *) (u32) (sp + 116)) = f2.f;
    v1 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -24276));
    (*(volatile f32 *) (u32) (sp + 120)) = f1.f;
    v1 = 2;
    { s32 c_ = a0 == v1; (*(volatile f32 *) (u32) (sp + 124)) = f0.f; if (c_) goto L_008C2A40; }
    v1 = 1;
    if (a0 == v1) { v1 = (*(volatile s32 *) (u32) (s4 + 11464)); goto L_008C2970; }
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 11460)); goto L_008C2920; }
    goto L_008C2A54;
L_008C2920:;
    a1 = 10;
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5 = 0; v0 = func_008B3310(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s32 *) (u32) (s4 + 11464));
    (*(volatile u32 *) (u32) (v1 + 40)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 11464));
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = 34; v0 = func_008B2F50(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s3 + 20));
    (*(volatile u32 *) (u32) (v1 + 136)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 11464));
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = 0; func_008B31A0(a0, a1);
    goto L_008C2A50;
L_008C2970:;
    v0 = (*(volatile s8 *) (u32) s4);
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    v0 = (s32) ((u32) v0 + 0x36U);
    a2 = (*(volatile s32 *) (u32) (v1 + 40));
    a1 = v0 & 0xffff; func_008B3210(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s4 + 11464));
    a1 = (s64) ((u64) s0 << 56);
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = a1 >> 56; func_008B31E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s4 + 11464));
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = 1; func_008B31A0(a0, a1);
    at = s2 < 7;
    { s32 c_ = at != 0; s4 = (s32) ((u32) s1 + 0xffffffffU); if (c_) goto L_008C29C4; }
    v0 = (s32) ((u32) s0 + 0xffffffffU);
    s0 = (s64) ((u64) v0 << 56);
    s0 = s0 >> 56;
L_008C29C4:;
    s5 = 196;
    s1 = (s32) ((u32) sp + 0x380U);
L_008C29CC:;
    a0 = s5; v0 = func_00246550(a0);
    if (v0 != 0) goto L_008C29F8;
    v0 = (*(volatile s32 *) (u32) (s1 + -784));
    at = v0 < s2;
    { s32 c_ = at == 0; s4 = (s32) ((u32) s4 + 0xffffffffU); if (c_) goto L_008C29F8; }
    v0 = (s32) ((u32) s0 + 0xffffffffU);
    s0 = (s64) ((u64) v0 << 56);
    s0 = s0 >> 56;
L_008C29F8:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 200;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008C29CC; }
    v0 = (s64) ((u64) s0 << 56);
    a1 = (s32) 0x8e0000U;
    v0 = v0 >> 56;
    a3 = (s32) ((u32) s4 + 0x1U);
    a2 = (s32) ((u32) v0 + 0x1U);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = (s32) ((u32) a1 + 0xffffa900U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 136));
    a1 = (s32) ((u32) sp + 0x80U); func_008B2F30(a0, a1, a2, a3);
    goto L_008C2A50;
L_008C2A40:;
    v0 = (*(volatile s32 *) (u32) (s4 + 11464));
    a0 = (*(volatile s32 *) (u32) (v0 + 40));
    a1 = 0; func_008B31A0(a0, a1);
L_008C2A50:;
L_008C2A54:;
    return;
}
