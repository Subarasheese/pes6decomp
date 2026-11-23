/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0098A9A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1ee8U);
    v0 = 255;
    a1 = (s32) ((u32) a1 + (u32) v1);
    a1 = (*(volatile u8 *) (u32) a1);
    if (a1 == v0) goto L_0098A9D4;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v0); hi = (s32) ((s32) a1 % (s32) v0); lo = q_; }
    a2 = hi; goto L_0098A9D8;
L_0098A9D4:;
    a2 = 1;
L_0098A9D8:;
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) a1 << 6);
    a2 = (s32) ((u32) a2 + 0xffffe5b0U);
    a1 = (*(volatile u8 *) (u32) a0);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a3 = (*(volatile u8 *) (u32) a2);
    { s32 c_ = a1 != a3; v0 = 1; if (c_) goto L_0098AB00; }
    { s32 c_ = a1 != a3; a2 = 0; if (c_) goto L_0098AADC; }
    a3 = (*(volatile u8 *) (u32) (a0 + 16));
    a3 = a3 < 8;
    { s32 c_ = a3 != 0; a1 = v0; if (c_) goto L_0098AA24; }
    a3 = (*(volatile u8 *) (u32) (a0 + 22));
    a3 = a3 ^ 0x7;
    a3 = (u64) 0 < (u64) a3;
L_0098AA24:;
    if (a3 != 0) goto L_0098AAD0;
    a3 = (s32) 0x590000U;
    a6 = 0;
    a3 = (*(volatile u8 *) (u32) (a3 + 7756));
    a5 = 1;
    at = 0 < a3;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_0098AAF0; }
    at = a3 < 23;
    if (at == 0) goto L_0098AAF0;
    a4 = a5; goto L_0098AAF0;
    a4 = (*(volatile s32 *) (u32) (gp + -32252));
L_0098AA60:;
    a3 = 1;
    a4 = (*(volatile u16 *) (u32) (a4 + 132));
    if (a4 == a3) goto L_0098AA74;
    a5 = 0;
L_0098AA74:;
    if (a5 == 0) goto L_0098AABC;
    a4 = (*(volatile s16 *) (u32) (a0 + 20));
    a3 = (s32) ((u32) v1 << 2);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x1ee0U);
    f2.i = (s32) a4;
    a0 = (s32) ((u32) a0 + (u32) a3);
    f1.f = (*(volatile f32 *) (u32) a0);
    f2.f = (f32) f2.i;
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0098AABC;
    a6 = 1;
L_0098AABC:;
    v1 = (u64) 0 < (u64) a6;
    v1 = v1 ^ 0x1;
    if (v1 != 0) goto L_0098AAD0;
    a1 = 0;
L_0098AAD0:;
    if (a1 == 0) goto L_0098AADC;
    a2 = 1;
L_0098AADC:;
    if (a2 != 0) goto L_0098AB00;
    v0 = 0;
    goto L_0098AB00;
L_0098AAF0:;
    if (a4 != 0) goto L_0098AA74;
    a4 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_0098AA60;
L_0098AB00:;
    return v0;
}
