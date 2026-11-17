/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00AA33C0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f5 = { 0 };
    volatile union { f32 f; s32 i; } f6 = { 0 };
    volatile union { f32 f; s32 i; } f7 = { 0 };
    s32 hi = 0, lo = 0;
    f32 acc = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    if (v1 != v0) goto L_00AA341C;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = 0 < v0;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_00AA340C; }
    at = v0 < 23;
    if (at == 0) goto L_00AA340C;
    a2 = 1;
L_00AA340C:;
    if (a2 != 0) goto L_00AA341C;
    v0 = (s32) 0x57e40000U; goto L_00AA3530;
L_00AA341C:;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    a0 = a0 ^ 0x1;
    a2 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00AA3450; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA3450:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 16;
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    if (v1 != v0) goto L_00AA34B8;
    v1 = (s32) 0x590000U;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1e50U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a0 = 1; goto L_00AA34A0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00AA34A0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = (s32) ((u32) v0 + (u32) v1);
L_00AA34B8:;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = 14;
    if (v1 != v0) goto L_00AA34D0;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 9950));
L_00AA34D0:;
    f0.i = (s32) a1;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) a1 << 2);
    f6.f = (f32) f0.i;
    v0 = (s32) ((u32) v1 + (u32) v0);
    f5.f = (*(volatile f32 *) (u32) (a0 + 224));
    f4.i = (s32) 0;
    f7.f = (*(volatile f32 *) (u32) (a0 + 240));
    f1.f = (*(volatile f32 *) (u32) (a0 + 232));
    f2.f = (*(volatile f32 *) (u32) (a0 + 248));
    f3.f = (*(volatile f32 *) (u32) (v0 + 1148));
    acc = f4.f + f5.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f5.f = acc + f7.f * f6.f;
    acc = f4.f + f1.f;
    f1.f = acc + f2.f * f6.f;
    f3.f = f3.f - f5.f;
    f0.f = f0.f - f1.f;
    f1.i = (s32) f3.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
L_00AA3530:;
    return v0;
}
