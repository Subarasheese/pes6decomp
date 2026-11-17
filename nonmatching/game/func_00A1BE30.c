/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002AE670(s32);
s32 func_00AB38D0(s32);

s32 func_00A1BE30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00A1C25C; }
L_00A1BE4C:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 9964));
    { s32 c_ = a0 < 0; f0.f = (*(volatile f32 *) (u32) (v0 + 9944)); if (c_) goto L_00A1BE6C; }
    f1.i = (s32) a0;
    f1.f = (f32) f1.i; goto L_00A1BE88;
L_00A1BE6C:;
    v1 = (s32) ((u32) a0 >> 1);
    v0 = a0 & 0x1;
    v1 = v1 | v0;
    f1.i = (s32) v1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00A1BE88:;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00A1C048;
    v0 = (s32) 0x590000U;
    a4 = (*(volatile s16 *) (u32) (s0 + 20));
    a1 = (*(volatile u8 *) (u32) (v0 + 9963));
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f3.i = (s32) a4;
    v0 = (s32) 0xc6500000U;
    a2 = (s32) ((u32) a1 << 2);
    v0 = v0 | 0x6400;
    f1.i = (s32) v0;
    f3.f = (f32) f3.i;
    v0 = (s32) ((u32) v1 + 0x47cU);
    a1 = (s32) ((u32) v0 + (u32) a2);
    f2.f = (*(volatile f32 *) (u32) a1);
    f2.f = f3.f * f2.f;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1BF24;
    a1 = (s32) ((u32) a2 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (a1 + 2940));
    f1.i = (s32) f1.f;
    a1 = f1.i;
    if (a1 <= 0) { a1 = (s32) ((u32) 0 - (u32) a1); goto L_00A1BEF4; }
L_00A1BEF4:;
    f1.i = (s32) a1;
    f2.f = (f32) f1.i;
    a1 = (s32) 0x45a10000U;
    a1 = a1 | 0x4000;
    f1.i = (s32) a1;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1BF24;
    v0 = 1; goto L_00A1C038;
L_00A1BF24:;
    a1 = (s32) 0x590000U;
    a2 = (s32) 0xc6500000U;
    a3 = (*(volatile u8 *) (u32) (a1 + 9958));
    f2.i = (s32) a4;
    f3.f = (f32) f2.i;
    a1 = a2 | 0x6400;
    a2 = (s32) ((u32) a3 << 2);
    f1.i = (s32) a1;
    a1 = (s32) ((u32) v0 + (u32) a2);
    f2.f = (*(volatile f32 *) (u32) a1);
    f2.f = f3.f * f2.f;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1BFAC;
    a1 = (s32) ((u32) a2 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (a1 + 2940));
    f1.i = (s32) f1.f;
    a1 = f1.i;
    if (a1 <= 0) { a1 = (s32) ((u32) 0 - (u32) a1); goto L_00A1BF7C; }
L_00A1BF7C:;
    f1.i = (s32) a1;
    f2.f = (f32) f1.i;
    a1 = (s32) 0x45a10000U;
    a1 = a1 | 0x4000;
    f1.i = (s32) a1;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1BFAC;
    v0 = 1; goto L_00A1C038;
L_00A1BFAC:;
    a1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (a1 + 9952));
    f1.i = (s32) a4;
    f3.f = (f32) f1.i;
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) 0xc6500000U;
    v0 = (s32) ((u32) v0 + (u32) a2);
    a1 = a1 | 0x6400;
    f2.f = (*(volatile f32 *) (u32) v0);
    f1.i = (s32) a1;
    f2.f = f3.f * f2.f;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1C034;
    v0 = (s32) ((u32) a2 + (u32) v1);
    f1.f = (*(volatile f32 *) (u32) (v0 + 2940));
    f1.i = (s32) f1.f;
    v0 = f1.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A1C004; }
L_00A1C004:;
    f1.i = (s32) v0;
    f2.f = (f32) f1.i;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f1.i = (s32) v0;
    fcc = f2.f < f1.f;
    if (!fcc) goto L_00A1C034;
    v0 = 1; goto L_00A1C038;
L_00A1C034:;
    v0 = 0;
L_00A1C038:;
    if (v0 == 0) goto L_00A1C048;
    v0 = 1; goto L_00A1C290;
L_00A1C048:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = 13;
    v0 = (*(volatile u16 *) (u32) (v0 + 132));
    if (v0 == v1) goto L_00A1C064;
    goto L_00A1C0AC;
L_00A1C064:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9972));
    if (v1 < 0) { a1 = (s32) ((u32) v1 >> 1); goto L_00A1C080; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00A1C098;
L_00A1C080:;
    v1 = v1 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00A1C098:;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00A1C0AC;
    v0 = 0; goto L_00A1C290;
L_00A1C0AC:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7704));
    if (v1 != 0) goto L_00A1C1AC;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7956));
    if (v1 != 0) goto L_00A1C1AC;
    if (a0 < 0) { a1 = (s32) ((u32) a0 >> 1); goto L_00A1C0E0; }
    f1.i = (s32) a0;
    f1.f = (f32) f1.i; goto L_00A1C0F8;
L_00A1C0E0:;
    v1 = a0 & 0x1;
    a1 = a1 | v1;
    f1.i = (s32) a1;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00A1C0F8:;
    fcc = f0.f < f1.f;
    if (fcc) goto L_00A1C1AC;
    v1 = (s32) 0x590000U;
    a0 = 255;
    a3 = (*(volatile u8 *) (u32) (v1 + 7705));
    if (a3 == a0) { a0 = 1; goto L_00A1C160; }
    { s32 c_ = a3 == a0; a2 = (*(volatile u8 *) (u32) (s0 + 19)); if (c_) goto L_00A1C134; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a3 / (s32) v1); hi = (s32) ((s32) a3 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00A1C138;
L_00A1C134:;
    a1 = 1;
L_00A1C138:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 19));
    if (a2 != v1) { a0 = 1; goto L_00A1C160; }
    a0 = 0;
L_00A1C160:;
    v1 = 1;
    if (a0 != v1) goto L_00A1C1B4;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9972));
    if (v1 < 0) { a0 = (s32) ((u32) v1 >> 1); goto L_00A1C188; }
    f1.i = (s32) v1;
    f1.f = (f32) f1.i; goto L_00A1C1A0;
L_00A1C188:;
    v1 = v1 & 0x1;
    a0 = a0 | v1;
    f1.i = (s32) a0;
    f1.f = (f32) f1.i;
    f1.f = f1.f + f1.f;
L_00A1C1A0:;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00A1C1B4;
L_00A1C1AC:;
    v0 = 0; goto L_00A1C290;
L_00A1C1B4:;
    v1 = 255;
    if (a3 == v1) { v1 = 1; goto L_00A1C208; }
    { s32 c_ = a3 == v1; a2 = (*(volatile u8 *) (u32) (s0 + 19)); if (c_) goto L_00A1C1DC; }
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a3 / (s32) v1); hi = (s32) ((s32) a3 % (s32) v1); lo = q_; }
    a1 = hi; goto L_00A1C1E0;
L_00A1C1DC:;
    a1 = 1;
L_00A1C1E0:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 19));
    if (a2 != v1) { v1 = 1; goto L_00A1C208; }
    v1 = 0;
L_00A1C208:;
    if (v1 != 0) goto L_00A1C28C;
    v1 = 4;
    if (v0 != v1) goto L_00A1C28C;
    a0 = 48; v0 = func_002AE670(a0);
    f1.i = (s32) v0;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 9944));
    f1.f = (f32) f1.i;
    fcc = f0.f < f1.f;
    if (!fcc) goto L_00A1C28C;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile s32 *) (u32) (v0 + 80));
    at = v0 < 20481;
    if (at != 0) goto L_00A1C28C;
    v0 = 0; goto L_00A1C290;
L_00A1C25C:;
    v0 = func_00AB38D0(a0);
    v1 = 65;
    if (v0 == v1) goto L_00A1BE4C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 == v0) goto L_00A1BE4C;
    v0 = 0; goto L_00A1C290;
L_00A1C28C:;
    v0 = 1;
L_00A1C290:;
    return v0;
}
