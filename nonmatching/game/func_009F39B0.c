/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B33A0(s64, s64, s64);
void func_009F3C20(s64, s64, s64, s64);
void func_00B798F0(s64, s64, s64);
s64 func_00BEE9D0(void);

s64 func_009F39B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x6cU);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = (s32) ((u32) sp + 0x68U); func_00B798F0(a0, a1, a2);
    v0 = (s32) 0x590000U;
    s3 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7757));
    v0 = 255;
    { s32 c_ = v1 == v0; s3 = (s32) ((u32) s3 + 0xffffe7f0U); if (c_) goto L_009F3A0C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi; goto L_009F3A10;
L_009F3A0C:;
    a0 = 1;
L_009F3A10:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s4 = 0;
    s2 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
L_009F3A30:;
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_009F3AF8;
    a1 = (*(volatile u8 *) (u32) (s3 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s3 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    v0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a1 << 3);
    a1 = (s32) ((u32) v0 - (u32) a1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 212));
    if (v0 == 0) goto L_009F3AF8;
    v1 = (*(volatile u8 *) (u32) (s3 + 22));
    v0 = 255;
    if (v1 == v0) goto L_009F3AF8;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (v1 == v0) goto L_009F3AF8;
    f0.f = (*(volatile f32 *) (u32) (s3 + 232));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009F3AC8; }
L_009F3AC8:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46060000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { f1.f = (*(volatile f32 *) (u32) (sp + 108)); goto L_009F3B2C; }
    v0 = 1; goto L_009F3C00;
L_009F3AF8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 22;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x240U); if (c_) goto L_009F3A30; }
    v0 = s2 & 0xff;
    if (v0 != 0) goto L_009F3B1C;
    v0 = 1; goto L_009F3B24;
L_009F3B1C:;
    func_009F3C20(a0, a1, a2, a3);
L_009F3B24:;
    goto L_009F3C04;
L_009F3B2C:;
    f0.f = (*(volatile f32 *) (u32) (sp + 104));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s3; v0 = func_009B33A0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (*(volatile u8 *) (u32) (s3 + 19));
    if (a0 == v1) { s1 = (s64) ((u64) v0 << 32); goto L_009F3B7C; }
    s1 = (s64) ((u64) v0 << 32);
    at = (s32) 0x510000U;
    s1 = s1 >> 32;
    at = at | 0x1;
    at = (u64) s1 < (u64) at;
    if (at == 0) goto L_009F3B9C;
    v0 = 1; goto L_009F3C00;
L_009F3B7C:;
    at = (s32) 0x240000U;
    s1 = s1 >> 32;
    at = at | 0x1;
    at = (u64) s1 < (u64) at;
    if (at == 0) goto L_009F3B9C;
    v0 = 1; goto L_009F3C00;
L_009F3B9C:;
    v0 = func_00BEE9D0();
    v0 = v0 & 0xff;
    if (v0 == 0) { s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_009F3AF8; }
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile u8 *) (u32) (s3 + 19));
    if (v1 != v0) goto L_009F3AF8;
    v0 = (s32) 0x240000U;
    v0 = (u64) s1 < (u64) v0;
    if (v0 != 0) goto L_009F3AF8;
    at = (s32) 0x790000U;
    at = at | 0x1;
    at = (u64) s1 < (u64) at;
    if (at == 0) goto L_009F3AF8;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 7758));
    if (v1 != v0) goto L_009F3AF8;
    s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_009F3AF8;
L_009F3C00:;
L_009F3C04:;
    return v0;
}
