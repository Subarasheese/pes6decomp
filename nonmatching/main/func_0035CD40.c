/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EEDA0(s32, s32);
s32 func_002F96F0(s32, s32);
void func_0035D990(s32, s32, s32, s32, f32);

void func_0035CD40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 fcc = 0;

    a3 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a3 = (s32) ((u32) a3 + 0x7cf0U);
    v0 = (s32) ((u32) v0 + 0x7ba4U);
    a0 = 2;
    a2 = 1;
    a1 = (*(volatile s32 *) (u32) (gp + -21424));
    a1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    a5 = (*(volatile s32 *) (u32) (v1 + 608));
    a4 = (*(volatile s32 *) (u32) (v1 + 632));
    a1 = (s32) ((u32) a5 << 3);
    v1 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 << 7);
    v1 = (s32) ((u32) v1 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) a1);
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v1 + 8));
    f21.i = f12.i; func_0035D990(a0, a1, a2, a3, f12.f);
    a1 = (*(volatile s32 *) (u32) (gp + -21424));
    a3 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    a0 = 1;
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a3 = (s32) ((u32) a3 + 0x7cf0U);
    a1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + 0x7ba0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    a2 = a0;
    v1 = (*(volatile s32 *) (u32) v1);
    a5 = (*(volatile s32 *) (u32) (v1 + 608));
    a4 = (*(volatile s32 *) (u32) (v1 + 632));
    a1 = (s32) ((u32) a5 << 3);
    v1 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 << 7);
    v1 = (s32) ((u32) v1 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) a1);
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v1 + 8));
    f12.i = f21.i; func_0035D990(a0, a1, a2, a3, f12.f);
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (*(volatile s32 *) (u32) (v1 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035CF00; }
    v0 = (s32) 0x437f0000U;
    s1 = 2;
    f0.i = (s32) v0;
    f20.f = f0.f * f21.f;
L_0035CE64:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035CE98;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035CE98:;
    a0 = s2;
    a1 = s1; v0 = func_001EDC80(a0, a1);
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_0035CECC; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_0035CEE4;
L_0035CECC:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v1;
    a1 = a1 & 0xff;
L_0035CEE4:;
    a0 = v0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035CE64; }
L_0035CF00:;
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    s0 = (*(volatile s32 *) (u32) (v1 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035CFD0; }
    v0 = (s32) 0x437f0000U;
    s1 = 1;
    f0.i = (s32) v0;
    f20.f = f0.f * f21.f;
L_0035CF34:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035CF68;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035CF68:;
    a0 = s2;
    a1 = s1; v0 = func_001EDC80(a0, a1);
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_0035CF9C; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_0035CFB4;
L_0035CF9C:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v1;
    a1 = a1 & 0xff;
L_0035CFB4:;
    a0 = v0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < s0;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035CF34; }
L_0035CFD0:;
    return;
}
