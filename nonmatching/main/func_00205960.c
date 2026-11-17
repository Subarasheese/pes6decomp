/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00205960(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcc0000U;
    v1 = 852;
    a0 = (*(volatile u16 *) (u32) (v0 + -11614));
    a2 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -11671));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -11670));
    a2 = (s32) ((u32) a3 + (u32) a2);
    a3 = (s32) ((u32) a2 + 0x4U);
    v0 = (s32) 0x530000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 12361));
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) a0 << 3);
    a1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    a0 = (s32) ((u32) v0 + (u32) a2);
    a2 = (s32) ((u32) a3 + (u32) a1);
    a2 = (*(volatile s16 *) (u32) a2);
    a1 = (s32) ((u32) a3 + (u32) v0);
    v0 = (s32) ((u32) v1 << 3);
    a1 = (*(volatile s16 *) (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.i = (s32) a2;
    v0 = (s32) ((u32) v0 << 2);
    f4.f = (f32) f0.i;
    v0 = (s32) ((u32) a3 + (u32) v0);
    v1 = (*(volatile s16 *) (u32) (a0 + 8));
    v0 = (*(volatile s16 *) (u32) v0);
    f0.i = (s32) a1;
    f2.f = (f32) f0.i;
    f0.i = (s32) v1;
    f3.f = (f32) f0.i;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    f0.i = (s32) f4.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00205A18; }
L_00205A18:;
    at = v0 < 4000;
    if (at == 0) goto L_00205A7C;
    f0.i = (s32) f2.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00205A38; }
L_00205A38:;
    at = v0 < 4000;
    if (at == 0) goto L_00205A7C;
    f0.i = (s32) f1.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00205A58; }
L_00205A58:;
    at = v0 < 4000;
    if (at == 0) goto L_00205A7C;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v0 + 12352)) = (u8) v1;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 12352)); goto L_00205BB4;
L_00205A7C:;
    f0.i = (s32) 0;
    fcc = f4.f <= f0.f;
    if (fcc) goto L_00205AD0;
    fcc = f2.f <= f1.f;
    if (fcc) { f0.f = f4.f - f2.f; goto L_00205AB8; }
    f0.f = f4.f - f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48; goto L_00205B0C;
L_00205AB8:;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48; goto L_00205B0C;
L_00205AD0:;
    fcc = f2.f < f1.f;
    if (!fcc) { f0.f = f4.f - f2.f; goto L_00205AF8; }
    f0.f = f4.f - f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48; goto L_00205B0C;
L_00205AF8:;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
L_00205B0C:;
    v1 = (s64) ((u64) v0 << 48);
    v0 = (s32) 0x46080000U;
    v1 = v1 >> 48;
    a0 = v0 | 0x6400;
    f0.i = (s32) a0;
    v0 = (s32) 0xc6880000U;
    f1.f = f3.f - f0.f;
    a0 = v0 | 0x6400;
    v0 = (s32) 0x458c0000U;
    v0 = v0 | 0xa000;
    f0.i = (s32) a0;
    f1.f = f1.f / f0.f;
    f0.i = (s32) v0;
    f0.f = f0.f * f1.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 + 0xbb8U);
    v0 = (s64) ((u64) v0 << 48);
    { s32 c_ = v1 <= 0; v0 = v0 >> 48; if (c_) goto L_00205B78; }
    v0 = (s64) ((u64) v0 << 48); goto L_00205B80;
L_00205B78:;
    v1 = (s32) ((u32) 0 - (u32) v1);
    v0 = (s64) ((u64) v0 << 48);
L_00205B80:;
    v0 = v0 >> 48;
    at = v1 < v0;
    if (at == 0) { v1 = 2; goto L_00205BA4; }
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v1 + 12352)) = (u8) 0;
    v0 = (*(volatile u8 *) (u32) (v0 + 12352)); goto L_00205BB4;
L_00205BA4:;
    v0 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (v0 + 12352)) = (u8) v1;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 12352));
L_00205BB4:;
    return v0;
}
