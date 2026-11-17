/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0096D0A0(s32, s32, s32);
s32 func_0098ED30(s32);
s32 func_009B3070(s32, s32);

s32 func_00C0CDE0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;

    s2 = a0;
    s1 = a1;
    v1 = (*(volatile s16 *) (u32) (a1 + 4));
    f3.f = (*(volatile f32 *) (u32) (a0 + 224));
    v0 = (*(volatile s16 *) (u32) (a1 + 6));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f2.i = (s32) v1;
    f0.i = (s32) v0;
    f2.f = (f32) f2.i;
    f0.f = (f32) f0.i;
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f2.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f2.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    s3 = (*(volatile u16 *) (u32) (a0 + 42));
    a2 = 0;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    a1 = s3; func_0096D0A0(a0, a1, a2);
    a0 = (*(volatile u16 *) (u32) (s2 + 38));
    a1 = s3; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 4096;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (s2 + 492)); goto L_00C0CF24; }
L_00C0CE6C:;
    v0 = (*(volatile s32 *) (u32) (s2 + 492));
    at = (s32) 0x10000U;
    at = at | 0x1;
    at = s0 < at;
    (*(volatile u32 *) (u32) (s2 + 176)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 19));
    v1 = v0 ^ 0x1;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 436));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    { s32 c_ = at != 0; v0 = (*(volatile s32 *) (u32) (v0 + 344)); if (c_) goto L_00C0CEC8; }
    at = (s32) 0x190000U;
    at = v0 < at;
    if (at == 0) { a0 = (*(volatile u8 *) (u32) s2); goto L_00C0CF30; }
    v0 = 1; goto L_00C0CF80;
L_00C0CEC8:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00C0CF5C;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21378));
    v0 = v0 < 4;
    if (v0 != 0) goto L_00C0CF5C;
    v1 = (*(volatile u8 *) (u32) (s2 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00C0CF50;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 21399));
    if (v0 == 0) goto L_00C0CF5C;
    v0 = 1; goto L_00C0CF54;
L_00C0CF24:;
    v0 = v0 | 0x200;
    (*(volatile u32 *) (u32) (s2 + 492)) = (u32) v0; goto L_00C0CE6C;
L_00C0CF30:;
    v0 = func_0098ED30(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 4;
    if (v0 != 0) goto L_00C0CEC8;
    v0 = 1; goto L_00C0CF80;
L_00C0CF50:;
    v0 = 1;
L_00C0CF54:;
    goto L_00C0CF84;
L_00C0CF5C:;
    a1 = (*(volatile u16 *) (u32) (s2 + 38));
    a0 = (*(volatile u16 *) (u32) (s2 + 42)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12289;
    if (at != 0) { v0 = 3; goto L_00C0CF80; }
    v0 = 1; goto L_00C0CF80;
L_00C0CF80:;
L_00C0CF84:;
    return v0;
}
