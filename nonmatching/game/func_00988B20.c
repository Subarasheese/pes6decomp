/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00988B20(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = a2 & 0xffff;
    v0 = (s32) ((u32) v0 >> 4);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_00988BAC;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa1b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x988b50U) goto L_00988B50; if (t_ == 0x988b68U) goto L_00988B68; if (t_ == 0x988b8cU) goto L_00988B8C; if (t_ == 0x988bacU) goto L_00988BAC; }
L_00988B50:;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 22081));
    if (v0 == 0) goto L_00988C50;
    a1 = (s32) ((u32) a1 >> 1); goto L_00988C50;
L_00988B68:;
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0xcccd;
    v1 = (s32) ((u32) v1 << 1);
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a1 = (s32) ((u32) v0 >> 2); goto L_00988C50;
L_00988B8C:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) v1 - (u32) a1);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a1 = (s32) ((u32) v0 >> 2); goto L_00988C50;
L_00988BAC:;
    at = (u64) a1 < (u64) (s64) 513;
    if (at != 0) goto L_00988C34;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = v1 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x400U); if (c_) goto L_00988BE8; }
    v0 = (s32) 0xcb0000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 21256));
    if (v0 != v1) goto L_00988C34;
L_00988BE8:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) { a1 = (s32) ((u32) a1 + 0x600U); goto L_00988C14; }
    a1 = (s32) ((u32) a1 + 0x800U);
L_00988C14:;
    at = (u64) a1 < (u64) (s64) 1025;
    if (at != 0) goto L_00988C24;
    a1 = (s32) ((u32) a1 + 0x600U);
L_00988C24:;
    at = (u64) a1 < (u64) (s64) 1537;
    if (at != 0) goto L_00988C34;
    a1 = (s32) ((u32) a1 + 0x600U);
L_00988C34:;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) 0xcccc0000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = v0 | 0xcccd;
    { s64 m_ = (s64) (u64) (u32) v0 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v0 = hi;
    a1 = (s32) ((u32) v0 >> 2);
L_00988C50:;
    v0 = a1; return v0;
}
