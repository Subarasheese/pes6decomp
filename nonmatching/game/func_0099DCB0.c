/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00154160(s32, s32);
s32 func_002B9280(s32, s32);

void func_0099DCB0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0xca0000U;
    f3.f = (*(volatile f32 *) (u32) (v1 + -23472));
    s0 = 0;
    at = s0 < 8;
    v1 = (s32) 0xca0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -23468));
    (*(volatile f32 *) (u32) (sp + 256)) = f3.f;
    v1 = (s32) 0xca0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -23464));
    (*(volatile f32 *) (u32) (sp + 260)) = f2.f;
    v1 = (s32) 0xca0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -23460));
    (*(volatile f32 *) (u32) (sp + 264)) = f1.f;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (sp + 268)) = f0.f; if (c_) goto L_0099DDB0; }
    s3 = (s32) ((u32) sp + 0xf4U);
    s2 = (s32) ((u32) sp + 0xf8U);
    s6 = (s32) ((u32) sp + 0xfcU);
L_0099DD1C:;
    v1 = (s32) ((u32) s0 << 1);
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    a0 = (s32) ((u32) a0 + 0x62b0U);
    a1 = (s32) ((u32) v1 << 3);
    s5 = 0;
    s4 = (s32) ((u32) a0 + (u32) a1);
    v1 = s5 < 4;
    a0 = (s32) ((u32) s4 + 0x4U);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) s4;
    (*(volatile u32 *) (u32) s3) = (u32) a0;
    a0 = (s32) ((u32) s4 + 0x8U);
    (*(volatile u32 *) (u32) s2) = (u32) a0;
    a0 = (s32) ((u32) s4 + 0xcU);
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) s6) = (u32) a0; if (c_) goto L_0099DDB8; }
L_0099DD60:;
    s5 = 0;
    at = s5 < 24;
    if (at == 0) goto L_0099DDA0;
L_0099DD70:;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) s5 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa300U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (*(volatile s32 *) (u32) v1);
    v1 = s1 < 8;
    if (v1 != 0) goto L_0099DE80;
L_0099DD90:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 24;
    if (v1 != 0) goto L_0099DD70;
L_0099DDA0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 8;
    if (v1 != 0) goto L_0099DD1C;
L_0099DDB0:;
    goto L_0099DE98;
L_0099DDB8:;
    v0 = (s32) ((u32) s5 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = s0;
    s1 = (*(volatile s32 *) (u32) (v0 + 240));
    v0 = (*(volatile s32 *) (u32) (v0 + 256));
    { u32 t_ = (u32) v0; (*(volatile u32 *) (u32) s1) = (u32) 0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    a3 = (s32) 0xca0000U;
    a4 = 0;
    a3 = (s32) ((u32) a3 + 0xffffa3e0U);
    a2 = (s32) ((u32) sp + 0x80U);
    a1 = 14;
L_0099DDE8:;
    a0 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) a2) = (u32) a0;
    (*(volatile u32 *) (u32) (a2 + 4)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x8U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x8U); if (c_) goto L_0099DDE8; }
    a1 = 0;
    at = a1 < 28;
    if (at == 0) goto L_0099DE58;
    a0 = 1;
L_0099DE20:;
    v1 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v1 + 128));
    v1 = (s32) ((u32) a0 << (v1 & 31));
    v1 = v0 & v1;
    if (v1 == 0) goto L_0099DE48;
    v1 = (s32) ((u32) a0 << (a1 & 31));
    a4 = a4 | v1;
L_0099DE48:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 28;
    if (v1 != 0) goto L_0099DE20;
L_0099DE58:;
    (*(volatile u32 *) (u32) s1) = (u32) a4;
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = s0; v0 = func_002B9280(a0, a1);
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 4;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) s1) = (u32) v0; if (c_) goto L_0099DDB8; }
    goto L_0099DD60;
L_0099DE80:;
    a0 = s0;
    a1 = s5; v0 = func_00154160(a0, a1);
    v1 = (s32) ((u32) s4 + (u32) s1);
    (*(volatile u8 *) (u32) (v1 + 16)) = (u8) v0; goto L_0099DD90;
L_0099DE98:;
    return;
}
