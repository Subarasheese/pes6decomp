/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B33A0(s64, s64, s64);
void func_00B798F0(s64, s64, s64);
s64 func_00BAB6B0(s64);
s64 func_00BF3FC0(void);

s64 func_009ED880(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x3cU);
    a2 = (*(volatile u8 *) (u32) (v0 + 7757));
    a1 = (s32) ((u32) sp + 0x38U); func_00B798F0(a0, a1, a2);
    s0 = (s32) 0x590000U;
    s1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffe7f0U);
L_009ED8B0:;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_009EDA84;
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s0 + 17));
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
    if (v0 == 0) goto L_009EDA84;
    v1 = (*(volatile u8 *) (u32) (s0 + 22));
    v0 = 255;
    if (v1 == v0) goto L_009EDA84;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (v1 == v0) goto L_009EDA84;
    v0 = func_00BF3FC0();
    if (v0 == 0) goto L_009ED954;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7758));
    if (v1 == v0) goto L_009EDA84;
L_009ED954:;
    a0 = s0; v0 = func_00BAB6B0(a0);
    if (v0 != 0) goto L_009EDA84;
    f0.f = (*(volatile f32 *) (u32) (s0 + 224));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009ED97C; }
L_009ED97C:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_009ED9E4;
    f0.f = (*(volatile f32 *) (u32) (s0 + 232));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_009ED9BC; }
L_009ED9BC:;
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x46080000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) goto L_009ED9EC;
L_009ED9E4:;
    v0 = 1; goto L_009EDA98;
L_009ED9EC:;
    v0 = (s32) 0xcc0000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + -16828));
    if (v0 != v1) { f1.f = (*(volatile f32 *) (u32) (sp + 60)); goto L_009EDA44; }
    f1.f = (*(volatile f32 *) (u32) (sp + 60));
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    v0 = (s64) ((u64) v0 << 32);
    at = (s32) 0xc0000U;
    v0 = (s64) ((u64) v0 >> 32);
    at = at | 0x4001;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_009EDA84;
    v0 = 1; goto L_009EDA98;
L_009EDA44:;
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    v0 = (s64) ((u64) v0 << 32);
    at = (s32) 0x5a0000U;
    v0 = (s64) ((u64) v0 >> 32);
    at = at | 0x4001;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_009EDA84;
    v0 = 1; goto L_009EDA98;
L_009EDA84:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 22;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_009ED8B0; }
    v0 = 0;
L_009EDA98:;
    return v0;
}
