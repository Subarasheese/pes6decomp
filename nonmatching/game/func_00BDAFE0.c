/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_00209A00(s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B84330(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B84580(s32, s32, s32, s32, s32, f32, f32);
s32 func_00BBB8C0(s32);
s32 func_00BDB260(s32, s32, s32, s32);
s32 func_00BF6270(void);

void func_00BDAFE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    v0 = func_00BDB260(a0, a1, a2, a3);
    v1 = (s32) 0xcc0000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + -10919));
    s0 = v0;
    v1 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) s2);
    (*(volatile u8 *) (u32) (v1 + 102)) = (u8) a0;
    a1 = (*(volatile u16 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = 10; func_00207390(a0, a1);
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile u8 *) (u32) (v0 + -10916));
    v0 = (*(volatile u8 *) (u32) v1);
    if (v0 == a0) { v1 = (*(volatile u16 *) (u32) (v1 + 38)); goto L_00BDB1B4; }
    v0 = func_00B2A420(a0);
    a1 = (*(volatile s16 *) (u32) (s0 + 12));
    a0 = (s32) 0x43360000U;
    a4 = (*(volatile s32 *) (u32) s2);
    a0 = a0 | 0xb61;
    f0.i = (s32) a0;
    v1 = (s32) 0xcc0000U;
    a3 = 1;
    a2 = -1;
    v1 = (*(volatile u16 *) (u32) (v1 + -10918));
    f1.i = (s32) a1;
    a0 = (*(volatile s32 *) (u32) (a4 + 4));
    f1.f = (f32) f1.i;
    a0 = (*(volatile u8 *) (u32) (a0 + 45));
    f3.f = f0.f * f1.f;
    if (a0 != 0) a3 = a2;
    f0.i = (s32) a3;
    { s32 c_ = v1 < 0; f4.f = (f32) f0.i; if (c_) goto L_00BDB0B8; }
    f0.i = (s32) v1;
    f2.f = (f32) f0.i; goto L_00BDB0D4;
L_00BDB0B8:;
    a0 = (s32) ((u32) v1 >> 1);
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00BDB0D4:;
    f1.i = (s32) 0;
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    acc = f1.f + f2.f;
    f1.f = acc + f3.f * f4.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00BDB108; }
    f0.i = (s32) f1.f;
    a0 = f0.i;
    a0 = a0 & 0xffff; goto L_00BDB120;
L_00BDB108:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a0 = f0.i;
    a0 = a0 | v1;
    a0 = a0 & 0xffff;
L_00BDB120:;
    (*(volatile u16 *) (u32) (a4 + 38)) = (u16) a0;
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -12928));
    at = 0 < a1;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_00BDB168; }
    v1 = (*(volatile s32 *) (u32) s2);
    a2 = (s32) 0xcc0000U;
    a2 = (s32) ((u32) a2 + 0xffffd558U);
    a0 = (*(volatile u8 *) (u32) v1);
L_00BDB148:;
    v1 = (*(volatile u8 *) (u32) (a2 + 5));
    if (a0 == v1) goto L_00BDB168;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < a1;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x1U); if (c_) goto L_00BDB148; }
L_00BDB168:;
    a0 = v0;
    v1 = (*(volatile u16 *) (u32) (s0 + 14));
    a1 = s1;
    v0 = (*(volatile u16 *) (u32) (s0 + 16));
    v0 = (s32) ((u32) v1 + (u32) v0);
    a2 = v0 & 0xffff; func_00B84580(a0, a1, a2, a3, a4, f12.f, f13.f);
    v0 = func_00BF6270();
    a1 = v0 & 0xff;
    a4 = (*(volatile u16 *) (u32) (s0 + 16));
    v0 = (*(volatile s32 *) (u32) s2);
    a5 = s1;
    a0 = s2;
    a2 = (*(volatile u16 *) (u32) (v0 + 38));
    a3 = 0; func_00B84330(a0, a1, a2, a3, a4, a5, f12.f, f13.f, f14.f, f15.f);
L_00BDB1AC:;
    goto L_00BDB248;
L_00BDB1B4:;
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile s32 *) (u32) (gp + -32420));
    a0 = 20;
    (*(volatile u16 *) (u32) (v0 + -10918)) = (u16) v1;
    v0 = (*(volatile s32 *) (u32) s2);
    v1 = (*(volatile u16 *) (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (v1 + 12248));
    f0.f = (*(volatile f32 *) (u32) (v0 + 40));
    v0 = (s32) ((u32) v1 + 0xfffffff0U);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f0.f = f1.f / f0.f;
    f0.i = (s32) f0.f;
    s0 = f0.i;
    v0 = func_00BBB8C0(a0);
    v1 = (s32) ((u32) v0 + 0x50U);
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x51eb0000U;
    v1 = v1 | 0x851f;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a0 >> 31);
    a1 = hi;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -13548));
    a1 = (s32) a1 >> 5;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) 0xcc0000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + -13544)) = (u32) a0; goto L_00BDB1AC;
L_00BDB248:;
    return;
}
