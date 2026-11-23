/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
s32 func_001E6E10(s32);
s32 func_001F08B0(s32);
s32 func_008B29D0(s32);
s32 func_008B29F0(s32);
s32 func_008B9D60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C5030(s32);
void func_008C59B0(s32, s32, s32, s32);
void func_008D3040(s32, s32, s32, s32);

void func_008D35A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a2;
    { s32 c_ = s5 == 0; s0 = a1; if (c_) goto L_008D3824; }
    func_008D3040(a0, a1, a2, a3);
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x2c; v0 = func_001F08B0(a0);
    a1 = v0;
    if (a1 != 0) { v1 = (s32) ((u32) sp + 0xacU); goto L_008D3600; }
    (*(volatile u8 *) (u32) (s5 + 2)) = (u8) 0; goto L_008D3824;
L_008D3600:;
    { s32 c_ = v1 == 0; v0 = 2; if (c_) goto L_008D3624; }
L_008D3608:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008D3608;
L_008D3624:;
    if (a1 != 0) { a0 = (s32) ((u32) s5 + 0xb8U); goto L_008D3640; }
    a0 = (s32) ((u32) s5 + 0xb8U);
    a1 = (s32) ((u32) sp + 0xacU); func_008C59B0(a0, a1, a2, a3);
    a0 = 20188; goto L_008D364C;
L_008D3640:;
    func_008C59B0(a0, a1, a2, a3);
    a0 = 20188;
L_008D364C:;
    v0 = func_001E6E10(a0);
    s7 = v0;
    v0 = (s32) 0x3d0000U;
    a0 = v0 | 0x24; v0 = func_001F08B0(a0);
    s6 = v0;
    s3 = s0 & 0xff;
    v0 = 2;
    if (s3 == v0) { a0 = (*(volatile s32 *) (u32) (s5 + 24)); goto L_008D3700; }
    v0 = 1;
    if (s3 == v0) goto L_008D36FC;
    if (s3 == 0) goto L_008D3694;
    goto L_008D3798;
L_008D3694:;
    s2 = (s32) 0x8f0000U;
    s0 = (s32) 0x8f0000U;
    s3 = 0;
    s2 = (s32) ((u32) s2 + 0xffffc150U);
    s1 = s5;
    s0 = (s32) ((u32) s0 + 0xffffc160U);
L_008D36AC:;
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = (*(volatile s32 *) (u32) s2);
    a2 = s6; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s1 + 132)) = (u32) v0;
    a0 = s3; v0 = func_008B29F0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = (*(volatile s32 *) (u32) s0);
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s1 + 136)) = (u32) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 4;
    s2 = (s32) ((u32) s2 + 0x4U);
    s1 = (s32) ((u32) s1 + 0xcU);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008D36AC; }
    goto L_008D3798;
L_008D36FC:;
    a0 = (*(volatile s32 *) (u32) (s5 + 24));
L_008D3700:;
    a1 = 3;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s0 = v0;
    s2 = 0;
    v0 = 1;
    { s32 c_ = s3 != v0; s1 = 0; if (c_) goto L_008D373C; }
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = (*(volatile s32 *) (u32) (v0 + -16048));
    a2 = s6; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s5 + 132)) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
L_008D373C:;
    at = s2 < 4;
    if (at == 0) goto L_008D3798;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc170U);
    s3 = (s32) ((u32) v0 + (u32) v1);
L_008D3758:;
    a2 = (*(volatile u16 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = (s32) ((u32) sp + 0x90U); v0 = func_001D7A20(a0, a1, a2);
    a0 = s1; v0 = func_008C5030(a0);
    a3 = v0;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s7; v0 = func_008B9D60(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008D3758; }
L_008D3798:;
    s2 = (s32) 0x8f0000U;
    s0 = 0;
    s2 = (s32) ((u32) s2 + 0xffffc180U);
    s1 = s5;
L_008D37A8:;
    v1 = 1;
    v0 = (s32) ((u32) s5 + (u32) s0);
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) s4); v0 = func_008B29D0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = (*(volatile s32 *) (u32) s2);
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s1 + 140)) = (u32) v0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    s4 = (s32) ((u32) s4 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0xcU); if (c_) goto L_008D37A8; }
    v1 = 1;
    v0 = (s32) ((u32) s0 + (u32) s5);
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) v1;
    v0 = (s32) 0x3c0000U;
    a0 = v0 | 0x37; v0 = func_001F08B0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 72));
    a1 = s0;
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    a0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) s0 + 0x1U);
    a0 = (s32) ((u32) a0 + (u32) s5);
    (*(volatile u32 *) (u32) (a0 + 92)) = (u32) v0;
    (*(volatile u8 *) (u32) (s5 + 2)) = (u8) v1;
L_008D3824:;
    return;
}
