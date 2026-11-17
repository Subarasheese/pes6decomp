/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
s32 func_002DCA50(void);
s32 func_0084C740(s32, s32, s32, s32);
s32 func_00B29B50(void);
s32 func_00B29CB0(void);
void func_00B798F0(s32, s32, s32);

s32 func_00BF4040(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = a0; v0 = func_002DCA30();
    if (v0 != 0) goto L_00BF4138;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 == v1) goto L_00BF416C;
L_00BF4074:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a2 == v1) { s1 = 1; goto L_00BF4094; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) v0); hi = (s32) ((s32) a2 % (s32) v0); lo = q_; }
    s1 = hi;
L_00BF4094:;
    a0 = (s32) ((u32) sp + 0x3cU);
    a1 = (s32) ((u32) sp + 0x38U); func_00B798F0(a0, a1, a2);
    v1 = (s32) ((u32) s1 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) (v0 + 20));
    f1.f = (*(volatile f32 *) (u32) (sp + 60));
    f0.i = (s32) 0;
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 1; goto L_00BF40E4; }
    v0 = 0;
L_00BF40E4:;
    if (v0 == 0) { v0 = 0; goto L_00BF41A0; }
    a0 = (*(volatile u8 *) (u32) (s0 + 71));
    at = a0 < 8;
    if (at == 0) { v0 = 0; goto L_00BF41A0; }
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x62b8U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = v1 & 0x800;
    if (v0 == 0) goto L_00BF419C;
    v0 = v1 & 0x400;
    if (v0 == 0) goto L_00BF419C;
    v0 = 1; goto L_00BF41A0;
L_00BF4138:;
    v0 = func_002DCA50();
    if (v0 != 0) goto L_00BF4150;
L_00BF4148:;
    v0 = 0; goto L_00BF41A0;
L_00BF4150:;
    v0 = func_0084C740(a0, a1, a2, a3);
    if (v0 != 0) goto L_00BF4148;
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 5232)); goto L_00BF41A0;
L_00BF416C:;
    v0 = func_00B29B50();
    if (v0 == 0) goto L_00BF4184;
L_00BF417C:;
    v0 = 0; goto L_00BF40E4;
L_00BF4184:;
    v0 = func_00B29CB0();
    if (v0 == 0) goto L_00BF4074;
    goto L_00BF417C;
L_00BF419C:;
    v0 = 0;
L_00BF41A0:;
    return v0;
}
