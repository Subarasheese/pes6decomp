/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00952420(s32, s32, s32, s32, f32, f32);
s32 func_0098F750(s32);
s32 func_00990590(s32, s32, s32, s32, s32);
s32 func_00AFBAB0(s32);

s32 func_00963BA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5372U);
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 == 0; s1 = a0; if (c_) goto L_00963C4C; }
    v0 = func_0098F750(a0);
    if (v0 == 0) goto L_00963C4C;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_00963C0C; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00963C0C:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (*(volatile u8 *) (u32) s1);
    s0 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) s0);
    if (v0 == a0) { v0 = 0; goto L_00963CD8; }
    v0 = (*(volatile u8 *) (u32) (s0 + 514));
    at = v0 < 50;
    if (at == 0) { v1 = (s32) ((u32) a0 << 1); goto L_00963C54; }
    v0 = 0; goto L_00963CD8;
L_00963C4C:;
    v0 = 0; goto L_00963CD8;
L_00963C54:;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile u16 *) (u32) (v1 + 296));
    a0 = s1;
    a3 = (*(volatile s32 *) (u32) (v0 + 344));
    a2 = 3072;
    a4 = 2; v0 = func_00990590(a0, a1, a2, a3, a4);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00963C4C;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0xcccc0000U;
    v0 = v0 | 0xcccd;
    a0 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v1 + 344));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a1 = (*(volatile u16 *) (u32) (a1 + 296));
    a0 = s1;
    a2 = 3072;
    a3 = (s32) ((u32) v0 >> 2); v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00963C4C;
    v0 = 1;
L_00963CD8:;
    return v0;
}
