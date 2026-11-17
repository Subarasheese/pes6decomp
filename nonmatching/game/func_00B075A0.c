/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
void func_009B3500(s32, s32, s32, s32);

s32 func_00B075A0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a3 = (s32) 0xca0000U;
    a3 = (s32) ((u32) a3 + 0xffffa5e0U);
    a2 = (s32) ((u32) sp + 0x70U);
    s4 = a0;
    a0 = 4;
L_00B075D4:;
    v1 = (*(volatile s16 *) (u32) a3);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) v1;
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a0 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_00B075D4; }
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) 0xc2600000U;
    f0.i = (s32) v0;
    s0 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) s0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2044));
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 799; goto L_00B0772C; }
    s3 = 0;
    s2 = 255;
    s1 = (s32) ((u32) sp + 0x70U);
L_00B07624:;
    a2 = (*(volatile u8 *) (u32) (s4 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s4 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 40;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 128));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 80;
    if (at == 0) goto L_00B0768C;
    v0 = 3;
    if (s3 == v0) goto L_00B07704;
L_00B0768C:;
    a1 = (*(volatile u16 *) (u32) s1);
    a0 = s4;
    a2 = 0; func_009B3500(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.i = (s32) f0.f;
    v0 = (s32) ((u32) s0 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2044));
    f0.f = (f32) f0.i;
    f0.f = f0.f - f1.f;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00B076D0; }
L_00B076D0:;
    if (s3 == 0) goto L_00B07724;
    v0 = 3;
    if (s3 == v0) goto L_00B07724;
L_00B076E4:;
    v0 = 255;
    if (s2 == v0) goto L_00B076FC;
    at = v1 < s5;
    if (at == 0) goto L_00B07704;
L_00B076FC:;
    s5 = v1;
    s2 = s3;
L_00B07704:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 7;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_00B07624; }
    v0 = (s32) ((u32) s2 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u16 *) (u32) (v0 + 112)); goto L_00B0772C;
L_00B07724:;
    v1 = (s32) ((u32) v1 + 0x10U); goto L_00B076E4;
L_00B0772C:;
    return v0;
}
