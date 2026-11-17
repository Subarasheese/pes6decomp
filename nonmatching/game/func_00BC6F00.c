/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B4050(void);
s64 func_00BC71E0(s64, s64, s64, s64, s64, s64);

void func_00BC6F00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    a5 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a6 = 0;
    f1.f = (*(volatile f32 *) (u32) (v1 + 7768));
    s0 = (s64) ((u64) 0 + (u64) (s64) 255);
    a5 = (s32) ((u32) a5 + 0x1e00U);
    f0.i = (s32) 0;
    a0 = (s32) 0x590000U;
    a1 = 1;
    a3 = 23;
    fcc = f1.f < f0.f;
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a4 = 255;
L_00BC6F40:;
    v1 = (*(volatile u8 *) (u32) (a5 + 100));
    if (v1 == a4) goto L_00BC6FB0;
    if (v1 == a4) { a2 = a1; goto L_00BC6F5C; }
    if ((s32) a3 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a3); hi = (s32) ((s32) v1 % (s32) a3); lo = q_; }
    a2 = hi;
L_00BC6F5C:;
    v1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 6);
    { s32 c_ = !fcc; v1 = (s32) ((u32) a0 + (u32) v1); if (c_) goto L_00BC6F90; }
    v1 = (*(volatile u8 *) (u32) (v1 + 19));
    if (v1 != a1) goto L_00BC6FB0;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e64U);
    v1 = (s32) ((u32) v1 + (u32) a6);
    s0 = (*(volatile u8 *) (u32) v1); goto L_00BC6FC0;
L_00BC6F90:;
    v1 = (*(volatile u8 *) (u32) (v1 + 19));
    if (v1 != 0) goto L_00BC6FB0;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e64U);
    v1 = (s32) ((u32) v1 + (u32) a6);
    s0 = (*(volatile u8 *) (u32) v1); goto L_00BC6FC0;
L_00BC6FB0:;
    a6 = (s32) ((u32) a6 + 0x1U);
    v1 = a6 < 3;
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x1U); if (c_) goto L_00BC6F40; }
L_00BC6FC0:;
    a0 = s0 & 0xff;
    v1 = 255;
    if (a0 != v1) goto L_00BC6FD8;
    v1 = (s32) 0x590000U;
    s0 = (*(volatile u8 *) (u32) (v1 + 7767));
L_00BC6FD8:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -10799));
    if (v1 == 0) goto L_00BC71A0;
    v0 = func_009B4050();
    v1 = v0 & 0xff;
    v0 = 12;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00BC7040; }
    v0 = 3;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00BC7014; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00BC706C;
L_00BC7014:;
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    v1 = (*(volatile s32 *) (u32) (v1 + 5232));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x1eU); goto L_00BC7094;
L_00BC7040:;
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    v1 = (*(volatile s32 *) (u32) (v1 + 5232));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x14U); goto L_00BC7094;
L_00BC706C:;
    v0 = (s32) 0x2aaa0000U;
    v0 = v0 | 0xaaab;
    v1 = (*(volatile s32 *) (u32) (v1 + 5232));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v1 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 7;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0xaU);
L_00BC7094:;
    at = a0 < 41;
    if (at != 0) goto L_00BC70A4;
    a0 = 40;
L_00BC70A4:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0xc45c0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + 7772));
    f0.i = (s32) v1;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00BC7118;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BC70E0; }
L_00BC70E0:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x44950000U;
    v0 = v0 | 0x6000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BC7118;
    at = a0 < 30;
    if (at == 0) goto L_00BC7118;
    a0 = 30;
L_00BC7118:;
    v0 = (s32) 0xc4ce0000U;
    f0.i = (s32) v0;
    fcc = f2.f < f0.f;
    if (fcc) goto L_00BC7174;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7776));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00BC714C; }
L_00BC714C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x453a0000U;
    v0 = v0 | 0xb000;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00BC7184;
L_00BC7174:;
    at = a0 < 30;
    if (at != 0) goto L_00BC7184;
    a0 = 29;
L_00BC7184:;
    a3 = a0 & 0xff;
    a1 = s0;
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    a2 = 255;
    a4 = 1;
    a5 = 0; v0 = func_00BC71E0(a0, a1, a2, a3, a4, a5);
L_00BC71A0:;
    return;
}
