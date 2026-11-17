/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0098EAD0(s64, s64, s64);
s64 func_0098EC40(s64);
s64 func_00AFBA70(s64);
s64 func_00B79380(void);
void func_00B798F0(s64, s64, s64);

void func_0098ED90(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    s1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
    s0 = 0;
L_0098EDB0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v1 == 0) goto L_0098EF94;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) goto L_0098EFAC;
    a0 = (*(volatile u8 *) (u32) s1);
    if (a0 <= 0) goto L_0098EFAC;
    at = a0 < 23;
    if (at == 0) goto L_0098EFAC;
    v1 = (*(volatile u8 *) (u32) (s1 + 477));
    v0 = v1 < 36;
    if (v0 != 0) goto L_0098EE0C;
    at = v1 < 55;
    if (at == 0) goto L_0098EE0C;
    s2 = s1; goto L_0098EE6C;
L_0098EE0C:;
    v0 = v1 < 8;
    if (v0 != 0) goto L_0098EFBC;
    at = v1 < 36;
    if (at == 0) goto L_0098EFBC;
    v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0098EE54; }
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_00AFBA70(a0);
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0098EE54:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = (s32) ((u32) v0 + (u32) v1);
L_0098EE6C:;
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U); func_0098EAD0(a0, a1, a2);
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0098EE94; }
L_0098EE94:;
    at = v1 < 2304;
    if (at == 0) { a0 = s2; goto L_0098EFCC; }
L_0098EEA0:;
    f0.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.i = (s32) f0.f;
    a0 = f0.i;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_0098EEBC; }
    v1 = a0;
L_0098EEBC:;
    at = v1 < 2305;
    if (at == 0) { f0.f = (*(volatile f32 *) (u32) (sp + 88)); goto L_0098EED0; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0098EF90;
L_0098EED0:;
    f0.i = (s32) f0.f;
    v1 = f0.i;
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_0098EEE4; }
L_0098EEE4:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45890000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0098EF48;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_0098EF18; }
    v1 = a0;
L_0098EF18:;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    v1 = (s32) 0x45f00000U;
    v1 = v1 | 0xc800;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_0098EF48;
    v1 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_0098EF90;
L_0098EF48:;
    if (a0 <= 0) { v1 = (s32) ((u32) 0 - (u32) a0); goto L_0098EF54; }
    v1 = a0;
L_0098EF54:;
    at = v1 < 5746;
    if (at != 0) { v1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0098EF90; }
    if (a0 <= 0) { a0 = (s32) ((u32) 0 - (u32) a0); goto L_0098EF68; }
L_0098EF68:;
    f0.i = (s32) a0;
    v1 = (s32) 0x46000000U;
    v1 = v1 | 0x6400;
    f1.f = (f32) f0.i;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    if (!fcc) { v1 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_0098EF90; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 3);
L_0098EF90:;
    (*(volatile u8 *) (u32) (s1 + 525)) = (u8) v1;
L_0098EF94:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_0098EDB0; }
    goto L_0098F0A8;
L_0098EFAC:;
    a0 = 1; v0 = func_0098EC40(a0);
    s2 = v0; goto L_0098EE6C;
L_0098EFBC:;
    a0 = 1; v0 = func_0098EC40(a0);
    s2 = v0; goto L_0098EE6C;
L_0098EFCC:;
    a1 = (s32) ((u32) sp + 0x54U);
    a2 = (s32) ((u32) sp + 0x50U); func_0098EAD0(a0, a1, a2);
    v0 = func_00B79380();
    if (v0 != 0) goto L_0098F058;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    (*(volatile f32 *) (u32) (sp + 76)) = f0.f;
    a0 = (*(volatile u8 *) (u32) (s2 + 19));
L_0098EFF8:;
    if (a0 == 0) { f3.f = (*(volatile f32 *) (u32) (sp + 84)); goto L_0098F074; }
    v1 = 1;
L_0098F004:;
    if (a0 != v1) goto L_0098F044;
    f3.f = (*(volatile f32 *) (u32) (sp + 84));
    v1 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 76));
    f1.i = (s32) v1;
    f0.i = (s32) 0;
    f2.f = f3.f + f2.f;
    f1.f = f2.f / f1.f;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_0098F044;
L_0098F03C:;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0098F048;
L_0098F044:;
    v1 = 0;
L_0098F048:;
    if (v1 == 0) goto L_0098EEA0;
    v1 = 0; goto L_0098EF90;
L_0098F058:;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x4cU);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = (s32) ((u32) sp + 0x48U); func_00B798F0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s2 + 19)); goto L_0098EFF8;
L_0098F074:;
    v1 = (s32) 0x40000000U;
    f2.f = (*(volatile f32 *) (u32) (sp + 76));
    f1.i = (s32) v1;
    f0.i = (s32) 0;
    f2.f = f3.f + f2.f;
    f1.f = f2.f / f1.f;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_0098F03C;
    v1 = 1; goto L_0098F004;
L_0098F0A8:;
    return;
}
