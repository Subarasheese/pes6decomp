/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00141000(s32);
s32 sceVu0MulMatrix(s32, s32, s32);

void func_00279770(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = 2;
    s2 = a1;
    a1 = a2 & 0xff;
    { s32 c_ = a1 == v1; s1 = 0; if (c_) goto L_002797A0; }
    s1 = 1; goto L_00279880;
L_002797A0:;
    a1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = 31;
    a1 = (*(volatile u8 *) (u32) (a1 + 10));
    if (a1 == v1) { v1 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_002798BC; }
    at = a1 < 23;
    if (at == 0) { s1 = 1; goto L_00279880; }
    v1 = 255;
    if (a1 == v1) { a1 = 1; goto L_002797D8; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) v1); hi = (s32) ((s32) a1 % (s32) v1); lo = q_; }
    a1 = hi;
L_002797D8:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u8 *) (u32) (a0 + 44));
    if (v1 == 0) { s1 = 1; goto L_00279880; }
    s0 = (*(volatile s32 *) (u32) a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    if (v1 == 0) goto L_002798F0;
    a0 = (*(volatile u8 *) (u32) (s0 + 1));
    v1 = 2;
    if (a0 != v1) goto L_002798F0;
    v0 = (*(volatile s32 *) (u32) (s0 + 16));
    v0 = (*(volatile s32 *) (u32) (v0 + 44));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_00141000(a0);
    v1 = (*(volatile s32 *) (u32) (s0 + 16));
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = (s32) ((u32) v0 + 0x2c0U);
    a1 = (s32) ((u32) v1 + 0x50U); v0 = sceVu0MulMatrix(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 112));
    v1 = (s32) 0x3e990000U;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    (*(volatile f32 *) (u32) s2) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 116));
    (*(volatile f32 *) (u32) (s2 + 4)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 120));
    (*(volatile f32 *) (u32) (s2 + 8)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (sp + 124));
    (*(volatile f32 *) (u32) (s2 + 12)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (s2 + 4));
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
L_00279880:;
    if (s1 == 0) goto L_00279908;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == 0) { (*(volatile u32 *) (u32) s2) = (u32) 0; goto L_00279900; }
    f0.f = (*(volatile f32 *) (u32) (v1 + 128));
    (*(volatile f32 *) (u32) s2) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 132));
    (*(volatile f32 *) (u32) (s2 + 4)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 136));
    (*(volatile f32 *) (u32) (s2 + 8)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v1 + 140));
    (*(volatile f32 *) (u32) (s2 + 12)) = f0.f; goto L_00279908;
L_002798BC:;
    if (v1 == 0) { v1 = (s32) 0x45350000U; goto L_002798D4; }
    v1 = (s32) 0xc5350000U;
    v1 = v1 | 0x1ccd;
    (*(volatile u32 *) (u32) s2) = (u32) v1; goto L_002798DC;
L_002798D4:;
    v1 = v1 | 0x1ccd;
    (*(volatile u32 *) (u32) s2) = (u32) v1;
L_002798DC:;
    v1 = (s32) 0x424c0000U;
    v1 = v1 | 0xcccd;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0; goto L_00279880;
L_002798F0:;
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0; goto L_00279880;
L_00279900:;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0;
L_00279908:;
    return;
}
