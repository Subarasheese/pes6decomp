/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00255E70(s32);
s32 func_002D4C40(s32, s32, s32, s32, s32, s32, s32);
s32 func_00305C60(s32, s32);
s32 func_00305E60(s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_00BD9ED0(s32, s32, s32, s32);

s32 func_00302030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    f0.i = (s32) 0;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffe7f0U);
    f1.f = (*(volatile f32 *) (u32) (a0 + 224));
    fcc = f1.f < f0.f;
    if (!fcc) { v1 = 1; goto L_00302068; }
    v1 = -1;
L_00302068:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) 0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 16));
    fcc = f1.f < f0.f;
    if (!fcc) { v0 = 1; goto L_00302084; }
    v0 = -1;
L_00302084:;
    if (v0 == v1) { a0 = (*(volatile u8 *) (u32) (a0 + 18)); goto L_00302098; }
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xb0U);
    a0 = (*(volatile u8 *) (u32) (a0 + 18));
L_00302098:;
    v0 = func_00255E70(a0);
    if (v0 == 0) { a0 = 0; goto L_003020B0; }
    v1 = 255; goto L_003020E4;
L_003020B0:;
    v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) goto L_003020D0;
    v1 = 255; goto L_003020E4;
L_003020D0:;
    v0 = func_00BD9ED0(a0, a1, a2, a3);
    if (v0 == 0) { v1 = 255; goto L_003020E4; }
    v1 = 0;
L_003020E4:;
    v0 = 255;
    { s32 c_ = v1 == v0; (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; if (c_) goto L_0030217C; }
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) gp + 0xffff830cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a0 = s1; v0 = func_00305C60(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00302124;
    v1 = 255;
    v0 = 0;
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1; goto L_00302180;
L_00302124:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) gp + 0xffff830cU);
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 << 1);
    (*(volatile u32 *) (u32) (s0 + 28)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4C40(a0, a1, a2, a3, a4, a5, a6);
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    a1 = (s32) 0x300000U;
    v0 = (s32) ((u32) gp + 0xffff830cU);
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0x1f90U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 40)) = (u32) v0; v0 = func_00305E60(a0, a1);
    v0 = 1; goto L_00302180;
L_0030217C:;
    v0 = 0;
L_00302180:;
    return v0;
}
