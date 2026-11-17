/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207780(s64, s64, s64, s64);
s64 func_00207D10(s64);
void func_00209820(void);
void func_00209A00(s64, s64, s64);
void func_00930240(s64);
s64 func_009B3070(s64, s64);

void func_00A11B40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f4 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    f32 acc = 0;

    s2 = a0;
    a0 = (*(volatile u16 *) (u32) (a0 + 38));
    s1 = a1; v0 = func_009B3070(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    { s32 c_ = v1 == 0; s0 = v0 & 0xffff; if (c_) goto L_00A11D84; }
    v0 = 274;
    if (v1 == v0) goto L_00A11D84;
    v0 = 900;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (a0 + 45)); goto L_00A11C98; }
    v0 = 447;
    if (v1 == v0) { (*(volatile u32 *) (u32) (s2 + 28)) = (u32) 0; goto L_00A11BA0; }
    a1 = 447; goto L_00A11D88;
L_00A11BA0:;
    if (s0 < 0) { v1 = (s32) ((u32) s0 >> 1); goto L_00A11BB4; }
    f0.i = (s32) s0;
    f1.f = (f32) f0.i; goto L_00A11BCC;
L_00A11BB4:;
    v0 = s0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00A11BCC:;
    v0 = (s32) 0x46380000U;
    v0 = v0 | 0xe38f;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00A11D94;
    if (s0 < 0) { v1 = (s32) ((u32) s0 >> 1); goto L_00A11BFC; }
    f0.i = (s32) s0;
    f1.f = (f32) f0.i; goto L_00A11C14;
L_00A11BFC:;
    v0 = s0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00A11C14:;
    v0 = (s32) 0x46c00000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_00A11C30;
    s0 = (s64) ((u64) 0 + (u64) (s64) 24576);
L_00A11C30:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = 900;
    a2 = 0; func_00209A00(a0, a1, a2);
    a3 = (*(volatile u16 *) (u32) (s2 + 38));
    a2 = s1 & 0xffff;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (s32) 0x10000U;
    a0 = 0x8001;
    v0 = s0 & 0xffff;
    a2 = (s32) ((u32) a2 - (u32) a3);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = a1 & 0xffff;
    a0 = a1 < a0;
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    a0 = (*(volatile u16 *) (u32) (a0 + 48));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (v1 + 12248));
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v0 = lo;
    (*(volatile u16 *) (u32) (s2 + 56)) = (u16) v0; goto L_00A11D94;
L_00A11C98:;
    a1 = 1;
    v1 = -1;
    v0 = (*(volatile u16 *) (u32) (s2 + 56));
    if (a2 != 0) a1 = v1;
    f0.i = (s32) a1;
    { s32 c_ = v0 < 0; f4.f = (f32) f0.i; if (c_) goto L_00A11CC0; }
    f0.i = (s32) v0;
    f1.f = (f32) f0.i; goto L_00A11CDC;
L_00A11CC0:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00A11CDC:;
    f0.f = (*(volatile f32 *) (u32) (a0 + 40));
    v0 = (*(volatile u16 *) (u32) (s2 + 38));
    { s32 c_ = v0 < 0; f3.f = f1.f * f0.f; if (c_) goto L_00A11CF8; }
    f0.i = (s32) v0;
    f2.f = (f32) f0.i; goto L_00A11D14;
L_00A11CF8:;
    v1 = (s32) ((u32) v0 >> 1);
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f2.f = (f32) f0.i;
    f2.f = f2.f + f2.f;
L_00A11D14:;
    f1.i = (s32) 0;
    v0 = (s32) 0x4f000000U;
    f0.i = (s32) v0;
    acc = f1.f + f2.f;
    f1.f = acc - f4.f * f3.f;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = f1.f - f0.f; goto L_00A11D48; }
    f0.i = (s32) f1.f;
    v1 = f0.i;
    v1 = v1 & 0xffff; goto L_00A11D60;
L_00A11D48:;
    v0 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    v1 = v1 | v0;
    v1 = v1 & 0xffff;
L_00A11D60:;
    (*(volatile u16 *) (u32) (s2 + 38)) = (u16) v1;
    a0 = s2; func_00930240(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); v0 = func_00207D10(a0);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s2 + 4)); goto L_00A11DA4; }
L_00A11D7C:;
    goto L_00A11DBC;
L_00A11D84:;
    a1 = 447;
L_00A11D88:;
    a2 = 0;
    a3 = 6; func_00207780(a0, a1, a2, a3);
L_00A11D94:;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_00209820();
    goto L_00A11DB8;
L_00A11DA4:;
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00A11D7C;
L_00A11DB8:;
L_00A11DBC:;
    return;
}
