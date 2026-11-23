/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001BC360(s32, s32, s32, s32);
s32 func_001BC3D0(s32, s32, s32, s32);
s32 func_001D7A20(s32, s32, s32);
void func_001D7D80(s32, s32, s32, s32);
s32 func_002DCA30(void);
void func_002DF640(s32, s32, s32, s32);
s32 func_0081D2C0(s32, s32, s32, s32);
void func_00C74BF0(s32, s32, s32, s32);
void func_00C74D20(s32, s32, s32, s32);

void func_008FAE10(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    f32 acc = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = func_002DCA30();
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FAE48; }
    v1 = (s32) 0x3b0000U;
    a0 = 1;
    v1 = (*(volatile s8 *) (u32) (v1 + -5757));
    if (v1 == a0) { ; goto L_008FAFA4; }
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FAE48:;
    a0 = (*(volatile s32 *) (u32) v0); func_001BC360(a0, a1, a2, a3);
    v0 = func_002DCA30();
    if (v0 == 0) goto L_008FAE84;
    v0 = func_0081D2C0(a0, a1, a2, a3);
    at = v0 < 2;
    if (at == 0) goto L_008FAE84;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (v0 + 24));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FAEC4; }
L_008FAE84:;
    v0 = (s32) 0x590000U;
    a3 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s8 *) (u32) (v0 + 7606));
    v1 = (*(volatile s32 *) (u32) (a3 + 24));
    v0 = (s32) 0x3b0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -19264));
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) 0x3b0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -19260));
    v0 = (*(volatile s32 *) (u32) (a3 + 28));
    v0 = (s32) ((u32) v0 + (u32) v1);
    a3 = (*(volatile s32 *) (u32) v0); v0 = func_001BC3D0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u32 *) (u32) v1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FAEC4:;
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_008FAF48; }
    s1 = 0;
    s0 = 0;
L_008FAED8:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (s32) ((u32) v0 + (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a1 = (*(volatile s32 *) (u32) (v0 + 264));
    a0 = (s32) ((u32) v1 + 0x4cU); func_00C74D20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) ((u32) a0 + (u32) s2);
    v0 = (*(volatile s8 *) (u32) (v0 + 340));
    { s32 c_ = v0 == 0; v1 = (s32) ((u32) a0 + (u32) s0); if (c_) goto L_008FAF0C; }
    a1 = 21; goto L_008FAF20;
L_008FAF0C:;
    v0 = (*(volatile s32 *) (u32) (a0 + 24));
    if (v0 != s2) { a1 = 6; goto L_008FAF20; }
    a1 = 7; goto L_008FAF20;
L_008FAF20:;
    a0 = (s32) ((u32) v1 + 0x4cU); func_00C74BF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008FAED8; }
L_008FAF48:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 44));
    a1 = (*(volatile s8 *) (u32) (v0 + 360)); func_001D7D80(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) 0x930000U;
    a2 = (*(volatile u16 *) (u32) (v0 + -9514));
    a0 = (*(volatile s32 *) (u32) (v1 + 44));
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_001D7A20(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    f1.f = (*(volatile f32 *) (u32) (sp + 68));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (sp + 76));
    f3.f = (*(volatile f32 *) (u32) (v0 + 24));
    acc = f0.f + f1.f;
    f0.f = (f32) f3.i;
    f13.f = acc + f2.f * f0.f;
    (*(volatile f32 *) (u32) (sp + 68)) = f13.f;
    a0 = (*(volatile s32 *) (u32) (v0 + 68));
    f12.f = (*(volatile f32 *) (u32) (sp + 64)); func_002DF640(a0, a1, a2, a3);
L_008FAFA4:;
    return;
}
