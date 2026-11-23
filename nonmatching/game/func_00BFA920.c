/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00BFA920(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (s32) 0x590000U;
    a0 = 255;
    a1 = (*(volatile u8 *) (u32) (v1 + 7767));
    { s32 c_ = a1 == a0; v0 = 0; if (c_) goto L_00BFA948; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00BFA94C;
L_00BFA948:;
    a1 = 1;
L_00BFA94C:;
    a3 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    a2 = 13;
    a1 = (*(volatile u16 *) (u32) (a3 + 160));
    { s32 c_ = a1 == a2; v1 = (s32) ((u32) v1 + (u32) a0); if (c_) goto L_00BFAAD4; }
    a0 = 11;
    if (a1 == a0) { a1 = (*(volatile u16 *) (u32) (a3 + 162)); goto L_00BFA988; }
    goto L_00BFAB58;
L_00BFA988:;
    if (a1 == a2) goto L_00BFA9BC;
    a0 = 10;
    if (a1 == a0) goto L_00BFA9BC;
    a0 = 9;
    if (a1 == a0) goto L_00BFA9BC;
    a0 = 4;
    if (a1 == a0) goto L_00BFA9BC;
    goto L_00BFAB58;
L_00BFA9BC:;
    a0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 7706));
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00BFA9E0; }
    at = a0 < 23;
    if (at == 0) goto L_00BFA9E0;
    a1 = 1;
L_00BFA9E0:;
    if (a1 == 0) goto L_00BFAA34;
    a1 = a0 & 0xff;
    a0 = 255;
    { s32 c_ = a1 == a0; a3 = (*(volatile u8 *) (u32) (v1 + 19)); if (c_) goto L_00BFAA0C; }
    a0 = 23;
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a0); hi = (s32) ((s32) a1 % (s32) a0); lo = q_; }
    a2 = hi; goto L_00BFAA10;
L_00BFAA0C:;
    a2 = 1;
L_00BFAA10:;
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffe5c3U);
    a1 = (s32) ((u32) a1 << 6);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a3 == a0) goto L_00BFAB58;
L_00BFAA34:;
    v1 = (*(volatile u8 *) (u32) (v1 + 16));
    if (v1 != 0) goto L_00BFAA88;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7776));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00BFAA5C; }
L_00BFAA5C:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45c10000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BFAA88;
    v0 = 1;
L_00BFAA88:;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7776));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00BFAAA4; }
L_00BFAAA4:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45210000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BFAB58;
    v0 = 1; goto L_00BFAB58;
L_00BFAAD4:;
    a1 = (*(volatile u16 *) (u32) (a3 + 162));
    a0 = 11;
    if (a1 != a0) goto L_00BFAB58;
    a0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 7706));
    at = 0 < a0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_00BFAB08; }
    at = a0 < 23;
    if (at == 0) goto L_00BFAB08;
    a1 = 1;
L_00BFAB08:;
    if (a1 == 0) goto L_00BFAB58;
    a2 = (*(volatile u8 *) (u32) (v1 + 19));
    a0 = a0 & 0xff;
    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_00BFAB30; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00BFAB30:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5c3U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (a2 == v1) goto L_00BFAB58;
    v0 = 1;
L_00BFAB58:;
    return v0;
}
