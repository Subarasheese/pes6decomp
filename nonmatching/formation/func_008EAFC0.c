/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D6E40(s32, s32, s32, s32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, s32, s32);
s32 func_001E6E10(s32);
s32 func_001F08B0(s32);
void func_001F1FE0(s32, s32, s32, s32);
s32 func_008B29D0(s32);
s32 func_008B29F0(s32);
s32 func_008B9D60(s32, s32, s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008B9F90(s32, s32, s32, s32, f32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C5030(s32);

void func_008EAFC0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a2;
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_008EB234; }
    v1 = (*(volatile s32 *) (u32) (s5 + 36));
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) (s5 + 40)); goto L_008EB014; }
    goto L_008EB238;
    a0 = (*(volatile s32 *) (u32) (s5 + 40));
L_008EB014:;
    func_001F1FE0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s5 + 40)) = (u32) 0;
    s2 = 0;
    s1 = s5;
L_008EB028:;
    a0 = (*(volatile s32 *) (u32) (s1 + 64));
    if (a0 == 0) goto L_008EB040;
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 64)) = (u32) 0;
L_008EB040:;
    a0 = (*(volatile s32 *) (u32) (s1 + 80));
    if (a0 == 0) goto L_008EB058;
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 80)) = (u32) 0;
L_008EB058:;
    a0 = (*(volatile s32 *) (u32) (s1 + 96));
    if (a0 == 0) goto L_008EB070;
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 96)) = (u32) 0;
L_008EB070:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008EB028; }
    a0 = 20188; v0 = func_001E6E10(a0);
    s7 = v0;
    v0 = (s32) 0x3d0000U;
    a0 = v0 | 0x24; v0 = func_001F08B0(a0);
    s6 = v0;
    s3 = s0 & 0xff;
    v0 = 2;
    if (s3 == v0) goto L_008EB130;
    v0 = 1;
    if (s3 == v0) goto L_008EB130;
    if (s3 == 0) goto L_008EB0C8;
    goto L_008EB1F0;
L_008EB0C8:;
    s3 = (s32) 0x8f0000U;
    s1 = (s32) 0x8f0000U;
    s0 = 0;
    s3 = (s32) ((u32) s3 + 0xffffc6a0U);
    s2 = s5;
    s1 = (s32) ((u32) s1 + 0xffffc6b0U);
L_008EB0E0:;
    a0 = (*(volatile s32 *) (u32) (s5 + 60));
    a1 = (*(volatile s32 *) (u32) s3);
    a2 = s6; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 80)) = (u32) v0;
    a0 = s0; v0 = func_008B29F0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 60));
    a1 = (*(volatile s32 *) (u32) s1);
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 96)) = (u32) v0;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    s3 = (s32) ((u32) s3 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008EB0E0; }
    goto L_008EB1F0;
L_008EB130:;
    v0 = (s32) 0x8f0000U;
    a1 = (*(volatile u16 *) (u32) (v0 + -14656));
    a0 = (*(volatile s32 *) (u32) (s5 + 60)); f0.f = func_001D79A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s5 + 36));
    f12.i = f0.i;
    a1 = 0; v0 = func_008B9F90(a0, a1, a2, a3, f12.f);
    (*(volatile u32 *) (u32) (s5 + 40)) = (u32) v0;
    a0 = v0;
    a1 = 3;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s0 = v0;
    s2 = 0;
    v0 = 1;
    { s32 c_ = s3 != v0; s1 = 0; if (c_) goto L_008EB194; }
    v0 = (s32) 0x8f0000U;
    a0 = (*(volatile s32 *) (u32) (s5 + 60));
    a1 = (*(volatile s32 *) (u32) (v0 + -14688));
    a2 = s6; v0 = func_008C13D0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s5 + 80)) = (u32) v0;
    s2 = (s32) ((u32) s2 + 0x1U);
L_008EB194:;
    at = s2 < 4;
    if (at == 0) goto L_008EB1F0;
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc6c0U);
    s3 = (s32) ((u32) v0 + (u32) v1);
L_008EB1B0:;
    a2 = (*(volatile u16 *) (u32) s3);
    a0 = (*(volatile s32 *) (u32) (s5 + 60));
    a1 = (s32) ((u32) sp + 0x90U); v0 = func_001D7A20(a0, a1, a2);
    a0 = s1; v0 = func_008C5030(a0);
    a3 = v0;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x90U);
    a2 = s7; v0 = func_008B9D60(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_008EB1B0; }
L_008EB1F0:;
    s2 = (s32) 0x8f0000U;
    s0 = 0;
    s2 = (s32) ((u32) s2 + 0xffffc6d0U);
    s1 = s5;
L_008EB200:;
    a0 = (*(volatile s32 *) (u32) s4); v0 = func_008B29D0(a0);
    a0 = (*(volatile s32 *) (u32) (s5 + 60));
    a1 = (*(volatile s32 *) (u32) s2);
    a2 = v0; v0 = func_008C13D0(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 64)) = (u32) v0;
    v1 = s0 < 4;
    s4 = (s32) ((u32) s4 + 0x4U);
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_008EB200; }
L_008EB234:;
L_008EB238:;
    return;
}
