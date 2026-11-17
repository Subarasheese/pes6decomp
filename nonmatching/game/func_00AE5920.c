/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00997E60(s32);
s32 func_0099DFF0(s32);
void func_0099EAE0(s32, f32, f32, f32, f32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_009F4DC0(s32, f32);
f32 func_00AB4270(s32);

s32 func_00AE5920(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    s2 = a1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7956));
    { s32 c_ = v0 != 0; s1 = a2; if (c_) goto L_00AE5B00; }
    v1 = a0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00AE5964; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AE5964:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) s0);
    a0 = s0;
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) s2; f0.f = func_00AB4270(a0);
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    f12.f = (*(volatile f32 *) (u32) (s1 + 8));
    a0 = 16; v0 = func_009F4DC0(a0, f12.f);
    (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0;
    a0 = s0; v0 = func_00997E60(a0);
    if (v0 != 0) { a0 = s0; goto L_00AE5B08; }
    v0 = (*(volatile u16 *) (u32) (s0 + 38));
    (*(volatile u16 *) (u32) (s1 + 30)) = (u16) v0;
L_00AE59BC:;
    a1 = (*(volatile u16 *) (u32) (s1 + 6));
    v1 = s2 & 0xff;
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 255;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 1148));
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
    a1 = (*(volatile u16 *) (u32) (s1 + 6));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 2044));
    (*(volatile f32 *) (u32) (s1 + 16)) = f0.f;
    a1 = (*(volatile u16 *) (u32) (s1 + 6));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (a0 + 2940));
    { s32 c_ = v1 == v0; (*(volatile f32 *) (u32) (s1 + 20)) = f0.f; if (c_) goto L_00AE5B20; }
    if (v1 == v0) { a0 = 1; goto L_00AE5A24; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AE5A24:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u16 *) (u32) (v0 + 296));
    (*(volatile u16 *) (u32) (s1 + 4)) = (u16) v0;
L_00AE5A50:;
    f12.f = (*(volatile f32 *) (u32) (s1 + 12));
    f13.f = (*(volatile f32 *) (u32) (s1 + 20));
    a0 = s0; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) v0;
    a1 = (*(volatile u16 *) (u32) (s1 + 24));
    a0 = (*(volatile u16 *) (u32) (s0 + 38)); v0 = func_009B30B0(a0, a1);
    (*(volatile u16 *) (u32) (s1 + 26)) = (u16) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00AE5B28;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = v0 & 0xff;
    if (v1 == v0) goto L_00AE5B28;
    v0 = (*(volatile u16 *) (u32) (s1 + 26));
    at = v0 < 81;
    if (at != 0) goto L_00AE5B28;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s1 + 2)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (v0 + 9948));
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s0; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) v0;
    a1 = (*(volatile u16 *) (u32) (s1 + 24));
    a0 = (*(volatile u16 *) (u32) (s0 + 38)); v0 = func_009B30B0(a0, a1);
    (*(volatile u16 *) (u32) (s1 + 26)) = (u16) v0;
    v0 = (*(volatile u16 *) (u32) (s1 + 26));
    at = v0 < 81;
    if (at != 0) goto L_00AE5B28;
    v0 = 0; goto L_00AE5B2C;
L_00AE5B00:;
    v0 = 0; goto L_00AE5B2C;
L_00AE5B08:;
    func_0099EAE0(a0, f12.f, f13.f, f14.f, f15.f);
    a0 = s0; v0 = func_0099DFF0(a0);
    (*(volatile u16 *) (u32) (s1 + 30)) = (u16) v0; goto L_00AE59BC;
L_00AE5B20:;
    (*(volatile u16 *) (u32) (s1 + 4)) = (u16) 0; goto L_00AE5A50;
L_00AE5B28:;
    v0 = 1;
L_00AE5B2C:;
    return v0;
}
