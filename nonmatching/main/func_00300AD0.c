/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002D4BE0(s64, s64, s64, s64);
s64 func_00305E60(s64, s64);
s64 func_009E1C90(s64, s64, s64, s64);
s64 func_00AA3540(s64, s64, s64, s64);

s64 func_00300AD0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 hi = 0, lo = 0;
    s32 fcc = 0;

    v0 = (s32) 0xcb0000U;
    v1 = 255;
    s3 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 24));
    a0 = (*(volatile u8 *) (u32) (v0 + 24360));
    { s32 c_ = a0 == v1; s1 = 0; if (c_) goto L_00300B18; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_00300B20;
L_00300B18:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_00300B20:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = 1;
    s2 = (s32) ((u32) v0 + (u32) v1); v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) { s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00300B90; }
    v0 = (*(volatile u8 *) (u32) (s2 + 18));
    if (v0 == 0) goto L_00300B8C;
    if (v0 != 0) goto L_00300B90;
    a0 = s2; v0 = func_00AA3540(a0, a1, a2, a3);
    f0.i = (s32) v0;
    f1.f = (f32) f0.i;
    v0 = (s32) 0x49100000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00300B90;
L_00300B8C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00300B90:;
    if (s1 == 0) { v0 = 0; goto L_00300BC4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v0 = (s32) ((u32) gp + 0xffff8310U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_002D4BE0(a0, a1, a2, a3);
    a1 = (s32) 0x300000U;
    a0 = s3;
    a1 = (s32) ((u32) a1 + 0xbe0U); v0 = func_00305E60(a0, a1);
    v0 = 1;
L_00300BC4:;
    return v0;
}
