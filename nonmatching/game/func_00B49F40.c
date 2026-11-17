/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209A00(s32, s32, s32);
s32 func_00B2A420(s32);
s32 func_00BB1310(s32, s32, s32, s32);
s32 func_00BF6270(void);
s32 func_00C01090(s32);

void func_00B49F40(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;

    a0 = 0;
    v0 = func_00B2A420(a0);
    s1 = v0; v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s0 = v0;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -13513));
    v0 = 9;
    if (v1 == v0) goto L_00B4A080;
    a0 = 14; v0 = func_00C01090(a0);
    if (v0 != 0) { a0 = 115; goto L_00B4A0CC; }
    a0 = (*(volatile s32 *) (u32) s1);
    v0 = 447;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00B4A10C;
    v0 = 1161;
    if (v1 == v0) goto L_00B4A10C;
    v0 = (*(volatile s32 *) (u32) s0);
    f2.f = (*(volatile f32 *) (u32) (a0 + 224));
    f0.f = (*(volatile f32 *) (u32) (a0 + 232));
    f3.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.f = (*(volatile f32 *) (u32) (v0 + 232));
    f2.f = f3.f - f2.f;
    f0.f = f1.f - f0.f;
    f1.i = (s32) f2.f;
    f0.i = (s32) f0.f;
    v0 = f1.i;
    v1 = f0.i;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = (s32) 0x220000U;
    at = at | 0xcaa5;
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) v1 * (s64) (u64) (u32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    at = v0 < at;
    if (at == 0) { a0 = 116; goto L_00B4A03C; }
    a0 = 117; v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 225;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0; goto L_00B4A078;
L_00B4A03C:;
    v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 225;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0;
L_00B4A078:;
    goto L_00B4A14C;
L_00B4A080:;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile u8 *) (u32) (v0 + -13508));
    a0 = 130;
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) a1; v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a1 = 225;
    a0 = 9;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B4A078;
L_00B4A0CC:;
    v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 225;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) 0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0; goto L_00B4A078;
L_00B4A10C:;
    a0 = 112; v0 = func_00BB1310(a0, a1, a2, a3);
    a1 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 225;
    (*(volatile u8 *) (u32) (v1 + 22)) = (u8) a0;
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) 0; goto L_00B4A078;
L_00B4A14C:;
    return;
}
