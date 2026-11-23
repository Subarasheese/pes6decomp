/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_001F08B0(s32);
void func_001F1860(s32, s32);
void func_001F18D0(s32, s32);
s32 func_001F1A20(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, s32, s32);
s32 func_002DB830(s32);
s32 func_008C5050(s32);
void func_008CE6C0(s32, s32, s32, s32, f32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008CE0A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v1 = 8;
    s5 = a0;
    a0 = (s32) ((u32) sp + 0xb0U);
    s4 = a1;
    if (a0 == 0) goto L_008CE0FC;
L_008CE0E0:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_008CE0E0;
L_008CE0FC:;
    if (s4 == 0) { ; goto L_008CE27C; }
    s6 = (*(volatile s32 *) (u32) (s5 + 52));
    if (s6 == 0) goto L_008CE278;
    v0 = (*(volatile u8 *) (u32) s5);
    a1 = 1;
    if (v0 != a1) { a0 = s5; goto L_008CE134; }
    a0 = s5;
    a1 = 3; func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s5 + 496)); goto L_008CE140;
L_008CE134:;
    func_008CE6C0(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (s5 + 496));
L_008CE140:;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = 190; v0 = func_001D7A20(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s5 + 468)); v0 = func_002DB830(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 164));
    a0 = (*(volatile u8 *) (u32) (s5 + 5));
    v1 = (*(volatile u8 *) (u32) (s5 + 4));
    f0.i = (s32) f0.f;
    s3 = (s32) ((u32) 0 - (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    at = s3 < v1;
    fp = f0.i;
    { s32 c_ = at == 0; s7 = v0; if (c_) goto L_008CE278; }
    v1 = (s32) ((u32) s6 + (u32) s7);
    s0 = (s32) ((u32) v1 + (u32) s3);
L_008CE184:;
    v1 = (s32) ((u32) s3 + (u32) s7);
    if (v1 < 0) goto L_008CE258;
    at = v1 < 32;
    if (at == 0) goto L_008CE258;
    v1 = (*(volatile u8 *) (u32) (s5 + 6));
    s2 = 0;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s3; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) fp + (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f;
L_008CE1C0:;
    v1 = (s32) ((u32) s6 + (u32) s2);
    a0 = (*(volatile u8 *) (u32) (v1 + 843));
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    if (a0 != v1) goto L_008CE248;
    v0 = (s32) 0x6c0000U;
    a0 = v0 | 0x67; v0 = func_001F08B0(a0);
    a1 = v0;
    a2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) sp + 0xbcU); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s4;
    a1 = 23;
    a2 = (s32) ((u32) sp + 0xb0U);
    a3 = (s32) ((u32) sp + 0xbcU); v0 = func_001F1A20(a0, a1, a2, a3);
    s1 = v0;
    a1 = 1;
    a0 = s1; func_001F3D10(a0, a1);
    a0 = s1;
    a1 = (s32) ((u32) sp + 0xa0U);
    a2 = 0; func_001F3D80(a0, a1, a2);
    a0 = s1;
    a1 = 1; func_001F1860(a0, a1);
    a0 = 1; v0 = func_008C5050(a0);
    a0 = s1;
    a1 = v0; func_001F18D0(a0, a1);
L_008CE248:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 8;
    if (v1 != 0) goto L_008CE1C0;
L_008CE258:;
    a0 = (*(volatile u8 *) (u32) (s5 + 4));
    v1 = (*(volatile u8 *) (u32) (s5 + 5));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x1U); if (c_) goto L_008CE184; }
L_008CE278:;
L_008CE27C:;
    return;
}
