/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Vsync_GetFieldCount(void);
s32 func_001EDC80(s32, s32);
void func_001EEDA0(s32, s32);
s32 func_002D55B0(s32);
s32 func_002F96F0(s32, s32);
void func_0035D990(s32, s32, s32, s32, f32);

s32 func_0035BB60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 fcc = 0;

    v0 = (s32) ((u32) gp + 0xffffac54U);
    s4 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x264U); v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 != v1) goto L_0035BBB0;
    s4 = v1;
L_0035BBB0:;
    v0 = Vsync_GetFieldCount();
    a0 = (*(volatile s32 *) (u32) (gp + -21424));
    v1 = (s32) ((u32) gp + 0xffffac54U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile s32 *) (u32) (a0 + 624));
    v0 = (s32) ((u32) v0 - (u32) v1);
    at = (u64) v0 < (u64) (s64) 21;
    if (at != 0) goto L_0035BBE4;
    v0 = 20;
L_0035BBE4:;
    f0.i = (s32) v0;
    v1 = (s32) 0x41a00000U;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x3f800000U;
    f0.i = (s32) v1;
    f20.f = f1.f / f0.f;
    f0.i = (s32) v0;
    fcc = f20.f <= f0.f;
    if (fcc) { a3 = (*(volatile s32 *) (u32) (a0 + 608)); goto L_0035BC20; }
    f20.i = f0.i;
    a3 = (*(volatile s32 *) (u32) (a0 + 608));
L_0035BC20:;
    v0 = (s32) 0x3f800000U;
    a2 = (*(volatile s32 *) (u32) (a0 + 632));
    f12.i = (s32) v0;
    a1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a3 << 1);
    a1 = (s32) ((u32) a1 + 0x7cf0U);
    v1 = (s32) ((u32) v1 + (u32) a3);
    a2 = (s32) ((u32) a2 << 7);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a0 = (s32) ((u32) a3 << 3);
    v0 = (s32) ((u32) v0 + 0x7ba8U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) a0);
    a2 = 2;
    a3 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v1 + 8));
    a0 = 3; func_0035D990(a0, a1, a2, a3, f12.f);
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (v0 + 856));
    { s32 c_ = s0 <= 0; s3 = 0; if (c_) goto L_0035BD40; }
    v0 = (s32) 0x437f0000U;
    s1 = 0;
    f0.i = (s32) v0;
    f20.f = f0.f * f20.f;
L_0035BCA8:;
    v1 = (*(volatile s32 *) (u32) (gp + -21424));
    v0 = (s32) ((u32) gp + 0xffffac54U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_0035BCD8;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_0035BCD8:;
    a0 = s2;
    a1 = (s32) ((u32) s1 + 0x3U); v0 = func_001EDC80(a0, a1);
    v1 = (s32) 0x4f000000U;
    f0.i = (s32) v1;
    fcc = f0.f <= f20.f;
    if (fcc) { f0.f = f20.f - f0.f; goto L_0035BD0C; }
    f0.i = (s32) f20.f;
    a1 = f0.i;
    a1 = a1 & 0xff; goto L_0035BD24;
L_0035BD0C:;
    v1 = (s32) 0x80000000U;
    f0.i = (s32) f0.f;
    a1 = f0.i;
    a1 = a1 | v1;
    a1 = a1 & 0xff;
L_0035BD24:;
    a0 = v0; func_001EEDA0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x3U); if (c_) goto L_0035BCA8; }
L_0035BD40:;
    v0 = s4;
    return v0;
}
