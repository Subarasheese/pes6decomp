/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B79380(void);
void func_00B798F0(s32, s32, s32);

void func_0098EAD0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    f32 acc = 0;

    s2 = a0;
    s1 = a1;
    s0 = a2; v0 = func_00B79380();
    if (v0 != 0) goto L_0098EBCC;
    v1 = (*(volatile s16 *) (u32) (s2 + 20));
    a1 = 1;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.i = (s32) v1;
    v1 = (*(volatile u16 *) (u32) (a2 + 132));
    { s32 c_ = v1 != a1; f3.f = (f32) f0.i; if (c_) goto L_0098EB90; }
    a0 = (*(volatile u8 *) (u32) (s2 + 18));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e67U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != a1) goto L_0098EB6C;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x44c00000U;
    f1.f = (*(volatile f32 *) (u32) (a0 + 7964));
    f2.i = (s32) v1;
    f0.i = (s32) 0;
    v1 = (s32) 0x590000U;
    f1.f = (f32) f1.i;
    acc = f0.f + f1.f;
    f0.f = acc - f2.f * f3.f;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7968));
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_0098EBC4;
L_0098EB6C:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a0 + 7964));
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7968));
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_0098EBC4;
L_0098EB90:;
    v1 = (s32) 0x590000U;
    a0 = 32767;
    v1 = (*(volatile s32 *) (u32) (v1 + 7992));
    if (v1 == a0) goto L_0098EBE8;
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    v1 = (s32) 0x590000U;
    (*(volatile f32 *) (u32) s1) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 7996));
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) s0) = f0.f;
L_0098EBC4:;
    goto L_0098EC20;
L_0098EBCC:;
    v0 = (s32) 0x590000U;
    a0 = s1;
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = s0; func_00B798F0(a0, a1, a2);
    goto L_0098EBC4;
L_0098EBE8:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 9958));
    a0 = (s32) ((u32) a0 << 2);
    a0 = (s32) ((u32) a0 + (u32) a2);
    f0.f = (*(volatile f32 *) (u32) (a0 + 1148));
    (*(volatile f32 *) (u32) s1) = f0.f;
    v1 = (*(volatile u8 *) (u32) (v1 + 9958));
    a0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    f0.f = (*(volatile f32 *) (u32) (v1 + 2940));
    (*(volatile f32 *) (u32) s0) = f0.f; goto L_0098EBC4;
L_0098EC20:;
    return;
}
