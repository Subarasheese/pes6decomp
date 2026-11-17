/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s32 func_009B33A0(s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B364D0(s32);
void func_00BD3B80(s32, s32);
void func_00BD3BA0(s32, s32, s32);
void func_00BD3CF0(s32, s32, s32, s32, f32, f32);
void func_00BD4040(s32, s32);
s32 func_00BF6270(void);

void func_00B8DBD0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s1 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    a0 = (*(volatile s32 *) (u32) s1);
    f1.f = (*(volatile f32 *) (u32) (a0 + 108));
    f0.f = (*(volatile f32 *) (u32) (a0 + 112));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    s0 = v0; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00B8DC28; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00B8DC40;
L_00B8DC28:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00B8DC40:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00B8DC68; }
    f0.i = (s32) v1;
    f3.f = (f32) f0.i; goto L_00B8DC80;
L_00B8DC68:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f3.f = (f32) f0.i;
    f3.f = f3.f + f3.f;
L_00B8DC80:;
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x45c80000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + 7148));
    f1.i = (s32) a0;
    f2.f = f3.f * f2.f;
    v1 = (s32) 0x4f000000U;
    f1.f = f2.f / f1.f;
    f0.i = (s32) v1;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00B8DCC4; }
    f0.i = (s32) f1.f;
    a2 = f0.i;
    goto L_00B8DCD8;
L_00B8DCC4:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a2 = a2 | v1;
L_00B8DCD8:;
    if (s1 == s0) { a0 = 0; goto L_00B8DD54; }
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 81));
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) s1); goto L_00B8DDF4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = 2;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00B8DDDC; }
    v0 = (s32) 0xcc0000U;
    a1 = 3;
    v1 = (*(volatile u16 *) (u32) (v0 + -12960));
    v0 = (s32) 0x55550000U;
    v0 = v0 | 0x5556;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) ((u32) v0 + (u32) v1);
    at = (u64) v0 < (u64) a2;
    if (at == 0) goto L_00B8DD38;
    a1 = 4;
L_00B8DD38:;
    a0 = s1; func_00BD4040(a0, a1);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 65;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
L_00B8DD4C:;
    goto L_00B8DE04;
L_00B8DD54:;
    func_00B364D0(a0);
    a0 = s1;
    a1 = 5; func_00BD4040(a0, a1);
    a0 = s1;
    a1 = 4;
    a2 = 1; func_00BD3BA0(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 57;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    f0.i = (s32) 0;
    (*(volatile u16 *) (u32) (a0 + 24)) = (u16) a1;
    f2.f = (*(volatile f32 *) (u32) (v1 + -13608));
    f1.f = (*(volatile f32 *) (u32) (v0 + -13604));
    f1.f = f2.f * f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00B8DDB4; }
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12914)) = (u8) 0; goto L_00B8DDBC;
L_00B8DDB4:;
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -12914)) = (u8) v1;
L_00B8DDBC:;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -12914));
    a0 = s1; func_00BD3B80(a0, a1);
    v1 = (*(volatile s32 *) (u32) s1);
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 80)) = (u8) a0; goto L_00B8DD4C;
L_00B8DDDC:;
    f12.f = (*(volatile f32 *) (u32) (v0 + 108));
    f13.f = (*(volatile f32 *) (u32) (v0 + 112));
    a0 = s1; func_00BD3CF0(a0, a1, a2, a3, f12.f, f13.f);
    goto L_00B8DE00;
L_00B8DDF4:;
    a0 = 127;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0; goto L_00B8DD4C;
L_00B8DE00:;
L_00B8DE04:;
    return;
}
