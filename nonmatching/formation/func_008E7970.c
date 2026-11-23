/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D7A20(s32, s32, s32);
void func_008C1030(s32, s32, s32, s32);
s32 func_008C13D0(s32, s32, s32);
s32 func_008C1490(s32, s32, s32, s32, f32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
void strcpy(s32, s32);

void func_008E7970(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s0 = (*(volatile u8 *) (u32) (a0 + 1));
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) v1 + (u32) s4);
    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    { s32 c_ = v1 != 0; s1 = a3; if (c_) goto L_008E7AB4; }
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_008E79C8; }
    goto L_008E7AB8;
    a0 = (*(volatile s32 *) (u32) (s4 + 12));
L_008E79C8:;
    if (a0 == 0) { f0.f = (*(volatile f32 *) (u32) (s3 + 8)); goto L_008E7A0C; }
    a1 = (s32) ((u32) sp + 0x60U);
    a2 = 250; v0 = func_001D7A20(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    v0 = s0 & 0xff;
    f0.f = (*(volatile f32 *) (u32) (sp + 100));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    v1 = (*(volatile u8 *) (u32) (s4 + 2));
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s3 + 8));
L_008E7A0C:;
    a0 = 51;
    a1 = (s32) ((u32) sp + 0x70U);
    (*(volatile f32 *) (u32) (sp + 120)) = f0.f; v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    s0 = v0;
    v0 = 255;
    a2 = s2;
    a0 = s0;
    a1 = 256;
    v1 = (s32) ((u32) v1 << 2);
    a3 = (s32) ((u32) sp + 0x88U);
    v1 = (s32) ((u32) v1 + (u32) s4);
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) s0;
    (*(volatile u8 *) (u32) (sp + 139)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 136)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 137)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 138)) = (u8) 0; func_008C1030(a0, a1, a2, a3);
    a2 = s1 & 0xff;
    if (a2 <= 0) goto L_008E7A70;
    at = a2 < 100;
    if (at != 0) goto L_008E7A88;
L_008E7A70:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0x8cU);
    a1 = (s32) ((u32) a1 + 0xffffe0a8U); strcpy(a0, a1);
    a0 = s0; goto L_008E7A9C;
L_008E7A88:;
    a1 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) sp + 0x8cU);
    a1 = (s32) ((u32) a1 + 0xffffe0b0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
L_008E7A9C:;
    a1 = 134;
    a2 = (s32) ((u32) sp + 0x8cU); v0 = func_008C13D0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s4 + 1));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (s4 + 1)) = (u8) v1;
L_008E7AB4:;
L_008E7AB8:;
    return;
}
