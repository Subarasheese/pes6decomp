/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32);

void func_00B70040(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s32 hi = 0, lo = 0;

    at = (u64) a1 < (u64) (s64) 7;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_00B70394; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd3a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb7007cU) goto L_00B7007C; if (t_ == 0xb700fcU) goto L_00B700FC; if (t_ == 0xb70184U) goto L_00B70184; if (t_ == 0xb70204U) goto L_00B70204; if (t_ == 0xb70288U) goto L_00B70288; if (t_ == 0xb70314U) goto L_00B70314; if (t_ == 0xb70394U) goto L_00B70394; }
L_00B7007C:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 896;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0x200U);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 1;
    v1 = (s32) ((u32) s1 << 2);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) s1 - (u32) v1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0; goto L_00B70394;
L_00B700FC:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x3ff; if (c_) goto L_00B70118; }
    if (v1 == 0) goto L_00B70118;
    v1 = (s32) ((u32) v1 + 0xfffffc00U);
L_00B70118:;
    v1 = (s32) ((u32) v1 + 0xfffffe00U);
    v0 = (*(volatile s32 *) (u32) s0);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 2;
    v1 = (s32) ((u32) s1 << 2);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) s1 - (u32) v1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0; goto L_00B70394;
L_00B70184:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 896;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xfffffb80U);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 3;
    v1 = (s32) ((u32) s1 << 2);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) s1 - (u32) v1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0; goto L_00B70394;
L_00B70204:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 896;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0x200U);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 4;
    v1 = (s32) ((u32) 0 - (u32) s1);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) s1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0; goto L_00B70394;
L_00B70288:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x3ff; if (c_) goto L_00B702A4; }
    if (v1 == 0) goto L_00B702A4;
    v1 = (s32) ((u32) v1 + 0xfffffc00U);
L_00B702A4:;
    v1 = (s32) ((u32) v1 + 0xfffffe00U);
    v0 = (*(volatile s32 *) (u32) s0);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 5;
    v1 = (s32) ((u32) 0 - (u32) s1);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) s1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0; goto L_00B70394;
L_00B70314:;
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 896;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 + 0xfffffb80U);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (v0 + 108)) = f0.f;
    s2 = (*(volatile s32 *) (u32) s0);
    s1 = (*(volatile s16 *) (u32) (s2 + 20));
    a0 = 4096; v0 = func_00BBB8C0(a0);
    v1 = 768;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    { s64 m_ = (s64) (s32) s1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    a0 = 6;
    v1 = (s32) ((u32) 0 - (u32) s1);
    a1 = (s32) ((u32) 0 - (u32) a1);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) s1);
    v1 = (s32) ((u32) v1 << 7);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s2 + 112)) = f0.f;
    v1 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a0;
L_00B70394:;
    return;
}
