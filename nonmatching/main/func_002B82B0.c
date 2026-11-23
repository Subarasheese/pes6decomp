/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00140FF0(s64);
s64 func_00295300(void);
void func_002B8430(s64, s64, s64, s64);
void func_002B86F0(s64, s64, s64, s64, f32);

void func_002B82B0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 fcc = 0;

    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffe5b0U); v0 = func_00295300();
    if (v0 == 0) goto L_002B8328;
    s1 = 0;
L_002B82D8:;
    a3 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile u8 *) (u32) (a3 + 44));
    if (v1 == 0) goto L_002B8400;
    a2 = (*(volatile s32 *) (u32) a3);
    v1 = 2;
    a0 = (*(volatile u8 *) (u32) (a2 + 1));
    if (a0 != v1) goto L_002B8400;
    v1 = (*(volatile s32 *) (u32) (a2 + 16));
    a1 = (*(volatile s32 *) (u32) (v1 + 24));
    if (a1 == 0) goto L_002B8400;
    v1 = (*(volatile s32 *) (u32) (s0 + 560));
    if (v1 == 0) { v1 = (*(volatile u8 *) (u32) (a2 + 3)); goto L_002B8330; }
L_002B8318:;
    a0 = s0; func_002B8430(a0, a1, a2, a3);
    goto L_002B8400;
L_002B8328:;
    goto L_002B8414;
L_002B8330:;
    if (v1 != 0) goto L_002B8400;
    v1 = (*(volatile u8 *) (u32) (a2 + 442));
    if (v1 != 0) goto L_002B8400;
    a0 = (*(volatile u16 *) (u32) (a3 + 48));
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) (v1 + 6028));
    if (v1 == 0) goto L_002B8400;
    v1 = (*(volatile u8 *) (u32) (v1 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 57);
    at = v1 < 3;
    if (at != 0) goto L_002B8388;
    v1 = v1 < 24;
    if (v1 != 0) goto L_002B8400;
L_002B8388:;
    a0 = (*(volatile s32 *) (u32) (a1 + 8)); v0 = func_00140FF0(a0);
    f1.f = (*(volatile f32 *) (u32) v0);
    v1 = (s32) 0x3e190000U;
    v1 = v1 | 0x999a;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002B83F0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 8));
    v1 = (s32) 0x3f0c0000U;
    v1 = v1 | 0xcccd;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002B83F0;
    f1.f = (*(volatile f32 *) (u32) (v0 + 12));
    v1 = (s32) 0x3f170000U;
    v1 = v1 | 0xa3d;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    if (fcc) goto L_002B8400;
L_002B83F0:;
    a0 = s0; func_002B86F0(a0, a1, a2, a3, f12.f);
    goto L_002B8318;
L_002B8400:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 23;
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x240U); if (c_) goto L_002B82D8; }
L_002B8414:;
    return;
}
